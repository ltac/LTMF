<#
 # This program is intended for use with LTMF to make it quicker to
 # generate a folder for a new mission and reduce the amount of manual changes
 # that mission builders need to do.
 #
 # Authors:
 #  Legion Tactical
 #  GRUBES
 #>

 
# *** SCRIPT SCOPE VARIABLES ***

# The Display Name of the Mission
$script:missionName = ""

# The Author of the Mission
$script:missionAuthor = ""

# A Short Description for the Mission that will be displayed during
# the loading screen
$script:shortDescription = ""

# A Detailed Description for the Mission that will be displayed on the
# Mission Selection screen
$script:longDescription = ""

# The Map the Mission will be on
$script:missionMap = ""

# The Type of the Mission
$script:missionType = ""


# *** FUNCTION DEFINITIONS ***


# *** Low-level Utility Functions ***

<#
 # Utility function for prompting the user and storing the result in a variable
 # Assumes that the value you are prompting for is mandatory and cannot
 # be left blank by the user
 #>
function Prompt-User {
	param (
		[parameter(Mandatory=$true)][ref]$var,
		[parameter(Mandatory=$true)][string]$promptMessage,
		[parameter(Mandatory=$true)][string]$errorMessage
	)
	
	Print-Separator
	
	do {
		$var.value = Read-Host "$promptMessage"
		
		# Don't like this duplicated condition,
		# but I can live with it for usability
		if (-Not $var.value) { Write-Host "$errorMessage" }
	} while (-Not $var.value)
}

<#
 # Quick utility for printing a visual separator to the console
 #>
function Print-Separator {
	Write-Host "`n********************"
}


# *** Functions for gathering user input ***

function Get-MissionName {
	$promptMessage = "What is the display name for your mission? (e.g. Operation Mongoose)"
	$errorMessage = "You must provide a display name"
	Prompt-User ([ref]$missionName) $promptMessage $errorMessage
}

function Get-Author {
	$promptMessage = "What is the Author's name for your mission?"
	$errorMessage = "You must provide an Author"
	Prompt-User ([ref]$missionAuthor) $promptMessage $errorMessage
}

function Get-ShortDescription {
	$promptMessage = "Give a short description of your mission (for the loading screen)"
	$errorMessage = "You must provide a short description"
	Prompt-User ([ref]$shortDescription) $promptMessage $errorMessage
}

function Get-LongDescription {
	$promptMessage = "Give a more detailed description of your mission (for the mission selection screen)"
	$errorMessage = "You must provide a detailed description"
	Prompt-User ([ref]$longDescription) $promptMessage $errorMessage
}

function Get-MissionType {
	$title = "Game Type Selection"
	$message = "What type of mission is this?"
	
	$unknown = New-Object System.Management.Automation.Host.ChoiceDescription "&Unknown", "Unknown"
	$coop = New-Object System.Management.Automation.Host.ChoiceDescription "&Co-op", "Coop"
	$dm = New-Object System.Management.Automation.Host.ChoiceDescription "Death&match", "DM"
	$tdm = New-Object System.Management.Automation.Host.ChoiceDescription "&Team Deathmatch", "TDM"
	$ctf = New-Object System.Management.Automation.Host.ChoiceDescription "Capture the &Flag", "CTF"
	$sc = New-Object System.Management.Automation.Host.ChoiceDescription "S&ector Control", "SC"
	$cti = New-Object System.Management.Automation.Host.ChoiceDescription "Capture the &Island", "CTI"
	$rpg = New-Object System.Management.Automation.Host.ChoiceDescription "&RPG", "RPG"
	$sandbox = New-Object System.Management.Automation.Host.ChoiceDescription "S&andbox", "Sandbox"
	$seize = New-Object System.Management.Automation.Host.ChoiceDescription "&Seize", "Seize"
	$defend = New-Object System.Management.Automation.Host.ChoiceDescription "&Defend", "Defend"
	$zgm = New-Object System.Management.Automation.Host.ChoiceDescription "&Zeus Game Master", "ZGM"
	
	$options = [System.management.Automation.Host.ChoiceDescription[]](
		$coop, $dm, $tdm, $ctf, $sc, $cti, $rpg, $sandbox, $seize,
		$defend, $zgm, $unknown
	)
	
	$response = $host.ui.PromptForChoice($title, $message, $options, 0)
	
	$script:missionType = $options[$response].HelpMessage
}

function Get-Map {
	$title = "Map Selection"
	$message = "Which Map is your mission on?"

	# Doing the hotkeys this way yields double entries on the actual
	# selection menu (e.g. [0] [0] Altis). Not sure of a better way
	$altis = New-Object System.Management.Automation.Host.ChoiceDescription "[&0] Altis", "Altis"
	$stratis = New-Object System.Management.Automation.Host.ChoiceDescription "[&1] Stratis", "Stratis"
	$utes = New-Object System.Management.Automation.Host.ChoiceDescription "[&2] Utes", "Utes"
	$cherno = New-Object System.Management.Automation.Host.ChoiceDescription "[&3] Chernarus", "Chernarus"
	$chernoS = New-Object System.Management.Automation.Host.ChoiceDescription "[&4] Chernarus (Summer)", "Chernarus (Summer)"
	$porto = New-Object System.Management.Automation.Host.ChoiceDescription "[&5] Porto", "Porto"
	$rahmadi = New-Object System.Management.Automation.Host.ChoiceDescription "[&6] Rahmadi", "Rahmadi"
	$caribou = New-Object System.Management.Automation.Host.ChoiceDescription "[&7] Caribou", "Caribou"
	$thirsk = New-Object System.Management.Automation.Host.ChoiceDescription "[&8] Thirsk", "Thirsk"
	$thirskW = New-Object System.Management.Automation.Host.ChoiceDescription "[&9] Thirsk Winter", "Thirsk Winter"
	$taki = New-Object System.Management.Automation.Host.ChoiceDescription "[&A] Takistan", "Takistan"
	$takiM = New-Object System.Management.Automation.Host.ChoiceDescription "[&B] Takistan &Mountains", "Takistan Mountains"
	$zarg = New-Object System.Management.Automation.Host.ChoiceDescription "[&C] Zargabad", "Zargabad"
	$shapur = New-Object System.Management.Automation.Host.ChoiceDescription "[&D] Shapur", "Shapur"
	$nam = New-Object System.Management.Automation.Host.ChoiceDescription "[&E] Vietnam", "Vietnam"
	$fata = New-Object System.Management.Automation.Host.ChoiceDescription "[&F] PR FATA", "PR FATA"
	$celle = New-Object System.Management.Automation.Host.ChoiceDescription "[&G] Celle 2", "Celle 2"
	$helv = New-Object System.Management.Automation.Host.ChoiceDescription "[&H] Helvantis", "Helvantis"
	$pant = New-Object System.Management.Automation.Host.ChoiceDescription "[&I] Panthera", "Panthera"
	$im = New-Object System.Management.Automation.Host.ChoiceDescription "[&J] Imrali", "Imrali"
	$nzi = New-Object System.Management.Automation.Host.ChoiceDescription "[&K] N'Ziwasogo", "N'Ziwasogo"
	$kund = New-Object System.Management.Automation.Host.ChoiceDescription "[&L] Kunduz", "Kunduz"
	$ukr = New-Object System.Management.Automation.Host.ChoiceDescription "[&M] Orshanetz", "Orshanetz"
	$id = New-Object System.Management.Automation.Host.ChoiceDescription "[&N] Isla Duala", "Isla Duala"
	$bys = New-Object System.Management.Automation.Host.ChoiceDescription "[&O] Bystrica", "Bystrica"
	$buk = New-Object System.Management.Automation.Host.ChoiceDescription "[&P] Bukovina", "Bukovina"
	$des = New-Object System.Management.Automation.Host.ChoiceDescription "[&Q] Desert", "Desert"
	$pg = New-Object System.Management.Automation.Host.ChoiceDescription "[&R] Proving Grounds", "Proving Grounds"
	$vr = New-Object System.Management.Automation.Host.ChoiceDescription "[&S] Virtual Reality", "Virtual Reality"
	
	$options = [System.management.Automation.Host.ChoiceDescription[]](
		$altis,
		$stratis,
		$utes,
		$cherno,
		$chernoS,
		$porto,
		$rahmadi,
		$caribou,
		$thirsk,
		$thirskW,
		$taki,
		$takiM,
		$zarg,
		$shapur,
		$nam,
		$fata,
		$celle,
		$helv,
		$pant,
		$im,
		$nzi,
		$kund,
		$ukr,
		$id,
		$bys,
		$buk,
		$des,
		$pg,
		$vr
	)
	
	# We use the $folderNames array for the appropriate folder extension
	# for each map. WARNING: The indexes in this array must line up with
	# the appropriate item from the $options array.
	# I'm sure there's a much cooler, savvy-er way to do this,
	# but I am .NET/PowerShell n00b
	$folderNames = (
		"Altis",
		"Stratis"#,
		#$utes,
		#$cherno,
		#$chernoS,
		#$porto,
		#$rahmadi,
		#$caribou,
		#$thirsk,
		#$thirskW,
		#$taki,
		#$takiM,
		#$zarg,
		#$shapur,
		#$nam,
		#$fata,
		#$celle,
		#$helv,
		#$pant,
		#$im,
		#$nzi,
		#$kund,
		#$ukr,
		#$id,
		#$bys,
		#$buk,
		#$des,
		#$pg,
		#$vr
	)
	
	$response = $host.ui.PromptForChoice($title, $message, $options, 0)
	
	$script:missionMap = $folderNames[$response]
}

# *** High-level Business Logic Functions ***

<#
 # Composite function that simply calls all of the smaller functions
 # that gather user input
 #>
function Get-UserInput {
	Get-MissionName
	Get-Author
	Get-Map
	Get-ShortDescription
	Get-LongDescription
	Get-MissionType
}

<#
 # Displays all user-entered mission information
 #>
function Display-MissionInfo {
	Print-Separator
	Write-Host "Mission Details"
	
	Write-Host "`tMission Name: $missionName"
	Write-Host "`tAuthor: $missionAuthor"
	Write-Host "`tMap: $missionMap"
	Write-Host "`tMission Type: $missionType"
	Write-Host "`tLoading Screen Text: $shortDescription"
	Write-Host "`tMission Select Text: $longDescription"
}

<#
 # Asks the user to confirm mission information before creating
 # If the user approves, the Mission is created
 # If the user rejects, the program starts over
 #>
function Confirm-MissionInfo {
	Print-Separator
	
	$title = "Confirm Mission Details"
	$message = "Are all of your Mission Details correct?"
	
	$yes = New-Object System.Management.Automation.Host.ChoiceDescription "&Yes", "All done! Creates your new mission."
	$no = New-Object System.Management.Automation.Host.ChoiceDescription "&No", "Starts over so you can re-enter information."
	
	$options = [System.management.Automation.Host.ChoiceDescription[]]($yes, $no)
	
	$response = $host.ui.PromptForChoice($title, $message, $options, 0)
	
	switch ($response) {
		0 { Create-Mission }
		1 { Get-Mission-Info }
	}
}

<#
 # Function that actually creates the mission with the provided info
 #>
function Create-Mission {
	Write-Host "CreateMission"
}

<#
 # Main entry point function, simply delegates to the smaller composites
 #>
function Get-MissionInfo {
	Write-Host "`n*** Create a new LTMF Mission ***"
	
	Get-UserInput
	Display-MissionInfo
	Confirm-MissionInfo
}

# Start
Get-MissionInfo
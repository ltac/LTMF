<#
 # .Synopsis
 # Presents the user with a choice of Maps for the mission
 #
 # .Description
 # Presents the user with a choice of Maps for the mission, and maps the
 # response to the appropriate extension for the mission folder
 #>
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
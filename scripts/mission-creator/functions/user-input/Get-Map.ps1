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
	$altis 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&0] Altis", 				"Altis"
	$stratis 	= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&1] Stratis", 			"Stratis"
	$tanoa 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&2] Tanoa", 				"Tanoa"
	$sahrani 	= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&3] Sahrani", 			"Sahrani"
	$cherno 	= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&4] Chernarus", 			"Chernarus"
	$chernoS 	= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&5] Chernarus (Summer)", 	"Chernarus (Summer)"
	$caribou 	= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&6] Caribou", 			"Caribou"
	$thirsk 	= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&7] Thirsk", 				"Thirsk"
	$thirskW 	= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&8] Thirsk Winter", 		"Thirsk Winter"
	$taki 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&9] Takistan", 			"Takistan"
	$takiM 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&A] Takistan Mountains", 	"Takistan Mountains"
	$zarg 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&B] Zargabad", 			"Zargabad"
	$shapur 	= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&C] Shapur", 				"Shapur"
	$nam 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&D] Vietnam", 			"Vietnam"
	$fata 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&E] PR FATA", 			"PR FATA"
	$celle 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&F] Celle 2", 			"Celle 2"
	$helv 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&G] Helvantis", 			"Helvantis"
	$pant 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&H] Panthera", 			"Panthera"
	$im 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&I] Imrali", 				"Imrali"
	$nzi 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&J] N'Ziwasogo", 			"N'Ziwasogo"
	$kund 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&K] Kunduz", 				"Kunduz"
	$ukr 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&L] Orshanetz", 			"Orshanetz"
	$id 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&M] Isla Duala", 			"Isla Duala"
	$utes 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&N] Utes", 				"Utes"
	$bys 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&O] Bystrica", 			"Bystrica"
	$buk 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&P] Bukovina", 			"Bukovina"
	$porto 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&Q] Porto", 				"Porto"
	$rahmadi 	= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&R] Rahmadi", 			"Rahmadi"
	$fallujah 	= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&S] Fallujah", 			"Fallujah"
	$ryak 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&T] Al Ryak", 			"Al Ryak"
	$des 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&U] Desert", 				"Desert"
	$pg 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&V] Proving Grounds", 	"Proving Grounds"
	$vr 		= New-Object System.Management.Automation.Host.ChoiceDescription 	"[&W] Virtual Reality", 	"Virtual Reality"

	$options = [System.management.Automation.Host.ChoiceDescription[]](
		$altis,
		$stratis,
		$tanoa,
		$sahrani,
		$cherno,
		$chernoS,
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
		$utes,
		$porto,
		$rahmadi,
		$bys,
		$buk,
    	$fallujah,
    	$ryak,
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
		"Stratis",
		"Tanoa",
		"smd_sahrani_a3",
		"Chernarus",
		"Chernarus_Summer",
		"Caribou",
		"Thirsk",
		"ThirskW",
		"Takistan",
		"Mountains_ACR",
		"Zargabad",
		"Shapur_BAF",
		"MGB_nam",
		"fata",
		"mbg_celle2",
		"anim_helvantis_v2",
		"Panthera3",
		"imrali",
		"pja305",
		"Kunduz",
		"CST_Orshanets",
		"IslaDuala3",
		"utes",
		"Porto",
		"Intro",
		"Woodland_ACR",
		"Bootcamp_ACR",
    	"fallujah",
    	"pja310",
		"Desert_E",
		"ProvingGrounds_PMC",
		"vr"
	)

	$response = $host.ui.PromptForChoice($title, $message, $options, 0)

	$script:missionMap = $folderNames[$response]
}

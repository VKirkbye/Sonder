debug = true

function Initilize()
	L1 = SKIN:GetVariable("WorldMapShow1")
	L2 = SKIN:GetVariable("WorldMapShow2")
	L3 = SKIN:GetVariable("WorldMapShow3")
	L4 = SKIN:GetVariable("WorldMapShow4")
	L5 = SKIN:GetVariable("WorldMapShow5")
	L6 = SKIN:GetVariable("WorldMapShow6")
	L7 = SKIN:GetVariable("WorldMapShow7")
	L8 = SKIN:GetVariable("WorldMapShow8")
	L9 = SKIN:GetVariable("WorldMapShow9")
	L10 = SKIN:GetVariable("WorldMapShow10")

end -- function Initilize

function Update()
	L1 = SKIN:GetVariable("WorldMapShow1")
	L2 = SKIN:GetVariable("WorldMapShow2")
	L3 = SKIN:GetVariable("WorldMapShow3")
	L4 = SKIN:GetVariable("WorldMapShow4")
	L5 = SKIN:GetVariable("WorldMapShow5")
	L6 = SKIN:GetVariable("WorldMapShow6")
	L7 = SKIN:GetVariable("WorldMapShow7")
	L8 = SKIN:GetVariable("WorldMapShow8")
	L9 = SKIN:GetVariable("WorldMapShow9")
	L10 = SKIN:GetVariable("WorldMapShow10")

	if L1 == '1' then 
		SKIN:Bang('!SetVariable LocationtoWrite 1')
	elseif L2 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 2')
	elseif L3 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 3')
	elseif L4 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 4')
	elseif L5 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 5')
	elseif L6 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 6')
	elseif L7 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 7')
	elseif L8 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 8')
	elseif L9 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 9')
	elseif L10 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 10')
	else
		SKIN:Bang('!SetVariable LocationtoWrite 0')
	end
end -- function Update

function LocationtoWrite()

end

[Rainmeter]
Group=EnigmaSidebar
Update=1000
MiddleMouseUpAction=!Refresh
;MouseOverAction=[!SetVariable SkinMouseOver 1][!Redraw]
;MouseLeaveAction=[!SetVariable SkinMouseOver 0][!Redraw]
DynamicWindowSize=1

[Variables]
ColorImage=#GlobalSkinBackgroundColor#
LocalFontFace=ITC Avant Garde Pro XLt
LocalFontFace2=ITC Avant Garde Pro Bk
;Font=Segou UI
;Font=#LocalFontName#
;SkinMouseOver=0
SkinBackgroundAlpha=#GlobalSkinBackgroundAlpha#


[StyleSidebarBackground]
ImageName=#@#Images\SkinBackground.#ColorImage#.png
ScaleMargins=12,12,12,12
ImageAlpha=#GlobalSkinBackgroundAlphaInactive#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha #SkinBackgroundAlpha#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha #GlobalSkinBackgroundAlphaInactive#][!UpdateMeter #CURRENTSECTION#][!Redraw]
X=(#scale#*8)
Y=(#scale#*(#Month_YAdj_All#+80))
W=(#scale#*285)
H=(#scale#*200)
imagetint=#GlobalSkinBackgroundColorTint#
;DynamicVariables=1

[Background]
Meter=IMAGE
MeterStyle=StyleSidebarBackground | StyleSystemEnigmaSidebarBackground

;[StyleSidebarBackground]


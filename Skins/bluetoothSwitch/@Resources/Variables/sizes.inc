[Variables]
SizeRatioOutput=(#SizeRatio# / 100)
SwitchW=(512 / 4 * #SizeRatioOutput#)
SwitchH=(273 / 4 * #SizeRatioOutput#)
FlipLength=(25 * #SizeRatioOutput#)
FlipSize=(#FlipLength# * 2)
FlipY=(#SwitchH# / 2 - #FlipLength#)
TextFontSize=(26 * #SizeRatioOutput#)
TextY=(19 * #SizeRatioOutput#)
TextOnX=(10 * #SizeRatioOutput#)
TextOnBefore=(-40 * 2)
TextOffBefore=(#SwitchW# + (53 * #SizeRatioOutput#))
TextOffX=(#SwitchW# - (5 * #SizeRatioOutput#))
FlipXOn=(#SwitchW# - (8 * #SizeRatioOutput#) - #FlipSize#)
FlipXOff=(8 * #SizeRatioOutput#)
IncreasedAnimationDuration=(#AnimationDuration# + (#AnimationDuration# / 4))
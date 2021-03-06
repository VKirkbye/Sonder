; How I get data on number of Daily Active Sonder users (Loading a skin at least), just calling a random location using their Place API (one of their free calls)
[MeasureOnLoad]
Measure=Calc
Formula=Counter
IfCondition=MeasureOnLoad = 10
IfTrueAction=[!EnableMeasure MeasureSonderUsage][!UpdateMeasure MeasureSonderUsage][!Delay 2000][!DisableMeasure MeasureSonderUsage]
[MeasureSonderUsageCounter]
Measure=Calc
Formula=(MeasureOnLoad % 86400) + 1
IfCondition=MeasureSonderUsageCounter = 86400
IfTrueAction=[!EnableMeasure MeasureSonderUsage][!UpdateMeasure MeasureSonderUsage][!Delay 2000][!DisableMeasure MeasureSonderUsage]
[MeasureSonderUsage]
Measure=WebParser
Flags=Resync | NoCookies
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:80.0) Gecko/20100101 Firefox/80.0
URL=https://maps.googleapis.com/maps/api/place/details/json?place_id=ChIJrTLr-GyuEmsRBfy61i59si0&fields=name&key=AIzaSyDN0rH813GM6D4YpceWnd0IXj1tyVuxjxw
RegExp=(?siU)(.*)$
UpdateRate=-1
Disabled=1
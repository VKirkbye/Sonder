[Variables]
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:80.0) Gecko/20100101 Firefox/80.0
;RegSub="^(.)0(.):00$":"\1\2","^(.)1(.):00$":"\11\2","^(.)0(.):30$":"\1\2.5","^(.)1(.):30$":"\11\2.5","^(.)0(.):45$":"\1\2.75","^(.)1(.):45$":"\11\2.75"
RegSub="^$":"0"
;***************** IMPORTANT NOTE ************************
;This is my key, feel free to use it with Sonder, but if you copy/release your own Rainmeter skin, get your own key...
;Bonus points if you get your own key(for free) if you use Sonder so we don't get my key revoked...:)
TimeZoneDBKey=YHQDWADF27MO

;Free API version can only update 1/second - please don't abuse this!!!!!
[TimeZoneUpdater]
Measure=Calc
UpdateDivider=-1
Formula=1
ifCondition=(#WorldMapShow1# = 0)
ifTrueAction=[!Log "Updating Time Zones..."][!EnableMeasure @WorldMapLocation1Parent][!UpdateMeasure @WorldMapLocation1Parent][!Delay 1000][!EnableMeasure @WorldMapLocation2Parent][!UpdateMeasure @WorldMapLocation2Parent][!Delay 1000][!EnableMeasure @WorldMapLocation3Parent][!UpdateMeasure @WorldMapLocation3Parent][!Delay 1000][!EnableMeasure @WorldMapLocation4Parent][!UpdateMeasure @WorldMapLocation4Parent][!Delay 1000][!EnableMeasure @WorldMapLocation5Parent][!UpdateMeasure @WorldMapLocation5Parent][!Delay 1000][!EnableMeasure @WorldMapLocation6Parent][!UpdateMeasure @WorldMapLocation6Parent][!Delay 1000][!EnableMeasure @WorldMapLocation7Parent][!UpdateMeasure @WorldMapLocation7Parent][!Delay 1000][!EnableMeasure @WorldMapLocation8Parent][!UpdateMeasure @WorldMapLocation8Parent][!Delay 1000][!EnableMeasure @WorldMapLocation9Parent][!UpdateMeasure @WorldMapLocation9Parent][!Delay 1000][!EnableMeasure @WorldMapLocation10Parent][!UpdateMeasure @WorldMapLocation10Parent]
Disabled=1

;===================================== TIME ZONE DATA =======================================
[@WorldMapLocation1Parent]
Measure=WebParser
;URL=http://worldtimeapi.org/api/timezone/#WorldMapLocation1#
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat1#&lng=#WorldMapLon1#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
;RegExp=(?siU)^(.*)$
;RegExp=(?siU).*utc_offset":"(.*)"
RegExp=(?siU).*gmtOffset":(.*),"
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=ERROR
Group=timezonedb
FinishAction=[!Log "Updated TimeZone1"][!SetVariable WorldMapTimeZone1 [@WorldMapLocation1Parent]][!WriteKeyValue Variables WorldMapTimeZone1 [@WorldMapLocation1Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone1Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "ISS.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation2Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat2#&lng=#WorldMapLon2#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset":(.*),"
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=ERROR
Group=timezonedb
FinishAction=[!Log "Updated TimeZone2"][!SetVariable WorldMapTimeZone2 [@WorldMapLocation2Parent]][!WriteKeyValue Variables WorldMapTimeZone2 [@WorldMapLocation2Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone2Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "ISS.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation3Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat3#&lng=#WorldMapLon3#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset":(.*),"
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=ERROR
Group=timezonedb
FinishAction=[!Log "Updated TimeZone3"][!SetVariable WorldMapTimeZone3 [@WorldMapLocation3Parent]][!WriteKeyValue Variables WorldMapTimeZone3 [@WorldMapLocation3Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone3Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "ISS.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation4Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat4#&lng=#WorldMapLon4#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset":(.*),"
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=ERROR
Group=timezonedb
FinishAction=[!Log "Updated TimeZone4"][!SetVariable WorldMapTimeZone4 [@WorldMapLocation4Parent]][!WriteKeyValue Variables WorldMapTimeZone4 [@WorldMapLocation4Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone4Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "ISS.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation5Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat5#&lng=#WorldMapLon5#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset":(.*),"
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=ERROR
Group=timezonedb
FinishAction=[!Log "Updated TimeZone5"][!SetVariable WorldMapTimeZone5 [@WorldMapLocation5Parent]][!WriteKeyValue Variables WorldMapTimeZone5 [@WorldMapLocation5Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone5Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "ISS.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation6Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat6#&lng=#WorldMapLon6#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset":(.*),"
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=ERROR
Group=timezonedb
FinishAction=[!Log "Updated TimeZone6"][!SetVariable WorldMapTimeZone6 [@WorldMapLocation6Parent]][!WriteKeyValue Variables WorldMapTimeZone6 [@WorldMapLocation6Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone6Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "ISS.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation7Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat7#&lng=#WorldMapLon7#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset":(.*),"
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=ERROR
Group=timezonedb
FinishAction=[!Log "Updated TimeZone7"][!SetVariable WorldMapTimeZone7 [@WorldMapLocation7Parent]][!WriteKeyValue Variables WorldMapTimeZone7 [@WorldMapLocation7Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone7Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "ISS.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation8Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat8#&lng=#WorldMapLon8#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset":(.*),"
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=ERROR
Group=timezonedb
FinishAction=[!Log "Updated TimeZone8"][!SetVariable WorldMapTimeZone8 [@WorldMapLocation8Parent]][!WriteKeyValue Variables WorldMapTimeZone8 [@WorldMapLocation8Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone8Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "ISS.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation9Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat9#&lng=#WorldMapLon9#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset":(.*),"
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=ERROR
Group=timezonedb
FinishAction=[!Log "Updated TimeZone9"][!SetVariable WorldMapTimeZone9 [@WorldMapLocation9Parent]][!WriteKeyValue Variables WorldMapTimeZone9 [@WorldMapLocation9Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone9Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "ISS.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation10Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat10#&lng=#WorldMapLon10#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset":(.*),"
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=ERROR
Group=timezonedb
FinishAction=[!Log "Updated TimeZone10"][!SetVariable WorldMapTimeZone10 [@WorldMapLocation10Parent]][!WriteKeyValue Variables WorldMapTimeZone10 [@WorldMapLocation10Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone10Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "ISS.ini"]
Disabled=1
DynamicVariables=1

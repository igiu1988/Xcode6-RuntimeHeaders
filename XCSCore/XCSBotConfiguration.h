//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSBotConfiguration : XCSObject
{
    XCSBotSCMBlueprint *sourceControlBlueprint;
    NSString *_userDescription;
}

+ (id)botConfigurationWithSchemeName:(id)arg1 builtFromClean:(unsigned long long)arg2 performsAnalyzeAction:(BOOL)arg3 performsTestAction:(BOOL)arg4 performsArchiveAction:(BOOL)arg5 triggers:(struct NSArray *)arg6 sourceControlBlueprint:(id)arg7 testingDestinationType:(unsigned long long)arg8 testingDeviceIDs:(id)arg9 scheduleType:(unsigned long long)arg10 periodicScheduleInterval:(unsigned long long)arg11 weeklyScheduleDay:(long long)arg12 hourOfIntegration:(unsigned long long)arg13 minutesAfterHourToIntegrate:(unsigned long long)arg14;
@property(readonly, copy) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(retain) XCSBotSCMBlueprint *sourceControlBlueprint; // @synthesize sourceControlBlueprint;
- (void).cxx_destruct;
- (BOOL)_validateSchemeName:(id)arg1 builtFromClean:(unsigned long long)arg2 performsAnalyzeAction:(BOOL)arg3 performsTestAction:(BOOL)arg4 performsArchiveAction:(BOOL)arg5 triggers:(struct NSArray *)arg6 sourceControlBlueprint:(id)arg7 testingDestinationType:(unsigned long long)arg8 testingDeviceIDs:(id)arg9 scheduleType:(unsigned long long)arg10 periodicScheduleInterval:(unsigned long long)arg11 weeklyScheduleDay:(long long)arg12 hourOfIntegration:(unsigned long long)arg13 minutesAfterHourToIntegrate:(unsigned long long)arg14;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithSchemeName:(id)arg1 builtFromClean:(unsigned long long)arg2 performsAnalyzeAction:(BOOL)arg3 performsTestAction:(BOOL)arg4 performsArchiveAction:(BOOL)arg5 triggers:(struct NSArray *)arg6 sourceControlBlueprint:(id)arg7 testingDestinationType:(unsigned long long)arg8 testingDeviceIDs:(id)arg9 scheduleType:(unsigned long long)arg10 periodicScheduleInterval:(unsigned long long)arg11 weeklyScheduleDay:(long long)arg12 hourOfIntegration:(unsigned long long)arg13 minutesAfterHourToIntegrate:(unsigned long long)arg14;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;

// Remaining properties
@property unsigned long long builtFromClean; // @dynamic builtFromClean;
@property unsigned long long hourOfIntegration; // @dynamic hourOfIntegration;
@property unsigned long long minutesAfterHourToIntegrate; // @dynamic minutesAfterHourToIntegrate;
@property BOOL performsAnalyzeAction; // @dynamic performsAnalyzeAction;
@property BOOL performsArchiveAction; // @dynamic performsArchiveAction;
@property BOOL performsTestAction; // @dynamic performsTestAction;
@property unsigned long long periodicScheduleInterval; // @dynamic periodicScheduleInterval;
@property unsigned long long scheduleType; // @dynamic scheduleType;
@property(copy) NSString *schemeName; // @dynamic schemeName;
@property unsigned long long testingDestinationType; // @dynamic testingDestinationType;
@property NSArray *testingDeviceIDs; // @dynamic testingDeviceIDs;
@property NSArray *triggers; // @dynamic triggers;
@property long long weeklyScheduleDay; // @dynamic weeklyScheduleDay;

@end
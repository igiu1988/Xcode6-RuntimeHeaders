//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDELogManager : NSObject <DVTInvalidation>
{
    id _domainItem;
    NSString *_domainName;
    NSArray *_logProviders;
    NSMutableArray *_logRecords;
    DVTMapTable *_logProviderToRecordsIndex;
    NSSet *_cachedRecentLogRecords;
    NSMutableDictionary *_navigatorRootItems;
}

+ (void)initialize;
@property(readonly) NSMutableDictionary *navigatorRootItems; // @synthesize navigatorRootItems=_navigatorRootItems;
@property(copy) NSString *domainName; // @synthesize domainName=_domainName;
@property(retain) id domainItem; // @synthesize domainItem=_domainItem;
@property(readonly) NSArray *logProviders; // @synthesize logProviders=_logProviders;
- (void).cxx_destruct;
@property(readonly) NSSet *mostRecentLogRecordForEachType;
- (void)_handleLogRecordChangesForProvider:(id)arg1;
- (id)_findLogProviders;
- (id)extensionsFromExtensionPointIdentifier:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithDomainItem:(id)arg1 domain:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSArray *logRecords; // @dynamic logRecords;
@property(readonly) NSMutableArray *mutableLogRecords; // @dynamic mutableLogRecords;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
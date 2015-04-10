//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCRAQuery : NSObject
{
    NSString *_identifierString;
    NSMutableDictionary *_symbolDictionary;
    NSMutableDictionary *_queryDictionary;
    NSMutableDictionary *_fetchedResults;
    double _timeoutInterval;
    NSDate *_expirationDate;
    id _delegate;
    NSDictionary *_userInfo;
    int _fetchState;
    BOOL _queryHasResultsFromDocSets;
    BOOL _queryHasResults;
}

+ (id)queryWithIdentifierDictionary:(id)arg1 timeout:(double)arg2 delegate:(id)arg3 userInfo:(id)arg4;
+ (id)queryWithIdentifierString:(id)arg1 timeout:(double)arg2 delegate:(id)arg3 userInfo:(id)arg4;
+ (id)appleRefFromSymbolDictionary:(id)arg1;
@property(nonatomic) int fetchState; // @synthesize fetchState=_fetchState;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) BOOL queryHasResultsFromDocSets; // @synthesize queryHasResultsFromDocSets=_queryHasResultsFromDocSets;
@property(nonatomic) BOOL queryHasResults; // @synthesize queryHasResults=_queryHasResults;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *fetchedResults; // @synthesize fetchedResults=_fetchedResults;
@property(retain, nonatomic) NSMutableDictionary *queryDictionary; // @synthesize queryDictionary=_queryDictionary;
@property(retain, nonatomic) NSMutableDictionary *symbolDictionary; // @synthesize symbolDictionary=_symbolDictionary;
@property(retain, nonatomic) NSString *identifierString; // @synthesize identifierString=_identifierString;
- (id)description;
- (void)fetchResults:(id)arg1;
- (void)_runFetch;
- (void)_docDataSourceManagerFetchDidFinish;
- (void)_docDataSourceManagerFetchDidStart;
- (void)_notifyQueryDidFinish;
- (void)_notifyQueryDidStart;
- (void)_updateQueryDictionaryFromFetchedResults:(id)arg1;
- (id)_attributedStringForString:(id)arg1;
- (void)_setMessage:(id)arg1 forKeys:(id)arg2;
- (id)_noInformationFoundMessage;
- (void)destroyQuery;
- (void)dealloc;
- (id)initWithIdentifierString:(id)arg1 timeout:(double)arg2 delegate:(id)arg3 userInfo:(id)arg4;
- (id)initWithIdentifierDictionary:(id)arg1 timeout:(double)arg2 delegate:(id)arg3 userInfo:(id)arg4;

@end
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTUndoManager : NSUndoManager <DVTInvalidation>
{
    char *_delegateDescription;
    NSMutableArray *_undoGroupingBacktraces;
    long long _beginCount;
    long long _endCount;
    BOOL _willAutomaticallyUndoNextChangeGroup;
    void *_keepSelfAliveUntilInvalidationRef;
    id <DVTUndoManagerDelegate> _delegate;
}

+ (void)initialize;
@property(retain, nonatomic) id <DVTUndoManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) BOOL willAutomaticallyUndoNextChangeGroup; // @synthesize willAutomaticallyUndoNextChangeGroup=_willAutomaticallyUndoNextChangeGroup;
- (void).cxx_destruct;
- (void)undoNestedGroup;
- (void)redo;
- (void)undo;
- (id)prepareWithInvocationTarget:(id)arg1;
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)enableUndoRegistration;
- (void)disableUndoRegistration;
- (void)primitiveInvalidate;
- (void)endUndoGrouping;
- (void)beginUndoGrouping;
- (void)removeAllActions;
- (id)_undoGroupingBacktraces;
- (void)_clearUndoGroupingBacktraces;
- (void)_setEndCount:(long long)arg1;
- (long long)_endCount;
- (void)_setBeginCount:(long long)arg1;
- (long long)_beginCount;
- (void)automaticallyUndoNextChangeGroup;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
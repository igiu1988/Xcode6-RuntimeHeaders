//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEMiniDebuggerToolbarConsoleViewController : DVTGenericButtonViewController
{
    DVTObservingToken *_debugSessionStateObserverToken;
    DVTObservingToken *_debuggingWindowBehaviorObservingToken;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithButton:(id)arg1 actionBlock:(CDUnknownBlockType)arg2 setupTeardownBlock:(CDUnknownBlockType)arg3 itemIdentifier:(id)arg4 window:(id)arg5;
- (void)_updateForDebuggingKVOChange:(id)arg1;

@end
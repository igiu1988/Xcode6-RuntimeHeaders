//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESingleFileCommandHandler : NSObject <IDECommandHandlerVendor, IDECommandHandler>
{
    id <IDESelectionSource> _selectionSource;
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
- (void).cxx_destruct;
- (void)compileFile:(id)arg1;
- (void)analyzeFile:(id)arg1;
- (void)preprocessFile:(id)arg1;
- (void)showAssemblyCodeForFile:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)_sourceEditor;
- (id)initWithSelectionSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
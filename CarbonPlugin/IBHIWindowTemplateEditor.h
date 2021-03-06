//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHIWindowTemplateEditor : IBEditor
{
    IBContentViewLiveResizingStrategy *autoresizer;
}

- (BOOL)canSizeSelectionToFit;
- (void)sizeSelectionToFit:(id)arg1;
- (struct _NSSize)preferredSizeForLiveResizeSize:(struct _NSSize)arg1;
- (void)windowFinishedLiveResizing;
- (void)windowStartedLiveResizing;
- (void)windowDidResize:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (BOOL)isUndoingOrRedoing;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)willClose;
- (void)didOpen;
- (id)contentView;
- (id)layoutManager;
- (id)viewEditorWindowController;
- (void)applySizeConstraints;
- (void)dealloc;

@end
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlBranchNavigableItem : IDEKeyDrivenNavigableItem
{
    NSMutableArray *_computedChildItems;
    IDESourceControlTreeItem *_treeItem;
    NSError *_error;
}

@property(retain) IDESourceControlTreeItem *treeItem; // @synthesize treeItem=_treeItem;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_childRepresentedObjectsFromStartingRevision:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)childRepresentedObjects;
- (void)idesc_setChildRepresentedObjects:(id)arg1;
- (BOOL)isLeaf;

@end
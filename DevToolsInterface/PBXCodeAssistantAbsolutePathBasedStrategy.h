//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXCodeAssistantAbsolutePathBasedStrategy : PBXCodeAssistantStrategy
{
    PBXFileReference *_associatedFileReference;
    PBXNativeTarget *_associatedTarget;
}

- (BOOL)getItems:(id *)arg1 withInfoString:(id)arg2;
- (id)_importLineStringUnderCursor;
- (id)_completionItemsFromAbsolutePath:(id)arg1;
- (id)uniqueCompletionItemsAtPath:(id)arg1 withBasePriority:(long long)arg2;

@end
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StringInsertBeforeEditEvent : EditEvent
{
    NSString *_newString;
}

- (id)description;
- (unsigned long long)classCompareOrder;
- (id)newString;
- (BOOL)applyChange:(id)arg1;
- (void)dealloc;
- (id)initWithLocation:(id)arg1 newString:(id)arg2 priority:(long long)arg3;

@end
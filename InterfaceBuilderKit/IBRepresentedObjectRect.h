//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBRepresentedObjectRect : NSObject
{
    struct CGRect rect;
    id representedObject;
}

- (id)representedObject;
- (struct CGRect)rect;
- (void)dealloc;
- (id)initWithRect:(struct CGRect)arg1 andRepresentedObject:(id)arg2;

@end
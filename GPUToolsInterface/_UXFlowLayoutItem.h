//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _UXFlowLayoutItem : NSObject
{
    struct CGRect _itemFrame;
    _UXFlowLayoutSection *_section;
    _UXFlowLayoutRow *_rowObject;
}

@property(nonatomic) struct CGRect itemFrame; // @synthesize itemFrame=_itemFrame;
@property(nonatomic) _UXFlowLayoutRow *rowObject; // @synthesize rowObject=_rowObject;
@property(nonatomic) _UXFlowLayoutSection *section; // @synthesize section=_section;
- (id)copy;

@end
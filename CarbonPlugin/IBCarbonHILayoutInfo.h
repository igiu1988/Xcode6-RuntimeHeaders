//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBCarbonHILayoutInfo : NSObject <NSCopying>
{
    struct HILayoutInfo fLayoutInfo;
    IBHIView *fBindingTopView;
    IBHIView *fBindingLeftView;
    IBHIView *fBindingBottomView;
    IBHIView *fBindingRightView;
    IBHIView *fScaleXView;
    IBHIView *fScaleYView;
    IBHIView *fPositionXView;
    IBHIView *fPositionYView;
}

+ (struct HILayoutInfo)_defaultLayoutInfo;
+ (id)classNameForHICoder;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCarbonHILayoutInfo:(id)arg1;
- (float)positionYOffset;
- (void)setPositionYOffset:(float)arg1;
- (unsigned short)positionYKind;
- (void)setPositionYKind:(unsigned short)arg1;
- (id)positionYView;
- (void)setPositionYView:(id)arg1;
- (float)positionXOffset;
- (void)setPositionXOffset:(float)arg1;
- (unsigned short)positionXKind;
- (void)setPositionXKind:(unsigned short)arg1;
- (id)positionXView;
- (void)setPositionXView:(id)arg1;
- (float)scaleYRatio;
- (void)setScaleYRatio:(float)arg1;
- (unsigned short)scaleYKind;
- (void)setScaleYKind:(unsigned short)arg1;
- (id)scaleYView;
- (void)setScaleYView:(id)arg1;
- (float)scaleXRatio;
- (void)setScaleXRatio:(float)arg1;
- (unsigned short)scaleXKind;
- (void)setScaleXKind:(unsigned short)arg1;
- (id)scaleXView;
- (void)setScaleXView:(id)arg1;
- (float)bindingRightOffset;
- (void)setBindingRightOffset:(float)arg1;
- (unsigned short)bindingRightKind;
- (void)setBindingRightKind:(unsigned short)arg1;
- (id)bindingRightView;
- (void)setBindingRightView:(id)arg1;
- (float)bindingBottomOffset;
- (void)setBindingBottomOffset:(float)arg1;
- (unsigned short)bindingBottomKind;
- (void)setBindingBottomKind:(unsigned short)arg1;
- (id)bindingBottomView;
- (void)setBindingBottomView:(id)arg1;
- (float)bindingLeftOffset;
- (void)setBindingLeftOffset:(float)arg1;
- (unsigned short)bindingLeftKind;
- (void)setBindingLeftKind:(unsigned short)arg1;
- (id)bindingLeftView;
- (void)setBindingLeftView:(id)arg1;
- (float)bindingTopOffset;
- (void)setBindingTopOffset:(float)arg1;
- (unsigned short)bindingTopKind;
- (void)setBindingTopKind:(unsigned short)arg1;
- (id)bindingTopView;
- (void)setBindingTopView:(id)arg1;
- (void)buildRuntimeCodingDescription:(id)arg1;
- (void)buildDesignTimeCodingDescription:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithHICoder:(id)arg1;
- (id)initWithHIDecoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initCommonLayoutInfo;

@end
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBContentSizeLayoutConstraintAbstractionRepresentation : IBAbstractLayoutConstraintAbstractionRepresentation
{
    id <NSCoding><IBBinaryArchiving> _viewRepresentation;
    unsigned long long _attribute;
    double _contentSize;
}

@property(nonatomic) double contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) unsigned long long attribute; // @synthesize attribute=_attribute;
@property(retain, nonatomic) id <NSCoding><IBBinaryArchiving> viewRepresentation; // @synthesize viewRepresentation=_viewRepresentation;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)abstractionClass;
- (id)abstractionWithLayoutConstraintClass:(Class)arg1 objectForObjectRepresentationBlock:(CDUnknownBlockType)arg2;

@end
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCPropertyMacroConditionalExpression : XCPropertyMacroExpression
{
    XCPropertyMacroExpression *_condExpr;
    XCPropertyMacroExpression *_thenExpr;
    XCPropertyMacroExpression *_elseExpr;
}

- (id)description;
- (BOOL)evaluateAsBooleanInContext:(id)arg1;
- (id)evaluateInContext:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConditionExpression:(id)arg1 thenExpression:(id)arg2 elseExpression:(id)arg3;

@end
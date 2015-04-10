//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3LocalizationCommands : NSObject <DVTInvalidation>
{
    BOOL _inProgress;
    id <IDEClientTrackingToken> _token;
    IDEWorkspaceTabController *_workspaceTabController;
    CDUnknownBlockType _operationCompletionBlock;
}

+ (void)initialize;
@property(copy) CDUnknownBlockType operationCompletionBlock; // @synthesize operationCompletionBlock=_operationCompletionBlock;
@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain) id <IDEClientTrackingToken> token; // @synthesize token=_token;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
- (void).cxx_destruct;
- (void)_copyFileFromLocale:(id)arg1 variantGroup:(id)arg2 inspectorLocale_locale:(id)arg3 inspectorLocale_fileDataType:(id)arg4 conversionFileDataType:(id)arg5 fileDataType:(id)arg6 allowsConversion:(BOOL)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (void)_convertFileToDefaultTypeAtPath:(id)arg1 locale:(id)arg2 variantGroup:(id)arg3 fileExtension:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_convertFileToConversionTypeAtPath:(id)arg1 variantGroup:(id)arg2 locale:(id)arg3 desiredDataType:(id)arg4 documentFilePath:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_performActionsforEditorDocumentAtFilePath:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_displayDocumentAtFilePath:(id)arg1;
- (long long)_performCheckForExistingFileAtPath:(id)arg1;
- (BOOL)_fileExistsForFileReference:(id)arg1;
- (void)convertFileToFileDataType:(id)arg1 variantGroup:(id)arg2 inspectorLocale_locale:(id)arg3 conversionFileDataType:(id)arg4 operationCompletionBlock:(CDUnknownBlockType)arg5;
- (void)removeBaseResourceForVariantGroup:(id)arg1 conversionFileDataType:(id)arg2 fileDataType:(id)arg3 destinationLocale:(id)arg4 operationCompletionBlock:(CDUnknownBlockType)arg5;
- (void)removeLocalizedResourceForVariantGroup:(id)arg1 inspectorLocale_locale:(id)arg2 operationCompletionBlock:(CDUnknownBlockType)arg3;
- (void)addLocalizedResourceWithDefaultLocale:(id)arg1 variantGroup:(id)arg2 inspectorLocale_locale:(id)arg3 inspectorLocale_fileDataType:(id)arg4 conversionFileDataType:(id)arg5 fileDataType:(id)arg6 allowsConversion:(BOOL)arg7 operationCompletionBlock:(CDUnknownBlockType)arg8;
- (void)makeLocalizedForLocale:(id)arg1 fileReference:(id)arg2 operationCompletionBlock:(CDUnknownBlockType)arg3;
- (void)showLocalesInProjectEditorForProject:(id)arg1 fileReference:(id)arg2 operationCompletionBlock:(CDUnknownBlockType)arg3;
- (void)primitiveInvalidate;
- (void)_complete:(BOOL)arg1 error:(id)arg2;
- (void)_start:(id)arg1;
- (id)initWithWorkspaceTabController:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
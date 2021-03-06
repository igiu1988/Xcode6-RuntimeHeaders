//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTTimelineGraph : NSView <DTTimelineGraphDelegate>
{
    struct TimelineViewContext _tilerCtx;
    CALayer *_layer;
    NSArray *_planes;
    DTTimelinePlane *_topPinnedPlane;
    DTTimelinePlane *_bottomPinnedPlane;
    DTTimelinePlane *_backgroundPlane;
    DTTimelinePlane *_overlayPlane;
    DTTimelineMouseEventsResponder *_mouseEventsResponder;
    DTTimelineGraphPlaneManager *_planeManager;
    DTTimelineGraphLayoutManager *_layoutManager;
    NSTimer *_dynamicRangeUpdateTimer;
    DTTimelinePlaneDynamicRangeUpdateAnimation *_dynamicRangeUpdateAnim;
    NSMutableDictionary *_establishedDynamicRangesGroups;
    unsigned long long _unadjustedOffset;
    BOOL _nanosecondsPerPointSet;
    double _yOffset;
    id <DTTimelineGraphDelegate> _delegate;
    unsigned long long _currentInspectionTime;
    unsigned long long _nanosecondsPerPoint;
    unsigned long long _planeSelectionDepth;
    DTTimelinePlane *_selectedPlane;
    struct XRTimeRange _selectedTimeRange;
}

@property(readonly, nonatomic) DTTimelineGraphPlaneManager *planeManager; // @synthesize planeManager=_planeManager;
@property(nonatomic) __weak DTTimelinePlane *selectedPlane; // @synthesize selectedPlane=_selectedPlane;
@property(nonatomic) unsigned long long planeSelectionDepth; // @synthesize planeSelectionDepth=_planeSelectionDepth;
@property(nonatomic) unsigned long long nanosecondsPerPoint; // @synthesize nanosecondsPerPoint=_nanosecondsPerPoint;
@property(nonatomic) struct XRTimeRange selectedTimeRange; // @synthesize selectedTimeRange=_selectedTimeRange;
@property(nonatomic) unsigned long long currentInspectionTime; // @synthesize currentInspectionTime=_currentInspectionTime;
@property(nonatomic) __weak id <DTTimelineGraphDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) DTTimelinePlane *overlayPlane; // @synthesize overlayPlane=_overlayPlane;
@property(readonly, nonatomic) DTTimelinePlane *backgroundPlane; // @synthesize backgroundPlane=_backgroundPlane;
@property(readonly, nonatomic) DTTimelinePlane *bottomPinnedPlane; // @synthesize bottomPinnedPlane=_bottomPinnedPlane;
@property(readonly, nonatomic) DTTimelinePlane *topPinnedPlane; // @synthesize topPinnedPlane=_topPinnedPlane;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_generatePlaneLayoutMap;
- (const unordered_map_c1fbcd3c *)_planeLayoutMap;
- (void)clearInspectionInfo;
- (void)displayInspectionInfoForNanosecond:(unsigned long long)arg1;
- (void)setNextResponder:(id)arg1;
- (void)viewDidMoveToWindow;
- (BOOL)acceptsFirstResponder;
- (void)inputHandlerRequestsToClearInspectionInfoForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsDisplayInspectionInfoForNanosecond:(unsigned long long)arg2 atX:(double)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestsSelectedPlane:(id)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondsPerPoint:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearCurrentInspectionTimeForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsCurrentInspectionTime:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearSelectedTimeRangeForGraph:(id)arg1;
- (void)inputHandlerDidFinishSelectionForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsSelectedTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestYOffset:(double)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondOffset:(long long)arg2;
- (void)_addBottomBorderLayer:(id)arg1;
- (void)_addDecorationSummaryLayer:(id)arg1;
- (id)_planeAtPoint:(struct CGPoint)arg1;
- (void)_setOverlayPlane:(id)arg1;
- (void)_setBackgroundPlane:(id)arg1;
- (void)_setBottomPinnedPlane:(id)arg1;
- (void)_setTopPinnedPlane:(id)arg1;
- (void)_setPlanes:(id)arg1;
- (void)_dynamicRangeUpdateFire:(id)arg1;
- (id)_establishedDynamicRangePeerOfPlane:(id)arg1;
- (id)_createDynamicRangeAnimation;
- (id)_decoratedPlanes;
- (void)_enumerateTopLevelPlanes:(CDUnknownBlockType)arg1;
- (void)_dynamicRangeShouldBeRecomputed;
- (void)_didChangeContext;
- (unsigned long long)scaleNeededToDisplayAllData;
- (long long)matchingOffsetForNanosecondsPerPoint:(inout unsigned long long *)arg1 centeredAtTime:(long long)arg2;
@property(nonatomic) double yOffset;
@property(nonatomic) BOOL animateChanges;
@property(nonatomic) unsigned long long duration;
- (long long)lastVisibleNanosecond;
- (void)invalidateTimeRange:(struct XRTimeRange)arg1 plane:(id)arg2;
- (void)invalidateTimeRange:(struct XRTimeRange)arg1;
- (void)clearCurrentInspectionTime;
- (void)clearSelectedTimeRange;
@property(readonly, nonatomic) long long midpointNanosecondOffset;
@property(nonatomic) long long nanosecondOffset;
- (void)_screenChangeNotification:(id)arg1;
@property(readonly, nonatomic) NSArray *planes; // @synthesize planes=_planes;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)_computeVisibleHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
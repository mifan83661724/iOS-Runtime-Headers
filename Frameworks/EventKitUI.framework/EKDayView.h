/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSDateComponents, EKDayTimeView, UIScrollView, <EKDayViewDelegate>, NSCalendar, EKDayAllDayView, NSDate, UIView, EKDayViewContent, NSArray, EKEvent, UIScrollAnimation, <EKDayViewDataSource>, EKPadDayAllDayView, UIImageView;

@interface EKDayView : UIView <UIScrollViewDelegate, EKDayAllDayViewDelegate, EKDayViewContentDelegate, EKPadAllDayViewDelegate> {
    <EKDayViewDataSource> *_dataSource;
    <EKDayViewDelegate> *_delegate;
    EKPadDayAllDayView *_padAllDayView;
    EKDayAllDayView *_allDayView;
    EKDayViewContent *_dayContent;
    EKDayTimeView *_timeView;
    UIScrollView *_scroller;
    UIScrollAnimation *_scrollAnimation;
    UIView *_bottomFader;
    UIView *_topFader;
    int _orientation;
    int _outlineStyle;
    NSDateComponents *_displayDate;
    NSCalendar *_calendar;
    double _dayStart;
    double _dayEnd;
    double _nextDSTTransition;
    unsigned int _loadingOccurrences : 1;
    unsigned int _allowsOccurrenceSelection : 1;
    unsigned int _putSelectionOnTop : 1;
    unsigned int _showsGrid : 1;
    unsigned int _didLoad : 1;
    unsigned int _scrollbarShowsInside : 1;
    unsigned int _scrollingToOccurrence : 1;
    unsigned int _settingDate : 1;
    BOOL _dimsNonSelectedItems;
    BOOL _alignsMidnightToTop;
    BOOL _userScrolling;
    BOOL _scrollToOccurrencesOnNextReload;
    UIImageView *_topVerticalGridExtension;
    UIImageView *_bottomVerticalGridExtension;
    UIView *_bottomLine;
    NSDate *_lastInspectedOccurrenceOnDate;
    struct CGSize { 
        float width; 
        float height; 
    } _scrolledToFirstVisibleSecondForSize;
}

@property <EKDayViewDelegate> * delegate;
@property <EKDayViewDataSource> * dataSource;
@property(copy) NSDateComponents * displayDate;
@property(copy) NSCalendar * calendar;
@property(readonly) double dayStart;
@property(readonly) double dayEnd;
@property unsigned int firstVisibleSecond;
@property BOOL allowsOccurrenceSelection;
@property BOOL showsSelectionOnTop;
@property BOOL alignsMidnightToTop;
@property(readonly) float scrollBarOffset;
@property(readonly) NSArray * occurrenceViews;
@property(retain) EKEvent * dimmedOccurrence;
@property(readonly) float contentInset;
@property BOOL showsTimeLine;
@property BOOL showsTimeMarker;
@property BOOL eventsFillGrid;
@property BOOL showsGrid;
@property BOOL showsLeftBorder;
@property BOOL darkensSelection;
@property BOOL dimsNonSelectedItems;
@property int outlineStyle;


- (void)setDelegate:(id)arg1;
- (int)outlineStyle;
- (void)setOutlineStyle:(int)arg1;
- (id)calendar;
- (void)setCalendar:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (float)contentInset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)delegate;
- (id)dataSource;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (id)displayDate;
- (void)addViewToScroller:(id)arg1 isAllDay:(BOOL)arg2;
- (void)highlightHour:(double)arg1;
- (float)allDayRegionHeight;
- (BOOL)scrollTowardPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })pointAtDate:(double)arg1 isAllDay:(BOOL)arg2;
- (double)dateAtPoint:(struct CGPoint { float x1; float x2; })arg1 isAllDay:(BOOL*)arg2;
- (id)occurrenceViewAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)padAllDayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;
- (void)padAllDayViewFinishScrollingToOccurrence:(id)arg1;
- (void)setScrollerYInset:(float)arg1 keepingYPointVisible:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForEvent:(id)arg1;
- (float)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1;
- (void)resetLastSelectedOccurrencePoint;
- (void)bringEventToFront:(id)arg1;
- (void)dayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2;
- (void)dayContentView:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })_selectedDate;
- (double)scrollToDate:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToEvent:(id)arg1 animated:(BOOL)arg2;
- (BOOL)showsSelectionOnTop;
- (void)setShowsSelectionOnTop:(BOOL)arg1;
- (double)dayEnd;
- (double)dayStart;
- (void)setDisplayDate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orientation:(int)arg2 opaque:(BOOL)arg3;
- (void)padAllDayView:(id)arg1 didSelectEvent:(id)arg2;
- (void)padAllDayViewEmptySpaceClick:(id)arg1 onDay:(double)arg2;
- (void)padAllDayViewStartDrag:(id)arg1;
- (void)padAllDayView:(id)arg1 occurrenceDragExited:(id)arg2;
- (void)padAllDayView:(id)arg1 occurrencePressed:(id)arg2 onDay:(double)arg3;
- (void)padAllDayView:(id)arg1 occurrenceClicked:(id)arg2 onDay:(double)arg3;
- (double)_adjustSecondBackwardForDSTHole:(double)arg1;
- (double)_adjustSecondForwardForDSTHole:(double)arg1;
- (double)dateAtPoint:(struct CGPoint { float x1; float x2; })arg1 isAllDay:(BOOL*)arg2 requireAllDayRegionInsistence:(BOOL)arg3;
- (void)_notifyDelegateOfFinishedScrollingToOccurrence;
- (void)_notifyDelegateOfDragExitedOnOccurrence:(id)arg1;
- (void)_notifyDelegateOfPressOnEvent:(id)arg1;
- (void)scrollEventsIntoViewAnimated:(BOOL)arg1;
- (id)_generateVerticalGridExtensionImage;
- (id)occurrenceVisibleRect:(id)arg1;
- (void)_clearVerticalGridExtensionImageCache;
- (BOOL)alignsMidnightToTop;
- (void)_finishedScrollToSecond;
- (double)_scrollToSecond:(int)arg1 animated:(BOOL)arg2;
- (id)_faderForFaderImage:(id)arg1 fader:(id)arg2 sizeToImage:(BOOL)arg3;
- (void)firstVisibleSecondChanged;
- (unsigned int)firstVisibleSecond;
- (int)_secondAtPosition:(float)arg1;
- (void)_stopScrolling;
- (void)_disposeAllDayView;
- (float)_verticalOffset;
- (float)scrollBarOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orientation:(int)arg2 backgroundColor:(id)arg3 opaque:(BOOL)arg4 scrollbarShowsInside:(BOOL)arg5;
- (void)setFirstVisibleSecond:(unsigned int)arg1;
- (void)_adjustForDateOrCalendarChange;
- (void)_createAllDayView;
- (void)setTopFader:(id)arg1 bottomFader:(id)arg2 sizeToImage:(BOOL)arg3;
- (void)setAlignsMidnightToTop:(BOOL)arg1;
- (void)_timeViewTapped:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_scrollerRect;
- (BOOL)isAllDayLabelHighlighted;
- (void)setAllDayLabelHighlighted:(BOOL)arg1;
- (void)allDayView:(id)arg1 didSelectEvent:(id)arg2;
- (void)allDayViewDidLayoutSubviews:(id)arg1;
- (id)dimmedOccurrence;
- (id)occurrenceViewForEvent:(id)arg1;
- (BOOL)showsGrid;
- (BOOL)eventsFillGrid;
- (BOOL)allowsOccurrenceSelection;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setDimmedOccurrence:(id)arg1;
- (BOOL)dimsNonSelectedItems;
- (void)setDimsNonSelectedItems:(BOOL)arg1;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (void)emptySpaceClickForDayViewContent:(id)arg1 onDay:(double)arg2;
- (void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;
- (void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;
- (void)occurrencePressed:(id)arg1 onDay:(double)arg2;
- (void)occurrenceDragExited:(id)arg1;
- (id)occurrenceViews;
- (void)setEventsFillGrid:(BOOL)arg1;
- (void)setShowsGrid:(BOOL)arg1;
- (double)highlightedHour;
- (float)_positionOfSecond:(int)arg1;
- (BOOL)showsLeftBorder;
- (BOOL)showsTimeMarker;
- (void)setShowsTimeMarker:(BOOL)arg1;
- (BOOL)showsTimeLine;
- (void)setShowsTimeLine:(BOOL)arg1;
- (void)setShowsLeftBorder:(BOOL)arg1;
- (BOOL)darkensSelection;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)setDarkensSelection:(BOOL)arg1;
- (void)_localeChanged;
- (void)dealloc;

@end
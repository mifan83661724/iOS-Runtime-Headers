/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class CalendarEventDetailCommentCell, CalendarModel, CalendarEventEditModel, CalendarEventDetailTitleCell, UIPreferencesTable, CalendarEventDetailPreviewCell, UIToolbar, CalendarEventDetailOrganizerCell, NSArray, CalendarEventDetailAlarmCell, CalendarEventDetailAvailabilityCell, UIButton, CalendarEventDetailAttendeesCell, CalendarEventDetailCalendarCell, CalendarEventDetailNotesCell;

@interface CalendarEventDetailView : UIView <CalendarView> {
    unsigned int _occurrenceIsEditable : 1;
    unsigned int _showsPreview : 1;
    unsigned int _trustsStatus : 1;
    CalendarEventDetailAlarmCell *_alarmCell;
    CalendarEventDetailAttendeesCell *_attendeesCell;
    CalendarEventDetailAvailabilityCell *_availabilityCell;
    UIToolbar *_buttonBar;
    CalendarEventDetailCalendarCell *_calendarCell;
    CalendarEventDetailCommentCell *_commentCell;
    id _delegate;
    id _detailDelegate;
    CalendarEventEditModel *_editModel;
    CalendarModel *_model;
    CalendarEventDetailNotesCell *_notesCell;
    CalendarEventDetailOrganizerCell *_organizerCell;
    CalendarEventDetailPreviewCell *_previewCell;
    UIButton *_responseButtons[3];
    UIPreferencesTable *_table;
    CalendarEventDetailTitleCell *_titleCell;
    NSArray *_visibleDetailCells;
    NSArray *_visibleSingletonCells;
}

+ (id)navigationTitleForModel:(id)arg1;

- (void)_popAfterResponse;
- (void)_refreshFromModel;
- (void)_responseChanged:(id)arg1;
- (void)_selectButtonWithTag:(NSInteger)arg1;
- (void)_selectedOccurrenceChanged:(id)arg1;
- (void)_selectedOccurrenceModified:(id)arg1;
- (BOOL)_setupDetailCell:(id*)arg1 ofClass:(Class)arg2 editModel:(id)arg3 visibleCells:(id)arg4;
- (void)_updateResponse;
- (void)_updateResponseVisibility;
- (void)cleanUp;
- (void)dealloc;
- (void)finishedTransitionIn;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEditable;
- (NSInteger)numberOfGroupsInPreferencesTable:(id)arg1;
- (NSInteger)numberOfRowsInTable:(id)arg1;
- (id)preferencesTable:(id)arg1 cellForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3;
- (float)preferencesTable:(id)arg1 heightForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3 withProposedHeight:(float)arg4;
- (NSInteger)preferencesTable:(id)arg1 numberOfRowsInGroup:(NSInteger)arg2;
- (void)setAllowsCalendarPreview:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailDelegate:(id)arg1;
- (void)setEditModel:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setTrustsEventStatus:(BOOL)arg1;
- (BOOL)table:(id)arg1 showDisclosureForRow:(NSInteger)arg2;
- (id)table;
- (void)tableSelectionDidChange:(id)arg1;
- (void)updateForInterfaceOrientation:(NSInteger)arg1;

@end
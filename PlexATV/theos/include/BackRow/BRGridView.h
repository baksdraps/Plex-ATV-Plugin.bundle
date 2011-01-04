/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRCursorControl, NSMutableArray;

@interface BRGridView : BRControl {
@private
	int _mode;	// 40 = 0x28
	BRControl *_requester;	// 44 = 0x2c
	NSRange _range;	// 48 = 0x30
	float _lastGapHeight;	// 56 = 0x38
	double _heightToRange;	// 60 = 0x3c
	double _controlHeight;	// 68 = 0x44
	float _columWidth;	// 76 = 0x4c
	float _horizontalGap;	// 80 = 0x50
	float _verticalGap;	// 84 = 0x54
	float _leftMargin;	// 88 = 0x58
	float _rightMargin;	// 92 = 0x5c
	float _bottomMargin;	// 96 = 0x60
	float _bottomMarginFactor;	// 100 = 0x64
	float _topMargin;	// 104 = 0x68
	float _topMarginFactor;	// 108 = 0x6c
	BOOL _wrapsNavigation;	// 112 = 0x70
	id _dataSource;	// 116 = 0x74
	id _delegate;	// 120 = 0x78
	long _defaultFocusIndex;	// 124 = 0x7c
	BRCursorControl *_trackingCursor;	// 128 = 0x80
	BOOL _needsReload;	// 132 = 0x84
	NSMutableArray *_editEventQueue;	// 136 = 0x88
}
@property(retain) id cursor;	// G=0x32db8645; S=0x32db93a5; converted property
@property(retain) id dataSource;	// G=0x32db8565; S=0x32db9c35; converted property
@property(assign) id delegate;	// G=0x32db8585; S=0x32db8575; converted property
@property(assign) float horizontalGap;	// G=0x32db85a5; S=0x32db9ba5; converted property
@property(assign) float leftMargin;	// G=0x32db85c5; S=0x32db9add; converted property
@property(assign) float rightMargin;	// G=0x32db85d5; S=0x32db9a8d; converted property
@property(assign) long selection;	// G=0x32db9c0d; S=0x32db9c21; converted property
@property(assign) float verticalGap;	// G=0x32db85b5; S=0x32db9b59; converted property
@property(assign) BOOL wrapsNavigation;	// G=0x32db860d; S=0x32db85fd; converted property
+ (id)_jitterPositionAnimation;	// 0x32dbb041
+ (id)_jitterTransformAnimation;	// 0x32dbada9
- (id)init;	// 0x32db9cd9
- (void)_animationDidStartInDisplayMode:(id)_animation;	// 0x32db8655
- (void)_animationDidStartInEditModeMode:(id)_animation;	// 0x32db8659
- (void)_animationDidStopInDisplayMode:(id)_animation finished:(BOOL)finished;	// 0x32db865d
- (void)_animationDidStopInEditMode:(id)_animation finished:(BOOL)finished;	// 0x32db8ce5
- (id)_controlAtIndex:(long)index controls:(id)controls;	// 0x32db8c25
- (long)_controlsInHeight:(double)height startingAt:(long)at actualHeight:(double *)height3;	// 0x32dbb5e9
- (long)_controlsInHeightBackwards:(double)heightBackwards startingAt:(long)at actualHeight:(double *)height;	// 0x32dbb6cd
- (id)_controlsInRange:(NSRange)range;	// 0x32dbbf21
- (id)_createControlsInRange:(NSRange)range;	// 0x32dbacfd
- (void)_focusChanged:(id)changed;	// 0x32db8661
- (CGRect)_frameForControlAtIndex:(long)index controls:(id)controls;	// 0x32dbbc91
- (CGRect)_frameForControlAtIndex:(long)index rowFrame:(CGRect)frame controls:(id)controls;	// 0x32dba831
- (void)_frameRowInRange:(NSRange)range rowFrame:(CGRect)frame controls:(id)controls;	// 0x32dbbde9
- (BOOL)_handleEventInDisplayMode:(id)displayMode;	// 0x32db8ff1
- (BOOL)_handleEventInEditMode:(id)editMode;	// 0x32db8dd1
- (float)_heightOfControlAtIndex:(long)index controls:(id)controls;	// 0x32dbaaed
- (double)_heightOfRowsInRange:(NSRange)range includeVerticalGap:(BOOL)gap controls:(id)controls;	// 0x32dbb531
- (double)_heightToRange;	// 0x32dbb451
- (float)_horizontalGapValue;	// 0x32dbab5d
- (long)_indexOfFocusedControl;	// 0x32db8c81
- (void)_layoutSubcontrols;	// 0x32dbb791
- (float)_positionOfColumn:(long)column inRowWidth:(float)rowWidth cellWidth:(float *)width;	// 0x32dbac05
- (void)_restorePersistentSavedSelection;	// 0x32db8815
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x32dbbe71
- (void)_sceneBoundsChanged:(id)changed;	// 0x32db86cd
- (id)_setControlRange:(NSRange)range withHeightToRange:(double)range2;	// 0x32dbc52d
- (BOOL)_setMode:(int)mode;	// 0x32db9235
- (void)_setSelectedItemJiggling:(BOOL)jiggling;	// 0x32db8a45
- (BOOL)_swapControlAtIndex:(long)index withControlAtIndex:(long)index2;	// 0x32db9e9d
- (id)_swapPositionAnimationFromIndex:(long)index toIndex:(long)index2;	// 0x32db8981
- (double)_totalHeight;	// 0x32dbb34d
- (void)_updatePersistentSavedSelection;	// 0x32db8761
- (float)_verticalGapValue;	// 0x32dbabb1
- (void)animationDidStart:(id)animation;	// 0x32db9855
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x32db981d
- (BOOL)brEventAction:(id)action;	// 0x32dba709
- (BOOL)controlAcceptsFocusAtIndex:(long)index;	// 0x32db93dd
- (CGRect)controlFocusFrameAtIndex:(long)index;	// 0x32dba351
- (id)controlForPoint:(CGPoint)point;	// 0x32dba65d
- (CGRect)controlFrameAtIndex:(long)index;	// 0x32dba405
- (void)controlWasActivated;	// 0x32db993d
- (void)controlWasDeactivated;	// 0x32db9901
// converted property getter: - (id)cursor;	// 0x32db8645
- (long)dataCount;	// 0x32db9be5
// converted property getter: - (id)dataSource;	// 0x32db8565
- (void)dealloc;	// 0x32db9c55
// converted property getter: - (id)delegate;	// 0x32db8585
- (void)didFocusItemAtIndex:(long)index;	// 0x32db9555
- (BOOL)didPlayItemAtIndex:(long)index;	// 0x32db941d
- (BOOL)didSelectItemAtIndex:(long)index;	// 0x32db946d
- (void)didUnFocusItemAtIndex:(long)index;	// 0x32db94bd
- (void)focusControlAtIndex:(long)index;	// 0x32dbc415
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x32dbc185
- (void)grid:(id)grid didFocusItemAtIndex:(long)index;	// 0x32db8635
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x32db8641
- (void)grid:(id)grid didUnFocusItemAtIndex:(long)index;	// 0x32db863d
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x32db8629
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x32db8625
- (void)grid:(id)grid willDisplayItemAtIndex:(long)index;	// 0x32db862d
- (long)grid:(id)grid willFocusItemAtIndex:(long)index;	// 0x32db8631
- (void)grid:(id)grid willUnFocusItemAtIndex:(long)index;	// 0x32db8639
- (float)heightForItemAtIndex:(long)index;	// 0x32db963d
- (float)heightOfControlAtIndex:(long)index;	// 0x32db9a1d
- (float)heightToMaximum:(float)maximum;	// 0x32dbb1c5
// converted property getter: - (float)horizontalGap;	// 0x32db85a5
- (long)indexForItemID:(id)itemID;	// 0x32db968d
- (int)indexOfControlAtPoint:(CGPoint)point;	// 0x32dba8e9
- (id)initialFocus;	// 0x32dbc37d
- (id)itemAtIndex:(long)index;	// 0x32db972d
- (id)itemIDAtIndex:(long)index;	// 0x32db96e1
- (void)layoutSubcontrols;	// 0x32db98d9
// converted property getter: - (float)leftMargin;	// 0x32db85c5
- (long)numberOfColumns;	// 0x32db9779
- (long)numberOfColumnsInGrid:(id)grid;	// 0x32db8621
- (long)numberOfItems;	// 0x32db97c1
- (long)numberOfItemsInGrid:(id)grid;	// 0x32db861d
- (float)positionOfColumn:(long)column;	// 0x32dba5c5
- (void)reload;	// 0x32dbb289
- (void)reloadItemAtIndex:(long)index;	// 0x32dbc101
- (void)reloadItemsAtIndexes:(id)indexes;	// 0x32db99b9
// converted property getter: - (float)rightMargin;	// 0x32db85d5
- (long)rowCount;	// 0x32db9e35
- (void)scrollingCompleted;	// 0x32db9889
- (void)selectItemAtIndex:(long)index;	// 0x32db9809
- (id)selectedObject;	// 0x32db9bf9
// converted property getter: - (long)selection;	// 0x32db9c0d
- (void)setBottomMargin:(float)margin;	// 0x32dba551
- (void)setColumnWidth:(float)width;	// 0x32db8595
// converted property setter: - (void)setCursor:(id)cursor;	// 0x32db93a5
// converted property setter: - (void)setDataSource:(id)source;	// 0x32db9c35
- (void)setDefaultFocusWithPoint:(CGPoint)point;	// 0x32dba621
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32db8575
// converted property setter: - (void)setHorizontalGap:(float)gap;	// 0x32db9ba5
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x32db9add
- (void)setNeedsReload;	// 0x32db9979
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x32db9a8d
// converted property setter: - (void)setSelection:(long)selection;	// 0x32db9c21
- (void)setTopMargin:(float)margin;	// 0x32dba4dd
// converted property setter: - (void)setVerticalGap:(float)gap;	// 0x32db9b59
- (void)setVerticalMargins:(float)margins;	// 0x32db9b2d
// converted property setter: - (void)setWrapsNavigation:(BOOL)navigation;	// 0x32db85fd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32dba749
// converted property getter: - (float)verticalGap;	// 0x32db85b5
- (id)visibleControlAtIndex:(long)index;	// 0x32dbc0bd
- (id)visibleControlsWithRange:(NSRange *)range;	// 0x32db9a4d
- (NSRange)visibleRange;	// 0x32db85e5
- (void)visibleScrollRectChanged;	// 0x32db98ed
- (void)willDisplayItemAtIndex:(long)index;	// 0x32db95f1
- (long)willFocusItemAtIndex:(long)index;	// 0x32db95a1
- (void)willUnFocusItemAtIndex:(long)index;	// 0x32db9509
// converted property getter: - (BOOL)wrapsNavigation;	// 0x32db860d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRProviderGroup, NSString;

@interface BRGridControl : BRControl {
@private
	BRProviderGroup *_group;	// 40 = 0x28
	BRControl *_requester;	// 44 = 0x2c
	NSRange _range;	// 48 = 0x30
	float _lastGapHeight;	// 56 = 0x38
	double _heightToRange;	// 60 = 0x3c
	double _allRowsHeight;	// 68 = 0x44
	float _singleControlHeight;	// 76 = 0x4c
	BOOL _allRowsAreSameHeight;	// 80 = 0x50
	float _allColumnWidths;	// 84 = 0x54
	long _columnCount;	// 88 = 0x58
	float _horizontalGap;	// 92 = 0x5c
	float _verticalGap;	// 96 = 0x60
	float _leftMargin;	// 100 = 0x64
	float _rightMargin;	// 104 = 0x68
	float _bottomMargin;	// 108 = 0x6c
	float _bottomMarginFactor;	// 112 = 0x70
	float _topMargin;	// 116 = 0x74
	float _topMarginFactor;	// 120 = 0x78
	BOOL _wrapsNavigation;	// 124 = 0x7c
	BOOL _explicitlyAcceptsFocus;	// 125 = 0x7d
	NSString *_accessibilityLabel;	// 128 = 0x80
}
@property(retain) NSString *accessibilityLabel;	// G=0x32e4425d; S=0x32e44471; converted property
@property(assign) BOOL allRowsAreSameHeight;	// G=0x32e4424d; S=0x32e4423d; converted property
@property(assign) long columnCount;	// G=0x32d7ffd9; S=0x32d7f7ad; converted property
@property(assign) float horizontalGap;	// G=0x32e441b5; S=0x32d7f721; converted property
@property(assign) float leftMargin;	// G=0x32e441c5; S=0x32e4469d; converted property
@property(retain) id providerRequester;	// G=0x32e441f5; S=0x32e441e5; converted property
@property(retain) id providers;	// G=0x32e44759; S=0x32e44779; converted property
@property(assign) float rightMargin;	// G=0x32e441d5; S=0x32e4464d; converted property
@property(assign) float verticalGap;	// G=0x32d80365; S=0x32d7f761; converted property
@property(assign) BOOL wrapsNavigation;	// G=0x32e4422d; S=0x32e4421d; converted property
- (id)init;	// 0x32d7f649
- (id)_controlAtIndex:(long)index controls:(id)controls;	// 0x32e46739
- (long)_controlsInHeight:(double)height startingAt:(long)at actualHeight:(double *)height3;	// 0x32e458f9
- (long)_controlsInHeightBackwards:(double)heightBackwards startingAt:(long)at actualHeight:(double *)height;	// 0x32e459d5
- (id)_controlsInRange:(NSRange)range;	// 0x32e4624d
- (id)_createControlsInRange:(NSRange)range;	// 0x32e450f9
- (CGRect)_frameForControlAtIndex:(long)index controls:(id)controls;	// 0x32e45fb9
- (CGRect)_frameForControlAtIndex:(long)index rowFrame:(CGRect)frame controls:(id)controls;	// 0x32e44f5d
- (void)_frameRowInRange:(NSRange)range rowFrame:(CGRect)frame controls:(id)controls;	// 0x32e46115
- (float)_heightOfControlAtIndex:(long)index controls:(id)controls;	// 0x32e44d8d
- (double)_heightOfRowsInRange:(NSRange)range includeVerticalGap:(BOOL)gap controls:(id)controls;	// 0x32e45845
- (double)_heightToRange;	// 0x32e4574d
- (float)_horizontalGapValue;	// 0x32e44eb5
- (long)_indexOfFocusedControl;	// 0x32e44375
- (float)_positionOfColumn:(long)column inRowWidth:(float)rowWidth cellWidth:(float *)width;	// 0x32e45009
- (void)_providerDataSetChanged:(id)changed;	// 0x32e44311
- (void)_providerModified:(id)modified;	// 0x32e451c1
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x32e4619d
- (void)_sceneBoundsChanged:(id)changed;	// 0x32e4426d
- (id)_setControlRange:(NSRange)range withHeightToRange:(double)range2;	// 0x32e467a9
- (double)_totalHeight;	// 0x32e45649
- (void)_updateControlsInRange:(NSRange)range controls:(id)controls;	// 0x32e44905
- (float)_verticalGapValue;	// 0x32e44f09
// converted property getter: - (id)accessibilityLabel;	// 0x32e4425d
// converted property getter: - (BOOL)allRowsAreSameHeight;	// 0x32e4424d
- (BOOL)brEventAction:(id)action;	// 0x32e444c1
// converted property getter: - (long)columnCount;	// 0x32d7ffd9
- (BOOL)controlAcceptsFocusAtIndex:(long)index;	// 0x32e44431
- (CGRect)controlFocusFrameAtIndex:(long)index;	// 0x32e449fd
- (CGRect)controlFrameAtIndex:(long)index;	// 0x32e44ab1
- (long)dataCount;	// 0x32e44739
- (void)dealloc;	// 0x32d83b95
- (void)focusControlAtIndex:(long)index;	// 0x32e46621
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x32e4641d
- (float)heightOfControlAtIndex:(long)index;	// 0x32e445dd
- (float)heightToMaximum:(float)maximum;	// 0x32e452dd
// converted property getter: - (float)horizontalGap;	// 0x32e441b5
- (id)initialFocus;	// 0x32e453a9
- (void)layoutSubcontrols;	// 0x32e45a95
// converted property getter: - (float)leftMargin;	// 0x32e441c5
- (float)positionOfColumn:(long)column;	// 0x32e44d51
- (id)providerForDataAtIndex:(long)index providerIndex:(long *)index2;	// 0x32e44719
// converted property getter: - (id)providerRequester;	// 0x32e441f5
// converted property getter: - (id)providers;	// 0x32e44759
- (void)reloadData;	// 0x32e45479
// converted property getter: - (float)rightMargin;	// 0x32e441d5
- (long)rowCount;	// 0x32d7ffe9
- (void)setAcceptsFocus:(BOOL)focus;	// 0x32e443c5
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x32e44471
- (void)setAllColumnWidths:(float)widths;	// 0x32e441a5
// converted property setter: - (void)setAllRowsAreSameHeight:(BOOL)height;	// 0x32e4423d
- (void)setBottomMargin:(float)margin;	// 0x32e44cdd
// converted property setter: - (void)setColumnCount:(long)count;	// 0x32d7f7ad
// converted property setter: - (void)setHorizontalGap:(float)gap;	// 0x32d7f721
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x32e4469d
- (void)setProvider:(id)provider;	// 0x32d7ffa5
// converted property setter: - (void)setProviderRequester:(id)requester;	// 0x32e441e5
// converted property setter: - (void)setProviders:(id)providers;	// 0x32e44779
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x32e4464d
- (void)setTopMargin:(float)margin;	// 0x32e44c69
// converted property setter: - (void)setVerticalGap:(float)gap;	// 0x32d7f761
- (void)setVerticalMargins:(float)margins;	// 0x32e446ed
// converted property setter: - (void)setWrapsNavigation:(BOOL)navigation;	// 0x32e4421d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32e44b89
// converted property getter: - (float)verticalGap;	// 0x32d80365
- (id)visibleControlAtIndex:(long)index;	// 0x32e463d9
- (id)visibleControlsWithRange:(NSRange *)range;	// 0x32e4460d
- (NSRange)visibleRange;	// 0x32e44205
- (void)visibleScrollRectChanged;	// 0x32e444ad
// converted property getter: - (BOOL)wrapsNavigation;	// 0x32e4422d
@end


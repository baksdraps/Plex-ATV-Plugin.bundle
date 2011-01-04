/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSMutableDictionary, NSArray, BRImageControl, NSMutableArray;

@interface BRSegmentedSortControl : BRControl {
@private
	BRImageControl *_leftEndCapLayer;	// 40 = 0x28
	NSMutableArray *_dividerLayers;	// 44 = 0x2c
	NSMutableArray *_contentLayers;	// 48 = 0x30
	NSMutableArray *_textLayers;	// 52 = 0x34
	BRImageControl *_rightEndCapLayer;	// 56 = 0x38
	NSArray *_segmentNames;	// 60 = 0x3c
	NSMutableDictionary *_images;	// 64 = 0x40
	int _selectedSegment;	// 68 = 0x44
	float _widthRatio;	// 72 = 0x48
}
@property(assign) int selectedSegment;	// G=0x32d88e7d; S=0x32d887d1; converted property
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment;	// 0x32dd8f41
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment widthRatio:(float)ratio;	// 0x32d883c9
- (id)_attributedTextForSegment:(int)segment forSelectedState:(BOOL)selectedState;	// 0x32d88709
- (id)_contentBackgroundTextureForSelectedState:(BOOL)selectedState;	// 0x32d88ba1
- (id)_dividerTextureForSelectedState:(BOOL)selectedState;	// 0x32d88bd5
- (id)_leftEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x32d88a31
- (id)_loadImageFromFile:(id)file;	// 0x32d88a65
- (id)_rightEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x32d88b6d
- (void)_updateSegmentState;	// 0x32d8889d
- (id)accessibilityLabel;	// 0x32dd8ee1
- (BOOL)brEventAction:(id)action;	// 0x32d88dad
- (void)dealloc;	// 0x32d89db9
- (void)layoutSubcontrols;	// 0x32dd8ff9
- (int)segmentCount;	// 0x32d886e9
// converted property getter: - (int)selectedSegment;	// 0x32d88e7d
// converted property setter: - (void)setSelectedSegment:(int)segment;	// 0x32d887d1
- (float)visualHorizontalCenter;	// 0x32dd8f65
@end


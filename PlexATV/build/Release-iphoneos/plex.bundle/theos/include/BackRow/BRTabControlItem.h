/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRMultiPartWidgetLayer;

@interface BRTabControlItem : BRControl {
@private
	id _opaqueIdentifier;	// 40 = 0x28
	BRMultiPartWidgetLayer *_baseControl;	// 44 = 0x2c
	BRTextControl *_label;	// 48 = 0x30
}
@property(retain) id identifier;	// G=0x32dc93ad; S=0x32dc95d5; converted property
@property(retain) BRTextControl *label;	// G=0x32dc95a5; S=0x32dc9501; converted property
- (id)init;	// 0x32dc9681
- (id)accessibilityLabel;	// 0x32dc93c1
- (void)dealloc;	// 0x32dc9615
// converted property getter: - (id)identifier;	// 0x32dc93ad
- (BOOL)isAccessibilityElement;	// 0x32dc93bd
// converted property getter: - (id)label;	// 0x32dc95a5
- (void)layoutSubcontrols;	// 0x32dc9785
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x32dc95d5
// converted property setter: - (void)setLabel:(id)label;	// 0x32dc9501
- (void)setLabelAttributes:(id)attributes;	// 0x32dc94ad
- (void)setLabelOpacity:(float)opacity;	// 0x32dc948d
- (void)setTabImages:(id)images;	// 0x32dc93e1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32dc9879
@end


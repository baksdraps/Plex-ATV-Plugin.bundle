/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"


@interface BRDropShadowControl : BRControl {
@private
	BRControl *_content;	// 40 = 0x28
	int _shadowStyle;	// 44 = 0x2c
	float _sizeFactor;	// 48 = 0x30
}
@property(retain) BRControl *content;	// G=0x32db7f95; S=0x32d65e91; converted property
@property(assign) float shadowSizeFactor;	// G=0x32db7f85; S=0x32db7fa5; converted property
@property(assign) int shadowStyle;	// G=0x32db7f75; S=0x32d65a21; converted property
- (id)init;	// 0x32d659cd
- (void)_updateImages;	// 0x32d65a49
// converted property getter: - (id)content;	// 0x32db7f95
- (void)dealloc;	// 0x32d7798d
- (void)layoutSubcontrols;	// 0x32db7fd9
// converted property setter: - (void)setContent:(id)content;	// 0x32d65e91
// converted property setter: - (void)setShadowSizeFactor:(float)factor;	// 0x32db7fa5
// converted property setter: - (void)setShadowStyle:(int)style;	// 0x32d65a21
// converted property getter: - (float)shadowSizeFactor;	// 0x32db7f85
// converted property getter: - (int)shadowStyle;	// 0x32db7f75
@end


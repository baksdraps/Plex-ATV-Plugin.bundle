/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"


@interface BRSpacerControl : BRControl {
@private
	float _pixels;	// 40 = 0x28
}
@property(assign) float pixels;	// G=0x32dc7221; S=0x32dc7211; converted property
+ (id)spacerWithPixels:(float)pixels;	// 0x32dc7285
- (id)init;	// 0x32dc7231
// converted property getter: - (float)pixels;	// 0x32dc7221
// converted property setter: - (void)setPixels:(float)pixels;	// 0x32dc7211
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32dc72bd
@end


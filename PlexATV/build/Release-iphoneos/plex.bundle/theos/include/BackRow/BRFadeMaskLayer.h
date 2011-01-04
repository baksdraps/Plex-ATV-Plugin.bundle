/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRFadeMaskLayer : BRControl {
@private
	float _topFadeHeight;	// 40 = 0x28
	float _bottomFadeHeight;	// 44 = 0x2c
	float _leftFadeWidth;	// 48 = 0x30
	float _rightFadeWidth;	// 52 = 0x34
	CGFunctionRef _shadingFunction;	// 56 = 0x38
}
@property(assign) float bottomFadeHeight;	// G=0x32d89ca5; S=0x32d89add; converted property
@property(assign) float leftFadeWidth;	// G=0x32df08b9; S=0x32d72051; converted property
@property(assign) float rightFadeWidth;	// G=0x32d720b9; S=0x32d72085; converted property
@property(assign) float topFadeHeight;	// G=0x32d89c95; S=0x32d89b11; converted property
- (id)init;	// 0x32d658ed
// converted property getter: - (float)bottomFadeHeight;	// 0x32d89ca5
- (void)dealloc;	// 0x32d6a779
- (void)drawInContext:(CGContextRef)context;	// 0x32d720e1
// converted property getter: - (float)leftFadeWidth;	// 0x32df08b9
// converted property getter: - (float)rightFadeWidth;	// 0x32d720b9
// converted property setter: - (void)setBottomFadeHeight:(float)height;	// 0x32d89add
- (void)setEnableMaskAnimation:(BOOL)animation;	// 0x32d714e5
// converted property setter: - (void)setLeftFadeWidth:(float)width;	// 0x32d72051
// converted property setter: - (void)setRightFadeWidth:(float)width;	// 0x32d72085
// converted property setter: - (void)setTopFadeHeight:(float)height;	// 0x32d89b11
// converted property getter: - (float)topFadeHeight;	// 0x32d89c95
@end


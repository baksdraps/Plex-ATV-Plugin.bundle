/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
//

@class NSMutableArray, NSAttributedString;

@interface BRTypesetter : NSObject {
@private
	NSAttributedString *_resolvedString;	// 4 = 0x4
	CTTypesetterRef _setter;	// 8 = 0x8
	NSMutableArray *_lines;	// 12 = 0xc
	CGSize _boxSize;	// 16 = 0x10
	CGSize _shadowOffset;	// 24 = 0x18
	CGColorRef _shadowColor;	// 32 = 0x20
	float _flushFactor;	// 36 = 0x24
	BOOL _renderingAttributesFetched;	// 40 = 0x28
}
+ (float)pointSizeForBoxHeight:(float)boxHeight fontName:(id)name;	// 0x32e207bd
- (id)initWithAttributedString:(id)attributedString textBoxSize:(CGSize)size;	// 0x32e209d9
- (id)_boxLines:(BOOL *)lines;	// 0x32d73f9d
- (void)_justifyLines:(id)lines;	// 0x32d7416d
- (CTLineRef)_truncateLine:(CTLineRef)line withSetting:(unsigned char)setting;	// 0x32d6f8f5
- (CTLineRef)_truncationToken;	// 0x32d6f985
- (void)_updateRenderingAttributes;	// 0x32e2080d
- (void)dealloc;	// 0x32d6ab51
- (void)drawTextAtPoint:(CGPoint)point inContext:(CGContextRef)context;	// 0x32d6d509
- (id)lineAtIndex:(long)index;	// 0x32e203e1
- (long)numLines;	// 0x32e204a5
- (CGSize)typographicBounds;	// 0x32d6cf55
@end


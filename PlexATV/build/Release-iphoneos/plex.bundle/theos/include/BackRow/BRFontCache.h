/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRSingleton.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface BRFontCache : BRSingleton {
@private
	CGSize _displaySize;	// 4 = 0x4
	NSDictionary *_cache;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x32d5e1e1
+ (id)singleton;	// 0x32d5e1d5
- (id)init;	// 0x32e13805
- (CTFontRef)_createFontForAttributes:(id)attributes;	// 0x32e138ad
- (id)addRealFontsToAttributedString:(id)attributedString;	// 0x32d67181
- (CTFontRef)createFontForRowHeight:(float)rowHeight fontName:(id)name;	// 0x32e13ae5
- (void)dealloc;	// 0x32e13865
- (void)setDisplaySize:(CGSize)size;	// 0x32d5e1ed
@end


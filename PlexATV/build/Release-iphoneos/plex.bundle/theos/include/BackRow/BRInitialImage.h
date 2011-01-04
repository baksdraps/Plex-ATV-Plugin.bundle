/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRImage.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface BRInitialImage : BRImage {
@private
	NSData *_data;	// 44 = 0x2c
}
+ (id)initialImageWithData:(id)data;	// 0x32e1533d
- (void)dealloc;	// 0x32e152f5
- (void)purgeRawData;	// 0x32e152cd
- (id)rawData;	// 0x32e152bd
@end


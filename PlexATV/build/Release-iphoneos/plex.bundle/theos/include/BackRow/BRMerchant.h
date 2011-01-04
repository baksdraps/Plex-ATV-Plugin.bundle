/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

//#import "NSCopying.h"
//#import "NSCoding.h"
//
#import "BackRow-Structs.h"


@interface BRMerchant : NSObject <NSCopying, NSCoding> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x32e61ced
+ (id)identifier;	// 0x32e61da5
+ (id)merchant;	// 0x32e61c95
+ (id)merchantForControl:(id)control;	// 0x32e61c31
+ (id)merchantForControl:(id)control defaultMerchant:(id)merchant;	// 0x32e61bf5
+ (id)merchantForObject:(id)object;	// 0x32e61c49
+ (id)merchantForObject:(id)object defaultMerchant:(id)merchant;	// 0x32e61dbd
+ (id)merchantWithIdentifier:(id)identifier;	// 0x32e61c61
+ (void)registerMerchant:(Class)merchant withIdentifier:(id)identifier;	// 0x32e61d3d
- (id)initWithCoder:(id)coder;	// 0x32e61a39
- (void)assignToControl:(id)control;	// 0x32e61b05
- (BOOL)assignToObject:(id)object;	// 0x32e61b39
- (id)brandImageForControl:(id)control;	// 0x32e61aed
- (id)brandImageForControl:(id)control fromDictionary:(id)dictionary;	// 0x32e61a51
- (BOOL)brandsControls;	// 0x32e61a4d
- (id)copyWithZone:(NSZone *)zone;	// 0x32e61a35
- (id)description;	// 0x32e61a41
- (void)encodeWithCoder:(id)coder;	// 0x32e61a3d
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method;	// 0x32e61a59
- (id)identifier;	// 0x32e61bd1
- (id)localizedStringForKey:(id)key;	// 0x32e61ce1
- (id)merchantErrorForError:(id)error;	// 0x32e61a55
- (void)release;	// 0x32e61a29
- (id)retain;	// 0x32e61a25
- (unsigned)retainCount;	// 0x32e61a2d
@end


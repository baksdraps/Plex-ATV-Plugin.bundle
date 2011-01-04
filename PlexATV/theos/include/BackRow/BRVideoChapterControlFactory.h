/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
//


__attribute__((visibility("hidden")))
@interface BRVideoChapterControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
}
+ (id)factory;	// 0x32db0a05
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x32db0a41
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x32db0bb5
@end


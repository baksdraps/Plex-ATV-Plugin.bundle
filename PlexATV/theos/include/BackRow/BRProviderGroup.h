/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
//

@class NSArray;

@interface BRProviderGroup : NSObject {
@private
	NSArray *_providers;	// 4 = 0x4
}
@property(readonly, retain) NSArray *providers;	// G=0x32df57d5; converted property
+ (id)groupWithProviders:(id)providers;	// 0x32df5c41
- (id)initWithProviders:(id)providers;	// 0x32df5c85
- (id)createControlAtGroupIndex:(long)groupIndex currentControl:(id)control requestedBy:(id)by;	// 0x32df596d
- (id)createControlsInGroupRange:(NSRange)groupRange requestedBy:(id)by;	// 0x32df58d9
- (long)dataCount;	// 0x32df5bad
- (id)dataForGroupIndex:(long)groupIndex;	// 0x32df5b81
- (void)dealloc;	// 0x32d77945
- (long)groupIndexForHash:(id)hash;	// 0x32df59c5
- (id)hashForDataAtGroupIndex:(long)groupIndex;	// 0x32df5b55
- (id)providerForDataAtGroupIndex:(long)groupIndex providerIndex:(long *)index;	// 0x32df5acd
// converted property getter: - (id)providers;	// 0x32df57d5
@end


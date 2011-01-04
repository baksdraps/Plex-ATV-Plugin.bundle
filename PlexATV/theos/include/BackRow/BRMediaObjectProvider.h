/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRProvider.h"

@class NSArray, NSString;
@protocol BRControlFactory;

@interface BRMediaObjectProvider : NSObject <BRProvider> {
@private
	id<BRControlFactory> _controlFactory;	// 4 = 0x4
	NSArray *_mediaObjects;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
}
@property(retain) id controlFactory;	// G=0x32df4989; S=0x32df4a85; converted property
@property(retain) NSArray *mediaObjects;	// G=0x32df4979; S=0x32df4abd; converted property
@property(retain) NSString *name;	// G=0x32df4999; S=0x32df49a9; converted property
+ (id)providerWithMediaObjects:(id)mediaObjects controlFactory:(id)factory;	// 0x32df4af5
- (long)controlCount;	// 0x32df49e1
// converted property getter: - (id)controlFactory;	// 0x32df4989
- (id)dataAtIndex:(long)index;	// 0x32df4a39
- (long)dataCount;	// 0x32df4a61
- (void)dealloc;	// 0x32df4b5d
- (id)hashForDataAtIndex:(long)index;	// 0x32df49f5
// converted property getter: - (id)mediaObjects;	// 0x32df4979
// converted property getter: - (id)name;	// 0x32df4999
// converted property setter: - (void)setControlFactory:(id)factory;	// 0x32df4a85
// converted property setter: - (void)setMediaObjects:(id)objects;	// 0x32df4abd
// converted property setter: - (void)setName:(id)name;	// 0x32df49a9
@end


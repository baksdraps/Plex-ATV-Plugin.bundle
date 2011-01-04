/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRProvider.h"
//

@class NSArray;
@protocol BRControlFactory;

@interface BRPhotoProvider : NSObject <BRProvider> {
@private
	NSArray *_collections;	// 4 = 0x4
	id<BRControlFactory> _controlFactory;	// 8 = 0x8
}
@property(retain) id controlFactory;	// G=0x32e51be5; S=0x32e51e6d; converted property
+ (id)providerWithCollections:(id)collections controlFactory:(id)factory;	// 0x32e51f71
- (id)initWithCollections:(id)collections controlFactory:(id)factory;	// 0x32e51f01
// converted property getter: - (id)controlFactory;	// 0x32e51be5
- (id)dataAtIndex:(long)index;	// 0x32e51e0d
- (long)dataCount;	// 0x32e51e4d
- (void)dealloc;	// 0x32e51ea5
- (id)hashForDataAtIndex:(long)index;	// 0x32e51de9
// converted property setter: - (void)setControlFactory:(id)factory;	// 0x32e51e6d
@end


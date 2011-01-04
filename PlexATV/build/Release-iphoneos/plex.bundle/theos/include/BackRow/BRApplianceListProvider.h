/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRMenuListItemProvider.h"
//

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface BRApplianceListProvider : NSObject <BRMenuListItemProvider> {
@private
	NSArray *_applianceInfo;	// 4 = 0x4
	NSDictionary *_attributes;	// 8 = 0x8
}
@property(retain) id textAttributes;	// G=0x32d6cf45; S=0x32d66d95; converted property
- (id)init;	// 0x32d66a75
- (void)_loadAppliances;	// 0x32d66ab5
- (id)applianceInfoAtIndex:(long)index;	// 0x32d67839
- (long)applianceInfoIndexForKey:(id)key;	// 0x32d6ce25
- (void)dealloc;	// 0x32dacd25
- (float)heightForRow:(long)row;	// 0x32d6705d
- (long)itemCount;	// 0x32d6703d
- (id)itemForRow:(long)row;	// 0x32d67065
- (void)reloadAppliances;	// 0x32dacd11
- (BOOL)rowSelectable:(long)selectable;	// 0x32dacd0d
// converted property setter: - (void)setTextAttributes:(id)attributes;	// 0x32d66d95
// converted property getter: - (id)textAttributes;	// 0x32d6cf45
- (id)titleForRow:(long)row;	// 0x32d67251
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRMenuController.h"
#import "BackRow-Structs.h"
#import "BRMenuListItemProvider.h"


__attribute__((visibility("hidden")))
@interface BRParentalControlsPasscodeChangedController : BRMenuController <BRMenuListItemProvider> {
@private
	BRController *_guardedController;	// 100 = 0x64
	NSString **_menuItemNameKeys;	// 104 = 0x68
	BOOL _passcodeMatched;	// 108 = 0x6c
}
- (id)initWithMatch:(BOOL)match guarding:(id)guarding;	// 0x32dde225
- (void)dealloc;	// 0x32dde1dd
- (float)heightForRow:(long)row;	// 0x32dddf91
- (long)itemCount;	// 0x32dddf79
- (id)itemForRow:(long)row;	// 0x32dddfcd
- (void)itemSelected:(long)selected;	// 0x32dde02d
- (BOOL)rowSelectable:(long)selectable;	// 0x32dddf95
- (id)titleForRow:(long)row;	// 0x32dddf99
@end


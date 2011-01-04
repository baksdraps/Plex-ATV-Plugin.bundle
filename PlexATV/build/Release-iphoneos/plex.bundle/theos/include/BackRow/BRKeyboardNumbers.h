/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRKeyboard.h"


__attribute__((visibility("hidden")))
@interface BRKeyboardNumbers : BRKeyboard {
}
- (id)init;	// 0x32e63d51
- (id)_keyboardDataFileName;	// 0x32e63d91
- (id)_mainKeyRowWithKeys:(id)keys index:(int)index;	// 0x32e63aed
- (float)_mainKeysVerticalSpacing;	// 0x32e63ae5
- (int)_numberOfColumnsForMainKeyRowIndex:(int)mainKeyRowIndex;	// 0x32e63ad9
- (int)_numberOfMainKeyRows;	// 0x32e63ad5
- (float)_preferredGlyphHeight:(id)height;	// 0x32e63acd
- (float)_preferredGlyphWidth:(id)width;	// 0x32e63ac5
- (id)actionKeyRows;	// 0x32e63c9d
- (id)actionKeysContainer;	// 0x32e63b89
- (CGRect)actionKeysContainerFrame:(id)frame resolutionScale:(float)scale;	// 0x32e6401d
- (CGRect)backgroundFrame:(id)frame resolutionScale:(float)scale;	// 0x32e63da9
- (id)bottomRow;	// 0x32e63ab1
- (id)focusedControlAndRow:(id *)row;	// 0x32e63cd1
- (CGRect)mainKeysContainerFrame:(id)frame resolutionScale:(float)scale;	// 0x32e63fdd
- (id)name;	// 0x32e63aa1
- (id)popupKeyboardForKeyControl:(id)keyControl baseKeyboardType:(int)type;	// 0x32e63ac1
- (CGRect)textFieldBackgroundFrame:(id)frame resolutionScale:(float)scale;	// 0x32e64045
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRImage, BRTextControl, NSDictionary;

@interface BRPhotoBrowserBannerButton : BRControl {
@private
	float _minimumWidth;	// 40 = 0x28
	BRControl *_focusControl;	// 44 = 0x2c
	BRImageControl *_imageControl;	// 48 = 0x30
	BRImage *_focusedImage;	// 52 = 0x34
	BRImage *_unFocusedImage;	// 56 = 0x38
	BRTextControl *_textControl;	// 60 = 0x3c
	NSDictionary *_textAttributes;	// 64 = 0x40
}
@property(retain) BRImage *focusedImage;	// G=0x32de6849; S=0x32de69a9; converted property
@property(retain) id text;	// G=0x32de69f1; S=0x32de6ccd; converted property
@property(retain) BRImage *unFocusedImage;	// G=0x32de6859; S=0x32de6961; converted property
+ (id)button;	// 0x32de6b3d
+ (id)removeSavedSearchButton;	// 0x32de7231
+ (id)saveSearchButton;	// 0x32de7285
+ (id)settingsButton;	// 0x32de71dd
+ (id)slideshowButton;	// 0x32de72d9
- (id)init;	// 0x32de6b6d
- (void)_updateContents;	// 0x32de686d
- (id)accessibilityLabel;	// 0x32de694d
- (id)accessibilityTraits;	// 0x32de6921
- (void)controlWasFocused;	// 0x32de6a5d
- (void)controlWasUnfocused;	// 0x32de6a21
- (void)dealloc;	// 0x32de6a99
// converted property getter: - (id)focusedImage;	// 0x32de6849
- (BOOL)isAccessibilityElement;	// 0x32de6869
- (void)layoutSubcontrols;	// 0x32de6d51
// converted property setter: - (void)setFocusedImage:(id)image;	// 0x32de69a9
// converted property setter: - (void)setText:(id)text;	// 0x32de6ccd
// converted property setter: - (void)setUnFocusedImage:(id)image;	// 0x32de6961
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32de704d
// converted property getter: - (id)text;	// 0x32de69f1
// converted property getter: - (id)unFocusedImage;	// 0x32de6859
@end


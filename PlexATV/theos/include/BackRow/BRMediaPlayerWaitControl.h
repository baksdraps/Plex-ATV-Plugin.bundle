/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTransportControl, BRWaitSpinnerControl, BRTextControl, BRDescriptionOverlayControl;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerWaitControl : BRControl {
@private
	id<BRMediaAsset> _asset;	// 40 = 0x28
	BRDescriptionOverlayControl *_descriptionControl;	// 44 = 0x2c
	BRTextControl *_loadingControl;	// 48 = 0x30
	BRWaitSpinnerControl *_loadingSpinner;	// 52 = 0x34
	BRTextControl *_readyToPlayInNMinsControl;	// 56 = 0x38
	BRWaitSpinnerControl *_readyToPlayInNMinsSpinner;	// 60 = 0x3c
	BRTextControl *_readyToPlayControl;	// 64 = 0x40
	BRTextControl *_authorizingControl;	// 68 = 0x44
	BRWaitSpinnerControl *_authorizingSpinner;	// 72 = 0x48
	BRTransportControl *_transport;	// 76 = 0x4c
}
- (id)initWithAsset:(id)asset;	// 0x32e656d1
- (void)_addFadeAnimationToControl:(id)control;	// 0x32e65135
- (void)dealloc;	// 0x32e65341
- (void)layoutSubcontrols;	// 0x32e65a75
- (void)setAuthorizing;	// 0x32e65211
- (void)setReadyForPlayInNMins:(int)nmins;	// 0x32e6542d
- (void)setReadyToPlay;	// 0x32e652bd
@end


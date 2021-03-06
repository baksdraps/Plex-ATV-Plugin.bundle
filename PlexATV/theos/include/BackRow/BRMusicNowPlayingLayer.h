/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRMusicNowPlayingLayer : BRControl {
@private
	NSMutableDictionary *_currentTrackInfo;	// 40 = 0x28
	int _scheduledAnimationCount;	// 44 = 0x2c
	float _coverArtRotation;	// 48 = 0x30
	float _coverArtSizeX;	// 52 = 0x34
	float _coverArtSizeY;	// 56 = 0x38
	float _stateIconWidth;	// 60 = 0x3c
	float _textWidth;	// 64 = 0x40
	BOOL _shuffleState;	// 68 = 0x44
	BOOL _repeatState;	// 69 = 0x45
	BOOL _geniusState;	// 70 = 0x46
	BOOL _isRadio;	// 71 = 0x47
	CGPoint _randomOffset;	// 72 = 0x48
	CGPoint _coverArtPosition;	// 80 = 0x50
	CGPoint _trackNameTextPosition;	// 88 = 0x58
	CGPoint _artistNameTextPosition;	// 96 = 0x60
	CGPoint _albumNameTextPosition;	// 104 = 0x68
	CGPoint _trackXofXTextPosition;	// 112 = 0x70
	CGPoint _transportPosition;	// 120 = 0x78
	CGPoint _stateIconsLowerRightCornerPosition;	// 128 = 0x80
	float _coverArtReflectionAmount;	// 136 = 0x88
	CGSize _transportSize;	// 140 = 0x8c
	BOOL _flip;	// 148 = 0x94
}
@property(readonly, retain) NSMutableDictionary *currentTrackInfo;	// G=0x32d8b609; converted property
- (id)init;	// 0x32d8a7ed
- (id)_createFrontLayer;	// 0x32dc2279
- (void)_flipFrame:(CGRect *)frame parentFrame:(CGRect)frame2;	// 0x32dc2209
- (void)_startScrolling;	// 0x32dc2239
- (void)_updateRandomOffset;	// 0x32dc378d
- (void)_updateTextStrings;	// 0x32dc334d
- (id)accessibilityLabel;	// 0x32dc3291
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x32dc2781
- (void)controlWasActivated;	// 0x32dc2c35
- (void)controlWasDeactivated;	// 0x32d8bee5
// converted property getter: - (id)currentTrackInfo;	// 0x32d8b609
- (void)dealloc;	// 0x32d8bff5
- (int)frontLayerSide;	// 0x32dc21e9
- (BOOL)isAccessibilityElement;	// 0x32dc2205
- (void)layoutSubcontrols;	// 0x32dc3859
- (void)performFlipAnimation:(float)animation;	// 0x32dc283d
- (void)removeAllPendingActions;	// 0x32d8beb9
- (void)setCurrentTrackInfo:(id)info WithTransition:(BOOL)transition TransitionDirection:(int)direction TransitionDuration:(float)duration NewTrackKicksInTime:(double)time OldTrackFadeOutTime:(double)time6 isRadio:(BOOL)radio;	// 0x32dc2cb9
- (void)setElapsedTime:(double)time;	// 0x32dc2b8d
- (void)setElapsedTime:(double)time andDuration:(double)duration;	// 0x32d8b619
- (void)setGeniusState:(BOOL)state;	// 0x32dc2b6d
- (void)setPlayerState:(int)state;	// 0x32dc2201
- (void)setRepeatMode:(int)mode;	// 0x32d8b935
- (void)setShuffleState:(BOOL)state;	// 0x32d8b8d5
- (void)updateCoverArt:(id)art;	// 0x32dc26c1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTransportLayer, NSArray, BRTextControl, NSTimer;
@protocol BRTransportDataProvider;

__attribute__((visibility("hidden")))
@interface BRTransportControl : BRControl {
@private
	long _duration;	// 40 = 0x28
	long _elapsedTime;	// 44 = 0x2c
	id<BRTransportDataProvider> _dataProvider;	// 48 = 0x30
	BRTransportLayer *_layer;	// 52 = 0x34
	BRTextControl *_durationLayer;	// 56 = 0x38
	BRTextControl *_elapsedTimeLayer;	// 60 = 0x3c
	BRTextControl *_chapterLayer;	// 64 = 0x40
	NSArray *_chapterMarkers;	// 68 = 0x44
	NSTimer *_fadeTimer;	// 72 = 0x48
}
@property(assign) BOOL showChapterMarks;	// G=0x32dd7da1; S=0x32dd7dc5; converted property
- (id)initWithSpinner:(BOOL)spinner;	// 0x32dd80c5
- (void)_fadeTransport:(id)transport;	// 0x32d7ec09
- (void)_handleBufferChanged:(id)changed;	// 0x32dd7c79
- (void)_handlePlayerAssetChanged:(id)changed;	// 0x32dd7d79
- (void)_handlePlayerTimeChanged:(id)changed;	// 0x32dd7ca5
- (void)_handleStateChange:(id)change;	// 0x32d7a0f5
- (void)_handleTimeSkip:(id)skip;	// 0x32d87fad
- (void)_handleVolumeChange:(id)change;	// 0x32dd7d65
- (void)_hideTransport;	// 0x32d7a189
- (void)_showTransport;	// 0x32d7e825
- (void)_showTransportWithTimeout;	// 0x32d7eb21
- (void)_showTransportWithTimeoutInSeconds:(float)seconds;	// 0x32dd7cd1
- (id)_trackTimeAttributes;	// 0x32dd848d
- (void)_updateAll;	// 0x32d7a251
- (void)_updateBufferingProgress;	// 0x32d7a75d
- (void)_updateTime;	// 0x32d7a305
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x32d7ed6d
- (void)dealloc;	// 0x32d7b709
- (void)hideTransport;	// 0x32d7ad99
- (BOOL)isHidden;	// 0x32dd7de9
- (void)layoutSubcontrols;	// 0x32dd8229
- (void)setDataProvider:(id)provider;	// 0x32dd7ee5
// converted property setter: - (void)setShowChapterMarks:(BOOL)marks;	// 0x32dd7dc5
// converted property getter: - (BOOL)showChapterMarks;	// 0x32dd7da1
- (void)showTransport;	// 0x32dd7ecd
- (void)showTransportWithLongTimeout;	// 0x32dd7e0d
- (void)showTransportWithMediumTimeout;	// 0x32dd7e4d
- (void)showTransportWithShortTimeout;	// 0x32dd7e8d
@end


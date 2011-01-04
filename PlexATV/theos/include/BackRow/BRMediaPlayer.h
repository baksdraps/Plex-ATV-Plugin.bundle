/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRTransportDataProvider.h"
#import "BackRow-Structs.h"

@class NSMutableArray;

@interface BRMediaPlayer : NSObject <BRTransportDataProvider> {
@private
	NSMutableArray *_stateStack;	// 4 = 0x4
}
@property(assign) long currentChapterIndex;	// G=0x32e098a1; S=0x32e09899; converted property
@property(assign) BOOL disablePlatformFilters;	// G=0x32e098fd; S=0x32e098f9; converted property
@property(assign) double elapsedTime;	// G=0x32e09859; S=0x32e09851; converted property
@property(assign) BOOL muted;	// G=0x32e09965; S=0x32e09961; converted property
@property(retain) id playerSpecificOptions;	// G=0x32e09975; S=0x32e09971; converted property
@property(assign) int repeatMode;	// G=0x32e09949; S=0x32e09945; converted property
@property(assign) long selectedAudioTrackID;	// G=0x32e09935; S=0x32e09931; converted property
@property(assign) long selectedSubtitleTrackID;	// G=0x32e09921; S=0x32e0991d; converted property
@property(assign) BOOL shufflePlayback;	// G=0x32e0993d; S=0x32e09939; converted property
@property(assign) BOOL skipExplicit;	// G=0x32e09955; S=0x32e09951; converted property
@property(assign) double startTime;	// G=0x32e09871; S=0x32e0986d; converted property
@property(assign) double stopTime;	// G=0x32e09865; S=0x32e09861; converted property
@property(assign) double virtualChapterMark;	// G=0x32e09889; S=0x32e09885; converted property
@property(assign) float volume;	// G=0x32e09c55; S=0x32e0996d; converted property
+ (BOOL)allowMultiplePlayers;	// 0x32e09811
+ (id)contentTypes;	// 0x32e0980d
+ (BOOL)handlesVideoForType:(id)type;	// 0x32e09815
- (id)init;	// 0x32e09d51
- (void)_checkPlayerMedia:(id)media;	// 0x32e09a3d
- (void)_invalidateAsset:(id)asset;	// 0x32e09a79
- (void)appendMediaToSlidingWindow:(id)slidingWindow;	// 0x32e09829
- (BOOL)attemptAuthorizationWithError:(id *)error;	// 0x32e09c81
- (id)audioTrackIDs;	// 0x32e09929
- (BRTimeRange)bufferedRange;	// 0x32e098d9
- (float)bufferingProgress;	// 0x32e098f1
- (long)chapterCount;	// 0x32e0989d
- (id)chapterImageProxyForIndex:(long)index;	// 0x32e098bd
- (long)chapterIndexForTime:(double)time;	// 0x32e098a5
- (BOOL)chapterIsPlayable:(long)playable;	// 0x32e098b9
- (id)chapterTimes;	// 0x32e09881
- (id)chapterTitleForIndex:(long)index;	// 0x32e098ad
- (void)clearStack;	// 0x32e09ad5
- (id)collection;	// 0x32e0982d
- (id)coverArtImageProxy;	// 0x32e098d1
- (BOOL)cueMediaWithError:(id *)error;	// 0x32e09cbd
// converted property getter: - (long)currentChapterIndex;	// 0x32e098a1
- (id)currentChapterTitle;	// 0x32e098a9
- (id)currentVideoFrame;	// 0x32e09909
- (void)dealloc;	// 0x32d7a959
- (id)debugStringForState:(int)state;	// 0x32e09979
// converted property getter: - (BOOL)disablePlatformFilters;	// 0x32e098fd
- (id)displayStringForAudioTrackID:(long)audioTrackID;	// 0x32e0992d
- (id)displayStringForSubtitleTrackID:(long)subtitleTrackID;	// 0x32e09919
- (double)duration;	// 0x32e09849
// converted property getter: - (double)elapsedTime;	// 0x32e09859
- (double)endTimeForChapter:(long)chapter;	// 0x32e098c9
- (BOOL)hasChapterPictures;	// 0x32e098b5
- (BOOL)hasChapters;	// 0x32e0987d
- (BOOL)hasRealChapters;	// 0x32e098b1
- (double)keyframeTimeNearTime:(double)time searchForwards:(BOOL)forwards;	// 0x32e0990d
- (id)media;	// 0x32d70899
- (long)mediaIndex;	// 0x32e09835
// converted property getter: - (BOOL)muted;	// 0x32e09965
- (void)nextChapter;	// 0x32e09891
- (void)nextMedia;	// 0x32e0995d
- (int)peekState;	// 0x32e09b79
// converted property getter: - (id)playerSpecificOptions;	// 0x32e09975
- (int)playerState;	// 0x32e0983d
- (BOOL)playingVisualContent;	// 0x32e09901
- (int)popState;	// 0x32e09afd
- (void)previousChapter;	// 0x32e09895
- (void)previousMedia;	// 0x32e09959
- (void)pushState:(int)state;	// 0x32e09bd9
// converted property getter: - (int)repeatMode;	// 0x32e09949
- (void)resetToBeginning;	// 0x32e09879
- (BOOL)reverseTouchSwipeBehavior;	// 0x32e0981d
// converted property getter: - (long)selectedAudioTrackID;	// 0x32e09935
// converted property getter: - (long)selectedSubtitleTrackID;	// 0x32e09921
// converted property setter: - (void)setCurrentChapterIndex:(long)index;	// 0x32e09899
// converted property setter: - (void)setDisablePlatformFilters:(BOOL)filters;	// 0x32e098f9
// converted property setter: - (void)setElapsedTime:(double)time;	// 0x32e09851
- (void)setElapsedTime:(double)time precise:(BOOL)precise;	// 0x32e09855
- (void)setMediaAsCurrentlyPlayingAppendingTrackList:(id)list;	// 0x32e09825
- (BOOL)setMediaAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x32e09d15
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x32e09821
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x32e09961
// converted property setter: - (void)setPlayerSpecificOptions:(id)options;	// 0x32e09971
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x32e09945
// converted property setter: - (void)setSelectedAudioTrackID:(long)anId;	// 0x32e09931
// converted property setter: - (void)setSelectedSubtitleTrackID:(long)anId;	// 0x32e0991d
// converted property setter: - (void)setShufflePlayback:(BOOL)playback;	// 0x32e09939
// converted property setter: - (void)setSkipExplicit:(BOOL)anExplicit;	// 0x32e09951
// converted property setter: - (void)setStartTime:(double)time;	// 0x32e0986d
- (BOOL)setState:(int)state error:(id *)error;	// 0x32e09839
// converted property setter: - (void)setStopTime:(double)time;	// 0x32e09861
// converted property setter: - (void)setVirtualChapterMark:(double)mark;	// 0x32e09885
// converted property setter: - (void)setVolume:(float)volume;	// 0x32e0996d
// converted property getter: - (BOOL)shufflePlayback;	// 0x32e0993d
// converted property getter: - (BOOL)skipExplicit;	// 0x32e09955
// converted property getter: - (double)startTime;	// 0x32e09871
- (double)startTimeForChapter:(long)chapter;	// 0x32e098c1
// converted property getter: - (double)stopTime;	// 0x32e09865
- (BOOL)stopsActiveAudioPlayer;	// 0x32e09819
- (id)subtitleTrackIDs;	// 0x32e09915
- (BOOL)supportsBufferedRange;	// 0x32e098d5
- (BOOL)supportsMultipleTrickSpeeds;	// 0x32e09841
- (BOOL)supportsRepeatModes;	// 0x32e0994d
- (BOOL)supportsShufflePlayback;	// 0x32e09941
- (BOOL)supportsTrickPlay;	// 0x32e09845
- (BOOL)supportsVolumeControl;	// 0x32e09969
- (int)swapState:(int)state;	// 0x32e09ba9
- (id)trackList;	// 0x32e09831
// converted property getter: - (double)virtualChapterMark;	// 0x32e09889
- (id)visuals;	// 0x32e09905
// converted property getter: - (float)volume;	// 0x32e09c55
@end


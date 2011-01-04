/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRMediaAsset.h"
//

@protocol BRMediaProvider;

@interface BRBaseMediaAsset : NSObject <BRMediaAsset> {
@private
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x32d877a9; S=0x32d87935; converted property
@property(assign) unsigned bookmarkTimeInSeconds;	// G=0x32d87779; S=0x32d7adbd; converted property
@property(assign) BOOL hasBeenPlayed;	// G=0x32d9ce35; S=0x32d7eacd; converted property
@property(retain) id lastPlayed;	// G=0x32d9ced5; S=0x32d9ced9; converted property
@property(assign) float userStarRating;	// G=0x32d9ce8d; S=0x32d9ce95; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x32d60ddd
- (id)artist;	// 0x32d9ce15
- (id)artistCollection;	// 0x32d9cee5
- (id)artistForSorting;	// 0x32d9ce19
- (id)assetID;	// 0x32d9ce0d
- (id)authorName;	// 0x32d9cee9
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x32d877a9
// converted property getter: - (unsigned)bookmarkTimeInSeconds;	// 0x32d87779
- (id)broadcaster;	// 0x32d9ce79
- (BOOL)canBePlayedInShuffle;	// 0x32d9cf05
- (id)cast;	// 0x32d9d335
- (id)category;	// 0x32d9cef5
- (void)cleanUpPlaybackContext;	// 0x32d9cf19
- (BOOL)closedCaptioned;	// 0x32d9cea5
- (id)collections;	// 0x32d9d25d
- (id)composer;	// 0x32d9ceb9
- (id)composerForSorting;	// 0x32d9cebd
- (id)copyright;	// 0x32d9ce21
- (void *)createMovieWithProperties:(void *)properties count:(long)count;	// 0x32d7e7c5
- (id)dateAcquired;	// 0x32d9ce4d
- (id)dateAcquiredString;	// 0x32d9d239
- (id)dateCreated;	// 0x32d9ce51
- (id)dateCreatedString;	// 0x32d9d215
- (id)datePublished;	// 0x32d9ce55
- (id)datePublishedString;	// 0x32d9d1f1
- (void)dealloc;	// 0x32d7ee35
- (id)directors;	// 0x32d9d315
- (BOOL)dolbyDigital;	// 0x32d9cea9
- (long)duration;	// 0x32d9ce25
- (unsigned)episode;	// 0x32d9ce85
- (id)episodeNumber;	// 0x32d9ce7d
- (BOOL)forceHDCPProtection;	// 0x32d9cecd
- (id)genres;	// 0x32d9d2c1
- (int)grFormat;	// 0x32d9cefd
// converted property getter: - (BOOL)hasBeenPlayed;	// 0x32d9ce35
- (BOOL)hasCoverArt;	// 0x32d9ce49
- (BOOL)hasVideoContent;	// 0x32d9cec1
- (unsigned)hash;	// 0x32d9d1ad
- (id)imageProxy;	// 0x32d9ce45
- (id)imageProxyWithBookMarkTimeInMS:(unsigned)ms;	// 0x32d9d2e1
- (void)incrementPerformanceCount;	// 0x32d9ce2d
- (void)incrementPerformanceOrSkipCount:(unsigned)count;	// 0x32d9ce31
- (BOOL)isAvailable;	// 0x32d9cf09
- (BOOL)isCheckedOut;	// 0x32d9cf35
- (BOOL)isDisabled;	// 0x32d9cec5
- (BOOL)isEqual:(id)equal;	// 0x32d83491
- (BOOL)isExplicit;	// 0x32d9cf25
- (BOOL)isHD;	// 0x32d9ce9d
- (BOOL)isInappropriate;	// 0x32d9cef9
- (BOOL)isLocal;	// 0x32d835cd
- (BOOL)isPlaying;	// 0x32d9d061
- (BOOL)isPlayingOrPaused;	// 0x32d9cf39
- (BOOL)isProtectedContent;	// 0x32d9cec9
- (BOOL)isValid;	// 0x32d9ce11
- (BOOL)isWidescreen;	// 0x32d9cea1
- (id)keywords;	// 0x32d9ceed
// converted property getter: - (id)lastPlayed;	// 0x32d9ced5
- (void)logDescription;	// 0x32d9d3a9
- (id)mediaCollections;	// 0x32d9ce89
- (id)mediaDescription;	// 0x32d85fcd
- (id)mediaObjectID;	// 0x32d9d395
- (id)mediaSummary;	// 0x32d9ce1d
- (id)mediaType;	// 0x32d9ce59
- (id)mediaURL;	// 0x32d9ce39
- (long)parentalControlRatingRank;	// 0x32d9cf21
- (long)parentalControlRatingSystemID;	// 0x32d9cf1d
- (void)performSelector:(SEL)selector target:(id)target;	// 0x32d9d195
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x32d9d17d
- (long)performanceCount;	// 0x32d9ce29
- (int)physicalMediaID;	// 0x32d9ce69
- (BOOL)playable;	// 0x32d87775
- (id)playbackMetadata;	// 0x32d9cf29
- (id)playbackRightsOwner;	// 0x32d9ced1
- (void)preparePlaybackContext;	// 0x32d9cf15
- (id)previewURL;	// 0x32d9ce3d
- (id)primaryCollection;	// 0x32d9cee1
- (int)primaryCollectionOrder;	// 0x32d9ce61
- (id)primaryCollectionTitle;	// 0x32d8a429
- (id)primaryCollectionTitleForSorting;	// 0x32d9d27d
- (id)primaryGenre;	// 0x32d9ce5d
- (id)producers;	// 0x32d9d2f5
- (id)provider;	// 0x32d7089d
- (id)publisher;	// 0x32d9ceb5
- (id)rating;	// 0x32d9ce99
- (id)resolution;	// 0x32d9d1d1
- (unsigned)season;	// 0x32d9ce81
- (id)seriesName;	// 0x32d9ce71
- (id)seriesNameForSorting;	// 0x32d9ce75
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x32d87935
// converted property setter: - (void)setBookmarkTimeInSeconds:(unsigned)seconds;	// 0x32d7adbd
// converted property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x32d7eacd
// converted property setter: - (void)setLastPlayed:(id)played;	// 0x32d9ced9
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;	// 0x32d9cf2d
// converted property setter: - (void)setUserStarRating:(float)rating;	// 0x32d9ce95
- (void)skip;	// 0x32d9cf0d
- (id)sourceID;	// 0x32d9cf31
- (float)starRating;	// 0x32d9cead
- (unsigned)startTimeInMS;	// 0x32d7e821
- (unsigned)startTimeInSeconds;	// 0x32d7e7f5
- (unsigned)stopTimeInMS;	// 0x32d9cedd
- (unsigned)stopTimeInSeconds;	// 0x32d9d2a1
- (id)title;	// 0x32d9d369
- (id)titleForSorting;	// 0x32d9d355
- (id)trickPlayURL;	// 0x32d9ce41
// converted property getter: - (float)userStarRating;	// 0x32d9ce8d
- (id)viewCount;	// 0x32d9cef1
- (void)willBeDeleted;	// 0x32d9cf11
@end


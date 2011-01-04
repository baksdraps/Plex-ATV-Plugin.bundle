/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRImageControl.h"

@class NSTimer;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRCoverArtImageLayer : BRImageControl {
@private
	id<BRImageProxy> _imageProxy;	// 64 = 0x40
	BOOL _deletterboxImage;	// 68 = 0x44
	BOOL _showsDefaultCoverArt;	// 69 = 0x45
	BOOL _showsBorder;	// 70 = 0x46
	NSTimer *_setCoverArtTimer;	// 72 = 0x48
}
@property(assign) BOOL deletterboxImage;	// G=0x32df0725; S=0x32df07b5; converted property
@property(assign) BOOL showsBorder;	// G=0x32df0755; S=0x32df0825; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x32df0745; S=0x32df0735; converted property
- (id)init;	// 0x32d84429
- (void)_coverArtChanged:(id)changed;	// 0x32d87c7d
- (void)_setCoverArtImage:(id)image;	// 0x32d84785
- (void)_setCoverArtImageWithDelay:(id)delay;	// 0x32df0765
- (void)_updateCoverArt;	// 0x32d84671
- (void)dealloc;	// 0x32d84d19
// converted property getter: - (BOOL)deletterboxImage;	// 0x32df0725
// converted property setter: - (void)setDeletterboxImage:(BOOL)image;	// 0x32df07b5
- (void)setImageProxy:(id)proxy;	// 0x32df07dd
// converted property setter: - (void)setShowsBorder:(BOOL)border;	// 0x32df0825
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x32df0735
// converted property getter: - (BOOL)showsBorder;	// 0x32df0755
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x32df0745
@end


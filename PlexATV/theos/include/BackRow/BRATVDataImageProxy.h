/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRImageProxy.h"
//

@class NSMutableArray;

@interface BRATVDataImageProxy : NSObject <BRImageProxy> {
@private
	void *_mediaObject;	// 4 = 0x4
	ATVDataClientRef _dataClient;	// 8 = 0x8
	NSMutableArray *_savedTokens;	// 12 = 0xc
	BOOL _usesScreenSaverImageManager;	// 16 = 0x10
}
+ (id)imageProxyWithMediaObject:(void *)mediaObject;	// 0x32e50645
- (id)initWithMediaObject:(void *)mediaObject;	// 0x32e506f1
- (void)_cancelImageForImageID:(id)imageID;	// 0x32e50849
- (id)_imageIDForImageSize:(int)imageSize;	// 0x32e503b9
- (id)_imageIDStringForSize:(int)size;	// 0x32e50339
- (id)_imageManager;	// 0x32e50379
- (void *)_mediaID;	// 0x32e508f5
- (void)_removeTokenForImageID:(id)imageID;	// 0x32e5046d
- (void)_saveToken:(void *)token forImageID:(id)imageID;	// 0x32e504bd
- (id)_tokenInfoForImageID:(id)imageID;	// 0x32e5050d
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x32e50581
- (void)dealloc;	// 0x32e507dd
- (id)defaultImageForImageSize:(int)imageSize;	// 0x32e50679
- (id)imageForImageSize:(int)imageSize;	// 0x32e509a5
- (id)imageIDForImageSize:(int)imageSize;	// 0x32e50631
- (id)object;	// 0x32e50319
- (void)setUsesScreenSaverImageManager:(BOOL)manager;	// 0x32e50329
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x32e50315
@end


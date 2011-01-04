/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
//

@class NSString, NSURL, NSData;

@interface BRImage : NSObject {
@private
	CGImageRef _image;	// 4 = 0x4
	NSString *_accessibilityLabel;	// 8 = 0x8
	CGImageSourceRef _imageSource;	// 12 = 0xc
	float _imageWidth;	// 16 = 0x10
	float _imageHeight;	// 20 = 0x14
	int _imageOrientation;	// 24 = 0x18
	BOOL _enableCache;	// 28 = 0x1c
	NSURL *_imageURL;	// 32 = 0x20
	NSData *_imageData;	// 36 = 0x24
	int _dispatchOncePred;	// 40 = 0x28
}
@property(retain) NSString *accessibilityLabel;	// G=0x32da3e49; S=0x32da3e71; converted property
@property(assign) BOOL enableCache;	// G=0x32da3e25; S=0x32da3e15; converted property
@property(readonly, assign) CGImageRef image;	// G=0x32d5e66d; converted property
+ (id)imageWithCGImageRef:(CGImageRef)cgimageRef;	// 0x32d6d09d
+ (id)imageWithData:(id)data;	// 0x32d6ff81
+ (id)imageWithPDFURL:(id)pdfurl;	// 0x32d89e91
+ (id)imageWithPath:(id)path;	// 0x32d5e359
+ (id)imageWithRotationFromData:(id)data;	// 0x32da4395
+ (id)imageWithRotationFromPath:(id)path;	// 0x32da3ead
+ (id)imageWithRotationFromURL:(id)url;	// 0x32da4199
+ (id)imageWithURL:(id)url;	// 0x32d5e3b9
- (id)initWithCGImageRef:(CGImageRef)cgimageRef;	// 0x32d5e41d
- (id)initWithData:(id)data;	// 0x32da41f9
- (id)initWithURL:(id)url;	// 0x32da3ffd
- (id)_initWithCGImageSource:(CGImageSourceRef)cgimageSource;	// 0x32da3ee5
- (void)_initializeCGImageWithRotation;	// 0x32da47a9
- (void)_makeImage;	// 0x32da4825
// converted property getter: - (id)accessibilityLabel;	// 0x32da3e49
- (float)aspectRatio;	// 0x32d6f4e5
- (id)croppedImageForSize:(CGSize)size;	// 0x32da4595
- (void)dealloc;	// 0x32d6a56d
- (id)deletterboxedImage;	// 0x32da4b19
- (void)drawImageInContext:(CGContextRef)context rect:(CGRect)rect;	// 0x32d6d459
// converted property getter: - (BOOL)enableCache;	// 0x32da3e25
// converted property getter: - (CGImageRef)image;	// 0x32d5e66d
- (BOOL)isAccessibilityElement;	// 0x32da3e35
- (BOOL)isPowerOfTwo;	// 0x32d8d0e1
- (CGRect)largestSquareRect;	// 0x32d8c0e1
- (id)mapImageWithSourceRect:(CGRect)sourceRect toSize:(CGSize)size;	// 0x32da44c9
- (CGSize)pixelBounds;	// 0x32d61bb1
- (void)purgeRawData;	// 0x32e152b9
- (id)rawData;	// 0x32e152b5
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x32da3e71
// converted property setter: - (void)setEnableCache:(BOOL)cache;	// 0x32da3e15
- (BOOL)sourceRequiresRotation;	// 0x32da3dfd
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)aspectRatioLimit;	// 0x32da43f5
@end


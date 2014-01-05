/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

//
#import "BRAppliance.h"

@class NSArray;

@interface BRBaseAppliance : NSObject <BRAppliance> {
@private
	NSArray *_categories;	// 4 = 0x4
}
- (id)init;	// 0x32d62bf5
- (BOOL)_anySharesAvailable;	// 0x32d692b5
- (BOOL)_anyStoreCategoryExistsInMusicStoreCollection:(id)musicStoreCollection;	// 0x32d8f4f5
- (id)_applianceCategories;	// 0x32d67a39
- (BOOL)_isCategoryWithIdentifier:(id)identifier memberOfMusicStoreCollection:(id)musicStoreCollection;	// 0x32d69679
- (id)accessibilityLabel;	// 0x32d8f719
- (id)alertControllerForNoContent;	// 0x32d87a5d
- (id)alertControllerForNoRemoteContent;	// 0x32d8f639
- (id)applianceCategories;	// 0x32d6795d
- (id)applianceCategoryDescriptions;	// 0x32d8f615
- (id)applianceInfo;	// 0x32d62d11
- (id)baseMediaType;	// 0x32d67e6d
- (id)categoryWithIdentifier:(id)identifier;	// 0x32d6cb69
- (id)controllerForIdentifier:(id)identifier args:(id)args;	// 0x32d8f4c5
- (void)dealloc;	// 0x32d63415
- (id)description;	// 0x32d8f695
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x32d8f4c9
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x32d8f4cd
- (id)identifierForContentAlias:(id)contentAlias;	// 0x32d8f4c1
- (id)musicStoreItemWithIdentifier:(id)identifier;	// 0x32d6cc29
- (int)noContentBRError;	// 0x32d8f4d1
- (int)noRemoteContentBRError;	// 0x32d8f4d9
- (BOOL)previewError;	// 0x32d8f4e1
- (id)previewErrorIconImage;	// 0x32d8f4ed
- (id)previewErrorSubtext;	// 0x32d8f4e9
- (id)previewErrorText;	// 0x32d8f4e5
- (void)reloadCategories;	// 0x32d8f5b9
- (id)topShelfController;	// 0x32d8f4f1
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */



@interface BRBaseMenuItemLayerPopulator : NSObject {
@private
	id _object;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	unsigned _matchOrder;	// 12 = 0xc
}
@property(readonly, assign) unsigned matchOrder;	// G=0x32d6371d; converted property
+ (BOOL)canHandleObject:(id)object;	// 0x32dd953d
- (id)init;	// 0x32d63671
- (void)dealloc;	// 0x32dd96fd
- (id)dividerLayer;	// 0x32dd9599
- (id)lowerCenteredString;	// 0x32dd9555
- (id)lowerLeftString;	// 0x32dd9551
- (id)lowerRightImage;	// 0x32dd9561
// converted property getter: - (unsigned)matchOrder;	// 0x32d6371d
- (id)menuItem;	// 0x32dd95fd
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x32dd96a9
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x32dd9541
- (id)rightJustifiedText;	// 0x32dd9549
- (void)setObject:(id)object;	// 0x32dd961d
- (BOOL)shouldUseMultilineItem:(id)item;	// 0x32dd9565
- (id)subtitle;	// 0x32dd954d
- (id)thumbnailImage;	// 0x32dd9559
- (id)title;	// 0x32dd9545
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x32dd9655
- (id)upperRightImage;	// 0x32dd955d
@end


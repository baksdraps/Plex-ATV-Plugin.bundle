/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRMediaMenuController.h"
#import "BRTabControlDelegate.h"

@class BRPreferences, NSSet, NSMutableDictionary, BRTabControl, NSString;
@protocol BRProvider;

@interface BRSeriesMediaMenuController : BRMediaMenuController <BRTabControlDelegate> {
@private
	NSSet *_mediaTypes;	// 132 = 0x84
	long _errorNumberForNoContent;	// 136 = 0x88
	BOOL _forSharedContent;	// 140 = 0x8c
	BOOL _showUnwatchedOnly;	// 141 = 0x8d
	NSString *_series;	// 144 = 0x90
	int _sortState;	// 148 = 0x94
	BRPreferences *_prefs;	// 152 = 0x98
	NSMutableDictionary *_savedSelectionBySortState;	// 156 = 0x9c
	BRTabControl *_tabControl;	// 160 = 0xa0
	id<BRProvider> _playlistProvider;	// 164 = 0xa4
	id<BRProvider> _dateProvider;	// 168 = 0xa8
	id<BRProvider> _showProvider;	// 172 = 0xac
	id<BRProvider> _unwatchedProvider;	// 176 = 0xb0
}
@property(assign) long errorNumberForNoContent;	// G=0x32d9a8b5; S=0x32d9a8a5; converted property
@property(readonly, assign) BOOL forSharedContent;	// G=0x32d9a875; converted property
@property(assign) int sortState;	// G=0x32d9a885; S=0x32d9c13d; converted property
@property(retain) BRTabControl *tabControl;	// G=0x32d9a895; S=0x32d9c0c1; converted property
+ (id)seriesControllerForTypes:(id)types;	// 0x32d9c82d
+ (id)seriesControllerForTypes:(id)types forSeries:(id)series;	// 0x32d9c789
+ (id)seriesUnwatchedControllerForTypes:(id)types forSeries:(id)series;	// 0x32d9c735
+ (id)sharedSeriesControllerForTypes:(id)types;	// 0x32d9c7dd
- (id)init;	// 0x32d9c6f9
- (id)initWithTypes:(id)types forSeries:(id)series forSharedContent:(BOOL)sharedContent;	// 0x32d9c4d1
- (id)initWithTypes:(id)types forSharedContent:(BOOL)sharedContent;	// 0x32d9c4fd
- (void)_buildPlaylistsMenu;	// 0x32d9aab9
- (BOOL)_checkProviderOK:(id)ok;	// 0x32d9a949
- (id)_currentProviders;	// 0x32d9b20d
- (id)_deepestFocusedControl;	// 0x32d9a925
- (void)_handleContextMenuSelection:(id)selection;	// 0x32d9adf9
- (id)_hashForIndex:(long)index;	// 0x32d9ad35
- (id)_identifierFromTypes:(id)types;	// 0x32d9cab9
- (id)_initWithTypes:(id)types forSeries:(id)series forSharedContent:(BOOL)sharedContent forceFilterOutWatched:(BOOL)watched;	// 0x32d9b2b5
- (void)_itemSelected;	// 0x32d9b091
- (id)_playlistProvider;	// 0x32d9ab59
- (id)_playlistsParade;	// 0x32d9a9dd
- (long)_rowForHash:(id)hash;	// 0x32d9ad75
- (id)_sortOrderFilterPrefKey;	// 0x32d9ba09
- (id)actionItemAtIndex:(long)index;	// 0x32d9bf5d
- (id)actionSelectionHandlerForItemAtIndex:(long)index;	// 0x32d9bfb1
- (void)arrayItemSelected:(id)selected;	// 0x32d9b909
- (BOOL)brEventAction:(id)action;	// 0x32d9c879
- (id)controlForContextMenuPositioning;	// 0x32d9bab1
- (id)controlForContextMenuStart;	// 0x32d9bac5
- (void)controlWasActivated;	// 0x32d9c31d
- (void)dealloc;	// 0x32d9c3d1
- (int)defaultSortItem;	// 0x32d9a8cd
// converted property getter: - (long)errorNumberForNoContent;	// 0x32d9a8b5
// converted property getter: - (BOOL)forSharedContent;	// 0x32d9a875
- (BOOL)isValidAfterDataUpdate;	// 0x32d9c049
- (id)itemForContextMenuFromSelection:(id)selection;	// 0x32d9b7fd
- (id)keyForSortState:(int)sortState;	// 0x32d9a90d
- (void)layoutSubcontrols;	// 0x32d9c975
- (void)mediaAssetSelected:(id)selected;	// 0x32d9b8d5
- (BOOL)okToShowNoItemsWithCurrentProvider:(id)currentProvider;	// 0x32d9b85d
- (id)providerForSortState:(int)sortState;	// 0x32d9a8d1
- (id)providersForContextMenu;	// 0x32d9bad9
- (void)setDefaultSelection;	// 0x32d9b6f1
// converted property setter: - (void)setErrorNumberForNoContent:(long)noContent;	// 0x32d9a8a5
// converted property setter: - (void)setSortState:(int)state;	// 0x32d9c13d
// converted property setter: - (void)setTabControl:(id)control;	// 0x32d9c0c1
- (BOOL)showPlaylists;	// 0x32d9b8a9
- (BOOL)showUnwatched;	// 0x32d9a865
// converted property getter: - (int)sortState;	// 0x32d9a885
// converted property getter: - (id)tabControl;	// 0x32d9a895
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x32d9bef5
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x32d9a8c5
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x32d9a8c9
@end


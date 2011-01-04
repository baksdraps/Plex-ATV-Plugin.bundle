/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRViewController.h"

@class BRMediaMenuView, NSArray, NSTimer;

@interface BRDataQueryController : BRViewController {
@private
	id _serverID;	// 60 = 0x3c
	int _dataClientType;	// 64 = 0x40
	ATVDataClientRef _dataClient;	// 68 = 0x44
	BRMediaMenuView *_mediaMenuView;	// 72 = 0x48
	NSArray *_data;	// 76 = 0x4c
	ATVMediaQueryRef _preDataQuery;	// 80 = 0x50
	ATVMediaQueryRef _dataQuery;	// 84 = 0x54
	ATVMediaQueryRef _previewQuery;	// 88 = 0x58
	NSTimer *_spinnerTimer;	// 92 = 0x5c
	BOOL _showingSpinner;	// 96 = 0x60
	void *_dataItemToSelect;	// 100 = 0x64
	ATVMediaQueryRef _playQuery;	// 104 = 0x68
	BOOL _handlingDataClientUpdate;	// 108 = 0x6c
	BOOL _refreshNeeded;	// 109 = 0x6d
	BOOL _reloadListViewNeeded;	// 110 = 0x6e
	NSTimer *_serverFoundWaitTimer;	// 112 = 0x70
	BOOL attemptConnectionOnServerRemove;	// 116 = 0x74
}
@property(assign, nonatomic) BOOL attemptConnectionOnServerRemove;	// G=0x32e4dfd1; S=0x32e4dfe1; @synthesize
@property(readonly, retain) NSArray *data;	// G=0x32e4df79; converted property
@property(readonly, assign) ATVDataClientRef dataClient;	// G=0x32e4dfa9; converted property
@property(readonly, assign) int dataClientType;	// G=0x32e4df99; converted property
@property(assign) void *dataItemToSelect;	// G=0x32e4dfb9; S=0x32e4f101; converted property
@property(readonly, retain) BRMediaMenuView *mediaMenuView;	// G=0x32e4df69; converted property
@property(readonly, retain) id serverID;	// G=0x32e4df89; converted property
- (id)init;	// 0x32e4e515
- (id)initWithServerID:(id)serverID dataClientType:(int)type;	// 0x32e4e6cd
- (void)_dataClientConnectionHandler:(id)handler;	// 0x32e4f861
- (void)_dataClientConnectionHandlerWithObject:(id)object;	// 0x32e4e9d5
- (void)_dataClientDataUpdated:(id)updated;	// 0x32e4e0f1
- (void)_dataClientStatusChanged:(id)changed;	// 0x32e4e985
- (void)_dataQueryComplete;	// 0x32e4e24d
- (void)_dataServerConnectionHandler:(id)handler;	// 0x32e4e921
- (void)_dataServersChangedHandler:(id)handler;	// 0x32e4fa39
- (void)_executeDataQuery;	// 0x32e4f131
- (void)_executePreDataQuery;	// 0x32e4f221
- (void)_handleDataQueryCompletion;	// 0x32e4f40d
- (BOOL)_isDataServerEqual:(ATVDataServerRef)equal;	// 0x32e4fdad
- (void)_mediaItemPropertySetNotification:(id)notification;	// 0x32e4e071
- (void)_playQueryComplete;	// 0x32e4e171
- (void)_preDataQueryComplete;	// 0x32e4f3bd
- (void)_previewQueryComplete;	// 0x32e4f375
- (void)_serverFoundWaitHandler:(id)handler;	// 0x32e4e029
- (void)_setDataClient:(ATVDataClientRef)client;	// 0x32e4f009
- (void)_setDataQuery:(ATVMediaQueryRef)query;	// 0x32e4ef99
- (void)_setPlayQuery:(ATVMediaQueryRef)query;	// 0x32e4ef29
- (void)_setPreDataQuery:(ATVMediaQueryRef)query;	// 0x32e4efd1
- (void)_setPreviewQuery:(ATVMediaQueryRef)query;	// 0x32e4ef61
- (void)_showSpinner;	// 0x32e4f739
- (void)_showSpinner:(BOOL)spinner delay:(BOOL)delay;	// 0x32e4e325
- (void)_updateDisabledStateForMenusInList:(id)list;	// 0x32e4f5c1
- (id)accessibilityScreenContent;	// 0x32e4e3e9
// declared property getter: - (BOOL)attemptConnectionOnServerRemove;	// 0x32e4dfd1
- (ATVMediaQueryRef)createDataQuery;	// 0x32e4dff9
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x32e4e011
- (ATVMediaQueryRef)createPreDataQuery;	// 0x32e4dff1
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x32e4e001
// converted property getter: - (id)data;	// 0x32e4df79
// converted property getter: - (ATVDataClientRef)dataClient;	// 0x32e4dfa9
- (id)dataClientName;	// 0x32e4eeed
// converted property getter: - (int)dataClientType;	// 0x32e4df99
- (BOOL)dataClientUpdated:(ATVDataClientRef)updated;	// 0x32e4e021
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x32e4e00d
// converted property getter: - (void *)dataItemToSelect;	// 0x32e4dfb9
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x32e4dffd
- (ATVDataServerRef)dataServer;	// 0x32e4ef09
- (BOOL)dataServerConnectionChanged:(ATVDataServerRef)changed;	// 0x32e4e025
- (void)dealloc;	// 0x32e4e7c9
- (id)errorControlForQuery:(ATVMediaQueryRef)query;	// 0x32e4e01d
- (id)errorForNoContent;	// 0x32e4e019
- (id)identifier;	// 0x32e4e4f5
- (id)indexPathForDataItem:(void *)dataItem;	// 0x32e4e009
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x32e4f2fd
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x32e4f2a1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x32e4dfcd
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x32e4dfc9
// converted property getter: - (id)mediaMenuView;	// 0x32e4df69
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x32e4e015
- (BOOL)preDataQueryComplete:(id)complete;	// 0x32e4dff5
- (id)previewForItems:(id)items;	// 0x32e4e419
- (BOOL)previewQueryComplete:(ATVMediaQueryRef)complete;	// 0x32e4e005
- (void)restartDataQueryProcess;	// 0x32e4e4c9
// converted property getter: - (id)serverID;	// 0x32e4df89
// declared property setter: - (void)setAttemptConnectionOnServerRemove:(BOOL)remove;	// 0x32e4dfe1
// converted property setter: - (void)setDataItemToSelect:(void *)select;	// 0x32e4f101
- (void)setServerID:(id)anId dataClientType:(int)type;	// 0x32e4ee09
- (void)wasExhumed;	// 0x32e4e53d
- (void)wasPopped;	// 0x32e4e5e5
- (void)wasPushed;	// 0x32e4eb05
@end


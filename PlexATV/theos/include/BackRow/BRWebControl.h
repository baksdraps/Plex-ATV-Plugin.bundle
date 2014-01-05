/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"
#import "WebWindowDelegate.h"
#import "BRTextField.h"

@class BRWebFormHelper, BRWebWindowControl, NSMutableString, BRCursorControl, NSURLRequest, NSMutableArray, BRWebPointerControl, NSValue;
@protocol BRWebControlDelegate;

@interface BRWebControl : BRControl <WebWindowDelegate, BRTextField> {
@private
	NSMutableArray *_eventListeners;	// 40 = 0x28
	NSURLRequest *_request;	// 44 = 0x2c
	id<BRWebControlDelegate> _delegate;	// 48 = 0x30
	BRWebWindowControl *_webPage;	// 52 = 0x34
	BRWebPointerControl *_pointer;	// 56 = 0x38
	BRWebFormHelper *_formHelper;	// 60 = 0x3c
	BRCursorControl *_cursor;	// 64 = 0x40
	NSValue *_restoreFocus;	// 68 = 0x44
	CGColorRef _defaultBackgroundColor;	// 72 = 0x48
	CGSize _pageSize;	// 76 = 0x4c
	double _savedAutoPresentTimeout;	// 84 = 0x54
	BOOL _layoutComplete;	// 92 = 0x5c
	BOOL _resetPage;	// 93 = 0x5d
	BOOL _hdtvfullscreen;	// 94 = 0x5e
	BOOL _eventHandledByPage;	// 95 = 0x5f
	BOOL _sleeping;	// 96 = 0x60
	BOOL _disableNowPlaying;	// 97 = 0x61
	BOOL _consoleDisplayScheduled;	// 98 = 0x62
	long _pointerRepeat;	// 100 = 0x64
	BOOL _pointerForRemote;	// 104 = 0x68
	struct {
		NSMutableArray *all;
		NSMutableArray *html;
		NSMutableArray *javascript;
		NSMutableArray *css;
		NSMutableArray *error;
		NSMutableArray *warning;
		NSMutableArray *tip;
		NSMutableArray *log;
	} _messages;	// 108 = 0x6c
	NSMutableString *_consoleMessages;	// 140 = 0x8c
}
@property(assign) BOOL allowsMessaging;	// G=0x32e28a65; S=0x32e28a99; converted property
@property(assign) CGColorRef defaultBackgroundColor;	// G=0x32e244e9; S=0x32e263a5; converted property
@property(assign) id delegate;	// G=0x32e244b9; S=0x32e244c9; converted property
@property(assign) BOOL opaque;	// G=0x32e25151; S=0x32e25181; converted property
@property(readonly, retain) NSURLRequest *request;	// G=0x32e25429; converted property
@property(assign) BOOL sleeping;	// G=0x32e244d9; S=0x32e25211; converted property
+ (void)initialize;	// 0x32e258bd
+ (Class)layerClass;	// 0x32e25861
+ (id)webMediaPlayerProxy;	// 0x32e25881
- (id)init;	// 0x32e25ed9
- (id)_activeDocument;	// 0x32e247b1
- (BOOL)_clickOnFocusedElement:(BOOL)element;	// 0x32e272e5
- (void)_determineCursorState:(id)state;	// 0x32e24685
- (void)_displayJavaScriptConsole;	// 0x32e24999
- (id)_findContentValueForMetaTagNamed:(id)metaTagNamed metaTags:(id)tags;	// 0x32e245b1
- (void)_handleCustomEvent:(id)event;	// 0x32e24841
- (BOOL)_handleFocusEvent:(id)event;	// 0x32e24a25
- (BOOL)_handlePageEvent:(id)event;	// 0x32e26fb5
- (BOOL)_handlePointerClickEvent:(id)event;	// 0x32e271cd
- (BOOL)_handlePointerDirectionalEvent:(id)event;	// 0x32e27539
- (BOOL)_handlePointerEvent:(id)event;	// 0x32e249d1
- (BOOL)_handleScrollEvent:(id)event;	// 0x32e273b1
- (void)_installJSEventHandlers:(id)handlers;	// 0x32e24abd
- (void)_loadProgressUpdated:(id)updated;	// 0x32e250ed
- (CGSize)_minimumPageSize;	// 0x32e27a99
- (CGPoint)_mousePointForElement:(id)element;	// 0x32e2597d
- (id)_newFocusForEvent:(id)event;	// 0x32e25a11
- (void)_nextRunLoopDisplayJavaScriptConsole;	// 0x32e24941
- (void)_processMetaTagsForWebView:(id)webView;	// 0x32e27b7d
- (CGRect)_safeContentRect;	// 0x32e26ecd
- (CGPoint)_scrollPoint;	// 0x32e25ac1
- (void)_scrollToPointOnPage:(CGPoint)pointOnPage;	// 0x32e27d21
- (void)_scrollToRectOnPage:(CGRect)rectOnPage;	// 0x32e26d29
- (void)_setLayoutComplete:(BOOL)complete;	// 0x32e24c7d
- (void)_updateControls;	// 0x32e24c01
- (void)_updateDefaultFocus;	// 0x32e278a5
- (void)_webControlDidReceiveMessage:(id)_webControl;	// 0x32e26949
- (void)_webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame provisional:(BOOL)provisional;	// 0x32e248a5
- (void)_webviewSizeChanged:(id)changed;	// 0x32e2683d
- (void)addInputString:(id)string;	// 0x32e24d85
// converted property getter: - (BOOL)allowsMessaging;	// 0x32e28a65
- (BOOL)brEventAction:(id)action;	// 0x32e25645
- (BOOL)brKeyEvent:(id)event;	// 0x32e255dd
- (BOOL)canGoBack;	// 0x32e25339
- (BOOL)canGoForward;	// 0x32e25309
- (void)clearMessagesMatchingMask:(int)mask;	// 0x32e28851
- (void)close;	// 0x32e25131
- (CGPoint)contentsPointForWebView:(id)webView;	// 0x32e25c11
- (void)controlWasActivated;	// 0x32e25799
- (void)controlWasDeactivated;	// 0x32e256d5
- (void)dealloc;	// 0x32e263c9
// converted property getter: - (CGColorRef)defaultBackgroundColor;	// 0x32e244e9
// converted property getter: - (id)delegate;	// 0x32e244b9
- (void)deleteFromInput;	// 0x32e24d4d
- (BOOL)deliverKeypress:(int)keypress;	// 0x32e26749
- (CGRect)documentVisibleRectForWebView:(id)webView;	// 0x32e25ba5
- (double)estimatedProgress;	// 0x32e252a9
- (void)focusedElementChangedTo:(id)to forWindow:(id)window;	// 0x32e27149
- (id)generateSnapshot;	// 0x32e26619
- (void)goBack;	// 0x32e25399
- (void)goForward;	// 0x32e25369
- (void)handleKeypressEvent:(id)event;	// 0x32e26809
- (void)layoutSubcontrols;	// 0x32e27e55
- (void)loadRequest:(id)request;	// 0x32e25491
- (BOOL)loading;	// 0x32e252d9
- (id)messagesMatchingMask:(int)mask;	// 0x32e28785
// converted property getter: - (BOOL)opaque;	// 0x32e25151
- (id)preferredActionForKey:(id)key;	// 0x32e251b5
- (void)reload;	// 0x32e253f9
// converted property getter: - (id)request;	// 0x32e25429
// converted property setter: - (void)setAllowsMessaging:(BOOL)messaging;	// 0x32e28a99
// converted property setter: - (void)setDefaultBackgroundColor:(CGColorRef)color;	// 0x32e263a5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32e244c9
// converted property setter: - (void)setOpaque:(BOOL)opaque;	// 0x32e25181
// converted property setter: - (void)setSleeping:(BOOL)sleeping;	// 0x32e25211
- (void)setString:(id)string;	// 0x32e2559d
// converted property getter: - (BOOL)sleeping;	// 0x32e244d9
- (void)stopLoading;	// 0x32e253c9
- (id)stringValue;	// 0x32e255bd
- (id)title;	// 0x32e25279
- (void)webView:(id)view attachRootLayer:(id)layer;	// 0x32e24df5
- (void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;	// 0x32e247ed
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x32e27d59
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x32e24e91
- (void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;	// 0x32e24e65
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x32e24ebd
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;	// 0x32e24f75
- (void)webView:(id)view didReceiveMessage:(id)message;	// 0x32e28acd
- (void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;	// 0x32e24fcd
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x32e2505d
- (id)webView:(id)view plugInViewWithArguments:(id)arguments fromPlugInPackage:(id)package;	// 0x32e24e3d
- (void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x32e244fd
- (void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x32e26b01
- (void)webView:(id)view restoreStateFromHistoryItem:(id)historyItem forFrame:(id)frame force:(BOOL)force;	// 0x32e25c8d
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x32e244f9
- (void)webView:(id)view saveStateToHistoryItem:(id)historyItem forFrame:(id)frame;	// 0x32e25da9
- (BOOL)webView:(id)view shouldScrollToPoint:(CGPoint)point forFrame:(id)frame;	// 0x32e25b0d
- (void)webViewDidLayout:(id)webView;	// 0x32e24dbd
@end

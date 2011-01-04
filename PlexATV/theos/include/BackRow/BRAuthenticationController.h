/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRController.h"

@class BRWaitPromptControl, BRAuthenticationResources, BRAccountType, NSTimer;

@interface BRAuthenticationController : BRController {
@private
	BRAccountType *_accountType;	// 56 = 0x38
	BRAuthenticationResources *_authResources;	// 60 = 0x3c
	BRController *_controller;	// 64 = 0x40
	BRWaitPromptControl *_waitPrompt;	// 68 = 0x44
	int _mode;	// 72 = 0x48
	NSTimer *_authTimeoutTimer;	// 76 = 0x4c
	NSTimer *_promptTimer;	// 80 = 0x50
}
+ (id)authenticationControllerForController:(id)controller accountType:(id)type;	// 0x32e5d105
+ (id)authenticationControllerForController:(id)controller accountType:(id)type mode:(int)mode;	// 0x32e5d129
+ (id)controller;	// 0x32e5ca15
- (long)_askIfAccountPasswordShouldBeRemembered:(id)_askIfAccountPassword;	// 0x32e5d5fd
- (id)_askUserForPasswordForAccount:(id)account;	// 0x32e5d761
- (id)_askUserForUsername:(id)username;	// 0x32e5dded
- (id)_askUserForUsernameForAccount:(id)account;	// 0x32e5d9fd
- (void)_authenticate;	// 0x32e5ca19
- (void)_authenticateAccount:(id)account;	// 0x32e5e079
- (void)_authenticationCancelled:(id)cancelled;	// 0x32e5cae5
- (void)_authenticationFailed:(id)failed;	// 0x32e5cb7d
- (void)_authenticationSucceeded:(id)succeeded;	// 0x32e5ccc9
- (void)_authenticationTimedOut:(id)anOut;	// 0x32e5d2ed
- (id)_initWithController:(id)controller accountType:(id)type mode:(int)mode;	// 0x32e5dbed
- (id)_makeNewAccountOfType:(id)type;	// 0x32e5cffd
- (id)_qualifyAccount:(id)account;	// 0x32e5ce01
- (void)_removeUnauthorizedAccount:(id)account;	// 0x32e5ca85
- (id)_selectAccountForAccountType:(id)accountType;	// 0x32e5d069
- (id)_setAccountOptionsForAccount:(id)account;	// 0x32e5cd8d
- (BOOL)_shouldAttemptAuthorizationAgainForAccount:(id)account userInfo:(id)info;	// 0x32e5d499
- (void)_showPrompt:(id)prompt;	// 0x32e5e1e1
- (id)_updateAccount:(id)account;	// 0x32e5cec9
- (void)dealloc;	// 0x32e5d259
- (void)wasPopped;	// 0x32e5d16d
- (void)wasPushed;	// 0x32e5d201
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRSingleton.h"

@protocol BRHomeShareHandler;

@interface BRHomeShareManager : BRSingleton {
@private
	Class _homeShareHandlerClass;	// 4 = 0x4
	id<BRHomeShareHandler> _handlerInstance;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x32e518c9
+ (id)singleton;	// 0x32e518bd
- (void)disableHomeSharing;	// 0x32e51991
- (void)enableHomeSharing;	// 0x32e51a09
- (void)enableHomeSharingWithAccountName:(id)accountName andPassword:(id)password;	// 0x32e519b5
- (id)handler;	// 0x32e51a2d
- (BOOL)hasHomeShareAccount;	// 0x32e51949
- (id)homeShareAccount;	// 0x32e51925
- (id)homeSharingGroupIDIsEnabled:(id *)enabled;	// 0x32e519e1
- (BOOL)isHomeSharingEnabled;	// 0x32e5196d
- (long)pairForHomeShareStreamingWithHost:(ATVDataServerRef)host;	// 0x32e518fd
- (unsigned long long)pairingGUIDForServer:(ATVDataServerRef)server;	// 0x32e518d5
- (void)registerHandlerClass:(Class)aClass;	// 0x32e51b0d
@end


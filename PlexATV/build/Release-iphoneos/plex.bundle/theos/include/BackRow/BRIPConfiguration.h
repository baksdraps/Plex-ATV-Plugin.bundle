/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
//

@class NSArray, NSNumber, NSString;

@interface BRIPConfiguration : NSObject {
@private
	NSString *_wirelessNetwork;	// 4 = 0x4
	NSString *_wirelessMACAddress;	// 8 = 0x8
	NSString *_wirelessIPAddress;	// 12 = 0xc
	NSString *_wirelessSubnetMask;	// 16 = 0x10
	NSString *_wirelessRouter;	// 20 = 0x14
	NSArray *_wirelessDNSAddresses;	// 24 = 0x18
	NSString *_wiredMACAddress;	// 28 = 0x1c
	NSString *_wiredIPAddress;	// 32 = 0x20
	NSString *_wiredSubnetMask;	// 36 = 0x24
	NSString *_wiredRouter;	// 40 = 0x28
	NSArray *_wiredDNSAddresses;	// 44 = 0x2c
	long _wirelessSignalQuality;	// 48 = 0x30
	NSNumber *_wirelessSignalRSSI;	// 52 = 0x34
	NSNumber *_wirelessSignalRate;	// 56 = 0x38
	NSNumber *_wirelessSignalChannel;	// 60 = 0x3c
	unsigned _wirelessUseDHCP : 1;	// 64 = 0x40
	unsigned _wirelessActive : 1;	// 64 = 0x40
	unsigned _wiredUseDHCP : 1;	// 64 = 0x40
	unsigned _wiredActive : 1;	// 64 = 0x40
}
@property(readonly, retain) NSString *wirelessNetwork;	// G=0x32e198f5; converted property
@property(readonly, assign) long wirelessSignalQuality;	// G=0x32e19905; converted property
+ (SCDynamicStoreRef)_dynamicStoreSingleton;	// 0x32d60255
+ (id)currentConfiguration;	// 0x32e19bdd
+ (BOOL)internetAvailable;	// 0x32e19d8d
+ (BOOL)internetServerReachable:(id)reachable;	// 0x32e19e1d
+ (BOOL)networkAvailable;	// 0x32e19c81
+ (BOOL)networkTimeIsApproximatelyCorrect;	// 0x32e19c1d
+ (BOOL)receivedNTPClockSetNotification;	// 0x32e197f5
+ (void)setReceivedNTPClockSetNotification:(BOOL)notification;	// 0x32e19805
+ (void)setShowedNetworkTimeDialog:(BOOL)dialog;	// 0x32e19821
+ (void)setUserDismissedNetworkTimeDialog:(BOOL)dialog;	// 0x32e1983d
+ (BOOL)showedNetworkTimeDialog;	// 0x32e19811
+ (void)startMonitoringNetworkChanges:(BOOL)changes;	// 0x32d60efd
+ (BOOL)userDismissedNetworkTimeDialog;	// 0x32e1982d
- (id)initFromCurrentConfiguration;	// 0x32d60175
- (id)IPaddressForInterface:(int)interface;	// 0x32d60c89
- (id)MACaddressForInterface:(int)interface;	// 0x32e198a1
- (id)_dnsAddressesForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x32d60a01
- (void)_examineService:(SCNetworkServiceRef)service usingStore:(SCDynamicStoreRef)store;	// 0x32d603c5
- (void)_getStateForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store ipAddress:(id *)address mask:(id *)mask router:(id *)router;	// 0x32d606f5
- (void)_getWirelessNetworkStateUsingStore:(SCDynamicStoreRef)store;	// 0x32d60ae9
- (BOOL)_isActiveForInterface:(id)interface usingStore:(SCDynamicStoreRef)store;	// 0x32d6098d
- (BOOL)_setDHCPForService:(SCNetworkServiceRef)service;	// 0x32e19fed
- (BOOL)_setDNSAddress:(id)address forService:(SCNetworkServiceRef)service;	// 0x32e19e69
- (BOOL)_setIPAddress:(id)address subnetMask:(id)mask router:(id)router forService:(SCNetworkServiceRef)service;	// 0x32e19ee1
- (void)dealloc;	// 0x32d60cc1
- (id)description;	// 0x32e19a81
- (id)dnsAddressesForInterface:(int)interface;	// 0x32e198d9
- (BOOL)isActiveForInterface:(int)interface;	// 0x32d60c5d
- (id)routerForInterface:(int)interface;	// 0x32e198bd
- (void)setAddress:(id)address subnetMask:(id)mask router:(id)router forInterface:(int)interface;	// 0x32e19975
- (void)setDNSAddresses:(id)addresses forInterface:(int)interface;	// 0x32e19915
- (void)setUseDHCPForInterface:(int)interface;	// 0x32e19849
- (id)subnetMaskForInterface:(int)interface;	// 0x32d60ca5
- (BOOL)useDHCPForInterface:(int)interface;	// 0x32e19871
// converted property getter: - (id)wirelessNetwork;	// 0x32e198f5
// converted property getter: - (long)wirelessSignalQuality;	// 0x32e19905
@end


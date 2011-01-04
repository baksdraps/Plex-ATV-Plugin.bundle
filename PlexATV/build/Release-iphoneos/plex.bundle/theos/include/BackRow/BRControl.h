/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRFocusContainer.h"
#import "BRResponder.h"
#import "BackRow-Structs.h"

@class CALayer, NSMutableArray;

@interface BRControl : NSObject <BRFocusContainer, BRResponder> {
@private
	CALayer *_backing;	// 4 = 0x4
	BRControl *_defaultFocus;	// 8 = 0x8
	BRControl *_focusedControl;	// 12 = 0xc
	BRControl *_previousFocus;	// 16 = 0x10
	BRControl *_keyEventTargetControl;	// 20 = 0x14
	unsigned _autoresizing;	// 24 = 0x18
	NSMutableArray *_subControls;	// 28 = 0x1c
	BOOL _dontAutoresizeSubviews;	// 32 = 0x20
	BOOL _acceptsFocus;	// 33 = 0x21
	BOOL _focused;	// 34 = 0x22
	BOOL _controlActive;	// 35 = 0x23
	BOOL _inhibitsFocusForChildren;	// 36 = 0x24
	BOOL _inhibitsScrollFocusForChildren;	// 37 = 0x25
}
@property(assign) BOOL acceptsFocus;	// G=0x32d5ddfd; S=0x32d5da19; converted property
@property(retain) id actions;	// G=0x32da2359; S=0x32da2379; converted property
@property(assign) CGAffineTransform affineTransform;	// G=0x32da3225; S=0x32da2de9; converted property
@property(assign) CGPoint anchorPoint;	// G=0x32da3249; S=0x32da2e35; converted property
@property(assign) unsigned autoresizingMask;	// G=0x32da1f49; S=0x32da1f39; converted property
@property(assign) BOOL avoidsCursor;	// G=0x32d717b1; S=0x32d666f5; converted property
@property(assign) CGColorRef backgroundColor;	// G=0x32da2955; S=0x32da2975; converted property
@property(assign) CGColorRef borderColor;	// G=0x32da25f5; S=0x32da2615; converted property
@property(assign) float borderWidth;	// G=0x32da25b5; S=0x32da25d5; converted property
@property(assign) CGRect bounds;	// G=0x32da326d; S=0x32da3291; converted property
@property(assign) int contentMode;	// G=0x32da2635; S=0x32da27f1; converted property
@property(retain) id controls;	// G=0x32da2ac1; S=0x32da2aed; converted property
@property(retain) BRControl *defaultFocus;	// G=0x32da1f71; S=0x32d67775; converted property
@property(readonly, assign, getter=isFocused) BOOL focused;	// G=0x32d5dded; converted property
@property(retain) BRControl *focusedControl;	// G=0x32d5de95; S=0x32d5dfad; converted property
@property(assign) CGRect frame;	// G=0x32da33a9; S=0x32da3c69; converted property
@property(assign, getter=isHidden) BOOL hidden;	// G=0x32da28cd; S=0x32da28f1; converted property
@property(retain) id identifier;	// G=0x32d5e91d; S=0x32d67281; converted property
@property(assign) BOOL inhibitsFocusForChildren;	// G=0x32da1f81; S=0x32da24bd; converted property
@property(readonly, assign) BOOL inhibitsScrollFocusForChildren;	// G=0x32da1fa9; converted property
@property(retain) BRControl *keyEventTargetControl;	// G=0x32da1f29; S=0x32da2e75; converted property
@property(assign) BOOL masksToBounds;	// G=0x32da2995; S=0x32da29b9; converted property
@property(retain) id name;	// G=0x32da2d31; S=0x32da2d51; converted property
@property(retain) id object;	// G=0x32d7245d; S=0x32d6e909; converted property
@property(assign) float opacity;	// G=0x32da2915; S=0x32da2935; converted property
@property(assign) CGPoint position;	// G=0x32da3385; S=0x32da2e55; converted property
@property(retain) id selectionHandler;	// G=0x32da247d; S=0x32da249d; converted property
+ (id)control;	// 0x32d5e4cd
+ (id)controlWithScaledFrame:(CGRect)scaledFrame;	// 0x32df1bd5
+ (Class)layerClass;	// 0x32da3019
- (id)init;	// 0x32d5d999
- (void)_axPrintSubviews:(int)subviews string:(id)string;	// 0x32e0f619
- (id)_axSubviews;	// 0x32e0f2b9
- (id)_axSuperviews;	// 0x32e0f2f1
- (BOOL)_changeFocusTo:(id)to;	// 0x32d5de0d
- (void)_dumpControlTree;	// 0x32da3779
- (void)_dumpFocusTree;	// 0x32da39e1
- (BOOL)_focusControlTreeForEvent:(id)event nearPoint:(CGPoint)point;	// 0x32d713a9
- (BOOL)_focusControlTreeWithDefaults;	// 0x32d5dd99
- (id)_focusedLeafControl;	// 0x32d71389
- (CGPoint)_focusedPointForEvent:(id)event;	// 0x32d712c5
- (id)_initialFocus;	// 0x32da2101
- (void)_insertSingleControl:(id)control atIndex:(long)index;	// 0x32da21a1
- (void)_layoutSublayersOfLayer:(id)layer;	// 0x32da2eed
- (id)_parentScrollControl;	// 0x32e46bed
- (void)_reevaluateFocusTree;	// 0x32d6ccfd
- (void)_removeAllControls;	// 0x32da2145
- (void)_removeControl:(id)control;	// 0x32d66735
- (void)_resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x32da3b01
- (void)_resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x32da3651
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x32e46bb9
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x32e46b69
- (void)_scrollingCompleted;	// 0x32e46cd5
- (void)_scrollingInitiated;	// 0x32e46c95
- (void)_setControlFocused:(BOOL)focused;	// 0x32d5dcc5
- (void)_setFocus:(id)focus;	// 0x32d5dea5
- (CGRect)_visibleRectOfControl:(id)control;	// 0x32e47345
- (void)_visibleScrollRectChanged;	// 0x32e46b3d
// converted property getter: - (BOOL)acceptsFocus;	// 0x32d5ddfd
- (id)accessibilityAncestor:(Class)ancestor;	// 0x32e0f3c1
- (BOOL)accessibilityElementIsHidden;	// 0x32da2439
- (BOOL)accessibilityElementIsHidden;	// 0x32e0f38d
- (BOOL)accessibilityIsDescendant:(id)descendant;	// 0x32e0f409
- (id)actionForKey:(id)key;	// 0x32da2399
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x32da2f01
// converted property getter: - (id)actions;	// 0x32da2359
- (BOOL)active;	// 0x32da1f59
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x32da2419
- (void)addControl:(id)control;	// 0x32da2cf5
// converted property getter: - (CGAffineTransform)affineTransform;	// 0x32da3225
// converted property getter: - (CGPoint)anchorPoint;	// 0x32da3249
- (id)animationForKey:(id)key;	// 0x32da23f9
// converted property getter: - (unsigned)autoresizingMask;	// 0x32da1f49
// converted property getter: - (BOOL)avoidsCursor;	// 0x32d717b1
// converted property getter: - (CGColorRef)backgroundColor;	// 0x32da2955
- (id)badge;	// 0x32db2d91
// converted property getter: - (CGColorRef)borderColor;	// 0x32da25f5
// converted property getter: - (float)borderWidth;	// 0x32da25b5
// converted property getter: - (CGRect)bounds;	// 0x32da326d
- (CGSize)boundsForFocusCandidate:(id)focusCandidate;	// 0x32da3039
- (BOOL)brEventAction:(id)action;	// 0x32d70dc9
- (BOOL)brKeyEvent:(id)event;	// 0x32da1f25
// converted property getter: - (int)contentMode;	// 0x32da2635
- (long)controlCount;	// 0x32da2a91
- (void)controlDidDisplayAsModalDialog;	// 0x32d77041
- (id)controlForPoint:(CGPoint)point;	// 0x32da1fc1
- (void)controlWasActivated;	// 0x32da2dad
- (void)controlWasDeactivated;	// 0x32da2d71
- (void)controlWasFocused;	// 0x32d5dcf9
- (void)controlWasUnfocused;	// 0x32d6ab05
// converted property getter: - (id)controls;	// 0x32da2ac1
- (CGPoint)convertPoint:(CGPoint)point fromControl:(id)control;	// 0x32da3191
- (CGPoint)convertPoint:(CGPoint)point toControl:(id)control;	// 0x32da3131
- (CGRect)convertRect:(CGRect)rect fromControl:(id)control;	// 0x32da30d9
- (CGRect)convertRect:(CGRect)rect toControl:(id)control;	// 0x32da3081
- (void)dealloc;	// 0x32d6a5fd
- (id)debugDescriptionForFocusCandidate:(id)focusCandidate;	// 0x32da1fc9
// converted property getter: - (id)defaultFocus;	// 0x32da1f71
- (void)drawInContext:(CGContextRef)context;	// 0x32da1f6d
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x32da2f19
- (BOOL)eligibilityForFocusCandidate:(id)focusCandidate;	// 0x32da208d
- (id)firstControlNamed:(id)named;	// 0x32da3bb9
- (id)focusCandidates;	// 0x32da20e1
- (CGRect)focusCursorFrame;	// 0x32d67669
- (id)focusObjectForCandidate:(id)candidate;	// 0x32da20c9
// converted property getter: - (id)focusedControl;	// 0x32d5de95
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x32d71459
// converted property getter: - (CGRect)frame;	// 0x32da33a9
// converted property getter: - (id)identifier;	// 0x32d5e91d
- (id)inheritedValueForKey:(id)key;	// 0x32da2f31
// converted property getter: - (BOOL)inhibitsFocusForChildren;	// 0x32da1f81
// converted property getter: - (BOOL)inhibitsScrollFocusForChildren;	// 0x32da1fa9
- (id)initialFocus;	// 0x32da24e9
- (void)insertControl:(id)control above:(id)above;	// 0x32da2c55
- (void)insertControl:(id)control atIndex:(long)index;	// 0x32da2cc1
- (void)insertControl:(id)control below:(id)below;	// 0x32da2c09
// converted property getter: - (BOOL)isFocused;	// 0x32d5dded
// converted property getter: - (BOOL)isHidden;	// 0x32da28cd
// converted property getter: - (id)keyEventTargetControl;	// 0x32da1f29
- (id)layer;	// 0x32da1f15
- (id)layerForBacking;	// 0x32da2fcd
- (void)layoutSubcontrols;	// 0x32da1f69
// converted property getter: - (BOOL)masksToBounds;	// 0x32da2995
// converted property getter: - (id)name;	// 0x32da2d31
// converted property getter: - (id)object;	// 0x32d7245d
// converted property getter: - (float)opacity;	// 0x32da2915
- (id)parent;	// 0x32da3be9
- (id)parentScrollControl;	// 0x32e46c11
// converted property getter: - (CGPoint)position;	// 0x32da3385
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0x32da3065
- (id)preferredActionForKey:(id)key;	// 0x32da1fc5
- (float)preferredCursorRadius;	// 0x32db2d8d
- (void)removeAllAnimations;	// 0x32da23b9
- (void)removeAnimationForKey:(id)key;	// 0x32da23d9
- (void)removeFromParent;	// 0x32da2a69
- (id)root;	// 0x32da3c19
- (void)scrollPoint:(CGPoint)point;	// 0x32e46c79
- (void)scrollRectToVisible:(CGRect)visible;	// 0x32e46c39
- (void)scrollingCompleted;	// 0x32e46999
- (void)scrollingInitiated;	// 0x32e4699d
// converted property getter: - (id)selectionHandler;	// 0x32da247d
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x32d5da19
// converted property setter: - (void)setActions:(id)actions;	// 0x32da2379
// converted property setter: - (void)setAffineTransform:(CGAffineTransform)transform;	// 0x32da2de9
// converted property setter: - (void)setAnchorPoint:(CGPoint)point;	// 0x32da2e35
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x32da1f39
// converted property setter: - (void)setAvoidsCursor:(BOOL)cursor;	// 0x32d666f5
// converted property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x32da2975
// converted property setter: - (void)setBorderColor:(CGColorRef)color;	// 0x32da2615
// converted property setter: - (void)setBorderWidth:(float)width;	// 0x32da25d5
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x32da3291
// converted property setter: - (void)setContentMode:(int)mode;	// 0x32da27f1
// converted property setter: - (void)setControls:(id)controls;	// 0x32da2aed
// converted property setter: - (void)setDefaultFocus:(id)focus;	// 0x32d67775
- (void)setDefaultFocusWithPoint:(CGPoint)point;	// 0x32da1fbd
// converted property setter: - (void)setFocusedControl:(id)control;	// 0x32d5dfad
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x32da3c69
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x32da28f1
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x32d67281
// converted property setter: - (void)setInhibitsFocusForChildren:(BOOL)children;	// 0x32da24bd
- (void)setInhibitsScrollFocusForChildren:(bool)children;	// 0x32da1f91
// converted property setter: - (void)setKeyEventTargetControl:(id)control;	// 0x32da2e75
// converted property setter: - (void)setMasksToBounds:(BOOL)bounds;	// 0x32da29b9
// converted property setter: - (void)setName:(id)name;	// 0x32da2d51
- (void)setNeedsDisplay;	// 0x32da2a29
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x32da29dd
- (void)setNeedsLayout;	// 0x32da2a49
// converted property setter: - (void)setObject:(id)object;	// 0x32d6e909
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x32da2935
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x32da2e55
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x32da249d
- (void)setValue:(id)value forKey:(id)key cascade:(BOOL)cascade;	// 0x32da33cd
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x32da2f8d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32da31f1
- (void)sizeToFit;	// 0x32da349d
- (int)touchSensitivity;	// 0x32da1fb9
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x32da2fad
- (CGRect)visibleScrollRect;	// 0x32e4738d
- (void)visibleScrollRectChanged;	// 0x32e46c25
@end


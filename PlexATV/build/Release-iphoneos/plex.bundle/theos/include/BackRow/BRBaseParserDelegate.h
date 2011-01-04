/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

//

@class NSMutableString;

@interface BRBaseParserDelegate : NSObject <NSXMLParserDelegate> {
@private
	NSMutableString *_characters;	// 4 = 0x4
	BOOL _ignoreCharacters;	// 8 = 0x8
	BOOL _trimWhitespace;	// 9 = 0x9
}
@property(readonly, retain) NSMutableString *characters;	// G=0x32d82671; converted property
@property(assign) BOOL ignoreCharacters;	// G=0x32e0e851; S=0x32e0e841; converted property
@property(assign) BOOL trimWhitespace;	// G=0x32e0e831; S=0x32e0e821; converted property
// converted property getter: - (id)characters;	// 0x32d82671
- (void)dealloc;	// 0x32d8303d
- (SEL)endSelectorForElementName:(id)elementName;	// 0x32d824ed
// converted property getter: - (BOOL)ignoreCharacters;	// 0x32e0e851
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x32d82449
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x32d821ad
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x32d823bd
- (void)parser:(id)parser parseErrorOccurred:(id *)occurred;	// 0x32e0e81d
- (void)resetCharacters;	// 0x32e0e861
// converted property setter: - (void)setIgnoreCharacters:(BOOL)characters;	// 0x32e0e841
// converted property setter: - (void)setTrimWhitespace:(BOOL)whitespace;	// 0x32e0e821
- (SEL)startSelectorForElementName:(id)elementName;	// 0x32d82231
// converted property getter: - (BOOL)trimWhitespace;	// 0x32e0e831
@end


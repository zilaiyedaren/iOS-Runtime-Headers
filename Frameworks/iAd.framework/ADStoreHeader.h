/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSString;



@interface ADStoreHeader : PBCodable 
{
    NSString *_key;
    NSString *_value;
}

@property(retain) NSString *value;
@property(retain) NSString *key;


- (BOOL)readFrom:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)dictionaryRepresentation;
- (id)value;
- (void)setValue:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)writeTo:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBContactValue : PBCodable <NSCopying> {
    NSString * _contactIdentifier;
    NSString * _firstName;
    NSString * _fullName;
    NSString * _handle;
    _INPBImageValue * _image;
    NSString * _lastName;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) NSString *contactIdentifier;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *fullName;
@property (nonatomic, retain) NSString *handle;
@property (nonatomic, readonly) bool hasContactIdentifier;
@property (nonatomic, readonly) bool hasFirstName;
@property (nonatomic, readonly) bool hasFullName;
@property (nonatomic, readonly) bool hasHandle;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasLastName;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic, retain) _INPBImageValue *image;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (id)options;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)firstName;
- (id)fullName;
- (id)handle;
- (bool)hasContactIdentifier;
- (bool)hasFirstName;
- (bool)hasFullName;
- (bool)hasHandle;
- (bool)hasImage;
- (bool)hasLastName;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
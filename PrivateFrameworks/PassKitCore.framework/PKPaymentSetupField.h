/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupField : NSObject {
    <NSObject><NSCopying> * _currentValue;
    bool  _currentValueFromCameraCapture;
    NSString * _defaultValue;
    NSString * _displayFormat;
    NSString * _identifier;
    NSString * _localizedDisplayName;
    NSString * _localizedPlaceholder;
    NSDictionary * _rawConfigurationDictionary;
    bool  _requiresSecureSubmission;
    NSString * _submissionDestination;
    NSString * _submissionKey;
}

@property (getter=isBuiltIn, nonatomic, readonly) bool builtIn;
@property (nonatomic, readonly, copy) NSString *compactLocalizedDisplayName;
@property (nonatomic, copy) <NSObject><NSCopying> *currentValue;
@property (getter=isCurrentValueFromCameraCapture, nonatomic) bool currentValueFromCameraCapture;
@property (nonatomic, copy) NSString *defaultValue;
@property (nonatomic, copy) NSString *displayFormat;
@property (nonatomic, readonly) unsigned long long fieldType;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSString *localizedDisplayName;
@property (nonatomic, copy) NSString *localizedPlaceholder;
@property (nonatomic, readonly, copy) NSDictionary *rawConfigurationDictionary;
@property (nonatomic) bool requiresSecureSubmission;
@property (nonatomic, copy) NSString *submissionDestination;
@property (nonatomic, copy) NSString *submissionKey;

+ (Class)classForIdentifier:(id)arg1 type:(unsigned long long)arg2;
+ (id)newRandomlyGeneratedField;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1 configuration:(id)arg2;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
+ (id)sampleCustomPaymentSetupFields;

- (void).cxx_destruct;
- (void)_setLocalizedDisplayName:(id)arg1;
- (id)compactLocalizedDisplayName;
- (id)currentValue;
- (id)dateFieldObject;
- (id)defaultValue;
- (id)displayFormat;
- (id)displayString;
- (unsigned long long)fieldType;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (bool)isBuiltIn;
- (bool)isCurrentValueFromCameraCapture;
- (bool)isFieldTypeDate;
- (bool)isFieldTypeLabel;
- (bool)isFieldTypeText;
- (id)labelFieldObject;
- (id)localizedDisplayName;
- (id)localizedPlaceholder;
- (void)noteCurrentValueChanged;
- (id)rawConfigurationDictionary;
- (bool)requiresSecureSubmission;
- (void)setCurrentValue:(id)arg1;
- (void)setCurrentValueFromCameraCapture:(bool)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDisplayFormat:(id)arg1;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setLocalizedPlaceholder:(id)arg1;
- (void)setRequiresSecureSubmission:(bool)arg1;
- (void)setSubmissionDestination:(id)arg1;
- (void)setSubmissionKey:(id)arg1;
- (id)submissionDestination;
- (id)submissionKey;
- (id)submissionString;
- (bool)submissionStringMeetsAllRequirements;
- (id)textFieldObject;
- (void)updateWithConfiguration:(id)arg1;

@end
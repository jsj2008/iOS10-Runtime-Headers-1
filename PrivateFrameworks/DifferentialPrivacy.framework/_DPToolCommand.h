/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPToolCommand : NSObject {
    NSString * _action;
    NSString * _arguments;
    NSString * _databasePath;
    bool  _readWriteDB;
    NSString * _recordKey;
    _DPStorage * _storage;
}

@property (nonatomic, readonly, copy) NSString *action;
@property (nonatomic, readonly, copy) NSString *arguments;
@property (nonatomic, readonly, copy) NSString *databasePath;
@property (nonatomic, readonly) bool readWriteDB;
@property (nonatomic, readonly, copy) NSString *recordKey;
@property (nonatomic, readonly) _DPStorage *storage;

+ (id)command:(id)arg1 arguments:(id)arg2 recordKey:(id)arg3 databasePath:(id)arg4 writeOK:(bool)arg5;
+ (id)supportedCommands;

- (void).cxx_destruct;
- (id)action;
- (id)arguments;
- (id)databasePath;
- (id)description;
- (bool)executeCommand;
- (bool)ingestAppDeepLinks;
- (id)init;
- (id)initWithAction:(id)arg1 arguments:(id)arg2 recordKey:(id)arg3 databasePath:(id)arg4 writeOK:(bool)arg5;
- (id)queryForKey:(id)arg1;
- (bool)readWriteDB;
- (id)recordKey;
- (bool)recordNumbers:(id)arg1 forKey:(id)arg2;
- (bool)recordStrings:(id)arg1 forKey:(id)arg2;
- (bool)recordWords:(id)arg1 forKey:(id)arg2;
- (id)storage;
- (bool)submitRecordsForKey:(id)arg1;

@end

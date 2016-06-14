/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopicFeedGroupEmitterCursor : NSObject <NSCoding, NSCopying> {
    bool  _finished;
    NSSet * _topicIDsReturned;
}

@property (nonatomic) bool finished;
@property (nonatomic, copy) NSSet *topicIDsReturned;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)finished;
- (id)initWithCoder:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setTopicIDsReturned:(id)arg1;
- (id)topicIDsReturned;

@end
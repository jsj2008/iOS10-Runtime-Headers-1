/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCallStatusMonitor : NSObject {
    NSObject<OS_dispatch_queue> * __mutexQueue;
    bool  __mutexQueue_callActive;
    bool  __mutexQueue_mustQueryInitialValueForCallActive;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_mutexQueue;
@property (getter=_mutexQueue_isCallActive, setter=_mutexQueue_setCallActive:, nonatomic) bool _mutexQueue_callActive;
@property (setter=_mutexQueue_setMustQueryInitialValueForCallActive:, nonatomic) bool _mutexQueue_mustQueryInitialValueForCallActive;
@property (getter=isCallActive, nonatomic, readonly) bool callActive;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleCallIsActiveDidChangeNotification:(id)arg1;
- (id)_mutexQueue;
- (bool)_mutexQueue_isCallActive;
- (bool)_mutexQueue_mustQueryInitialValueForCallActive;
- (void)_mutexQueue_setCallActive:(bool)arg1;
- (void)_mutexQueue_setMustQueryInitialValueForCallActive:(bool)arg1;
- (void)_setCallActive:(bool)arg1;
- (void)dealloc;
- (id)init;
- (bool)isCallActive;
- (void)queryInitialValueForCallActiveIfNecessary;

@end
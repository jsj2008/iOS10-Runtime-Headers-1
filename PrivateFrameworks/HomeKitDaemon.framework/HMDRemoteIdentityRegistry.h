/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteIdentityRegistry : NSObject {
    NSMutableDictionary * _registry;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *registry;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)clear;
- (void)deregisterPublicKeyForIdentifier:(id)arg1;
- (id)init;
- (id)publicKeyForIdentifier:(id)arg1;
- (void)registerPublicKey:(id)arg1 forIdentifier:(id)arg2;
- (id)registry;
- (id)workQueue;

@end
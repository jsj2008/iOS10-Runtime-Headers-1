/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDVideoStreamInterface : HMDStreamInterface <AVCVideoStreamDelegate, HMFTimerDelegate> {
    <HMDVideoStreamInterfaceDelegate> * _delegate;
    HMFTimer * _downgradeDebouceTimer;
    <HMDVideoStreamLastDecodedFrameDelegate> * _lastFrameDelegate;
    NSObject<OS_dispatch_queue> * _lastFrameDelegateQueue;
    bool  _reconfigurationMode;
    double  _rtcpSendIntervalSec;
    HAPOSTransaction * _snapshotDataTrasaction;
    HMFTimer * _upgradeDebouceTimer;
    AVCVideoStream * _videoStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDVideoStreamInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long direction;
@property (nonatomic, retain) HMFTimer *downgradeDebouceTimer;
@property (readonly) unsigned long long hash;
@property <HMDVideoStreamLastDecodedFrameDelegate> *lastFrameDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *lastFrameDelegateQueue;
@property (nonatomic) bool reconfigurationMode;
@property (getter=isRTCPEnabled, nonatomic) bool rtcpEnabled;
@property (nonatomic) double rtcpSendIntervalSec;
@property (getter=isRTCPTimeOutEnabled, nonatomic) bool rtcpTimeOutEnabled;
@property (nonatomic) double rtcpTimeOutIntervalSec;
@property (getter=isRTPTimeOutEnabled, nonatomic) bool rtpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutIntervalSec;
@property (nonatomic, retain) HAPOSTransaction *snapshotDataTrasaction;
@property (nonatomic, readonly) NSNumber *streamToken;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *syncSource;
@property (nonatomic, retain) HMFTimer *upgradeDebouceTimer;
@property (nonatomic, retain) AVCVideoStream *videoStream;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callDidGetLastDecodedFrame:(id)arg1;
- (void)_callDidUpdateConfiguration;
- (void)_callNetworkDeteriorated;
- (void)_callNetworkImproved;
- (void)_callRelayStarted:(id)arg1;
- (void)_callStarted:(id)arg1;
- (void)_callStopped:(id)arg1;
- (bool)_createLocalSocket;
- (void)_downlinkQualityChanged:(id)arg1;
- (bool)_initializeStreamRemoteDestinationReceiver:(id)arg1;
- (bool)_initializeStreamRemoteLocal;
- (bool)_initializeStreamRemoteSender:(id)arg1;
- (bool)_initializeStreamRemoteSocketReceiver:(id)arg1;
- (void)_startStream:(id)arg1;
- (void)captureSnapshotWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (long long)direction;
- (id)downgradeDebouceTimer;
- (void)enableReconfigurationMode;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 sessionHandler:(id)arg5 localNetworkConfig:(id)arg6;
- (bool)isRTCPEnabled;
- (bool)isRTCPTimeOutEnabled;
- (bool)isRTPTimeOutEnabled;
- (id)lastFrameDelegate;
- (id)lastFrameDelegateQueue;
- (id)logIdentifier;
- (bool)reconfigurationMode;
- (double)rtcpSendIntervalSec;
- (double)rtcpTimeOutIntervalSec;
- (double)rtpTimeOutIntervalSec;
- (void)setDirection:(long long)arg1;
- (void)setDowngradeDebouceTimer:(id)arg1;
- (void)setLastFrameDelegate:(id)arg1;
- (void)setLastFrameDelegateQueue:(id)arg1;
- (void)setReconfigurationMode:(bool)arg1;
- (void)setRtcpEnabled:(bool)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpSendIntervalSec:(double)arg1;
- (void)setRtcpTimeOutEnabled:(bool)arg1;
- (void)setRtcpTimeOutIntervalSec:(double)arg1;
- (void)setRtpTimeOutEnabled:(bool)arg1;
- (void)setRtpTimeOutIntervalSec:(double)arg1;
- (void)setSnapshotDataTrasaction:(id)arg1;
- (void)setUpgradeDebouceTimer:(id)arg1;
- (void)setVideoStream:(id)arg1;
- (id)snapshotDataTrasaction;
- (void)startStream:(id)arg1;
- (void)stopStream;
- (void)stream:(id)arg1 didGetLastDecodedFrame:(id)arg2;
- (void)stream:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)stream:(id)arg1 didUpdateVideoConfiguration:(bool)arg2 error:(id)arg3;
- (void)stream:(id)arg1 downlinkQualityDidChange:(id)arg2;
- (void)streamDidRTCPTimeOut:(id)arg1;
- (void)streamDidRTPTimeOut:(id)arg1;
- (void)streamDidServerDie:(id)arg1;
- (void)streamDidStop:(id)arg1;
- (id)streamToken;
- (id)syncSource;
- (void)timerDidFire:(id)arg1;
- (void)updateStreamConfiguration:(id)arg1;
- (id)upgradeDebouceTimer;
- (id)videoStream;

@end
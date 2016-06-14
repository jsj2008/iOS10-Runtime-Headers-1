/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCClientEndpointConnection : FCEndpointConnection

- (void)addFeedWithURL:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithContext:(id)arg1;
- (void)pollFeedWithPollingURL:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)reportConcern:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)submitWebAcessWithTagID:(id)arg1 emailAddress:(id)arg2 purchaseReceipt:(id)arg3 countryCode:(id)arg4 languageCode:(id)arg5 callbackQueue:(id)arg6 completion:(id /* block */)arg7;
- (void)subscribeToEmailNewsLetterForUserWithDSID:(id)arg1 storeFrontID:(id)arg2 primaryLanguage:(id)arg3 callbackQueue:(id)arg4 completion:(id /* block */)arg5;

@end
/* Generated by RuntimeBrowser.
 */

@protocol HKQueryServer <NSObject>

@required

- (void)deactivateServer;
- (void)pauseServer;
- (void)pauseServerValidateWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resumeServer;

@end
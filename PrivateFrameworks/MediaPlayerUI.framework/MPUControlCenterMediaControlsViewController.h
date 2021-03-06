/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUControlCenterMediaControlsViewController : MPUMediaRemoteViewController <CCUIControlCenterPageContentProviding, MPAVRoutingControllerDelegate, MPUControlCenterMediaControlsViewDelegate> {
    <CCUIControlCenterPageContentViewControllerDelegate> * _delegate;
    MPAVRoutingController * _routingController;
    MPAVRoutingViewController * _routingViewController;
    bool  _routingViewVisible;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CCUIControlCenterPageContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsVisible;

+ (Class)controlsViewClass;
+ (Class)transportControlButtonClass;

- (void).cxx_destruct;
- (unsigned long long)_currentLayoutStyle;
- (void)_initControlCenterMediaControlsViewController;
- (id)_mediaControlsView;
- (void)_pickedRouteHeaderViewTapped:(id)arg1;
- (void)_reloadCurrentLayoutStyle;
- (void)_reloadRoutingControllerDiscoveryMode;
- (void)_setRoutingViewControllerVisible:(bool)arg1 animated:(bool)arg2;
- (bool)_viewIsVisible;
- (id)allowedTransportControlTypes;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)mediaControlsView:(id)arg1 willTransitionToCompactView:(bool)arg2;
- (void)mediaControlsViewPrimaryActionTriggered:(id)arg1;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(bool)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)transportControlsView:(id)arg1 buttonForControlType:(long long)arg2;
- (struct CGSize { double x1; double x2; })transportControlsView:(id)arg1 defaultTransportButtonSizeWithProposedSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

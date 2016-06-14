/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildRenderer : KNAnimationRenderer {
    KNAnimatedBuild * mAnimatedBuild;
    NSMutableArray * mAnimatedBuildsToStartAtEnd;
    NSDictionary * mAnimatedLayers;
    KNAnimationInfo * mAnimationInfo;
    bool  mAreAnimationsPrepared;
    SEL  mBuildEndCallbackSelector;
    id  mBuildEndCallbackTarget;
    KNBuildChunk * mBuildStage;
    TSDFPSCounter * mFPSCounter;
    TSDTextureSet * mFinalAttributesTextureSet;
    TSDDrawableInfo * mInfo;
    bool  mInterrupted;
    bool  mIsAnimationForPlayback;
    bool  mIsNonCachedTextureValid;
    bool  mIsPreview;
    bool  mIsTextureCachedAtEndOfBuild;
    long long  mNumberOfAnimationsStarted;
    CALayer * mParentLayer;
    bool  mShouldUseMagicMoveTextures;
    TSDTextureContext * mTextureContext;
    TSDTextureSet * mTextureSet;
    bool  mUsingFinalTexture;
}

@property (nonatomic, readonly) KNAnimatedBuild *animatedBuild;
@property (nonatomic, readonly) NSArray *animatedBuildsToStartAtEnd;
@property (nonatomic, readonly) KNBuildChunk *buildStage;
@property (nonatomic, readonly) TSDDrawableInfo *info;
@property (nonatomic, readonly) bool isTextDrawable;
@property (nonatomic, readonly) TSDTextureSet *nonCachedTextureSet;
@property (nonatomic, retain) CALayer *parentLayer;
@property (nonatomic, readonly) TSDRep *rep;
@property (nonatomic, retain) TSDTextureContext *textureContext;
@property (nonatomic, readonly) unsigned long long textureDeliveryStyle;
@property (nonatomic, readonly) TSDTextureSet *textureSet;

- (bool)addAnimationsAtLayerTime:(double)arg1;
- (void)addBuildToStartAtEnd:(id)arg1;
- (void)animateAfterDelay:(double)arg1;
- (id)animatedBuild;
- (id)animatedBuildsToStartAtEnd;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)buildStage;
- (void)dealloc;
- (id)description;
- (void)fadeOutPreviousStageOn:(id)arg1 atLayerTime:(double)arg2;
- (void)forceRemoveAnimations;
- (id)info;
- (id)initWithAnimatedBuild:(id)arg1 info:(id)arg2 buildStage:(id)arg3 session:(id)arg4 animatedSlideView:(id)arg5;
- (id)initializeTextureSetForEndOfBuild:(bool)arg1 endOfSlide:(bool)arg2 context:(id)arg3 isRenderingToContext:(bool)arg4;
- (id)initializeTextureSetForEndOfBuild:(bool)arg1 endOfSlide:(bool)arg2 isRenderingToContext:(bool)arg3;
- (bool)isTextDrawable;
- (id)loadPluginIfNeeded;
- (id)nonCachedTextureSet;
- (id)p_filterForTextDelivery:(long long)arg1;
- (bool)p_isDriftAnimation;
- (bool)p_isMovieInfo;
- (bool)p_isPDFOutput;
- (id)p_keyForAnimation;
- (void)p_removeAnimations;
- (void)p_resetAnimations;
- (id)p_textureSetForStage:(long long)arg1 context:(id)arg2 isAtEndOfBuild:(bool)arg3 shouldForceRebuild:(bool)arg4;
- (id)p_textureSetForStage:(long long)arg1 context:(id)arg2 isAtEndOfBuild:(bool)arg3 shouldForceRebuild:(bool)arg4 shouldRender:(bool)arg5;
- (id)parentLayer;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)prepareAnimations;
- (void)registerForBuildEndCallback:(SEL)arg1 target:(id)arg2;
- (void)removeAnimationsAndFinish:(bool)arg1;
- (id)rep;
- (void)resetHighlightsBeforeAnimationOnTextureSet:(id)arg1;
- (void)resetPreviousStageUnhighlightOnTextureSet:(id)arg1;
- (void)resetTexture;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)setLayerVisibility:(id)arg1 isAtEndOfBuild:(bool)arg2;
- (void)setParentLayer:(id)arg1;
- (void)setTextureContext:(id)arg1;
- (void)setVisibilityAndGeometryOn:(id)arg1 withFinalTextureSet:(id)arg2;
- (id)setupFinalTextureGivenCurrentTextureSet:(id)arg1;
- (void)setupPluginContext;
- (unsigned long long)stageIndex;
- (void)stopAnimations;
- (id)textureContext;
- (unsigned long long)textureDeliveryStyle;
- (id)textureSet;
- (id)textureSetForStage:(long long)arg1 context:(id)arg2;
- (id)textureSetForStage:(long long)arg1 context:(id)arg2 shouldForceRebuild:(bool)arg3;
- (id)textureSetWithoutRenderedContents;
- (void)updateAnimationsForLayerTime:(double)arg1;

@end
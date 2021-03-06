/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDynamicScrollingOptions : NSObject {
    struct { 
        double minScrollPercentage; 
        double maxScrollPercentage; 
        double maxValue; 
    }  _headlineAlphaSetting;
    struct { 
        double minScrollPercentage; 
        double maxScrollPercentage; 
        double maxValue; 
    }  _headlinePositionOffsetSetting;
    struct { 
        double minScrollPercentage; 
        double maxScrollPercentage; 
        double maxValue; 
    }  _navigationBarBottomMarginSetting;
    struct { 
        double minScrollPercentage; 
        double maxScrollPercentage; 
        double maxValue; 
    }  _navigationBarTitleAlphaSetting;
    struct { 
        double minScrollPercentage; 
        double maxScrollPercentage; 
        double maxValue; 
    }  _statusAlphaSetting;
    struct { 
        double minScrollPercentage; 
        double maxScrollPercentage; 
        double maxValue; 
    }  _statusPositionOffsetSetting;
    struct { 
        double minScrollPercentage; 
        double maxScrollPercentage; 
        double maxValue; 
    }  _textScaleSetting;
    long long  _viewSizeSubclass;
}

@property (nonatomic) struct { double x1; double x2; double x3; } headlineAlphaSetting;
@property (nonatomic) struct { double x1; double x2; double x3; } headlinePositionOffsetSetting;
@property (nonatomic) struct { double x1; double x2; double x3; } navigationBarBottomMarginSetting;
@property (nonatomic) struct { double x1; double x2; double x3; } navigationBarTitleAlphaSetting;
@property (nonatomic) struct { double x1; double x2; double x3; } statusAlphaSetting;
@property (nonatomic) struct { double x1; double x2; double x3; } statusPositionOffsetSetting;
@property (nonatomic) struct { double x1; double x2; double x3; } textScaleSetting;
@property (nonatomic, readonly) long long viewSizeSubclass;

+ (id)_defaultOptionsWithStatusSectionForViewSizeSubclass:(long long)arg1;
+ (id)_defaultOptionsWithoutStatusSectionForViewSizeSubclass:(long long)arg1;
+ (id)defaultOptionsForViewSizeSubclass:(long long)arg1 showsStatusSection:(bool)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { double x1; double x2; double x3; })headlineAlphaSetting;
- (struct { double x1; double x2; double x3; })headlinePositionOffsetSetting;
- (id)initWithViewSizeSubclass:(long long)arg1;
- (struct { double x1; double x2; double x3; })navigationBarBottomMarginSetting;
- (struct { double x1; double x2; double x3; })navigationBarTitleAlphaSetting;
- (void)setHeadlineAlphaSetting:(struct { double x1; double x2; double x3; })arg1;
- (void)setHeadlinePositionOffsetSetting:(struct { double x1; double x2; double x3; })arg1;
- (void)setNavigationBarBottomMarginSetting:(struct { double x1; double x2; double x3; })arg1;
- (void)setNavigationBarTitleAlphaSetting:(struct { double x1; double x2; double x3; })arg1;
- (void)setStatusAlphaSetting:(struct { double x1; double x2; double x3; })arg1;
- (void)setStatusPositionOffsetSetting:(struct { double x1; double x2; double x3; })arg1;
- (void)setTextScaleSetting:(struct { double x1; double x2; double x3; })arg1;
- (struct { double x1; double x2; double x3; })statusAlphaSetting;
- (struct { double x1; double x2; double x3; })statusPositionOffsetSetting;
- (struct { double x1; double x2; double x3; })textScaleSetting;
- (long long)viewSizeSubclass;

@end

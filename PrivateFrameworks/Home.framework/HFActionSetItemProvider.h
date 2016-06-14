/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFActionSetItemProvider : HFItemProvider {
    unsigned long long  _actionSetItemStyle;
    NSMutableSet * _actionSetItems;
    id /* block */  _filter;
    <HFCharacteristicValueSource> * _overrideValueSource;
}

@property (nonatomic, readonly) unsigned long long actionSetItemStyle;
@property (nonatomic, retain) NSMutableSet *actionSetItems;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, retain) <HFCharacteristicValueSource> *overrideValueSource;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (unsigned long long)actionSetItemStyle;
- (id)actionSetItems;
- (id /* block */)filter;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 actionSetItemStyle:(unsigned long long)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)overrideValueSource;
- (id)reloadItems;
- (void)setActionSetItems:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setOverrideValueSource:(id)arg1;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

@end
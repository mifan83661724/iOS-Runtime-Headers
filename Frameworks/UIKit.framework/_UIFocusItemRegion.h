/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusItemRegion : NSObject <_UIFocusRegion> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _focusRegionFrame;
    <UIFocusContainer> *_focusRegionItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } focusRegionFrame;
@property (nonatomic) <UIFocusContainer> *focusRegionItem;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_childFocusRegions;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_focusDebugOverlayParentView;
- (BOOL)_focusRegionCanBecomeFocused;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_focusRegionFrame;
- (id)_focusRegionGuides;
- (BOOL)_focusRegionIsEligibleForFocus;
- (id)_focusRegionItem;
- (id)_focusRegionView;
- (id)_fulfillPromisedFocusRegion;
- (BOOL)_isPromiseFocusRegion;
- (BOOL)_isTransparentFocusRegion;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })focusRegionFrame;
- (id)focusRegionItem;
- (id)init;
- (id)initWithFocusItem:(id)arg1;
- (id)initWithFocusItem:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setFocusRegionFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFocusRegionItem:(id)arg1;

@end

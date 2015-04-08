/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIView;

@interface _UIFocusDebugOverlayView : UIView {
    UIView *_highlightView;
    UIColor *_overlayColor;
}

@property(retain) UIView * highlightView;
@property(copy) UIColor * overlayColor;

- (id)_focusItemsOverlayCreateIfNecessary:(BOOL)arg1;
- (void)_highlightPreferredFocusView:(id)arg1;
- (void)_removeFocusItemOverlayViews;
- (void)_unhighlightPreferredFocusView;
- (void)dealloc;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)highlightView;
- (id)initWithView:(id)arg1;
- (id)overlayColor;
- (void)setHighlightView:(id)arg1;
- (void)setOverlayColor:(id)arg1;

@end
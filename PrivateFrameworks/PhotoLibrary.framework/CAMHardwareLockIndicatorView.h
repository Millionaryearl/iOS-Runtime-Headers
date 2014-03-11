/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSDictionary;

@interface CAMHardwareLockIndicatorView : CAMBadgeTextView {
    NSDictionary *__indicatorTextAttributes;
    BOOL _exposureLocked;
    BOOL _focusLocked;
}

@property(readonly) NSDictionary * _indicatorTextAttributes;
@property(getter=isExposureLocked) BOOL exposureLocked;
@property(getter=isFocusLocked) BOOL focusLocked;

- (void)_commonCAMHardwareLockIndicatorViewInitialization;
- (id)_indicatorTextAttributes;
- (id)_text;
- (id)_textAttributes;
- (id)_textForCurrentHardwareState;
- (float)_textHorizontalInset;
- (float)_textHorizontalKerningOffset;
- (float)_textVerticalInset;
- (void)_updateFromHardwareChange;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isExposureLocked;
- (BOOL)isFocusLocked;
- (void)setExposureLocked:(BOOL)arg1;
- (void)setFocusLocked:(BOOL)arg1;

@end
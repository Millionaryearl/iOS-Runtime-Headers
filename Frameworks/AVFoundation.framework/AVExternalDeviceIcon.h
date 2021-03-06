/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExternalDeviceIcon : NSObject {
    AVExternalDeviceIconInternal * _externalDeviceIcon;
}

@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (getter=isPrerendered, nonatomic, readonly) bool prerendered;

- (void)dealloc;
- (void)finalize;
- (id)imageData;
- (id)initWithDictionary:(id)arg1;
- (bool)isPrerendered;
- (struct CGSize { double x1; double x2; })pixelSize;

@end

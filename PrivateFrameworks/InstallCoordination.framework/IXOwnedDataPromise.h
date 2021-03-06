/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXOwnedDataPromise : IXDataPromise <NSSecureCoding> {
    NSURL * _stagedPath;
}

@property (nonatomic, retain) IXOwnedDataPromiseSeed *seed;
@property (nonatomic, retain) NSURL *stagedPath;
@property (nonatomic, readonly) NSURL *stagingBaseDir;

- (void).cxx_destruct;
- (Class)seedClass;
- (void)setStagedPath:(id)arg1;
- (id)stagedPath;
- (id)stagingBaseDir;

@end

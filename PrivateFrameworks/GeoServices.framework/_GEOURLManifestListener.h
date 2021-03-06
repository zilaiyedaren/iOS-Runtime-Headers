/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOURLManifestListener : NSObject {
    NSMutableArray *_handlers;
    NSLock *_lock;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

+ (id)sharedListener;

- (void)_finish:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (void)waitForManifestWithHandler:(id /* block */)arg1;

@end

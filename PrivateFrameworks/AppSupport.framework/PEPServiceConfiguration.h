/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString;



@interface PEPServiceConfiguration : NSObject 
{
    NSString *_cacheFilePath;
    BOOL _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (id)sharedInstance;

- (void)registerNetworkDefaultsForAppID:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_postNotification;
- (void)_updateDefaults:(id)arg1;

@end
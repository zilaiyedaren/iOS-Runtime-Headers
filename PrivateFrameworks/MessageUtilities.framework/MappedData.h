/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MessageUtilities.framework/MessageUtilities
 */

@class NSMutableData, NSString;

@interface MappedData : NSObject <NSCopying> {
    unsigned int _needsRefresh : 1;
    NSUInteger _length;
    NSUInteger _mappingThreshold;
    NSString *_storagePath;
    NSMutableData *_writeCache;
}

- (void)_clearStoragePath;
- (void)_convertLineEndingsOnDisk;
- (void)_resetWriteCache;
- (void)_setNeedsRefresh;
- (void)appendBytes:(const void*)arg1 length:(NSUInteger)arg2;
- (void)appendBytesToDisk:(const void*)arg1 length:(long)arg2;
- (void)appendData:(id)arg1;
- (const void*)bytes;
- (void)convertNetworkLineEndingsToUnix;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (BOOL)flushToDisk;
- (id)init;
- (NSUInteger)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)refreshFromDisk;
- (void)setData:(id)arg1;
- (void)setMappingThreshold:(NSUInteger)arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;

@end
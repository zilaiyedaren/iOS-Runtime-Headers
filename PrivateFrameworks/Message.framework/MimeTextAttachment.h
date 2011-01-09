/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MimePart;



@interface MimeTextAttachment : MessageTextAttachment 
{
    MimePart *_mimePart;
}


- (void)dealloc;
- (id)initWithMimePart:(id)arg1;
- (id)initWithMimePart:(id)arg1 andFileWrapper:(id)arg2;
- (id)mimePart;
- (id)displayedMimePart;
- (void)setMimePart:(id)arg1;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (void)setFileWrapper:(id)arg1;
- (NSUInteger)approximateSize;
- (BOOL)shouldDownloadAttachmentOnDisplay;

@end
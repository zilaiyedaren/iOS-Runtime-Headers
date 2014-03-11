/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSPPackage>, NSError, NSMapTable, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, TSPDocumentResourceDataProvider, TSPFinalizeHandlerQueue, TSPObject, TSPObjectContext;

@interface TSPPackageReadCoordinator : TSPReadCoordinatorBase <TSPReadCoordinator> {
    struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { 
        struct __hash_table<std::__1::pair<const long long, bool>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::pair<const long long, bool> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { 
                    struct __hash_node<std::__1::pair<const long long, bool>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> { 
                    struct __hash_node<std::__1::pair<const long long, bool>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { 
        struct __hash_table<std::__1::pair<const long long, bool>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::pair<const long long, bool> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { 
                    struct __hash_node<std::__1::pair<const long long, bool>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> { 
                    struct __hash_node<std::__1::pair<const long long, bool>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    BOOL _areExternalDataReferencesAllowed;
    NSObject<OS_dispatch_group> *_completionGroup;
    NSObject<OS_dispatch_queue> *_componentQueue;
    NSMutableArray *_componentsToUpgrade;
    TSPObjectContext *_context;
    BOOL _didRequireUpgrade;
    TSPObject *_documentObject;
    TSPDocumentResourceDataProvider *_documentResourceDataProvider;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_errorQueue;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    NSObject<OS_dispatch_queue> *_ioCompletionQueue;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_queue> *_objectQueue;
    NSMapTable *_objects;
    <TSPPackage> *_package;
    NSObject<OS_dispatch_queue> *_readCompletionQueue;
    } _readExternalObjects;
    } _readIdentifiers;
    unsigned long long _readVersion;
    unsigned long long _writeVersion;
}

@property(readonly) BOOL didRequireUpgrade;
@property(readonly) BOOL isReadingFromDocument;
@property(readonly) unsigned long long readVersion;
@property(readonly) unsigned long long writeVersion;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)componentForRootObjectIdentifier:(long long)arg1 isWeakReference:(BOOL)arg2 queue:(id)arg3 completion:(id)arg4;
- (id)context;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (BOOL)didRequireUpgrade;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (BOOL)endReading;
- (id)error;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(BOOL)arg3;
- (id)init;
- (id)initWithContext:(id)arg1 package:(id)arg2 finalizeHandlerQueue:(id)arg3 documentResourceDataProvider:(id)arg4 areExternalDataReferencesAllowed:(BOOL)arg5;
- (BOOL)isReadingFromDocument;
- (void)prepareForFullDocumentUpgrade;
- (void)processMetadata:(id)arg1;
- (void)readComponent:(id)arg1 additionalComponents:(id)arg2 completionQueue:(id)arg3 completion:(id)arg4;
- (void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(id)arg3;
- (void)readComponentAsync:(id)arg1;
- (BOOL)readComponentIfNeededAsync:(id)arg1;
- (void)readExternalReferenceComponentIfNeededAsyncForObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(BOOL)arg3 fromComponent:(id)arg4;
- (void)readPackageMetadataWithComponent:(id)arg1 completionQueue:(id)arg2 completion:(id)arg3;
- (void)readRootObjectWithCompletionQueue:(id)arg1 completion:(id)arg2;
- (unsigned long long)readVersion;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(id)arg7;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(id)arg6;
- (void)reader:(id)arg1 didResetObjectIdentifierForObject:(id)arg2 originalObjectIdentifier:(long long)arg3;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (BOOL)requestDocumentResourcesUsingDataProvider:(id)arg1;
- (void)setError:(id)arg1;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(BOOL)arg2;
- (unsigned long long)writeVersion;

@end
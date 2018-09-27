/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryTransientStateController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSOperationQueue * _operationQueue;
    NSMutableArray * _registeredTransientState;
}

+ (id)sharedDeviceLibraryController;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (id)init;
- (void)performDeleteEntityChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2;
- (void)performDeleteEntityChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 completion:(id /* block */)arg3;
- (void)performKeepLocalChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2;
- (void)performKeepLocalChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 completion:(id /* block */)arg3;
- (void)performLibraryImportChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2;
- (void)performLibraryImportChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 completion:(id /* block */)arg3;
- (id)registerTransientAddState:(long long)arg1 forModelObjects:(id)arg2 relatedModelObjects:(id)arg3;
- (id)registerTransientKeepLocalState:(long long)arg1 forModelObjects:(id)arg2 relatedModelObjects:(id)arg3;
- (long long)transientAddStateForModelObject:(id)arg1;
- (long long)transientKeepLocalStateForModelObject:(id)arg1;
- (void)unregisterTransientState:(id)arg1;

@end
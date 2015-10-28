/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibrarySearchableIndexUpdates : NSObject {
    NSArray *_addedIndexItems;
    NSArray *_removedDomainIdentifiers;
    NSArray *_removedIdentifiers;
}

@property (nonatomic, copy) NSArray *addedIndexItems;
@property (nonatomic, copy) NSArray *removedDomainIdentifiers;
@property (nonatomic, copy) NSArray *removedIdentifiers;

+ (id)updates;

- (id)addedIndexItems;
- (void)dealloc;
- (id)description;
- (id)removedDomainIdentifiers;
- (id)removedIdentifiers;
- (void)setAddedIndexItems:(id)arg1;
- (void)setRemovedDomainIdentifiers:(id)arg1;
- (void)setRemovedIdentifiers:(id)arg1;

@end

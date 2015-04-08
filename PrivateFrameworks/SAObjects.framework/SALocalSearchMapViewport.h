/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SALocalSearchMapViewport : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property double eastLongitude;
@property(readonly) unsigned int hash;
@property double northLatitude;
@property double southLatitude;
@property(readonly) Class superclass;
@property double timeInSecondsSinceViewportChanged;
@property double timeInSecondsSinceViewportEnteredForeground;
@property(copy) NSArray * vertices;
@property double westLongitude;

+ (id)mapViewport;
+ (id)mapViewportWithDictionary:(id)arg1 context:(id)arg2;

- (double)eastLongitude;
- (id)encodedClassName;
- (id)groupIdentifier;
- (double)northLatitude;
- (void)setEastLongitude:(double)arg1;
- (void)setNorthLatitude:(double)arg1;
- (void)setSouthLatitude:(double)arg1;
- (void)setTimeInSecondsSinceViewportChanged:(double)arg1;
- (void)setTimeInSecondsSinceViewportEnteredForeground:(double)arg1;
- (void)setVertices:(id)arg1;
- (void)setWestLongitude:(double)arg1;
- (double)southLatitude;
- (double)timeInSecondsSinceViewportChanged;
- (double)timeInSecondsSinceViewportEnteredForeground;
- (id)vertices;
- (double)westLongitude;

@end
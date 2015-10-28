/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDTelemetryController : NSObject

+ (id)sharedInstance;

- (void)didChangeLocalSecret;
- (void)didLockAccount;
- (void)didRemoveLocalSecret;
- (void)didUnlockAccount;
- (void)pcsAlreadyMigrated;
- (void)pcsMigrationFailed;
- (void)pcsMigrationSucceeded;
- (void)pcsRollbackFailed;
- (void)pcsRollbackSucceeded;
- (void)signInFailedDueIncorrectICSCAttempts;
- (void)signInFailedDueToLockedAccount;
- (void)signInSucceededWithIncorrectICSCAttemptCount:(unsigned int)arg1 didUseRemoteApproval:(BOOL)arg2;
- (void)stateMachineStartedFromClient:(unsigned int)arg1;

@end

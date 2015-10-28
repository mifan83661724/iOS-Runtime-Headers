/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISAVPlayerController : NSObject {
    AVPlayerItem *__currentVideoPlayerItem;
    id __didBeginPlaybackObserver;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } __forwardPlaybackEndTime;
    float __hintPlayRate;
    BOOL __isPerfomingChanges;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } __lastResetTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } __lastSetForwardPlaybackEndTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } __observedPlaybackNearEndTime;
    BOOL __pendingReset;
    AVPlayerItem *__playerItemToObservePlaybackEnd;
    BOOL __playersNeedUpdate;
    int __seekRequestID;
    BOOL __seekingVideo;
    BOOL __shouldPlayAudio;
    BOOL __shouldPreroll;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _cachedDuration;
    AVPlayerItem *_cachedDurationPlayerItem;
    <ISAVPlayerControllerDelegate> *_delegate;
    struct { 
        BOOL respondsToDidBeginPlaying; 
        BOOL respondsToWillEndPlaying; 
        BOOL respondsToDidEndPlaying; 
        BOOL respondsToDidEndSeeking; 
    } _delegateFlags;
    float _playRate;
    float _playVolume;
    id _playbackNearEndTimeObserver;
    double _prePhotoGapTime;
    int _state;
    AVPlayer *_videoPlayer;
}

@property (setter=_setCurrentVideoPlayerItem:, nonatomic, retain) AVPlayerItem *_currentVideoPlayerItem;
@property (setter=_setDidBeginPlaybackObserver:, nonatomic, retain) id _didBeginPlaybackObserver;
@property (setter=_setForwardPlaybackEndTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _forwardPlaybackEndTime;
@property (setter=_setHintPlayRate:, nonatomic) float _hintPlayRate;
@property (setter=_setPerformingChanges:, nonatomic) BOOL _isPerfomingChanges;
@property (setter=_setLastResetTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _lastResetTime;
@property (setter=_setLastSetForwardPlaybackEndTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _lastSetForwardPlaybackEndTime;
@property (setter=_setObservedPlaybackNearEndTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _observedPlaybackNearEndTime;
@property (getter=_hasPendingReset, setter=_setPendingReset:, nonatomic) BOOL _pendingReset;
@property (setter=_setPlayerItemToObservePlaybackEnd:, nonatomic, retain) AVPlayerItem *_playerItemToObservePlaybackEnd;
@property (nonatomic, readonly) BOOL _playersNeedUpdate;
@property (setter=_setSeekRequestID:, nonatomic) int _seekRequestID;
@property (getter=_isSeekingVideo, setter=_setSeekingVideo:, nonatomic) BOOL _seekingVideo;
@property (setter=_setShouldPlayAudio:, nonatomic) BOOL _shouldPlayAudio;
@property (setter=_setShouldPreroll:, nonatomic) BOOL _shouldPreroll;
@property (nonatomic) <ISAVPlayerControllerDelegate> *delegate;
@property (nonatomic, readonly) BOOL isSeeking;
@property (nonatomic) float playRate;
@property (nonatomic) float playVolume;
@property (nonatomic) double prePhotoGapTime;
@property (nonatomic) int state;
@property (nonatomic, retain) AVPlayer *videoPlayer;

- (void).cxx_destruct;
- (id)_currentVideoPlayerItem;
- (id)_didBeginPlaybackObserver;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_duration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_forwardPlaybackEndTime;
- (void)_handleSeekingRequest:(int)arg1 toTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 didFinish:(BOOL)arg3 startedTimestamp:(double)arg4;
- (BOOL)_hasPendingReset;
- (float)_hintPlayRate;
- (void)_invalidatePlayers;
- (BOOL)_isPerfomingChanges;
- (BOOL)_isSeekingVideo;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_lastResetTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_lastSetForwardPlaybackEndTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_observedPlaybackNearEndTime;
- (void)_pauseVideo;
- (void)_playVideoWithAudioIfReady;
- (void)_playerItemDidFinishPlaying:(id)arg1;
- (id)_playerItemToObservePlaybackEnd;
- (void)_playerItemWillFinishPlaying;
- (BOOL)_playersNeedUpdate;
- (void)_safelyUpdateRateForPlayers;
- (int)_seekRequestID;
- (void)_seekToDesiredTimeIfReady;
- (void)_setCurrentVideoPlayerItem:(id)arg1;
- (void)_setDidBeginPlaybackObserver:(id)arg1;
- (void)_setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setHintPlayRate:(float)arg1;
- (void)_setLastResetTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setLastSetForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setObservedPlaybackNearEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setPendingReset:(BOOL)arg1;
- (void)_setPerformingChanges:(BOOL)arg1;
- (void)_setPlayerItemToObservePlaybackEnd:(id)arg1;
- (void)_setSeekRequestID:(int)arg1;
- (void)_setSeekingVideo:(BOOL)arg1;
- (void)_setShouldPlayAudio:(BOOL)arg1;
- (void)_setShouldPreroll:(BOOL)arg1;
- (void)_setState:(int)arg1;
- (void)_setVideoPlayer:(id)arg1;
- (BOOL)_shouldPlayAudio;
- (BOOL)_shouldPreroll;
- (void)_startPlayingFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withRate:(float)arg3 shouldPlayAudio:(BOOL)arg4;
- (void)_updatePlayersIfNeeded;
- (void)_videoPlayerDidBeginPlaybackWithObserver:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithVideoPlayer:(id)arg1;
- (BOOL)isSeeking;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)performChanges:(id /* block */)arg1;
- (void)playFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withRate:(float)arg3 shouldPlayAudio:(BOOL)arg4;
- (float)playRate;
- (float)playVolume;
- (double)prePhotoGapTime;
- (void)resetToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)resetToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 hintEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 hintPlayRate:(float)arg3;
- (void)setDelegate:(id)arg1;
- (void)setPlayRate:(float)arg1;
- (void)setPlayVolume:(float)arg1;
- (void)setPrePhotoGapTime:(double)arg1;
- (int)state;
- (id)videoPlayer;

@end

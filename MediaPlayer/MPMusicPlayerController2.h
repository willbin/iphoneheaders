/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMusicPlayerControllerInternal;

@protocol MPMusicPlayerController
@optional
-(void)registerForServerDiedNotifications;
-(id)isGeniusAvailable;
-(void)setQueueWithQuery:(id)query;
-(void)setQueueWithItemCollection:(id)itemCollection;
-(id)setQueueWithSeedItems:(id)seedItems;
-(void)playItem:(id)item;
-(id)queueAsQuery;
-(id)nowPlayingItemAtIndex:(id)index;
-(void)prepareQueueForPlayback;
-(void)setUseApplicationSpecificQueue:(id)queue;
-(void)setAllowsRemoteUIAccess:(id)access;
-(id)allowsRemoteUIAccess;
-(id)playbackState;
-(id)repeatMode;
-(void)setRepeatMode:(id)mode;
-(id)shuffleMode;
-(void)setShuffleMode:(id)mode;
-(void)setPlaybackSpeed:(id)speed;
-(id)playbackSpeed;
-(void)setNowPlayingItem:(id)item;
-(id)nowPlayingItem;
-(id)indexOfNowPlayingItem;
-(void)play;
-(void)shuffle;
-(void)pause;
-(void)stop;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(void)skipToBeginningOrPreviousItem;
-(void)skipToNextChapter;
-(void)skipToPreviousChapter;
-(id)currentChapterIndex;
-(void)setCurrentChapterIndex:(id)index;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(id)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(id)time;
-(void)pauseWithFadeoutDuration:(id)fadeoutDuration;
@end

@interface MPMusicPlayerController : NSObject {
	MPMusicPlayerControllerInternal* _internal;
}
@property(assign, nonatomic) unsigned currentChapterIndex;
@property(readonly, assign, nonatomic) unsigned indexOfNowPlayingItem;
@property(assign, nonatomic) int playbackSpeed;
@property(assign, nonatomic) BOOL allowsRemoteUIAccess;
+(id)applicationMusicPlayer;
+(id)iPodMusicPlayer;
-(id)init;
-(void)dealloc;
-(void)_systemVolumeDidChange:(id)_systemVolume;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(id)nowPlayingItem;
-(void)setQueueWithQuery:(id)query;
-(void)setQueueWithItemCollection:(id)itemCollection;
-(int)playbackState;
-(int)repeatMode;
-(void)setRepeatMode:(int)mode;
-(int)shuffleMode;
-(void)setShuffleMode:(int)mode;
-(float)volume;
-(void)setVolume:(float)volume;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)time;
-(void)beginGeneratingPlaybackNotifications;
-(void)endGeneratingPlaybackNotifications;
-(BOOL)isGeniusAvailable;
-(BOOL)setQueueWithSeedItems:(id)seedItems;
-(id)nowPlayingItemAtIndex:(unsigned)index;
-(void)pauseWithFadeoutDuration:(double)fadeoutDuration;
-(void)setUseCachedPlaybackState:(BOOL)state;
-(void)_setUseApplicationSpecificQueue:(BOOL)queue;
-(void)_serverDied:(id)died;
-(void)_musicPlayerDidLaunch;
-(void)_registerForLaunchNotifications;
-(void)_unregisterForLaunchNotifications;
-(void)_clientCheckIn;
-(void)_playbackStateDidChange:(int)_playbackState;
-(void)_nowPlayingItemDidChange:(unsigned long long)_nowPlayingItem;
-(void)_runMigServerOnPort:(unsigned)port;
-(void)_stopMigServer;
@end

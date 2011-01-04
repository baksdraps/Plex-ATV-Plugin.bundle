/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

//
#import "BackRow-Structs.h"


@protocol BRTransportDataProvider <NSObject>
- (BRTimeRange)bufferedRange;
- (float)bufferingProgress;
- (id)chapterTimes;
- (id)currentChapterTitle;
- (double)duration;
- (double)elapsedTime;
- (int)playerState;
- (BOOL)supportsBufferedRange;
- (double)virtualChapterMark;
@end


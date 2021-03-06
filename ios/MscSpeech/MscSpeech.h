//
//  MscSpeech.h
//  MscSpeech
//
//  Created by Nickming on 2017/7/25.
//  Copyright © 2017年 Nickming. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <React/RCTBridgeModule.h>


@interface MscSpeech : NSObject<RCTBridgeModule,AVSpeechSynthesizerDelegate>
@property (nonatomic, strong) RCTResponseSenderBlock callback;

@property (nonatomic, strong) AVSpeechSynthesizer *synthesizer;
@end

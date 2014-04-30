//
//  WSRPlayerCell.h
//  storyboards
//
//  Created by Josh Silverman on 4/29/14.
//  Copyright (c) 2014 Wisr. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WSRPlayerCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *gameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *ratingImageView;

@end

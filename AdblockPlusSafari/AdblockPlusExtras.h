/*
 * This file is part of Adblock Plus <https://adblockplus.org/>,
 * Copyright (C) 2006-2016 Eyeo GmbH
 *
 * Adblock Plus is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * Adblock Plus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Adblock Plus.  If not, see <http://www.gnu.org/licenses/&gt.
 */

#import "AdblockPlus.h"

@interface AdblockPlusExtras : AdblockPlus

// Reloading content blocker
@property (nonatomic) BOOL reloading;

// Updating filter lists
@property (nonatomic, readonly) BOOL updating;

- (void)reloadContentBlockerWithCompletion:(void(^__nullable)(NSError * __nullable error))completion;

- (void)checkActivatedFlag;

- (void)updateActiveFilterLists:(BOOL)userTriggered;

- (void)updateFilterListsWithNames:(NSArray<NSString *> *__nonnull)filterListNames userTriggered:(BOOL)userTriggered;

- (NSArray<NSString *> *__nonnull)outdatedFilterListNames;

- (void)displayErrorDialogIfNeeded;

@end

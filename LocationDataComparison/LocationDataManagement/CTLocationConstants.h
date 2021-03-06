//
//  CTLocationConstants.h
//  LocationDataComparison
//
//  Created by Truman, Christopher on 2/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef LocationDataComparison_CTLocationConstants_h
#define LocationDataComparison_CTLocationConstants_h

#pragma mark
#pragma API_KEYS

#pragma FACEBOOK
#define FACEBOOK_APP_ID @"237704586324353"
#define FACEBOOK_APP_SECRET @"7d73f6ebb28309b52de44f2dee2004d5"

#pragma CITY_GRID
#define CITY_GRID_PUBLISHER @"test"
#define CITY_GRID_PLACEMENT @"ios-example"
#define CITY_GRID_DEBUG NO

#pragma FOURSQUARE
#define FOURSQUARE_CLIENT_ID @"K4XTUDHZYEWKM3I0F543YWCCOILTEQXOXH3Z4UGMSJQOVM3B"
#define FOURSQUARE_CLIENT_SECRET @"IYGRZE1FC4X02XK03JDSTNVS1MYCR1B3C3WMPORAI3OHV5MK"
#define FOURSQUARE_AUTHORIZATION_CALLBACK_URL @"fsqdemo://foursquare"
#define FOURSQUARE_VERIFICATION_DATE @"20120227"

#pragma FACTUAL
#define FACTUAL_SERVER_KEY @"S0mvKJsSItrI76wNrFsa2Y9tfHEFENJ6fd5XFvdG9qFo1THE5Fh0FpUeHBUBybBD"

#pragma Google
#define GOOGLE_API_KEY @"AIzaSyBBbh0gHw2r6AjxRpr3em8HKUg-c7GBQuc"

#pragma Yahoo
#define YAHOO_APP_ID @"1syHD5fV34HfPfBrdvn2gPXmP3JcBxDw.Tzssu8BXBk6kCwn.o1logyoRevd51BjOtDohiouIZyhTnvP5eq05kY8"

#pragma Yelp
#define YELP_CONSUMER_KEY @"ggkFVz9AOTU70A2H4XsEQQ"
#define YELP_CONSUMER_SECRET @"q2h5kFpfz13NqtLINe5nu-1-_sM"
#define YELP_TOKEN @"6-kpb9dzttvdYfWYe9Emp2yd9B0zw8ea"
#define YELP_TOKEN_SECRET @"qJhCsri-Gxz5QRfxwvYnEgkvMi0"

#pragma DATA_SOURCE_TYPE
typedef enum {
  CTLocationDataTypeFacebook = 0,
  CTLocationDataTypeFoursquare,
  CTLocationDataTypeCityGrid,
  CTLocationDataTypeFactual,
  CTLocationDataTypeGoogle,
  CTLocationDataTypeYahoo,
  CTLocationDataTypeYelp
} CTLocationDataType;

#endif

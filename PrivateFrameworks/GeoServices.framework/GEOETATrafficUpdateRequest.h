/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying> {
    GEOAdditionalEnabledMarkets * _additionalEnabledMarkets;
    GEOClientCapabilities * _clientCapabilities;
    struct GEOTimepoint { 
        double _time; 
        int _type; 
        struct { 
            unsigned int time : 1; 
            unsigned int type : 1; 
        } _has; 
    }  _clientTimepoint;
    GEOCommonOptions * _commonOptions;
    GEOLocation * _currentUserLocation;
    NSMutableArray * _destinationWaypointTypeds;
    NSData * _directionsResponseID;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int clientTimepoint : 1; 
        unsigned int previouslyRejectedRerouteSavings : 1; 
        unsigned int rerouteStatus : 1; 
        unsigned int includeBetterRouteSuggestion : 1; 
        unsigned int useClientTimepointAsNow : 1; 
        unsigned int useLiveTrafficAsFallback : 1; 
    }  _has;
    bool  _includeBetterRouteSuggestion;
    unsigned int  _previouslyRejectedRerouteSavings;
    int  _rerouteStatus;
    GEORouteAttributes * _routeAttributes;
    NSMutableArray * _routes;
    NSMutableArray * _serviceTags;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
    NSData * _sessionState;
    GEOTFTrafficSnapshot * _trafficSnapshot;
    bool  _useClientTimepointAsNow;
    bool  _useLiveTrafficAsFallback;
}

@property (nonatomic, retain) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (nonatomic, retain) GEOClientCapabilities *clientCapabilities;
@property (nonatomic) struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } clientTimepoint;
@property (nonatomic, retain) GEOCommonOptions *commonOptions;
@property (nonatomic, retain) GEOLocation *currentUserLocation;
@property (nonatomic, retain) NSMutableArray *destinationWaypointTypeds;
@property (nonatomic, retain) NSData *directionsResponseID;
@property (nonatomic, readonly) bool hasAdditionalEnabledMarkets;
@property (nonatomic, readonly) bool hasClientCapabilities;
@property (nonatomic) bool hasClientTimepoint;
@property (nonatomic, readonly) bool hasCommonOptions;
@property (nonatomic, readonly) bool hasCurrentUserLocation;
@property (nonatomic, readonly) bool hasDirectionsResponseID;
@property (nonatomic) bool hasIncludeBetterRouteSuggestion;
@property (nonatomic) bool hasPreviouslyRejectedRerouteSavings;
@property (nonatomic) bool hasRerouteStatus;
@property (nonatomic, readonly) bool hasRouteAttributes;
@property (nonatomic) bool hasSessionID;
@property (nonatomic, readonly) bool hasSessionState;
@property (nonatomic, readonly) bool hasTrafficSnapshot;
@property (nonatomic) bool hasUseClientTimepointAsNow;
@property (nonatomic) bool hasUseLiveTrafficAsFallback;
@property (nonatomic) bool includeBetterRouteSuggestion;
@property (nonatomic) unsigned int previouslyRejectedRerouteSavings;
@property (nonatomic) int rerouteStatus;
@property (nonatomic, retain) GEORouteAttributes *routeAttributes;
@property (nonatomic, retain) NSMutableArray *routes;
@property (nonatomic, retain) NSMutableArray *serviceTags;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionID;
@property (nonatomic, retain) NSData *sessionState;
@property (nonatomic, retain) GEOTFTrafficSnapshot *trafficSnapshot;
@property (nonatomic) bool useClientTimepointAsNow;
@property (nonatomic) bool useLiveTrafficAsFallback;

+ (Class)destinationWaypointTypedType;
+ (Class)routeType;
+ (Class)serviceTagType;

- (int)StringAsRerouteStatus:(id)arg1;
- (void)addDestinationWaypointTyped:(id)arg1;
- (void)addRoute:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (id)additionalEnabledMarkets;
- (void)clearDestinationWaypointTypeds;
- (void)clearRoutes;
- (void)clearServiceTags;
- (id)clientCapabilities;
- (struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })clientTimepoint;
- (id)commonOptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentUserLocation;
- (void)dealloc;
- (id)description;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;
- (id)destinationWaypointTypeds;
- (unsigned long long)destinationWaypointTypedsCount;
- (id)dictionaryRepresentation;
- (id)directionsResponseID;
- (bool)hasAdditionalEnabledMarkets;
- (bool)hasClientCapabilities;
- (bool)hasClientTimepoint;
- (bool)hasCommonOptions;
- (bool)hasCurrentUserLocation;
- (bool)hasDirectionsResponseID;
- (bool)hasIncludeBetterRouteSuggestion;
- (bool)hasPreviouslyRejectedRerouteSavings;
- (bool)hasRerouteStatus;
- (bool)hasRouteAttributes;
- (bool)hasSessionID;
- (bool)hasSessionState;
- (bool)hasTrafficSnapshot;
- (bool)hasUseClientTimepointAsNow;
- (bool)hasUseLiveTrafficAsFallback;
- (unsigned long long)hash;
- (bool)includeBetterRouteSuggestion;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)previouslyRejectedRerouteSavings;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (int)rerouteStatus;
- (id)rerouteStatusAsString:(int)arg1;
- (Class)responseClass;
- (id)routeAtIndex:(unsigned long long)arg1;
- (id)routeAttributes;
- (id)routes;
- (unsigned long long)routesCount;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (id)serviceTags;
- (unsigned long long)serviceTagsCount;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionID;
- (id)sessionState;
- (void)setAdditionalEnabledMarkets:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setClientTimepoint:(struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)setCommonOptions:(id)arg1;
- (void)setCurrentUserLocation:(id)arg1;
- (void)setDestinationWaypointTypeds:(id)arg1;
- (void)setDirectionsResponseID:(id)arg1;
- (void)setHasClientTimepoint:(bool)arg1;
- (void)setHasIncludeBetterRouteSuggestion:(bool)arg1;
- (void)setHasPreviouslyRejectedRerouteSavings:(bool)arg1;
- (void)setHasRerouteStatus:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasUseClientTimepointAsNow:(bool)arg1;
- (void)setHasUseLiveTrafficAsFallback:(bool)arg1;
- (void)setIncludeBetterRouteSuggestion:(bool)arg1;
- (void)setPreviouslyRejectedRerouteSavings:(unsigned int)arg1;
- (void)setRerouteStatus:(int)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSessionState:(id)arg1;
- (void)setTrafficSnapshot:(id)arg1;
- (void)setUseClientTimepointAsNow:(bool)arg1;
- (void)setUseLiveTrafficAsFallback:(bool)arg1;
- (id)trafficSnapshot;
- (bool)useClientTimepointAsNow;
- (bool)useLiveTrafficAsFallback;
- (void)writeTo:(id)arg1;

@end

#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats(void *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat(void *, const char *, int32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_2(void *, const char *, float *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat(void *, const char *, int32);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_2(void *, const char *, float);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat(void *, const char *, float, double);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement(void *, const char *, bool *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement(void *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement(void *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats(void *);
extern int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon(void *, const char *);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute(void *, const char *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress(void *, const char *, uint32, uint32);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats(void *, CSteamID);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat(void *, CSteamID, const char *, int32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_2(void *, CSteamID, const char *, float *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement(void *, CSteamID, const char *, bool *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats(void *, bool);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard(void *, const char *, ELeaderboardSortMethod, ELeaderboardDisplayType);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard(void *, const char *);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName(void *, SteamLeaderboard_t);
extern int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount(void *, SteamLeaderboard_t);
extern ELeaderboardSortMethod cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod(void *, SteamLeaderboard_t);
extern ELeaderboardDisplayType cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType(void *, SteamLeaderboard_t);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries(void *, SteamLeaderboard_t, ELeaderboardDataRequest, int, int);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry(void *, SteamLeaderboardEntries_t, int, LeaderboardEntry_t *, int32 *, int);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore(void *, SteamLeaderboard_t, ELeaderboardUploadScoreMethod, int32, const int32 *, int);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetNumberOfCurrentPlayers(void *);
#ifdef __cplusplus
}
#endif

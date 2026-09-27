#pragma once
// IWYU pragma private; include "Viveport/UserStats.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UserStats)
namespace GlobalNamespace {
struct UserStats_AchievementDisplayAttribute;
}
namespace GlobalNamespace {
struct UserStats_LeaderBoardDiaplayType;
}
namespace GlobalNamespace {
struct UserStats_LeaderBoardRequestType;
}
namespace GlobalNamespace {
struct UserStats_LeaderBoardScoreMethod;
}
namespace GlobalNamespace {
struct UserStats_LeaderBoardSortMethod;
}
namespace GlobalNamespace {
struct UserStats_LeaderBoardTimeRange;
}
namespace Viveport::Internal {
class StatusCallback;
}
namespace Viveport {
class Leaderboard;
}
namespace Viveport {
struct Locale;
}
namespace Viveport {
class StatusCallback;
}
// Forward declare root types
namespace Viveport {
class UserStats;
}
// Write type traits
MARK_REF_T(::Viveport::UserStats*);
DEFINE_IL2CPP_CLASS(::Viveport::UserStats*, "Viveport", "UserStats");
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.UserStats
class CORDL_TYPE UserStats : public ::System::Object {
public:
// Declarations
using AchievementDisplayAttribute = ::GlobalNamespace::UserStats_AchievementDisplayAttribute;

using LeaderBoardDiaplayType = ::GlobalNamespace::UserStats_LeaderBoardDiaplayType;

using LeaderBoardRequestType = ::GlobalNamespace::UserStats_LeaderBoardRequestType;

using LeaderBoardScoreMethod = ::GlobalNamespace::UserStats_LeaderBoardScoreMethod;

using LeaderBoardSortMethod = ::GlobalNamespace::UserStats_LeaderBoardSortMethod;

using LeaderBoardTimeRange = ::GlobalNamespace::UserStats_LeaderBoardTimeRange;

/// @brief Field downloadLeaderboardScoresIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_downloadLeaderboardScoresIl2cppCallback, put=setStaticF_downloadLeaderboardScoresIl2cppCallback)) ::Viveport::Internal::StatusCallback*  downloadLeaderboardScoresIl2cppCallback;

/// @brief Field downloadStatsIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_downloadStatsIl2cppCallback, put=setStaticF_downloadStatsIl2cppCallback)) ::Viveport::Internal::StatusCallback*  downloadStatsIl2cppCallback;

/// @brief Field isReadyIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_isReadyIl2cppCallback, put=setStaticF_isReadyIl2cppCallback)) ::Viveport::Internal::StatusCallback*  isReadyIl2cppCallback;

/// @brief Field uploadLeaderboardScoreIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_uploadLeaderboardScoreIl2cppCallback, put=setStaticF_uploadLeaderboardScoreIl2cppCallback)) ::Viveport::Internal::StatusCallback*  uploadLeaderboardScoreIl2cppCallback;

/// @brief Field uploadStatsIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_uploadStatsIl2cppCallback, put=setStaticF_uploadStatsIl2cppCallback)) ::Viveport::Internal::StatusCallback*  uploadStatsIl2cppCallback;

/// @brief Method ClearAchievement, addr 0x5b4ecd8, size 0x4, virtual false, abstract: false, final false
static inline int32_t ClearAchievement(::StringW  pchName) ;

/// @brief Method DownloadLeaderboardScores, addr 0x5b4edbc, size 0x218, virtual false, abstract: false, final false
static inline int32_t DownloadLeaderboardScores(::Viveport::StatusCallback*  callback, ::StringW  pchLeaderboardName, ::GlobalNamespace::UserStats_LeaderBoardRequestType  eLeaderboardDataRequest, ::GlobalNamespace::UserStats_LeaderBoardTimeRange  eLeaderboardDataTimeRange, int32_t  nRangeStart, int32_t  nRangeEnd) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.StatusCallback))]
/// @brief Method DownloadLeaderboardScoresIl2cppCallback, addr 0x5b4d708, size 0x64, virtual false, abstract: false, final false
static inline void DownloadLeaderboardScoresIl2cppCallback(int32_t  errorCode) ;

/// @brief Method DownloadStats, addr 0x5b4db04, size 0x1e0, virtual false, abstract: false, final false
static inline int32_t DownloadStats(::Viveport::StatusCallback*  callback) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.StatusCallback))]
/// @brief Method DownloadStatsIl2cppCallback, addr 0x5b4d640, size 0x64, virtual false, abstract: false, final false
static inline void DownloadStatsIl2cppCallback(int32_t  errorCode) ;

/// @brief Method GetAchievement, addr 0x5b4e66c, size 0x4, virtual false, abstract: false, final false
static inline bool GetAchievement(::StringW  pchName) ;

/// @brief Method GetAchievementDisplayAttribute, addr 0x5b4e918, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetAchievementDisplayAttribute(::StringW  pchName, ::GlobalNamespace::UserStats_AchievementDisplayAttribute  attr) ;

/// @brief Method GetAchievementDisplayAttribute, addr 0x5b4ea5c, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetAchievementDisplayAttribute(::StringW  pchName, ::GlobalNamespace::UserStats_AchievementDisplayAttribute  attr, ::Viveport::Locale  locale) ;

/// @brief Method GetAchievementIcon, addr 0x5b4e834, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetAchievementIcon(::StringW  pchName) ;

/// @brief Method GetAchievementUnlockTime, addr 0x5b4e750, size 0x4, virtual false, abstract: false, final false
static inline int32_t GetAchievementUnlockTime(::StringW  pchName) ;

/// @brief Method GetLeaderboardDisplayType, addr 0x5b4faec, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UserStats_LeaderBoardDiaplayType GetLeaderboardDisplayType() ;

/// @brief Method GetLeaderboardScore, addr 0x5b4f698, size 0x4, virtual false, abstract: false, final false
static inline ::Viveport::Leaderboard* GetLeaderboardScore(int32_t  index) ;

/// @brief Method GetLeaderboardScoreCount, addr 0x5b4f934, size 0x4, virtual false, abstract: false, final false
static inline int32_t GetLeaderboardScoreCount() ;

/// @brief Method GetLeaderboardSortMethod, addr 0x5b4fa10, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UserStats_LeaderBoardSortMethod GetLeaderboardSortMethod() ;

/// @brief Method GetStat, addr 0x5b4df74, size 0x4, virtual false, abstract: false, final false
static inline float_t GetStat(::StringW  name, float_t  defaultValue) ;

/// @brief Method GetStat, addr 0x5b4de30, size 0x4, virtual false, abstract: false, final false
static inline int32_t GetStat(::StringW  name, int32_t  defaultValue) ;

/// @brief Method IsReady, addr 0x5b4d7d0, size 0x1e8, virtual false, abstract: false, final false
static inline int32_t IsReady(::Viveport::StatusCallback*  callback) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.StatusCallback))]
/// @brief Method IsReadyIl2cppCallback, addr 0x5b4d5dc, size 0x64, virtual false, abstract: false, final false
static inline void IsReadyIl2cppCallback(int32_t  errorCode) ;

static inline ::Viveport::UserStats* New_ctor() ;

/// @brief Method SetAchievement, addr 0x5b4ebf4, size 0x4, virtual false, abstract: false, final false
static inline int32_t SetAchievement(::StringW  pchName) ;

/// @brief Method SetStat, addr 0x5b4e1fc, size 0x4, virtual false, abstract: false, final false
static inline void SetStat(::StringW  name, float_t  value) ;

/// @brief Method SetStat, addr 0x5b4e0b8, size 0x4, virtual false, abstract: false, final false
static inline void SetStat(::StringW  name, int32_t  value) ;

/// @brief Method UploadLeaderboardScore, addr 0x5b4f2b4, size 0x1f8, virtual false, abstract: false, final false
static inline int32_t UploadLeaderboardScore(::Viveport::StatusCallback*  callback, ::StringW  pchLeaderboardName, int32_t  nScore) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.StatusCallback))]
/// @brief Method UploadLeaderboardScoreIl2cppCallback, addr 0x5b4d76c, size 0x64, virtual false, abstract: false, final false
static inline void UploadLeaderboardScoreIl2cppCallback(int32_t  errorCode) ;

/// @brief Method UploadStats, addr 0x5b4e340, size 0x1e0, virtual false, abstract: false, final false
static inline int32_t UploadStats(::Viveport::StatusCallback*  callback) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.StatusCallback))]
/// @brief Method UploadStatsIl2cppCallback, addr 0x5b4d6a4, size 0x64, virtual false, abstract: false, final false
static inline void UploadStatsIl2cppCallback(int32_t  errorCode) ;

/// @brief Method .ctor, addr 0x5b4fbc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Viveport::Internal::StatusCallback* getStaticF_downloadLeaderboardScoresIl2cppCallback() ;

static inline ::Viveport::Internal::StatusCallback* getStaticF_downloadStatsIl2cppCallback() ;

static inline ::Viveport::Internal::StatusCallback* getStaticF_isReadyIl2cppCallback() ;

static inline ::Viveport::Internal::StatusCallback* getStaticF_uploadLeaderboardScoreIl2cppCallback() ;

static inline ::Viveport::Internal::StatusCallback* getStaticF_uploadStatsIl2cppCallback() ;

static inline void setStaticF_downloadLeaderboardScoresIl2cppCallback(::Viveport::Internal::StatusCallback*  value) ;

static inline void setStaticF_downloadStatsIl2cppCallback(::Viveport::Internal::StatusCallback*  value) ;

static inline void setStaticF_isReadyIl2cppCallback(::Viveport::Internal::StatusCallback*  value) ;

static inline void setStaticF_uploadLeaderboardScoreIl2cppCallback(::Viveport::Internal::StatusCallback*  value) ;

static inline void setStaticF_uploadStatsIl2cppCallback(::Viveport::Internal::StatusCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserStats() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserStats", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserStats(UserStats && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserStats", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserStats(UserStats const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3770};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::UserStats) == 0x10, "Size mismatch!");

} // namespace end def Viveport

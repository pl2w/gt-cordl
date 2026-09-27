#pragma once
// IWYU pragma private; include "Viveport/Internal/UserStats.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UserStats)
namespace Viveport::Internal {
struct EAchievementDisplayAttribute;
}
namespace Viveport::Internal {
struct ELeaderboardDataRequest;
}
namespace Viveport::Internal {
struct ELeaderboardDataTimeRange;
}
namespace Viveport::Internal {
struct ELeaderboardDisplayType;
}
namespace Viveport::Internal {
struct ELeaderboardSortMethod;
}
namespace Viveport::Internal {
struct ELocale;
}
namespace Viveport::Internal {
class StatusCallback;
}
namespace Viveport {
class Leaderboard;
}
// Forward declare root types
namespace Viveport::Internal {
class UserStats;
}
// Write type traits
MARK_REF_T(::Viveport::Internal::UserStats*);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::UserStats*, "Viveport.Internal", "UserStats");
// Dependencies System.Object
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.UserStats
class CORDL_TYPE UserStats : public ::System::Object {
public:
// Declarations
/// @brief Method ClearAchievement, addr 0x5b4ecdc, size 0xe0, virtual false, abstract: false, final false
static inline int32_t ClearAchievement(::StringW  pchName) ;

/// @brief Method DownloadLeaderboardScores, addr 0x5b4efd4, size 0x2e0, virtual false, abstract: false, final false
static inline int32_t DownloadLeaderboardScores(::Viveport::Internal::StatusCallback*  callback, ::StringW  pchLeaderboardName, ::Viveport::Internal::ELeaderboardDataRequest  nDataRequest, ::Viveport::Internal::ELeaderboardDataTimeRange  nTimeRange, int32_t  nRangeStart, int32_t  nRangeEnd) ;

/// @brief Method DownloadStats, addr 0x5b4dce4, size 0x14c, virtual false, abstract: false, final false
static inline int32_t DownloadStats(::Viveport::Internal::StatusCallback*  callback) ;

/// @brief Method GetAchievement, addr 0x5b4e670, size 0xe0, virtual false, abstract: false, final false
static inline bool GetAchievement(::StringW  pchName) ;

/// @brief Method GetAchievementDisplayAttribute, addr 0x5b4e91c, size 0x140, virtual false, abstract: false, final false
static inline ::StringW GetAchievementDisplayAttribute(::StringW  pchName, ::Viveport::Internal::EAchievementDisplayAttribute  attr) ;

/// @brief Method GetAchievementDisplayAttribute, addr 0x5b4ea60, size 0x194, virtual false, abstract: false, final false
static inline ::StringW GetAchievementDisplayAttribute(::StringW  pchName, ::Viveport::Internal::EAchievementDisplayAttribute  attr, ::Viveport::Internal::ELocale  locale) ;

/// @brief Method GetAchievementIcon, addr 0x5b4e838, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW GetAchievementIcon(::StringW  pchName) ;

/// @brief Method GetAchievementUnlockTime, addr 0x5b4e754, size 0xe0, virtual false, abstract: false, final false
static inline int32_t GetAchievementUnlockTime(::StringW  pchName) ;

/// @brief Method GetLeaderboardDisplayType, addr 0x5b4faf0, size 0xd8, virtual false, abstract: false, final false
static inline ::Viveport::Internal::ELeaderboardDisplayType GetLeaderboardDisplayType() ;

/// @brief Method GetLeaderboardScore, addr 0x5b4f69c, size 0x298, virtual false, abstract: false, final false
static inline ::Viveport::Leaderboard* GetLeaderboardScore(int32_t  nIndex) ;

/// @brief Method GetLeaderboardScoreCount, addr 0x5b4f938, size 0xd8, virtual false, abstract: false, final false
static inline int32_t GetLeaderboardScoreCount() ;

/// @brief Method GetLeaderboardSortMethod, addr 0x5b4fa14, size 0xd8, virtual false, abstract: false, final false
static inline ::Viveport::Internal::ELeaderboardSortMethod GetLeaderboardSortMethod() ;

/// @brief Method GetStat, addr 0x5b4df78, size 0x140, virtual false, abstract: false, final false
static inline float_t GetStat(::StringW  pchName, float_t  fData) ;

/// @brief Method GetStat, addr 0x5b4de34, size 0x140, virtual false, abstract: false, final false
static inline int32_t GetStat(::StringW  pchName, int32_t  nData) ;

/// @brief Method IsReady, addr 0x5b4d9b8, size 0x14c, virtual false, abstract: false, final false
static inline int32_t IsReady(::Viveport::Internal::StatusCallback*  callback) ;

static inline ::Viveport::Internal::UserStats* New_ctor() ;

/// @brief Method SetAchievement, addr 0x5b4ebf8, size 0xe0, virtual false, abstract: false, final false
static inline int32_t SetAchievement(::StringW  pchName) ;

/// @brief Method SetStat, addr 0x5b4e200, size 0x140, virtual false, abstract: false, final false
static inline int32_t SetStat(::StringW  pchName, float_t  fData) ;

/// @brief Method SetStat, addr 0x5b4e0bc, size 0x140, virtual false, abstract: false, final false
static inline int32_t SetStat(::StringW  pchName, int32_t  nData) ;

/// @brief Method UploadLeaderboardScore, addr 0x5b4f4ac, size 0x1ec, virtual false, abstract: false, final false
static inline int32_t UploadLeaderboardScore(::Viveport::Internal::StatusCallback*  callback, ::StringW  pchLeaderboardName, int32_t  nScores) ;

/// @brief Method UploadStats, addr 0x5b4e520, size 0x14c, virtual false, abstract: false, final false
static inline int32_t UploadStats(::Viveport::Internal::StatusCallback*  callback) ;

/// @brief Method .ctor, addr 0x5b59bac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3807};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Internal::UserStats) == 0x10, "Size mismatch!");

} // namespace end def Viveport::Internal

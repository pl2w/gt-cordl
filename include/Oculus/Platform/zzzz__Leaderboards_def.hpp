#pragma once
// IWYU pragma private; include "Oculus/Platform/Leaderboards.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Leaderboards)
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
namespace Oculus::Platform::Models {
class LeaderboardList;
}
namespace Oculus::Platform {
struct LeaderboardFilterType;
}
namespace Oculus::Platform {
struct LeaderboardStartAt;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class Leaderboards;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::Leaderboards*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::Leaderboards*, "Oculus.Platform", "Leaderboards");
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Leaderboards
class CORDL_TYPE Leaderboards : public ::System::Object {
public:
// Declarations
/// @brief Method Get, addr 0xa542044, size 0x17c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardList*>* Get(::StringW  leaderboardName) ;

/// @brief Method GetEntries, addr 0xa5421c0, size 0x1a4, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* GetEntries(::StringW  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardFilterType  filter, ::Oculus::Platform::LeaderboardStartAt  startAt) ;

/// @brief Method GetEntriesAfterRank, addr 0xa542364, size 0x194, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* GetEntriesAfterRank(::StringW  leaderboardName, int32_t  limit, uint64_t  afterRank) ;

/// @brief Method GetEntriesByIds, addr 0xa5424f8, size 0x1b8, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* GetEntriesByIds(::StringW  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardStartAt  startAt, ::ArrayW<uint64_t>  userIDs) ;

/// @brief Method GetNextEntries, addr 0xa541d0c, size 0x19c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* GetNextEntries(::Oculus::Platform::Models::LeaderboardEntryList*  list) ;

/// @brief Method GetNextLeaderboardListPage, addr 0xa542a30, size 0x1fc, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardList*>* GetNextLeaderboardListPage(::Oculus::Platform::Models::LeaderboardList*  list) ;

/// @brief Method GetPreviousEntries, addr 0xa541ea8, size 0x19c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* GetPreviousEntries(::Oculus::Platform::Models::LeaderboardEntryList*  list) ;

/// @brief Method WriteEntry, addr 0xa5426b0, size 0x1b8, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<bool>* WriteEntry(::StringW  leaderboardName, int64_t  score, ::ArrayW<uint8_t>  extraData, bool  forceUpdate) ;

/// @brief Method WriteEntryWithSupplementaryMetric, addr 0xa542868, size 0x1c8, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<bool>* WriteEntryWithSupplementaryMetric(::StringW  leaderboardName, int64_t  score, int64_t  supplementaryMetric, ::ArrayW<uint8_t>  extraData, bool  forceUpdate) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Leaderboards() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Leaderboards", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Leaderboards(Leaderboards && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Leaderboards", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Leaderboards(Leaderboards const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26870};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::Leaderboards) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Platform

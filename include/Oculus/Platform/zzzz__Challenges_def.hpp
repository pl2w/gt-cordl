#pragma once
// IWYU pragma private; include "Oculus/Platform/Challenges.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Challenges)
namespace Oculus::Platform::Models {
class ChallengeEntryList;
}
namespace Oculus::Platform::Models {
class ChallengeList;
}
namespace Oculus::Platform::Models {
class Challenge;
}
namespace Oculus::Platform {
class ChallengeOptions;
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
namespace Oculus::Platform {
class Request;
}
// Forward declare root types
namespace Oculus::Platform {
class Challenges;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::Challenges*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::Challenges*, "Oculus.Platform", "Challenges");
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Challenges
class CORDL_TYPE Challenges : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0xa54329c, size 0x194, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Create(::StringW  leaderboardName, ::Oculus::Platform::ChallengeOptions*  challengeOptions) ;

/// @brief Method DeclineInvite, addr 0xa543430, size 0x17c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* DeclineInvite(uint64_t  challengeID) ;

/// @brief Method Delete, addr 0xa5435ac, size 0x168, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request* Delete(uint64_t  challengeID) ;

/// @brief Method Get, addr 0xa543714, size 0x17c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Get(uint64_t  challengeID) ;

/// @brief Method GetEntries, addr 0xa543890, size 0x1a4, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* GetEntries(uint64_t  challengeID, int32_t  limit, ::Oculus::Platform::LeaderboardFilterType  filter, ::Oculus::Platform::LeaderboardStartAt  startAt) ;

/// @brief Method GetEntriesAfterRank, addr 0xa543a34, size 0x194, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* GetEntriesAfterRank(uint64_t  challengeID, int32_t  limit, uint64_t  afterRank) ;

/// @brief Method GetEntriesByIds, addr 0xa543bc8, size 0x1b8, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* GetEntriesByIds(uint64_t  challengeID, int32_t  limit, ::Oculus::Platform::LeaderboardStartAt  startAt, ::ArrayW<uint64_t>  userIDs) ;

/// @brief Method GetList, addr 0xa543d80, size 0x194, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* GetList(::Oculus::Platform::ChallengeOptions*  challengeOptions, int32_t  limit) ;

/// @brief Method GetNextChallenges, addr 0xa542f64, size 0x19c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* GetNextChallenges(::Oculus::Platform::Models::ChallengeList*  list) ;

/// @brief Method GetNextEntries, addr 0xa542c2c, size 0x19c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* GetNextEntries(::Oculus::Platform::Models::ChallengeEntryList*  list) ;

/// @brief Method GetPreviousChallenges, addr 0xa543100, size 0x19c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* GetPreviousChallenges(::Oculus::Platform::Models::ChallengeList*  list) ;

/// @brief Method GetPreviousEntries, addr 0xa542dc8, size 0x19c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* GetPreviousEntries(::Oculus::Platform::Models::ChallengeEntryList*  list) ;

/// @brief Method Join, addr 0xa543f14, size 0x17c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Join(uint64_t  challengeID) ;

/// @brief Method Leave, addr 0xa544090, size 0x17c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Leave(uint64_t  challengeID) ;

/// @brief Method UpdateInfo, addr 0xa54420c, size 0x194, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* UpdateInfo(uint64_t  challengeID, ::Oculus::Platform::ChallengeOptions*  challengeOptions) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Challenges() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Challenges", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Challenges(Challenges && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Challenges", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Challenges(Challenges const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26871};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::Challenges) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Platform

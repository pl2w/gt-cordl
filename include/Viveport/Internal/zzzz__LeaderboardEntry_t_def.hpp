#pragma once
// IWYU pragma private; include "Viveport/Internal/LeaderboardEntry_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardEntry_t)
// Forward declare root types
namespace Viveport::Internal {
struct LeaderboardEntry_t;
}
// Write type traits
MARK_VAL_T(::Viveport::Internal::LeaderboardEntry_t);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::LeaderboardEntry_t, "Viveport.Internal", "LeaderboardEntry_t");
// Dependencies 
namespace Viveport::Internal {
// Is value type: true
// CS Name: Viveport.Internal.LeaderboardEntry_t
struct CORDL_TYPE LeaderboardEntry_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LeaderboardEntry_t() ;

// Ctor Parameters [CppParam { name: "m_nGlobalRank", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_nScore", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_pUserName", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr LeaderboardEntry_t(int32_t  m_nGlobalRank, int32_t  m_nScore, ::StringW  m_pUserName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3801};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_nGlobalRank, offset: 0x0, size: 0x4, def value: None
 int32_t  m_nGlobalRank;

/// @brief Field m_nScore, offset: 0x4, size: 0x4, def value: None
 int32_t  m_nScore;

/// @brief Field m_pUserName, offset: 0x8, size: 0x8, def value: None
 ::StringW  m_pUserName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Viveport::Internal::LeaderboardEntry_t, m_nGlobalRank) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Viveport::Internal::LeaderboardEntry_t, m_nScore) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Viveport::Internal::LeaderboardEntry_t, m_pUserName) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Viveport::Internal::LeaderboardEntry_t) == 0x10, "Size mismatch!");

} // namespace end def Viveport::Internal

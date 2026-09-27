#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CurrentServerStats.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CurrentServerStats)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class CurrentServerStats;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CurrentServerStats*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CurrentServerStats*, "PlayFab.MultiplayerModels", "CurrentServerStats");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CurrentServerStats
class CORDL_TYPE CurrentServerStats : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Active, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Active, put=__cordl_internal_set_Active)) int32_t  Active;

/// @brief Field Propping, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Propping, put=__cordl_internal_set_Propping)) int32_t  Propping;

/// @brief Field StandingBy, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_StandingBy, put=__cordl_internal_set_StandingBy)) int32_t  StandingBy;

/// @brief Field Total, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Total, put=__cordl_internal_set_Total)) int32_t  Total;

static inline ::PlayFab::MultiplayerModels::CurrentServerStats* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_Active() const;

constexpr int32_t& __cordl_internal_get_Active() ;

constexpr int32_t const& __cordl_internal_get_Propping() const;

constexpr int32_t& __cordl_internal_get_Propping() ;

constexpr int32_t const& __cordl_internal_get_StandingBy() const;

constexpr int32_t& __cordl_internal_get_StandingBy() ;

constexpr int32_t const& __cordl_internal_get_Total() const;

constexpr int32_t& __cordl_internal_get_Total() ;

constexpr void __cordl_internal_set_Active(int32_t  value) ;

constexpr void __cordl_internal_set_Propping(int32_t  value) ;

constexpr void __cordl_internal_set_StandingBy(int32_t  value) ;

constexpr void __cordl_internal_set_Total(int32_t  value) ;

/// @brief Method .ctor, addr 0xa8408a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurrentServerStats() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurrentServerStats", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurrentServerStats(CurrentServerStats && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurrentServerStats", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurrentServerStats(CurrentServerStats const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19623};

/// @brief Field Active, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Active;

/// @brief Field Propping, offset: 0x14, size: 0x4, def value: None
 int32_t  ___Propping;

/// @brief Field StandingBy, offset: 0x18, size: 0x4, def value: None
 int32_t  ___StandingBy;

/// @brief Field Total, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___Total;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::CurrentServerStats, ___Active) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CurrentServerStats, ___Propping) == 0x14, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CurrentServerStats, ___StandingBy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CurrentServerStats, ___Total) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::CurrentServerStats) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/LinearTeamDifferenceRuleExpansion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LinearTeamDifferenceRuleExpansion)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class LinearTeamDifferenceRuleExpansion;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::LinearTeamDifferenceRuleExpansion*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::LinearTeamDifferenceRuleExpansion*, "PlayFab.MultiplayerModels", "LinearTeamDifferenceRuleExpansion");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.LinearTeamDifferenceRuleExpansion
class CORDL_TYPE LinearTeamDifferenceRuleExpansion : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Delta, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Delta, put=__cordl_internal_set_Delta)) double_t  Delta;

/// @brief Field Limit, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_Limit, put=__cordl_internal_set_Limit)) ::System::Nullable_1<double_t>  Limit;

/// @brief Field SecondsBetweenExpansions, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondsBetweenExpansions, put=__cordl_internal_set_SecondsBetweenExpansions)) uint32_t  SecondsBetweenExpansions;

static inline ::PlayFab::MultiplayerModels::LinearTeamDifferenceRuleExpansion* New_ctor() ;

constexpr double_t const& __cordl_internal_get_Delta() const;

constexpr double_t& __cordl_internal_get_Delta() ;

constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get_Limit() const;

constexpr ::System::Nullable_1<double_t>& __cordl_internal_get_Limit() ;

constexpr uint32_t const& __cordl_internal_get_SecondsBetweenExpansions() const;

constexpr uint32_t& __cordl_internal_get_SecondsBetweenExpansions() ;

constexpr void __cordl_internal_set_Delta(double_t  value) ;

constexpr void __cordl_internal_set_Limit(::System::Nullable_1<double_t>  value) ;

constexpr void __cordl_internal_set_SecondsBetweenExpansions(uint32_t  value) ;

/// @brief Method .ctor, addr 0xa840a68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinearTeamDifferenceRuleExpansion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinearTeamDifferenceRuleExpansion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinearTeamDifferenceRuleExpansion(LinearTeamDifferenceRuleExpansion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinearTeamDifferenceRuleExpansion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinearTeamDifferenceRuleExpansion(LinearTeamDifferenceRuleExpansion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19679};

/// @brief Field Delta, offset: 0x10, size: 0x8, def value: None
 double_t  ___Delta;

/// @brief Field Limit, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<double_t>  ___Limit;

/// @brief Field SecondsBetweenExpansions, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___SecondsBetweenExpansions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::LinearTeamDifferenceRuleExpansion, ___Delta) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::LinearTeamDifferenceRuleExpansion, ___Limit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::LinearTeamDifferenceRuleExpansion, ___SecondsBetweenExpansions) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::LinearTeamDifferenceRuleExpansion) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

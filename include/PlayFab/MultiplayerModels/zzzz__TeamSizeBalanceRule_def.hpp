#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/TeamSizeBalanceRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TeamSizeBalanceRule)
namespace PlayFab::MultiplayerModels {
class CustomTeamSizeBalanceRuleExpansion;
}
namespace PlayFab::MultiplayerModels {
class LinearTeamSizeBalanceRuleExpansion;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class TeamSizeBalanceRule;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::TeamSizeBalanceRule*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::TeamSizeBalanceRule*, "PlayFab.MultiplayerModels", "TeamSizeBalanceRule");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.TeamSizeBalanceRule
class CORDL_TYPE TeamSizeBalanceRule : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field CustomExpansion, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomExpansion, put=__cordl_internal_set_CustomExpansion)) ::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion*  CustomExpansion;

/// @brief Field Difference, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Difference, put=__cordl_internal_set_Difference)) uint32_t  Difference;

/// @brief Field LinearExpansion, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_LinearExpansion, put=__cordl_internal_set_LinearExpansion)) ::PlayFab::MultiplayerModels::LinearTeamSizeBalanceRuleExpansion*  LinearExpansion;

/// @brief Field Name, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field SecondsUntilOptional, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_SecondsUntilOptional, put=__cordl_internal_set_SecondsUntilOptional)) ::System::Nullable_1<uint32_t>  SecondsUntilOptional;

static inline ::PlayFab::MultiplayerModels::TeamSizeBalanceRule* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion* const& __cordl_internal_get_CustomExpansion() const;

constexpr ::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion*& __cordl_internal_get_CustomExpansion() ;

constexpr uint32_t const& __cordl_internal_get_Difference() const;

constexpr uint32_t& __cordl_internal_get_Difference() ;

constexpr ::PlayFab::MultiplayerModels::LinearTeamSizeBalanceRuleExpansion* const& __cordl_internal_get_LinearExpansion() const;

constexpr ::PlayFab::MultiplayerModels::LinearTeamSizeBalanceRuleExpansion*& __cordl_internal_get_LinearExpansion() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_SecondsUntilOptional() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_SecondsUntilOptional() ;

constexpr void __cordl_internal_set_CustomExpansion(::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion*  value) ;

constexpr void __cordl_internal_set_Difference(uint32_t  value) ;

constexpr void __cordl_internal_set_LinearExpansion(::PlayFab::MultiplayerModels::LinearTeamSizeBalanceRuleExpansion*  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_SecondsUntilOptional(::System::Nullable_1<uint32_t>  value) ;

/// @brief Method .ctor, addr 0xa840c48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeamSizeBalanceRule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeamSizeBalanceRule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeamSizeBalanceRule(TeamSizeBalanceRule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeamSizeBalanceRule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeamSizeBalanceRule(TeamSizeBalanceRule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19742};

/// @brief Field CustomExpansion, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion*  ___CustomExpansion;

/// @brief Field Difference, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___Difference;

/// @brief Field LinearExpansion, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::LinearTeamSizeBalanceRuleExpansion*  ___LinearExpansion;

/// @brief Field Name, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field SecondsUntilOptional, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___SecondsUntilOptional;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::TeamSizeBalanceRule, ___CustomExpansion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::TeamSizeBalanceRule, ___Difference) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::TeamSizeBalanceRule, ___LinearExpansion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::TeamSizeBalanceRule, ___Name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::TeamSizeBalanceRule, ___SecondsUntilOptional) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::TeamSizeBalanceRule) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

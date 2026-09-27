#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/TeamDifferenceRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TeamDifferenceRule)
namespace PlayFab::MultiplayerModels {
class CustomTeamDifferenceRuleExpansion;
}
namespace PlayFab::MultiplayerModels {
class LinearTeamDifferenceRuleExpansion;
}
namespace PlayFab::MultiplayerModels {
class QueueRuleAttribute;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class TeamDifferenceRule;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::TeamDifferenceRule*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::TeamDifferenceRule*, "PlayFab.MultiplayerModels", "TeamDifferenceRule");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.TeamDifferenceRule
class CORDL_TYPE TeamDifferenceRule : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Attribute, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Attribute, put=__cordl_internal_set_Attribute)) ::PlayFab::MultiplayerModels::QueueRuleAttribute*  Attribute;

/// @brief Field CustomExpansion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomExpansion, put=__cordl_internal_set_CustomExpansion)) ::PlayFab::MultiplayerModels::CustomTeamDifferenceRuleExpansion*  CustomExpansion;

/// @brief Field DefaultAttributeValue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultAttributeValue, put=__cordl_internal_set_DefaultAttributeValue)) double_t  DefaultAttributeValue;

/// @brief Field Difference, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Difference, put=__cordl_internal_set_Difference)) double_t  Difference;

/// @brief Field LinearExpansion, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_LinearExpansion, put=__cordl_internal_set_LinearExpansion)) ::PlayFab::MultiplayerModels::LinearTeamDifferenceRuleExpansion*  LinearExpansion;

/// @brief Field Name, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field SecondsUntilOptional, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_SecondsUntilOptional, put=__cordl_internal_set_SecondsUntilOptional)) ::System::Nullable_1<uint32_t>  SecondsUntilOptional;

static inline ::PlayFab::MultiplayerModels::TeamDifferenceRule* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::QueueRuleAttribute* const& __cordl_internal_get_Attribute() const;

constexpr ::PlayFab::MultiplayerModels::QueueRuleAttribute*& __cordl_internal_get_Attribute() ;

constexpr ::PlayFab::MultiplayerModels::CustomTeamDifferenceRuleExpansion* const& __cordl_internal_get_CustomExpansion() const;

constexpr ::PlayFab::MultiplayerModels::CustomTeamDifferenceRuleExpansion*& __cordl_internal_get_CustomExpansion() ;

constexpr double_t const& __cordl_internal_get_DefaultAttributeValue() const;

constexpr double_t& __cordl_internal_get_DefaultAttributeValue() ;

constexpr double_t const& __cordl_internal_get_Difference() const;

constexpr double_t& __cordl_internal_get_Difference() ;

constexpr ::PlayFab::MultiplayerModels::LinearTeamDifferenceRuleExpansion* const& __cordl_internal_get_LinearExpansion() const;

constexpr ::PlayFab::MultiplayerModels::LinearTeamDifferenceRuleExpansion*& __cordl_internal_get_LinearExpansion() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_SecondsUntilOptional() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_SecondsUntilOptional() ;

constexpr void __cordl_internal_set_Attribute(::PlayFab::MultiplayerModels::QueueRuleAttribute*  value) ;

constexpr void __cordl_internal_set_CustomExpansion(::PlayFab::MultiplayerModels::CustomTeamDifferenceRuleExpansion*  value) ;

constexpr void __cordl_internal_set_DefaultAttributeValue(double_t  value) ;

constexpr void __cordl_internal_set_Difference(double_t  value) ;

constexpr void __cordl_internal_set_LinearExpansion(::PlayFab::MultiplayerModels::LinearTeamDifferenceRuleExpansion*  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_SecondsUntilOptional(::System::Nullable_1<uint32_t>  value) ;

/// @brief Method .ctor, addr 0xa840c40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeamDifferenceRule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeamDifferenceRule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeamDifferenceRule(TeamDifferenceRule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeamDifferenceRule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeamDifferenceRule(TeamDifferenceRule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19741};

/// @brief Field Attribute, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::QueueRuleAttribute*  ___Attribute;

/// @brief Field CustomExpansion, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::CustomTeamDifferenceRuleExpansion*  ___CustomExpansion;

/// @brief Field DefaultAttributeValue, offset: 0x20, size: 0x8, def value: None
 double_t  ___DefaultAttributeValue;

/// @brief Field Difference, offset: 0x28, size: 0x8, def value: None
 double_t  ___Difference;

/// @brief Field LinearExpansion, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::LinearTeamDifferenceRuleExpansion*  ___LinearExpansion;

/// @brief Field Name, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field SecondsUntilOptional, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___SecondsUntilOptional;

/// @brief Size padding 0x48 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::TeamDifferenceRule, ___Attribute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::TeamDifferenceRule, ___CustomExpansion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::TeamDifferenceRule, ___DefaultAttributeValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::TeamDifferenceRule, ___Difference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::TeamDifferenceRule, ___LinearExpansion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::TeamDifferenceRule, ___Name) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::TeamDifferenceRule, ___SecondsUntilOptional) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::TeamDifferenceRule) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

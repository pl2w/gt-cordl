#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CustomDifferenceRuleExpansion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomDifferenceRuleExpansion)
namespace PlayFab::MultiplayerModels {
class OverrideDouble;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class CustomDifferenceRuleExpansion;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion*, "PlayFab.MultiplayerModels", "CustomDifferenceRuleExpansion");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CustomDifferenceRuleExpansion
class CORDL_TYPE CustomDifferenceRuleExpansion : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field DifferenceOverrides, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DifferenceOverrides, put=__cordl_internal_set_DifferenceOverrides)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*  DifferenceOverrides;

/// @brief Field SecondsBetweenExpansions, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondsBetweenExpansions, put=__cordl_internal_set_SecondsBetweenExpansions)) uint32_t  SecondsBetweenExpansions;

static inline ::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>* const& __cordl_internal_get_DifferenceOverrides() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*& __cordl_internal_get_DifferenceOverrides() ;

constexpr uint32_t const& __cordl_internal_get_SecondsBetweenExpansions() const;

constexpr uint32_t& __cordl_internal_get_SecondsBetweenExpansions() ;

constexpr void __cordl_internal_set_DifferenceOverrides(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*  value) ;

constexpr void __cordl_internal_set_SecondsBetweenExpansions(uint32_t  value) ;

/// @brief Method .ctor, addr 0xa8408b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomDifferenceRuleExpansion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomDifferenceRuleExpansion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomDifferenceRuleExpansion(CustomDifferenceRuleExpansion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomDifferenceRuleExpansion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomDifferenceRuleExpansion(CustomDifferenceRuleExpansion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19624};

/// @brief Field DifferenceOverrides, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*  ___DifferenceOverrides;

/// @brief Field SecondsBetweenExpansions, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___SecondsBetweenExpansions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion, ___DifferenceOverrides) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion, ___SecondsBetweenExpansions) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

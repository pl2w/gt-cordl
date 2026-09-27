#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MatchTotalRuleExpansion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchTotalRuleExpansion)
namespace PlayFab::MultiplayerModels {
class OverrideDouble;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class MatchTotalRuleExpansion;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::MatchTotalRuleExpansion*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::MatchTotalRuleExpansion*, "PlayFab.MultiplayerModels", "MatchTotalRuleExpansion");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.MatchTotalRuleExpansion
class CORDL_TYPE MatchTotalRuleExpansion : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field MaxOverrides, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxOverrides, put=__cordl_internal_set_MaxOverrides)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*  MaxOverrides;

/// @brief Field MinOverrides, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinOverrides, put=__cordl_internal_set_MinOverrides)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*  MinOverrides;

/// @brief Field SecondsBetweenExpansions, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondsBetweenExpansions, put=__cordl_internal_set_SecondsBetweenExpansions)) uint32_t  SecondsBetweenExpansions;

static inline ::PlayFab::MultiplayerModels::MatchTotalRuleExpansion* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>* const& __cordl_internal_get_MaxOverrides() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*& __cordl_internal_get_MaxOverrides() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>* const& __cordl_internal_get_MinOverrides() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*& __cordl_internal_get_MinOverrides() ;

constexpr uint32_t const& __cordl_internal_get_SecondsBetweenExpansions() const;

constexpr uint32_t& __cordl_internal_get_SecondsBetweenExpansions() ;

constexpr void __cordl_internal_set_MaxOverrides(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*  value) ;

constexpr void __cordl_internal_set_MinOverrides(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*  value) ;

constexpr void __cordl_internal_set_SecondsBetweenExpansions(uint32_t  value) ;

/// @brief Method .ctor, addr 0xa840b80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchTotalRuleExpansion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchTotalRuleExpansion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchTotalRuleExpansion(MatchTotalRuleExpansion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchTotalRuleExpansion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchTotalRuleExpansion(MatchTotalRuleExpansion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19714};

/// @brief Field MaxOverrides, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*  ___MaxOverrides;

/// @brief Field MinOverrides, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*  ___MinOverrides;

/// @brief Field SecondsBetweenExpansions, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___SecondsBetweenExpansions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::MatchTotalRuleExpansion, ___MaxOverrides) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchTotalRuleExpansion, ___MinOverrides) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchTotalRuleExpansion, ___SecondsBetweenExpansions) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::MatchTotalRuleExpansion) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

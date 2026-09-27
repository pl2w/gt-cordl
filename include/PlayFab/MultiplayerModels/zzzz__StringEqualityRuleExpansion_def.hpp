#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/StringEqualityRuleExpansion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringEqualityRuleExpansion)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class StringEqualityRuleExpansion;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::StringEqualityRuleExpansion*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::StringEqualityRuleExpansion*, "PlayFab.MultiplayerModels", "StringEqualityRuleExpansion");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.StringEqualityRuleExpansion
class CORDL_TYPE StringEqualityRuleExpansion : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field EnabledOverrides, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_EnabledOverrides, put=__cordl_internal_set_EnabledOverrides)) ::System::Collections::Generic::List_1<bool>*  EnabledOverrides;

/// @brief Field SecondsBetweenExpansions, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondsBetweenExpansions, put=__cordl_internal_set_SecondsBetweenExpansions)) uint32_t  SecondsBetweenExpansions;

static inline ::PlayFab::MultiplayerModels::StringEqualityRuleExpansion* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<bool>* const& __cordl_internal_get_EnabledOverrides() const;

constexpr ::System::Collections::Generic::List_1<bool>*& __cordl_internal_get_EnabledOverrides() ;

constexpr uint32_t const& __cordl_internal_get_SecondsBetweenExpansions() const;

constexpr uint32_t& __cordl_internal_get_SecondsBetweenExpansions() ;

constexpr void __cordl_internal_set_EnabledOverrides(::System::Collections::Generic::List_1<bool>*  value) ;

constexpr void __cordl_internal_set_SecondsBetweenExpansions(uint32_t  value) ;

/// @brief Method .ctor, addr 0xa840c38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringEqualityRuleExpansion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringEqualityRuleExpansion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringEqualityRuleExpansion(StringEqualityRuleExpansion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringEqualityRuleExpansion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringEqualityRuleExpansion(StringEqualityRuleExpansion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19740};

/// @brief Field EnabledOverrides, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<bool>*  ___EnabledOverrides;

/// @brief Field SecondsBetweenExpansions, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___SecondsBetweenExpansions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::StringEqualityRuleExpansion, ___EnabledOverrides) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::StringEqualityRuleExpansion, ___SecondsBetweenExpansions) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::StringEqualityRuleExpansion) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

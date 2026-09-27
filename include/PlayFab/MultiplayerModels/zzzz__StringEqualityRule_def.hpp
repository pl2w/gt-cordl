#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/StringEqualityRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/MultiplayerModels/zzzz__AttributeNotSpecifiedBehavior_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StringEqualityRule)
namespace PlayFab::MultiplayerModels {
class QueueRuleAttribute;
}
namespace PlayFab::MultiplayerModels {
class StringEqualityRuleExpansion;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class StringEqualityRule;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::StringEqualityRule*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::StringEqualityRule*, "PlayFab.MultiplayerModels", "StringEqualityRule");
// Dependencies PlayFab.MultiplayerModels.AttributeNotSpecifiedBehavior, PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.StringEqualityRule
class CORDL_TYPE StringEqualityRule : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Attribute, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Attribute, put=__cordl_internal_set_Attribute)) ::PlayFab::MultiplayerModels::QueueRuleAttribute*  Attribute;

/// @brief Field AttributeNotSpecifiedBehavior, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_AttributeNotSpecifiedBehavior, put=__cordl_internal_set_AttributeNotSpecifiedBehavior)) ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior  AttributeNotSpecifiedBehavior;

/// @brief Field DefaultAttributeValue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultAttributeValue, put=__cordl_internal_set_DefaultAttributeValue)) ::StringW  DefaultAttributeValue;

/// @brief Field Expansion, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Expansion, put=__cordl_internal_set_Expansion)) ::PlayFab::MultiplayerModels::StringEqualityRuleExpansion*  Expansion;

/// @brief Field Name, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field SecondsUntilOptional, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_SecondsUntilOptional, put=__cordl_internal_set_SecondsUntilOptional)) ::System::Nullable_1<uint32_t>  SecondsUntilOptional;

/// @brief Field Weight, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Weight, put=__cordl_internal_set_Weight)) double_t  Weight;

static inline ::PlayFab::MultiplayerModels::StringEqualityRule* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::QueueRuleAttribute* const& __cordl_internal_get_Attribute() const;

constexpr ::PlayFab::MultiplayerModels::QueueRuleAttribute*& __cordl_internal_get_Attribute() ;

constexpr ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior const& __cordl_internal_get_AttributeNotSpecifiedBehavior() const;

constexpr ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior& __cordl_internal_get_AttributeNotSpecifiedBehavior() ;

constexpr ::StringW const& __cordl_internal_get_DefaultAttributeValue() const;

constexpr ::StringW& __cordl_internal_get_DefaultAttributeValue() ;

constexpr ::PlayFab::MultiplayerModels::StringEqualityRuleExpansion* const& __cordl_internal_get_Expansion() const;

constexpr ::PlayFab::MultiplayerModels::StringEqualityRuleExpansion*& __cordl_internal_get_Expansion() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_SecondsUntilOptional() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_SecondsUntilOptional() ;

constexpr double_t const& __cordl_internal_get_Weight() const;

constexpr double_t& __cordl_internal_get_Weight() ;

constexpr void __cordl_internal_set_Attribute(::PlayFab::MultiplayerModels::QueueRuleAttribute*  value) ;

constexpr void __cordl_internal_set_AttributeNotSpecifiedBehavior(::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior  value) ;

constexpr void __cordl_internal_set_DefaultAttributeValue(::StringW  value) ;

constexpr void __cordl_internal_set_Expansion(::PlayFab::MultiplayerModels::StringEqualityRuleExpansion*  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_SecondsUntilOptional(::System::Nullable_1<uint32_t>  value) ;

constexpr void __cordl_internal_set_Weight(double_t  value) ;

/// @brief Method .ctor, addr 0xa840c30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringEqualityRule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringEqualityRule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringEqualityRule(StringEqualityRule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringEqualityRule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringEqualityRule(StringEqualityRule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19739};

/// @brief Field Attribute, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::QueueRuleAttribute*  ___Attribute;

/// @brief Field AttributeNotSpecifiedBehavior, offset: 0x18, size: 0x4, def value: None
 ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior  ___AttributeNotSpecifiedBehavior;

/// @brief Field DefaultAttributeValue, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___DefaultAttributeValue;

/// @brief Field Expansion, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::StringEqualityRuleExpansion*  ___Expansion;

/// @brief Field Name, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field SecondsUntilOptional, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___SecondsUntilOptional;

/// @brief Field Weight, offset: 0x48, size: 0x8, def value: None
 double_t  ___Weight;

/// @brief Size padding 0x48 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::StringEqualityRule, ___Attribute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::StringEqualityRule, ___AttributeNotSpecifiedBehavior) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::StringEqualityRule, ___DefaultAttributeValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::StringEqualityRule, ___Expansion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::StringEqualityRule, ___Name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::StringEqualityRule, ___SecondsUntilOptional) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::StringEqualityRule, ___Weight) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::StringEqualityRule) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

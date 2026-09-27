#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/SetIntersectionRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/MultiplayerModels/zzzz__AttributeNotSpecifiedBehavior_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SetIntersectionRule)
namespace PlayFab::MultiplayerModels {
class CustomSetIntersectionRuleExpansion;
}
namespace PlayFab::MultiplayerModels {
class LinearSetIntersectionRuleExpansion;
}
namespace PlayFab::MultiplayerModels {
class QueueRuleAttribute;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class SetIntersectionRule;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::SetIntersectionRule*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::SetIntersectionRule*, "PlayFab.MultiplayerModels", "SetIntersectionRule");
// Dependencies PlayFab.MultiplayerModels.AttributeNotSpecifiedBehavior, PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.SetIntersectionRule
class CORDL_TYPE SetIntersectionRule : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Attribute, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Attribute, put=__cordl_internal_set_Attribute)) ::PlayFab::MultiplayerModels::QueueRuleAttribute*  Attribute;

/// @brief Field AttributeNotSpecifiedBehavior, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_AttributeNotSpecifiedBehavior, put=__cordl_internal_set_AttributeNotSpecifiedBehavior)) ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior  AttributeNotSpecifiedBehavior;

/// @brief Field CustomExpansion, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomExpansion, put=__cordl_internal_set_CustomExpansion)) ::PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion*  CustomExpansion;

/// @brief Field DefaultAttributeValue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultAttributeValue, put=__cordl_internal_set_DefaultAttributeValue)) ::System::Collections::Generic::List_1<::StringW>*  DefaultAttributeValue;

/// @brief Field LinearExpansion, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_LinearExpansion, put=__cordl_internal_set_LinearExpansion)) ::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion*  LinearExpansion;

/// @brief Field MinIntersectionSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinIntersectionSize, put=__cordl_internal_set_MinIntersectionSize)) uint32_t  MinIntersectionSize;

/// @brief Field Name, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field SecondsUntilOptional, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_SecondsUntilOptional, put=__cordl_internal_set_SecondsUntilOptional)) ::System::Nullable_1<uint32_t>  SecondsUntilOptional;

/// @brief Field Weight, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Weight, put=__cordl_internal_set_Weight)) double_t  Weight;

static inline ::PlayFab::MultiplayerModels::SetIntersectionRule* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::QueueRuleAttribute* const& __cordl_internal_get_Attribute() const;

constexpr ::PlayFab::MultiplayerModels::QueueRuleAttribute*& __cordl_internal_get_Attribute() ;

constexpr ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior const& __cordl_internal_get_AttributeNotSpecifiedBehavior() const;

constexpr ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior& __cordl_internal_get_AttributeNotSpecifiedBehavior() ;

constexpr ::PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion* const& __cordl_internal_get_CustomExpansion() const;

constexpr ::PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion*& __cordl_internal_get_CustomExpansion() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_DefaultAttributeValue() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_DefaultAttributeValue() ;

constexpr ::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion* const& __cordl_internal_get_LinearExpansion() const;

constexpr ::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion*& __cordl_internal_get_LinearExpansion() ;

constexpr uint32_t const& __cordl_internal_get_MinIntersectionSize() const;

constexpr uint32_t& __cordl_internal_get_MinIntersectionSize() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_SecondsUntilOptional() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_SecondsUntilOptional() ;

constexpr double_t const& __cordl_internal_get_Weight() const;

constexpr double_t& __cordl_internal_get_Weight() ;

constexpr void __cordl_internal_set_Attribute(::PlayFab::MultiplayerModels::QueueRuleAttribute*  value) ;

constexpr void __cordl_internal_set_AttributeNotSpecifiedBehavior(::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior  value) ;

constexpr void __cordl_internal_set_CustomExpansion(::PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion*  value) ;

constexpr void __cordl_internal_set_DefaultAttributeValue(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_LinearExpansion(::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion*  value) ;

constexpr void __cordl_internal_set_MinIntersectionSize(uint32_t  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_SecondsUntilOptional(::System::Nullable_1<uint32_t>  value) ;

constexpr void __cordl_internal_set_Weight(double_t  value) ;

/// @brief Method .ctor, addr 0xa840c00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetIntersectionRule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetIntersectionRule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetIntersectionRule(SetIntersectionRule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetIntersectionRule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetIntersectionRule(SetIntersectionRule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19733};

/// @brief Field Attribute, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::QueueRuleAttribute*  ___Attribute;

/// @brief Field AttributeNotSpecifiedBehavior, offset: 0x18, size: 0x4, def value: None
 ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior  ___AttributeNotSpecifiedBehavior;

/// @brief Field CustomExpansion, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion*  ___CustomExpansion;

/// @brief Field DefaultAttributeValue, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___DefaultAttributeValue;

/// @brief Field LinearExpansion, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion*  ___LinearExpansion;

/// @brief Field MinIntersectionSize, offset: 0x38, size: 0x4, def value: None
 uint32_t  ___MinIntersectionSize;

/// @brief Field Name, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field SecondsUntilOptional, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___SecondsUntilOptional;

/// @brief Field Weight, offset: 0x58, size: 0x8, def value: None
 double_t  ___Weight;

/// @brief Size padding 0x58 - 0x60 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::SetIntersectionRule, ___Attribute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::SetIntersectionRule, ___AttributeNotSpecifiedBehavior) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::SetIntersectionRule, ___CustomExpansion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::SetIntersectionRule, ___DefaultAttributeValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::SetIntersectionRule, ___LinearExpansion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::SetIntersectionRule, ___MinIntersectionSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::SetIntersectionRule, ___Name) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::SetIntersectionRule, ___SecondsUntilOptional) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::SetIntersectionRule, ___Weight) == 0x58, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::SetIntersectionRule) == 0x58, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

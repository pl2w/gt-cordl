#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DifferenceRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/MultiplayerModels/zzzz__AttributeMergeFunction_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AttributeNotSpecifiedBehavior_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DifferenceRule)
namespace PlayFab::MultiplayerModels {
class CustomDifferenceRuleExpansion;
}
namespace PlayFab::MultiplayerModels {
class LinearDifferenceRuleExpansion;
}
namespace PlayFab::MultiplayerModels {
class QueueRuleAttribute;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class DifferenceRule;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::DifferenceRule*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::DifferenceRule*, "PlayFab.MultiplayerModels", "DifferenceRule");
// Dependencies PlayFab.MultiplayerModels.AttributeMergeFunction, PlayFab.MultiplayerModels.AttributeNotSpecifiedBehavior, PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.DifferenceRule
class CORDL_TYPE DifferenceRule : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Attribute, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Attribute, put=__cordl_internal_set_Attribute)) ::PlayFab::MultiplayerModels::QueueRuleAttribute*  Attribute;

/// @brief Field AttributeNotSpecifiedBehavior, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_AttributeNotSpecifiedBehavior, put=__cordl_internal_set_AttributeNotSpecifiedBehavior)) ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior  AttributeNotSpecifiedBehavior;

/// @brief Field CustomExpansion, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomExpansion, put=__cordl_internal_set_CustomExpansion)) ::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion*  CustomExpansion;

/// @brief Field DefaultAttributeValue, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_DefaultAttributeValue, put=__cordl_internal_set_DefaultAttributeValue)) ::System::Nullable_1<double_t>  DefaultAttributeValue;

/// @brief Field Difference, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Difference, put=__cordl_internal_set_Difference)) double_t  Difference;

/// @brief Field LinearExpansion, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_LinearExpansion, put=__cordl_internal_set_LinearExpansion)) ::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion*  LinearExpansion;

/// @brief Field MergeFunction, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_MergeFunction, put=__cordl_internal_set_MergeFunction)) ::PlayFab::MultiplayerModels::AttributeMergeFunction  MergeFunction;

/// @brief Field Name, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field SecondsUntilOptional, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_SecondsUntilOptional, put=__cordl_internal_set_SecondsUntilOptional)) ::System::Nullable_1<uint32_t>  SecondsUntilOptional;

/// @brief Field Weight, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_Weight, put=__cordl_internal_set_Weight)) double_t  Weight;

static inline ::PlayFab::MultiplayerModels::DifferenceRule* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::QueueRuleAttribute* const& __cordl_internal_get_Attribute() const;

constexpr ::PlayFab::MultiplayerModels::QueueRuleAttribute*& __cordl_internal_get_Attribute() ;

constexpr ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior const& __cordl_internal_get_AttributeNotSpecifiedBehavior() const;

constexpr ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior& __cordl_internal_get_AttributeNotSpecifiedBehavior() ;

constexpr ::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion* const& __cordl_internal_get_CustomExpansion() const;

constexpr ::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion*& __cordl_internal_get_CustomExpansion() ;

constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get_DefaultAttributeValue() const;

constexpr ::System::Nullable_1<double_t>& __cordl_internal_get_DefaultAttributeValue() ;

constexpr double_t const& __cordl_internal_get_Difference() const;

constexpr double_t& __cordl_internal_get_Difference() ;

constexpr ::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion* const& __cordl_internal_get_LinearExpansion() const;

constexpr ::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion*& __cordl_internal_get_LinearExpansion() ;

constexpr ::PlayFab::MultiplayerModels::AttributeMergeFunction const& __cordl_internal_get_MergeFunction() const;

constexpr ::PlayFab::MultiplayerModels::AttributeMergeFunction& __cordl_internal_get_MergeFunction() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_SecondsUntilOptional() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_SecondsUntilOptional() ;

constexpr double_t const& __cordl_internal_get_Weight() const;

constexpr double_t& __cordl_internal_get_Weight() ;

constexpr void __cordl_internal_set_Attribute(::PlayFab::MultiplayerModels::QueueRuleAttribute*  value) ;

constexpr void __cordl_internal_set_AttributeNotSpecifiedBehavior(::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior  value) ;

constexpr void __cordl_internal_set_CustomExpansion(::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion*  value) ;

constexpr void __cordl_internal_set_DefaultAttributeValue(::System::Nullable_1<double_t>  value) ;

constexpr void __cordl_internal_set_Difference(double_t  value) ;

constexpr void __cordl_internal_set_LinearExpansion(::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion*  value) ;

constexpr void __cordl_internal_set_MergeFunction(::PlayFab::MultiplayerModels::AttributeMergeFunction  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_SecondsUntilOptional(::System::Nullable_1<uint32_t>  value) ;

constexpr void __cordl_internal_set_Weight(double_t  value) ;

/// @brief Method .ctor, addr 0xa840910, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DifferenceRule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DifferenceRule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DifferenceRule(DifferenceRule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DifferenceRule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DifferenceRule(DifferenceRule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19636};

/// @brief Field Attribute, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::QueueRuleAttribute*  ___Attribute;

/// @brief Field AttributeNotSpecifiedBehavior, offset: 0x18, size: 0x4, def value: None
 ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior  ___AttributeNotSpecifiedBehavior;

/// @brief Field CustomExpansion, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion*  ___CustomExpansion;

/// @brief Field DefaultAttributeValue, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<double_t>  ___DefaultAttributeValue;

/// @brief Field Difference, offset: 0x38, size: 0x8, def value: None
 double_t  ___Difference;

/// @brief Field LinearExpansion, offset: 0x40, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion*  ___LinearExpansion;

/// @brief Field MergeFunction, offset: 0x48, size: 0x4, def value: None
 ::PlayFab::MultiplayerModels::AttributeMergeFunction  ___MergeFunction;

/// @brief Field Name, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field SecondsUntilOptional, offset: 0x58, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___SecondsUntilOptional;

/// @brief Field Weight, offset: 0x68, size: 0x8, def value: None
 double_t  ___Weight;

/// @brief Size padding 0x68 - 0x70 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::DifferenceRule, ___Attribute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DifferenceRule, ___AttributeNotSpecifiedBehavior) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DifferenceRule, ___CustomExpansion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DifferenceRule, ___DefaultAttributeValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DifferenceRule, ___Difference) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DifferenceRule, ___LinearExpansion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DifferenceRule, ___MergeFunction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DifferenceRule, ___Name) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DifferenceRule, ___SecondsUntilOptional) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DifferenceRule, ___Weight) == 0x68, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::DifferenceRule) == 0x68, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/ValuePathMatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/CallbackHandlers/zzzz__ComparisonMethod_def.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__ConfidenceRange_def.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__MatchMethod_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ValuePathMatcher)
namespace Meta::WitAi::Data {
class WitValue;
}
namespace Meta::WitAi {
class WitResponseReference;
}
// Forward declare root types
namespace Meta::WitAi::CallbackHandlers {
class ValuePathMatcher;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::CallbackHandlers::ValuePathMatcher*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CallbackHandlers::ValuePathMatcher*, "Meta.WitAi.CallbackHandlers", "ValuePathMatcher");
// Dependencies Meta.WitAi.CallbackHandlers.ComparisonMethod, Meta.WitAi.CallbackHandlers.ConfidenceRange, Meta.WitAi.CallbackHandlers.MatchMethod, System.Object
namespace Meta::WitAi::CallbackHandlers {
// Is value type: false
// CS Name: Meta.WitAi.CallbackHandlers.ValuePathMatcher
class CORDL_TYPE ValuePathMatcher : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ConfidenceReference)) ::Meta::WitAi::WitResponseReference*  ConfidenceReference;

 __declspec(property(get=get_Reference)) ::Meta::WitAi::WitResponseReference*  Reference;

/// @brief Field allowConfidenceOverlap, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowConfidenceOverlap, put=__cordl_internal_set_allowConfidenceOverlap)) bool  allowConfidenceOverlap;

/// @brief Field comparisonMethod, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_comparisonMethod, put=__cordl_internal_set_comparisonMethod)) ::Meta::WitAi::CallbackHandlers::ComparisonMethod  comparisonMethod;

/// @brief Field confidencePathReference, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_confidencePathReference, put=__cordl_internal_set_confidencePathReference)) ::Meta::WitAi::WitResponseReference*  confidencePathReference;

/// @brief Field confidenceRanges, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_confidenceRanges, put=__cordl_internal_set_confidenceRanges)) ::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>  confidenceRanges;

/// @brief Field contentRequired, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_contentRequired, put=__cordl_internal_set_contentRequired)) bool  contentRequired;

/// @brief Field floatingPointComparisonTolerance, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_floatingPointComparisonTolerance, put=__cordl_internal_set_floatingPointComparisonTolerance)) double_t  floatingPointComparisonTolerance;

/// @brief Field matchMethod, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_matchMethod, put=__cordl_internal_set_matchMethod)) ::Meta::WitAi::CallbackHandlers::MatchMethod  matchMethod;

/// @brief Field matchValue, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_matchValue, put=__cordl_internal_set_matchValue)) ::StringW  matchValue;

/// @brief Field path, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

/// @brief Field pathReference, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathReference, put=__cordl_internal_set_pathReference)) ::Meta::WitAi::WitResponseReference*  pathReference;

/// @brief Field witValueReference, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_witValueReference, put=__cordl_internal_set_witValueReference)) ::UnityW<::Meta::WitAi::Data::WitValue>  witValueReference;

static inline ::Meta::WitAi::CallbackHandlers::ValuePathMatcher* New_ctor() ;

constexpr bool const& __cordl_internal_get_allowConfidenceOverlap() const;

constexpr bool& __cordl_internal_get_allowConfidenceOverlap() ;

constexpr ::Meta::WitAi::CallbackHandlers::ComparisonMethod const& __cordl_internal_get_comparisonMethod() const;

constexpr ::Meta::WitAi::CallbackHandlers::ComparisonMethod& __cordl_internal_get_comparisonMethod() ;

constexpr ::Meta::WitAi::WitResponseReference* const& __cordl_internal_get_confidencePathReference() const;

constexpr ::Meta::WitAi::WitResponseReference*& __cordl_internal_get_confidencePathReference() ;

constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*> const& __cordl_internal_get_confidenceRanges() const;

constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>& __cordl_internal_get_confidenceRanges() ;

constexpr bool const& __cordl_internal_get_contentRequired() const;

constexpr bool& __cordl_internal_get_contentRequired() ;

constexpr double_t const& __cordl_internal_get_floatingPointComparisonTolerance() const;

constexpr double_t& __cordl_internal_get_floatingPointComparisonTolerance() ;

constexpr ::Meta::WitAi::CallbackHandlers::MatchMethod const& __cordl_internal_get_matchMethod() const;

constexpr ::Meta::WitAi::CallbackHandlers::MatchMethod& __cordl_internal_get_matchMethod() ;

constexpr ::StringW const& __cordl_internal_get_matchValue() const;

constexpr ::StringW& __cordl_internal_get_matchValue() ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr ::Meta::WitAi::WitResponseReference* const& __cordl_internal_get_pathReference() const;

constexpr ::Meta::WitAi::WitResponseReference*& __cordl_internal_get_pathReference() ;

constexpr ::UnityW<::Meta::WitAi::Data::WitValue> const& __cordl_internal_get_witValueReference() const;

constexpr ::UnityW<::Meta::WitAi::Data::WitValue>& __cordl_internal_get_witValueReference() ;

constexpr void __cordl_internal_set_allowConfidenceOverlap(bool  value) ;

constexpr void __cordl_internal_set_comparisonMethod(::Meta::WitAi::CallbackHandlers::ComparisonMethod  value) ;

constexpr void __cordl_internal_set_confidencePathReference(::Meta::WitAi::WitResponseReference*  value) ;

constexpr void __cordl_internal_set_confidenceRanges(::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>  value) ;

constexpr void __cordl_internal_set_contentRequired(bool  value) ;

constexpr void __cordl_internal_set_floatingPointComparisonTolerance(double_t  value) ;

constexpr void __cordl_internal_set_matchMethod(::Meta::WitAi::CallbackHandlers::MatchMethod  value) ;

constexpr void __cordl_internal_set_matchValue(::StringW  value) ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

constexpr void __cordl_internal_set_pathReference(::Meta::WitAi::WitResponseReference*  value) ;

constexpr void __cordl_internal_set_witValueReference(::UnityW<::Meta::WitAi::Data::WitValue>  value) ;

/// @brief Method .ctor, addr 0x9e9e864, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ConfidenceReference, addr 0x9e9e020, size 0xe4, virtual false, abstract: false, final false
inline ::Meta::WitAi::WitResponseReference* get_ConfidenceReference() ;

/// @brief Method get_Reference, addr 0x9e9df60, size 0xc0, virtual false, abstract: false, final false
inline ::Meta::WitAi::WitResponseReference* get_Reference() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValuePathMatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValuePathMatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValuePathMatcher(ValuePathMatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValuePathMatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValuePathMatcher(ValuePathMatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25735};

/// [Tooltip("The path to a value within a WitResponseNode")]
/// @brief Field path, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___path;

/// [Tooltip("A reference to a wit value object")]
/// @brief Field witValueReference, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Data::WitValue>  ___witValueReference;

/// [Tooltip("Does this path need to have text in the value to be considered a match")]
/// @brief Field contentRequired, offset: 0x20, size: 0x1, def value: None
 bool  ___contentRequired;

/// [Tooltip("If set the match value will be treated as a regular expression.")]
/// @brief Field matchMethod, offset: 0x24, size: 0x4, def value: None
 ::Meta::WitAi::CallbackHandlers::MatchMethod  ___matchMethod;

/// [Tooltip("The operator used to compare the value with the match value. Ex: response.value > matchValue")]
/// @brief Field comparisonMethod, offset: 0x28, size: 0x4, def value: None
 ::Meta::WitAi::CallbackHandlers::ComparisonMethod  ___comparisonMethod;

/// [Tooltip("Value used to compare with the result when Match Required is set")]
/// @brief Field matchValue, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___matchValue;

/// [Tooltip("The variance allowed when comparing two floating point values for equality")]
/// @brief Field floatingPointComparisonTolerance, offset: 0x38, size: 0x8, def value: None
 double_t  ___floatingPointComparisonTolerance;

/// [Tooltip("Confidence ranges are executed in order. If checked, all confidence values will be checked instead of stopping on the first one that matches.")]
/// [SerializeField]
/// @brief Field allowConfidenceOverlap, offset: 0x40, size: 0x1, def value: None
 bool  ___allowConfidenceOverlap;

/// [Tooltip("The confidence levels to handle for this value.\nNOTE: The selected node must have a confidence sibling node.")]
/// @brief Field confidenceRanges, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>  ___confidenceRanges;

/// @brief Field pathReference, offset: 0x50, size: 0x8, def value: None
 ::Meta::WitAi::WitResponseReference*  ___pathReference;

/// @brief Field confidencePathReference, offset: 0x58, size: 0x8, def value: None
 ::Meta::WitAi::WitResponseReference*  ___confidencePathReference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ValuePathMatcher, ___path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ValuePathMatcher, ___witValueReference) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ValuePathMatcher, ___contentRequired) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ValuePathMatcher, ___matchMethod) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ValuePathMatcher, ___comparisonMethod) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ValuePathMatcher, ___matchValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ValuePathMatcher, ___floatingPointComparisonTolerance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ValuePathMatcher, ___allowConfidenceOverlap) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ValuePathMatcher, ___confidenceRanges) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ValuePathMatcher, ___pathReference) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ValuePathMatcher, ___confidencePathReference) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::CallbackHandlers::ValuePathMatcher) == 0x60, "Size mismatch!");

} // namespace end def Meta::WitAi::CallbackHandlers

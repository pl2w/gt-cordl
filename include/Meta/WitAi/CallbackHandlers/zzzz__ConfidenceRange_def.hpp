#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/ConfidenceRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConfidenceRange)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Meta::WitAi::CallbackHandlers {
class ConfidenceRange;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::CallbackHandlers::ConfidenceRange*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CallbackHandlers::ConfidenceRange*, "Meta.WitAi.CallbackHandlers", "ConfidenceRange");
// Dependencies System.Object
namespace Meta::WitAi::CallbackHandlers {
// Is value type: false
// CS Name: Meta.WitAi.CallbackHandlers.ConfidenceRange
class CORDL_TYPE ConfidenceRange : public ::System::Object {
public:
// Declarations
/// @brief Field maxConfidence, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxConfidence, put=__cordl_internal_set_maxConfidence)) float_t  maxConfidence;

/// @brief Field minConfidence, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_minConfidence, put=__cordl_internal_set_minConfidence)) float_t  minConfidence;

/// @brief Field onOutsideConfidenceRange, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onOutsideConfidenceRange, put=__cordl_internal_set_onOutsideConfidenceRange)) ::UnityEngine::Events::UnityEvent*  onOutsideConfidenceRange;

/// @brief Field onWithinConfidenceRange, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onWithinConfidenceRange, put=__cordl_internal_set_onWithinConfidenceRange)) ::UnityEngine::Events::UnityEvent*  onWithinConfidenceRange;

static inline ::Meta::WitAi::CallbackHandlers::ConfidenceRange* New_ctor() ;

constexpr float_t const& __cordl_internal_get_maxConfidence() const;

constexpr float_t& __cordl_internal_get_maxConfidence() ;

constexpr float_t const& __cordl_internal_get_minConfidence() const;

constexpr float_t& __cordl_internal_get_minConfidence() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onOutsideConfidenceRange() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onOutsideConfidenceRange() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onWithinConfidenceRange() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onWithinConfidenceRange() ;

constexpr void __cordl_internal_set_maxConfidence(float_t  value) ;

constexpr void __cordl_internal_set_minConfidence(float_t  value) ;

constexpr void __cordl_internal_set_onOutsideConfidenceRange(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onWithinConfidenceRange(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x9e9c820, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfidenceRange() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfidenceRange", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfidenceRange(ConfidenceRange && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfidenceRange", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfidenceRange(ConfidenceRange const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25724};

/// @brief Field minConfidence, offset: 0x10, size: 0x4, def value: None
 float_t  ___minConfidence;

/// @brief Field maxConfidence, offset: 0x14, size: 0x4, def value: None
 float_t  ___maxConfidence;

/// @brief Field onWithinConfidenceRange, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onWithinConfidenceRange;

/// @brief Field onOutsideConfidenceRange, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onOutsideConfidenceRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ConfidenceRange, ___minConfidence) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ConfidenceRange, ___maxConfidence) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ConfidenceRange, ___onWithinConfidenceRange) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ConfidenceRange, ___onOutsideConfidenceRange) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::CallbackHandlers::ConfidenceRange) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::CallbackHandlers

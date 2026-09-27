#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObjectHoldablePart_Crank_CrankThreshold.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TransferrableObjectHoldablePart_Crank_CrankThreshold)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
struct TransferrableObjectHoldablePart_Crank_CrankThreshold;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold, "", "TransferrableObjectHoldablePart_Crank/CrankThreshold");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TransferrableObjectHoldablePart_Crank/CrankThreshold
struct CORDL_TYPE TransferrableObjectHoldablePart_Crank_CrankThreshold {
public:
// Declarations
/// @brief Method OnCranked, addr 0x573e0c8, size 0x40, virtual false, abstract: false, final false
inline void OnCranked(float_t  deltaAngle) ;

// Ctor Parameters []
// @brief default ctor
constexpr TransferrableObjectHoldablePart_Crank_CrankThreshold() ;

// Ctor Parameters [CppParam { name: "angleThreshold", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "onReached", ty: "::UnityEngine::Events::UnityEvent*", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr TransferrableObjectHoldablePart_Crank_CrankThreshold(float_t  angleThreshold, ::UnityEngine::Events::UnityEvent*  onReached, float_t  currentAngle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1235};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field angleThreshold, offset: 0x0, size: 0x4, def value: None
 float_t  angleThreshold;

/// @brief Field onReached, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  onReached;

/// [HideInInspector]
/// @brief Field currentAngle, offset: 0x10, size: 0x4, def value: None
 float_t  currentAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold, angleThreshold) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold, onReached) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold, currentAngle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

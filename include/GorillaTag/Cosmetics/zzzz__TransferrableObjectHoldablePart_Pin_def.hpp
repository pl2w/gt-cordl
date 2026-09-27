#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/TransferrableObjectHoldablePart_Pin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransferrableObjectHoldablePart_Pin)
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class TransferrableObjectHoldablePart_Pin;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin*, "GorillaTag.Cosmetics", "TransferrableObjectHoldablePart_Pin");
// Dependencies TransferrableObjectHoldablePart
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.TransferrableObjectHoldablePart_Pin
class CORDL_TYPE TransferrableObjectHoldablePart_Pin : public ::GlobalNamespace::TransferrableObjectHoldablePart {
public:
// Declarations
/// @brief Field OnBreak, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnBreak, put=__cordl_internal_set_OnBreak)) ::UnityEngine::Events::UnityEvent*  OnBreak;

/// @brief Field OnBreakLocal, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnBreakLocal, put=__cordl_internal_set_OnBreakLocal)) ::UnityEngine::Events::UnityEvent*  OnBreakLocal;

/// @brief Field OnEnableHoldable, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEnableHoldable, put=__cordl_internal_set_OnEnableHoldable)) ::UnityEngine::Events::UnityEvent*  OnEnableHoldable;

/// @brief Field breakStrengthThreshold, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_breakStrengthThreshold, put=__cordl_internal_set_breakStrengthThreshold)) float_t  breakStrengthThreshold;

/// @brief Field maxHandSnapDistance, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHandSnapDistance, put=__cordl_internal_set_maxHandSnapDistance)) float_t  maxHandSnapDistance;

/// @brief Field pin, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_pin, put=__cordl_internal_set_pin)) ::UnityW<::UnityEngine::Transform>  pin;

static inline ::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin* New_ctor() ;

/// @brief Method OnEnable, addr 0x5da3f74, size 0x14, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UpdateHeld, addr 0x5da3f88, size 0x334, virtual true, abstract: false, final false
inline void UpdateHeld(::GlobalNamespace::VRRig*  rig, bool  isHeldLeftHand) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnBreak() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnBreak() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnBreakLocal() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnBreakLocal() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnEnableHoldable() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnEnableHoldable() ;

constexpr float_t const& __cordl_internal_get_breakStrengthThreshold() const;

constexpr float_t& __cordl_internal_get_breakStrengthThreshold() ;

constexpr float_t const& __cordl_internal_get_maxHandSnapDistance() const;

constexpr float_t& __cordl_internal_get_maxHandSnapDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pin() ;

constexpr void __cordl_internal_set_OnBreak(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnBreakLocal(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnEnableHoldable(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_breakStrengthThreshold(float_t  value) ;

constexpr void __cordl_internal_set_maxHandSnapDistance(float_t  value) ;

constexpr void __cordl_internal_set_pin(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5da42bc, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferrableObjectHoldablePart_Pin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObjectHoldablePart_Pin", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferrableObjectHoldablePart_Pin(TransferrableObjectHoldablePart_Pin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObjectHoldablePart_Pin", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferrableObjectHoldablePart_Pin(TransferrableObjectHoldablePart_Pin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4979};

/// [SerializeField]
/// @brief Field breakStrengthThreshold, offset: 0x4c, size: 0x4, def value: None
 float_t  ___breakStrengthThreshold;

/// [SerializeField]
/// @brief Field maxHandSnapDistance, offset: 0x50, size: 0x4, def value: None
 float_t  ___maxHandSnapDistance;

/// [SerializeField]
/// @brief Field pin, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pin;

/// @brief Field OnBreak, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnBreak;

/// @brief Field OnBreakLocal, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnBreakLocal;

/// @brief Field OnEnableHoldable, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnEnableHoldable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin, ___breakStrengthThreshold) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin, ___maxHandSnapDistance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin, ___pin) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin, ___OnBreak) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin, ___OnBreakLocal) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin, ___OnEnableHoldable) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin) == 0x78, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics

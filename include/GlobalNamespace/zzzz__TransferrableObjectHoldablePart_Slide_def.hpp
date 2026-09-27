#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObjectHoldablePart_Slide.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TransferrableObjectHoldablePart_Slide)
namespace GlobalNamespace {
class SnapXformToLine;
}
namespace GlobalNamespace {
class VRRig;
}
// Forward declare root types
namespace GlobalNamespace {
class TransferrableObjectHoldablePart_Slide;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransferrableObjectHoldablePart_Slide*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableObjectHoldablePart_Slide*, "", "TransferrableObjectHoldablePart_Slide");
// Dependencies TransferrableObjectHoldablePart
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransferrableObjectHoldablePart_Slide
class CORDL_TYPE TransferrableObjectHoldablePart_Slide : public ::GlobalNamespace::TransferrableObjectHoldablePart {
public:
// Declarations
/// @brief Field _maxHandSnapDistance, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxHandSnapDistance, put=__cordl_internal_set__maxHandSnapDistance)) float_t  _maxHandSnapDistance;

/// @brief Field _snapToLine, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapToLine, put=__cordl_internal_set__snapToLine)) ::UnityW<::GlobalNamespace::SnapXformToLine>  _snapToLine;

static inline ::GlobalNamespace::TransferrableObjectHoldablePart_Slide* New_ctor() ;

/// @brief Method UpdateHeld, addr 0x573e21c, size 0x290, virtual true, abstract: false, final false
inline void UpdateHeld(::GlobalNamespace::VRRig*  rig, bool  isHeldLeftHand) ;

constexpr float_t const& __cordl_internal_get__maxHandSnapDistance() const;

constexpr float_t& __cordl_internal_get__maxHandSnapDistance() ;

constexpr ::UnityW<::GlobalNamespace::SnapXformToLine> const& __cordl_internal_get__snapToLine() const;

constexpr ::UnityW<::GlobalNamespace::SnapXformToLine>& __cordl_internal_get__snapToLine() ;

constexpr void __cordl_internal_set__maxHandSnapDistance(float_t  value) ;

constexpr void __cordl_internal_set__snapToLine(::UnityW<::GlobalNamespace::SnapXformToLine>  value) ;

/// @brief Method .ctor, addr 0x573e4ac, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferrableObjectHoldablePart_Slide() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObjectHoldablePart_Slide", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferrableObjectHoldablePart_Slide(TransferrableObjectHoldablePart_Slide && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObjectHoldablePart_Slide", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferrableObjectHoldablePart_Slide(TransferrableObjectHoldablePart_Slide const& ) = delete;

/// @brief Field LEFT offset 0xffffffff size 0x4
static constexpr int32_t  LEFT{static_cast<int32_t>(0x0)};

/// @brief Field RIGHT offset 0xffffffff size 0x4
static constexpr int32_t  RIGHT{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1237};

/// [SerializeField]
/// @brief Field _maxHandSnapDistance, offset: 0x4c, size: 0x4, def value: None
 float_t  ____maxHandSnapDistance;

/// [SerializeField]
/// @brief Field _snapToLine, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SnapXformToLine>  ____snapToLine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Slide, ____maxHandSnapDistance) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Slide, ____snapToLine) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferrableObjectHoldablePart_Slide) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace

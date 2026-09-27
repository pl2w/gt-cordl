#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/CylinderSegment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CylinderSegment)
// Forward declare root types
namespace Oculus::Interaction::Surfaces {
struct CylinderSegment;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Surfaces::CylinderSegment);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::CylinderSegment, "Oculus.Interaction.Surfaces", "CylinderSegment");
// Dependencies 
namespace Oculus::Interaction::Surfaces {
// Is value type: true
// CS Name: Oculus.Interaction.Surfaces.CylinderSegment
struct CORDL_TYPE CylinderSegment {
public:
// Declarations
 __declspec(property(get=get_ArcDegrees)) float_t  ArcDegrees;

 __declspec(property(get=get_Bottom)) float_t  Bottom;

 __declspec(property(get=get_IsInfiniteArc)) bool  IsInfiniteArc;

 __declspec(property(get=get_IsInfiniteHeight)) bool  IsInfiniteHeight;

 __declspec(property(get=get_Rotation)) float_t  Rotation;

 __declspec(property(get=get_Top)) float_t  Top;

/// @brief Method Default, addr 0xa4b8788, size 0x18, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Surfaces::CylinderSegment Default() ;

/// @brief Method Infinite, addr 0xa4b4664, size 0x18, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Surfaces::CylinderSegment Infinite() ;

/// @brief Method .ctor, addr 0xa4b467c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  rotation, float_t  arcDegrees, float_t  bottom, float_t  top) ;

/// @brief Method get_ArcDegrees, addr 0xa4b8768, size 0x8, virtual false, abstract: false, final false
inline float_t get_ArcDegrees() ;

/// @brief Method get_Bottom, addr 0xa4b8778, size 0x8, virtual false, abstract: false, final false
inline float_t get_Bottom() ;

/// @brief Method get_IsInfiniteArc, addr 0xa4b4688, size 0x18, virtual false, abstract: false, final false
inline bool get_IsInfiniteArc() ;

/// @brief Method get_IsInfiniteHeight, addr 0xa4b4654, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInfiniteHeight() ;

/// @brief Method get_Rotation, addr 0xa4b8770, size 0x8, virtual false, abstract: false, final false
inline float_t get_Rotation() ;

/// @brief Method get_Top, addr 0xa4b8780, size 0x8, virtual false, abstract: false, final false
inline float_t get_Top() ;

// Ctor Parameters []
// @brief default ctor
constexpr CylinderSegment() ;

// Ctor Parameters [CppParam { name: "_rotation", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_arcDegrees", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bottom", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_top", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CylinderSegment(float_t  _rotation, float_t  _arcDegrees, float_t  _bottom, float_t  _top) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16237};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// [Range(-180, 180)]
/// @brief Field _rotation, offset: 0x0, size: 0x4, def value: None
 float_t  _rotation;

/// [SerializeField]
/// [Range(0, 360)]
/// @brief Field _arcDegrees, offset: 0x4, size: 0x4, def value: None
 float_t  _arcDegrees;

/// [SerializeField]
/// @brief Field _bottom, offset: 0x8, size: 0x4, def value: None
 float_t  _bottom;

/// [SerializeField]
/// @brief Field _top, offset: 0xc, size: 0x4, def value: None
 float_t  _top;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Surfaces::CylinderSegment, _rotation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::CylinderSegment, _arcDegrees) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::CylinderSegment, _bottom) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::CylinderSegment, _top) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Surfaces::CylinderSegment) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Surfaces

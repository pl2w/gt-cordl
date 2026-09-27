#pragma once
// IWYU pragma private; include "GlobalNamespace/Example.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Example)
// Forward declare root types
namespace GlobalNamespace {
class Example;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Example*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Example*, "", "Example");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: Example
class CORDL_TYPE Example : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field debugArrow, offset 0xf4, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugArrow, put=__cordl_internal_set_debugArrow)) bool  debugArrow;

/// @brief Field debugArrow_Color, offset 0x104, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugArrow_Color, put=__cordl_internal_set_debugArrow_Color)) ::UnityEngine::Color  debugArrow_Color;

/// @brief Field debugArrow_Direction, offset 0xf8, size 0xc 
 __declspec(property(get=__cordl_internal_get_debugArrow_Direction, put=__cordl_internal_set_debugArrow_Direction)) ::UnityEngine::Vector3  debugArrow_Direction;

/// @brief Field debugBounds, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugBounds, put=__cordl_internal_set_debugBounds)) bool  debugBounds;

/// @brief Field debugBounds_Color, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugBounds_Color, put=__cordl_internal_set_debugBounds_Color)) ::UnityEngine::Color  debugBounds_Color;

/// @brief Field debugBounds_Position, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_debugBounds_Position, put=__cordl_internal_set_debugBounds_Position)) ::UnityEngine::Vector3  debugBounds_Position;

/// @brief Field debugBounds_Size, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_debugBounds_Size, put=__cordl_internal_set_debugBounds_Size)) ::UnityEngine::Vector3  debugBounds_Size;

/// @brief Field debugCapsule, offset 0x114, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugCapsule, put=__cordl_internal_set_debugCapsule)) bool  debugCapsule;

/// @brief Field debugCapsule_Color, offset 0x128, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugCapsule_Color, put=__cordl_internal_set_debugCapsule_Color)) ::UnityEngine::Color  debugCapsule_Color;

/// @brief Field debugCapsule_End, offset 0x118, size 0xc 
 __declspec(property(get=__cordl_internal_get_debugCapsule_End, put=__cordl_internal_set_debugCapsule_End)) ::UnityEngine::Vector3  debugCapsule_End;

/// @brief Field debugCapsule_Radius, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugCapsule_Radius, put=__cordl_internal_set_debugCapsule_Radius)) float_t  debugCapsule_Radius;

/// @brief Field debugCircle, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugCircle, put=__cordl_internal_set_debugCircle)) bool  debugCircle;

/// @brief Field debugCircle_Color, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugCircle_Color, put=__cordl_internal_set_debugCircle_Color)) ::UnityEngine::Color  debugCircle_Color;

/// @brief Field debugCircle_Radius, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugCircle_Radius, put=__cordl_internal_set_debugCircle_Radius)) float_t  debugCircle_Radius;

/// @brief Field debugCircle_Up, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_debugCircle_Up, put=__cordl_internal_set_debugCircle_Up)) ::UnityEngine::Vector3  debugCircle_Up;

/// @brief Field debugCone, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugCone, put=__cordl_internal_set_debugCone)) bool  debugCone;

/// @brief Field debugCone_Angle, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugCone_Angle, put=__cordl_internal_set_debugCone_Angle)) float_t  debugCone_Angle;

/// @brief Field debugCone_Color, offset 0xe4, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugCone_Color, put=__cordl_internal_set_debugCone_Color)) ::UnityEngine::Color  debugCone_Color;

/// @brief Field debugCone_Direction, offset 0xd4, size 0xc 
 __declspec(property(get=__cordl_internal_get_debugCone_Direction, put=__cordl_internal_set_debugCone_Direction)) ::UnityEngine::Vector3  debugCone_Direction;

/// @brief Field debugCylinder, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugCylinder, put=__cordl_internal_set_debugCylinder)) bool  debugCylinder;

/// @brief Field debugCylinder_Color, offset 0xc0, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugCylinder_Color, put=__cordl_internal_set_debugCylinder_Color)) ::UnityEngine::Color  debugCylinder_Color;

/// @brief Field debugCylinder_End, offset 0xb0, size 0xc 
 __declspec(property(get=__cordl_internal_get_debugCylinder_End, put=__cordl_internal_set_debugCylinder_End)) ::UnityEngine::Vector3  debugCylinder_End;

/// @brief Field debugCylinder_Radius, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugCylinder_Radius, put=__cordl_internal_set_debugCylinder_Radius)) float_t  debugCylinder_Radius;

/// @brief Field debugPoint, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugPoint, put=__cordl_internal_set_debugPoint)) bool  debugPoint;

/// @brief Field debugPoint_Color, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugPoint_Color, put=__cordl_internal_set_debugPoint_Color)) ::UnityEngine::Color  debugPoint_Color;

/// @brief Field debugPoint_Position, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_debugPoint_Position, put=__cordl_internal_set_debugPoint_Position)) ::UnityEngine::Vector3  debugPoint_Position;

/// @brief Field debugPoint_Scale, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugPoint_Scale, put=__cordl_internal_set_debugPoint_Scale)) float_t  debugPoint_Scale;

/// @brief Field debugWireSphere, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugWireSphere, put=__cordl_internal_set_debugWireSphere)) bool  debugWireSphere;

/// @brief Field debugWireSphere_Color, offset 0x9c, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugWireSphere_Color, put=__cordl_internal_set_debugWireSphere_Color)) ::UnityEngine::Color  debugWireSphere_Color;

/// @brief Field debugWireSphere_Radius, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugWireSphere_Radius, put=__cordl_internal_set_debugWireSphere_Radius)) float_t  debugWireSphere_Radius;

static inline ::GlobalNamespace::Example* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x5704478, size 0x1d0, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method Update, addr 0x5704648, size 0x1c4, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_debugArrow() const;

constexpr bool& __cordl_internal_get_debugArrow() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugArrow_Color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugArrow_Color() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugArrow_Direction() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugArrow_Direction() ;

constexpr bool const& __cordl_internal_get_debugBounds() const;

constexpr bool& __cordl_internal_get_debugBounds() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugBounds_Color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugBounds_Color() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugBounds_Position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugBounds_Position() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugBounds_Size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugBounds_Size() ;

constexpr bool const& __cordl_internal_get_debugCapsule() const;

constexpr bool& __cordl_internal_get_debugCapsule() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugCapsule_Color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugCapsule_Color() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugCapsule_End() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugCapsule_End() ;

constexpr float_t const& __cordl_internal_get_debugCapsule_Radius() const;

constexpr float_t& __cordl_internal_get_debugCapsule_Radius() ;

constexpr bool const& __cordl_internal_get_debugCircle() const;

constexpr bool& __cordl_internal_get_debugCircle() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugCircle_Color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugCircle_Color() ;

constexpr float_t const& __cordl_internal_get_debugCircle_Radius() const;

constexpr float_t& __cordl_internal_get_debugCircle_Radius() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugCircle_Up() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugCircle_Up() ;

constexpr bool const& __cordl_internal_get_debugCone() const;

constexpr bool& __cordl_internal_get_debugCone() ;

constexpr float_t const& __cordl_internal_get_debugCone_Angle() const;

constexpr float_t& __cordl_internal_get_debugCone_Angle() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugCone_Color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugCone_Color() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugCone_Direction() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugCone_Direction() ;

constexpr bool const& __cordl_internal_get_debugCylinder() const;

constexpr bool& __cordl_internal_get_debugCylinder() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugCylinder_Color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugCylinder_Color() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugCylinder_End() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugCylinder_End() ;

constexpr float_t const& __cordl_internal_get_debugCylinder_Radius() const;

constexpr float_t& __cordl_internal_get_debugCylinder_Radius() ;

constexpr bool const& __cordl_internal_get_debugPoint() const;

constexpr bool& __cordl_internal_get_debugPoint() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugPoint_Color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugPoint_Color() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugPoint_Position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugPoint_Position() ;

constexpr float_t const& __cordl_internal_get_debugPoint_Scale() const;

constexpr float_t& __cordl_internal_get_debugPoint_Scale() ;

constexpr bool const& __cordl_internal_get_debugWireSphere() const;

constexpr bool& __cordl_internal_get_debugWireSphere() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugWireSphere_Color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugWireSphere_Color() ;

constexpr float_t const& __cordl_internal_get_debugWireSphere_Radius() const;

constexpr float_t& __cordl_internal_get_debugWireSphere_Radius() ;

constexpr void __cordl_internal_set_debugArrow(bool  value) ;

constexpr void __cordl_internal_set_debugArrow_Color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugArrow_Direction(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_debugBounds(bool  value) ;

constexpr void __cordl_internal_set_debugBounds_Color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugBounds_Position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_debugBounds_Size(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_debugCapsule(bool  value) ;

constexpr void __cordl_internal_set_debugCapsule_Color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugCapsule_End(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_debugCapsule_Radius(float_t  value) ;

constexpr void __cordl_internal_set_debugCircle(bool  value) ;

constexpr void __cordl_internal_set_debugCircle_Color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugCircle_Radius(float_t  value) ;

constexpr void __cordl_internal_set_debugCircle_Up(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_debugCone(bool  value) ;

constexpr void __cordl_internal_set_debugCone_Angle(float_t  value) ;

constexpr void __cordl_internal_set_debugCone_Color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugCone_Direction(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_debugCylinder(bool  value) ;

constexpr void __cordl_internal_set_debugCylinder_Color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugCylinder_End(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_debugCylinder_Radius(float_t  value) ;

constexpr void __cordl_internal_set_debugPoint(bool  value) ;

constexpr void __cordl_internal_set_debugPoint_Color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugPoint_Position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_debugPoint_Scale(float_t  value) ;

constexpr void __cordl_internal_set_debugWireSphere(bool  value) ;

constexpr void __cordl_internal_set_debugWireSphere_Color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugWireSphere_Radius(float_t  value) ;

/// @brief Method .ctor, addr 0x570480c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Example() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Example", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Example(Example && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Example", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Example(Example const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{154};

/// @brief Field debugPoint, offset: 0x20, size: 0x1, def value: None
 bool  ___debugPoint;

/// @brief Field debugPoint_Position, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___debugPoint_Position;

/// @brief Field debugPoint_Scale, offset: 0x30, size: 0x4, def value: None
 float_t  ___debugPoint_Scale;

/// @brief Field debugPoint_Color, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugPoint_Color;

/// @brief Field debugBounds, offset: 0x44, size: 0x1, def value: None
 bool  ___debugBounds;

/// @brief Field debugBounds_Position, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___debugBounds_Position;

/// @brief Field debugBounds_Size, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___debugBounds_Size;

/// @brief Field debugBounds_Color, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugBounds_Color;

/// @brief Field debugCircle, offset: 0x70, size: 0x1, def value: None
 bool  ___debugCircle;

/// @brief Field debugCircle_Up, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___debugCircle_Up;

/// @brief Field debugCircle_Radius, offset: 0x80, size: 0x4, def value: None
 float_t  ___debugCircle_Radius;

/// @brief Field debugCircle_Color, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugCircle_Color;

/// @brief Field debugWireSphere, offset: 0x94, size: 0x1, def value: None
 bool  ___debugWireSphere;

/// @brief Field debugWireSphere_Radius, offset: 0x98, size: 0x4, def value: None
 float_t  ___debugWireSphere_Radius;

/// @brief Field debugWireSphere_Color, offset: 0x9c, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugWireSphere_Color;

/// @brief Field debugCylinder, offset: 0xac, size: 0x1, def value: None
 bool  ___debugCylinder;

/// @brief Field debugCylinder_End, offset: 0xb0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___debugCylinder_End;

/// @brief Field debugCylinder_Radius, offset: 0xbc, size: 0x4, def value: None
 float_t  ___debugCylinder_Radius;

/// @brief Field debugCylinder_Color, offset: 0xc0, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugCylinder_Color;

/// @brief Field debugCone, offset: 0xd0, size: 0x1, def value: None
 bool  ___debugCone;

/// @brief Field debugCone_Direction, offset: 0xd4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___debugCone_Direction;

/// @brief Field debugCone_Angle, offset: 0xe0, size: 0x4, def value: None
 float_t  ___debugCone_Angle;

/// @brief Field debugCone_Color, offset: 0xe4, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugCone_Color;

/// @brief Field debugArrow, offset: 0xf4, size: 0x1, def value: None
 bool  ___debugArrow;

/// @brief Field debugArrow_Direction, offset: 0xf8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___debugArrow_Direction;

/// @brief Field debugArrow_Color, offset: 0x104, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugArrow_Color;

/// @brief Field debugCapsule, offset: 0x114, size: 0x1, def value: None
 bool  ___debugCapsule;

/// @brief Field debugCapsule_End, offset: 0x118, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___debugCapsule_End;

/// @brief Field debugCapsule_Radius, offset: 0x124, size: 0x4, def value: None
 float_t  ___debugCapsule_Radius;

/// @brief Field debugCapsule_Color, offset: 0x128, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugCapsule_Color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Example, ___debugPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugPoint_Position) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugPoint_Scale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugPoint_Color) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugBounds) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugBounds_Position) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugBounds_Size) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugBounds_Color) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCircle) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCircle_Up) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCircle_Radius) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCircle_Color) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugWireSphere) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugWireSphere_Radius) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugWireSphere_Color) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCylinder) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCylinder_End) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCylinder_Radius) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCylinder_Color) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCone) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCone_Direction) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCone_Angle) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCone_Color) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugArrow) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugArrow_Direction) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugArrow_Color) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCapsule) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCapsule_End) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCapsule_Radius) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Example, ___debugCapsule_Color) == 0x128, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Example) == 0x138, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugExtension)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class DebugExtension;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DebugExtension*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugExtension*, "", "DebugExtension");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DebugExtension
class CORDL_TYPE DebugExtension : public ::System::Object {
public:
// Declarations
/// @brief Method DebugArrow, addr 0x57005d4, size 0x128, virtual false, abstract: false, final false
static inline void DebugArrow(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, ::UnityEngine::Color  color, float_t  duration, bool  depthTest) ;

/// @brief Method DebugArrow, addr 0x57006fc, size 0x24, virtual false, abstract: false, final false
static inline void DebugArrow(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, float_t  duration, bool  depthTest) ;

/// @brief Method DebugBounds, addr 0x56fddd8, size 0x394, virtual false, abstract: false, final false
static inline void DebugBounds(::UnityEngine::Bounds  bounds, ::UnityEngine::Color  color, float_t  duration, bool  depthTest) ;

/// @brief Method DebugBounds, addr 0x56fe16c, size 0x40, virtual false, abstract: false, final false
static inline void DebugBounds(::UnityEngine::Bounds  bounds, float_t  duration, bool  depthTest) ;

/// @brief Method DebugCapsule, addr 0x5700720, size 0xcf0, virtual false, abstract: false, final false
static inline void DebugCapsule(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color, float_t  radius, float_t  duration, bool  depthTest) ;

/// @brief Method DebugCapsule, addr 0x5701410, size 0x28, virtual false, abstract: false, final false
static inline void DebugCapsule(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius, float_t  duration, bool  depthTest) ;

/// @brief Method DebugCircle, addr 0x56fef88, size 0xc8, virtual false, abstract: false, final false
static inline void DebugCircle(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  radius, float_t  duration, bool  depthTest) ;

/// @brief Method DebugCircle, addr 0x56ff078, size 0xa8, virtual false, abstract: false, final false
static inline void DebugCircle(::UnityEngine::Vector3  position, float_t  radius, float_t  duration, bool  depthTest) ;

/// @brief Method DebugCircle, addr 0x56feb1c, size 0x46c, virtual false, abstract: false, final false
static inline void DebugCircle(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, ::UnityEngine::Color  color, float_t  radius, float_t  duration, bool  depthTest) ;

/// @brief Method DebugCircle, addr 0x56ff050, size 0x28, virtual false, abstract: false, final false
static inline void DebugCircle(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, float_t  radius, float_t  duration, bool  depthTest) ;

/// @brief Method DebugCone, addr 0x570052c, size 0xa8, virtual false, abstract: false, final false
static inline void DebugCone(::UnityEngine::Vector3  position, float_t  angle, float_t  duration, bool  depthTest) ;

/// @brief Method DebugCone, addr 0x5700464, size 0xc8, virtual false, abstract: false, final false
static inline void DebugCone(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  angle, float_t  duration, bool  depthTest) ;

/// @brief Method DebugCone, addr 0x570043c, size 0x28, virtual false, abstract: false, final false
static inline void DebugCone(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, float_t  angle, float_t  duration, bool  depthTest) ;

/// @brief Method DebugCone, addr 0x56ff910, size 0xb2c, virtual false, abstract: false, final false
static inline void DebugCone(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, ::UnityEngine::Color  color, float_t  angle, float_t  duration, bool  depthTest) ;

/// @brief Method DebugCylinder, addr 0x56ff31c, size 0x5cc, virtual false, abstract: false, final false
static inline void DebugCylinder(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color, float_t  radius, float_t  duration, bool  depthTest) ;

/// @brief Method DebugCylinder, addr 0x56ff8e8, size 0x28, virtual false, abstract: false, final false
static inline void DebugCylinder(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius, float_t  duration, bool  depthTest) ;

/// @brief Method DebugLocalCube, addr 0x56feacc, size 0x50, virtual false, abstract: false, final false
static inline void DebugLocalCube(::UnityEngine::Matrix4x4  space, ::UnityEngine::Vector3  size, ::UnityEngine::Vector3  center, float_t  duration, bool  depthTest) ;

/// @brief Method DebugLocalCube, addr 0x56fe630, size 0x49c, virtual false, abstract: false, final false
static inline void DebugLocalCube(::UnityEngine::Matrix4x4  space, ::UnityEngine::Vector3  size, ::UnityEngine::Color  color, ::UnityEngine::Vector3  center, float_t  duration, bool  depthTest) ;

/// @brief Method DebugLocalCube, addr 0x56fe5f4, size 0x3c, virtual false, abstract: false, final false
static inline void DebugLocalCube(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  size, ::UnityEngine::Vector3  center, float_t  duration, bool  depthTest) ;

/// @brief Method DebugLocalCube, addr 0x56fe1ac, size 0x448, virtual false, abstract: false, final false
static inline void DebugLocalCube(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  size, ::UnityEngine::Color  color, ::UnityEngine::Vector3  center, float_t  duration, bool  depthTest) ;

/// @brief Method DebugPoint, addr 0x56fdb1c, size 0x288, virtual false, abstract: false, final false
static inline void DebugPoint(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  scale, float_t  duration, bool  depthTest) ;

/// @brief Method DebugPoint, addr 0x56fdda4, size 0x34, virtual false, abstract: false, final false
static inline void DebugPoint(::UnityEngine::Vector3  position, float_t  scale, float_t  duration, bool  depthTest) ;

/// @brief Method DebugWireSphere, addr 0x56ff120, size 0x1c8, virtual false, abstract: false, final false
static inline void DebugWireSphere(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  radius, float_t  duration, bool  depthTest) ;

/// @brief Method DebugWireSphere, addr 0x56ff2e8, size 0x34, virtual false, abstract: false, final false
static inline void DebugWireSphere(::UnityEngine::Vector3  position, float_t  radius, float_t  duration, bool  depthTest) ;

/// @brief Method DrawArrow, addr 0x5703754, size 0x20, virtual false, abstract: false, final false
static inline void DrawArrow(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction) ;

/// @brief Method DrawArrow, addr 0x570365c, size 0xf8, virtual false, abstract: false, final false
static inline void DrawArrow(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, ::UnityEngine::Color  color) ;

/// @brief Method DrawBounds, addr 0x5701818, size 0x3c, virtual false, abstract: false, final false
static inline void DrawBounds(::UnityEngine::Bounds  bounds) ;

/// @brief Method DrawBounds, addr 0x5701604, size 0x214, virtual false, abstract: false, final false
static inline void DrawBounds(::UnityEngine::Bounds  bounds, ::UnityEngine::Color  color) ;

/// @brief Method DrawCapsule, addr 0x5703774, size 0xaa4, virtual false, abstract: false, final false
static inline void DrawCapsule(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color, float_t  radius) ;

/// @brief Method DrawCapsule, addr 0x5704218, size 0x24, virtual false, abstract: false, final false
static inline void DrawCapsule(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius) ;

/// @brief Method DrawCircle, addr 0x5702468, size 0xa8, virtual false, abstract: false, final false
static inline void DrawCircle(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  radius) ;

/// @brief Method DrawCircle, addr 0x5702540, size 0x88, virtual false, abstract: false, final false
static inline void DrawCircle(::UnityEngine::Vector3  position, float_t  radius) ;

/// @brief Method DrawCircle, addr 0x5701fb8, size 0x4b0, virtual false, abstract: false, final false
static inline void DrawCircle(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, ::UnityEngine::Color  color, float_t  radius) ;

/// @brief Method DrawCircle, addr 0x5702510, size 0x30, virtual false, abstract: false, final false
static inline void DrawCircle(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, float_t  radius) ;

/// @brief Method DrawCone, addr 0x57035d4, size 0x88, virtual false, abstract: false, final false
static inline void DrawCone(::UnityEngine::Vector3  position, float_t  angle) ;

/// @brief Method DrawCone, addr 0x570352c, size 0xa8, virtual false, abstract: false, final false
static inline void DrawCone(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  angle) ;

/// @brief Method DrawCone, addr 0x5703508, size 0x24, virtual false, abstract: false, final false
static inline void DrawCone(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, float_t  angle) ;

/// @brief Method DrawCone, addr 0x5702a80, size 0xa88, virtual false, abstract: false, final false
static inline void DrawCone(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, ::UnityEngine::Color  color, float_t  angle) ;

/// @brief Method DrawCylinder, addr 0x57025c8, size 0x494, virtual false, abstract: false, final false
static inline void DrawCylinder(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color, float_t  radius) ;

/// @brief Method DrawCylinder, addr 0x5702a5c, size 0x24, virtual false, abstract: false, final false
static inline void DrawCylinder(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius) ;

/// @brief Method DrawLocalCube, addr 0x5701f6c, size 0x4c, virtual false, abstract: false, final false
static inline void DrawLocalCube(::UnityEngine::Matrix4x4  space, ::UnityEngine::Vector3  size, ::UnityEngine::Vector3  center) ;

/// @brief Method DrawLocalCube, addr 0x5701bfc, size 0x370, virtual false, abstract: false, final false
static inline void DrawLocalCube(::UnityEngine::Matrix4x4  space, ::UnityEngine::Vector3  size, ::UnityEngine::Color  color, ::UnityEngine::Vector3  center) ;

/// @brief Method DrawLocalCube, addr 0x5701bc4, size 0x38, virtual false, abstract: false, final false
static inline void DrawLocalCube(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  size, ::UnityEngine::Vector3  center) ;

/// @brief Method DrawLocalCube, addr 0x5701854, size 0x370, virtual false, abstract: false, final false
static inline void DrawLocalCube(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  size, ::UnityEngine::Color  color, ::UnityEngine::Vector3  center) ;

/// @brief Method DrawPoint, addr 0x5701438, size 0x1b4, virtual false, abstract: false, final false
static inline void DrawPoint(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  scale) ;

/// @brief Method DrawPoint, addr 0x57015ec, size 0x18, virtual false, abstract: false, final false
static inline void DrawPoint(::UnityEngine::Vector3  position, float_t  scale) ;

/// @brief Method MethodsOfObject, addr 0x570423c, size 0x124, virtual false, abstract: false, final false
static inline ::StringW MethodsOfObject(::System::Object*  obj, bool  includeInfo) ;

/// @brief Method MethodsOfType, addr 0x5704360, size 0x118, virtual false, abstract: false, final false
static inline ::StringW MethodsOfType(::System::Type*  type, bool  includeInfo) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugExtension", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugExtension(DebugExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugExtension", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugExtension(DebugExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{153};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DebugExtension) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

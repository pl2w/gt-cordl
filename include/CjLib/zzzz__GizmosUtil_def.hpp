#pragma once
// IWYU pragma private; include "CjLib/GizmosUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GizmosUtil)
namespace GlobalNamespace {
struct GizmosUtil_Style;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace CjLib {
class GizmosUtil;
}
// Write type traits
MARK_REF_T(::CjLib::GizmosUtil*);
DEFINE_IL2CPP_CLASS(::CjLib::GizmosUtil*, "CjLib", "GizmosUtil");
// Dependencies System.Object
namespace CjLib {
// Is value type: false
// CS Name: CjLib.GizmosUtil
class CORDL_TYPE GizmosUtil : public ::System::Object {
public:
// Declarations
using Style = ::GlobalNamespace::GizmosUtil_Style;

/// @brief Method DrawArrow, addr 0x5df4b5c, size 0x498, virtual false, abstract: false, final false
static inline void DrawArrow(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, float_t  coneRadius, float_t  coneHeight, int32_t  numSegments, float_t  stemThickness, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style) ;

/// @brief Method DrawArrow, addr 0x5df4ff4, size 0x38, virtual false, abstract: false, final false
static inline void DrawArrow(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, float_t  size, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style) ;

/// @brief Method DrawBox, addr 0x5df30c4, size 0x224, virtual false, abstract: false, final false
static inline void DrawBox(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  dimensions, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style) ;

/// @brief Method DrawCapsule, addr 0x5df3c64, size 0x518, virtual false, abstract: false, final false
static inline void DrawCapsule(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  height, float_t  radius, int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style) ;

/// @brief Method DrawCapsule, addr 0x5df417c, size 0x428, virtual false, abstract: false, final false
static inline void DrawCapsule(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style) ;

/// @brief Method DrawCone, addr 0x5df45a4, size 0x254, virtual false, abstract: false, final false
static inline void DrawCone(::UnityEngine::Vector3  baseCenter, ::UnityEngine::Quaternion  rotation, float_t  height, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style) ;

/// @brief Method DrawCone, addr 0x5df47f8, size 0x364, virtual false, abstract: false, final false
static inline void DrawCone(::UnityEngine::Vector3  baseCenter, ::UnityEngine::Vector3  top, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style) ;

/// @brief Method DrawCylinder, addr 0x5df32e8, size 0x254, virtual false, abstract: false, final false
static inline void DrawCylinder(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  height, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style) ;

/// @brief Method DrawCylinder, addr 0x5df353c, size 0x418, virtual false, abstract: false, final false
static inline void DrawCylinder(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style) ;

/// @brief Method DrawLine, addr 0x5df2f44, size 0x6c, virtual false, abstract: false, final false
static inline void DrawLine(::UnityEngine::Vector3  v0, ::UnityEngine::Vector3  v1, ::UnityEngine::Color  color) ;

/// @brief Method DrawLineStrip, addr 0x5df3048, size 0x7c, virtual false, abstract: false, final false
static inline void DrawLineStrip(::ArrayW<::UnityEngine::Vector3>  aVert, ::UnityEngine::Color  color) ;

/// @brief Method DrawLines, addr 0x5df2fb0, size 0x98, virtual false, abstract: false, final false
static inline void DrawLines(::ArrayW<::UnityEngine::Vector3>  aVert, ::UnityEngine::Color  color) ;

/// @brief Method DrawSphere, addr 0x5df3b94, size 0xd0, virtual false, abstract: false, final false
static inline void DrawSphere(::UnityEngine::Vector3  center, float_t  radius, int32_t  latSegments, int32_t  longSegments, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style) ;

/// @brief Method DrawSphere, addr 0x5df3954, size 0x240, virtual false, abstract: false, final false
static inline void DrawSphere(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  radius, int32_t  latSegments, int32_t  longSegments, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style) ;

static inline ::CjLib::GizmosUtil* New_ctor() ;

/// @brief Method .ctor, addr 0x5df502c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GizmosUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GizmosUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GizmosUtil(GizmosUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GizmosUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GizmosUtil(GizmosUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5144};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::CjLib::GizmosUtil) == 0x10, "Size mismatch!");

} // namespace end def CjLib

#pragma once
// IWYU pragma private; include "CjLib/DebugUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUtil)
namespace GlobalNamespace {
struct DebugUtil_Style;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace CjLib {
class DebugUtil;
}
// Write type traits
MARK_REF_T(::CjLib::DebugUtil*);
DEFINE_IL2CPP_CLASS(::CjLib::DebugUtil*, "CjLib", "DebugUtil");
// Dependencies System.Object
namespace CjLib {
// Is value type: false
// CS Name: CjLib.DebugUtil
class CORDL_TYPE DebugUtil : public ::System::Object {
public:
// Declarations
using Style = ::GlobalNamespace::DebugUtil_Style;

/// @brief Field s_materialPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_materialPool, put=setStaticF_s_materialPool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Material>>*  s_materialPool;

/// @brief Field s_materialProperties, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_materialProperties, put=setStaticF_s_materialProperties)) ::UnityEngine::MaterialPropertyBlock*  s_materialProperties;

/// @brief Field s_wireframeZBias, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_wireframeZBias, put=setStaticF_s_wireframeZBias)) float_t  s_wireframeZBias;

/// @brief Method DrawArc, addr 0x5de1468, size 0x2b8, virtual false, abstract: false, final false
static inline void DrawArc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  from, ::UnityEngine::Vector3  normal, float_t  angle, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest) ;

/// @brief Method DrawArrow, addr 0x5de1920, size 0x510, virtual false, abstract: false, final false
static inline void DrawArrow(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, float_t  coneRadius, float_t  coneHeight, int32_t  numSegments, float_t  stemThickness, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawArrow, addr 0x5df2ddc, size 0x110, virtual false, abstract: false, final false
static inline void DrawArrow(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, float_t  size, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawBox, addr 0x5de4300, size 0x344, virtual false, abstract: false, final false
static inline void DrawBox(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  dimensions, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawCapsule, addr 0x5dec710, size 0x3a8, virtual false, abstract: false, final false
static inline void DrawCapsule(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  height, float_t  radius, int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawCapsule, addr 0x5def860, size 0x47c, virtual false, abstract: false, final false
static inline void DrawCapsule(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawCapsule2D, addr 0x5defcdc, size 0x37c, virtual false, abstract: false, final false
static inline void DrawCapsule2D(::UnityEngine::Vector3  center, float_t  rotationDeg, float_t  height, float_t  radius, int32_t  capSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawCircle, addr 0x5de2400, size 0x26c, virtual false, abstract: false, final false
static inline void DrawCircle(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  normal, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawCircle, addr 0x5de64d4, size 0x318, virtual false, abstract: false, final false
static inline void DrawCircle(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawCircle2D, addr 0x5de7820, size 0x118, virtual false, abstract: false, final false
static inline void DrawCircle2D(::UnityEngine::Vector3  center, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawCone, addr 0x5df0fdc, size 0x368, virtual false, abstract: false, final false
static inline void DrawCone(::UnityEngine::Vector3  baseCenter, ::UnityEngine::Quaternion  rotation, float_t  height, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawCone, addr 0x5df2a3c, size 0x3a0, virtual false, abstract: false, final false
static inline void DrawCone(::UnityEngine::Vector3  baseCenter, ::UnityEngine::Vector3  top, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawCylinder, addr 0x5de7938, size 0x364, virtual false, abstract: false, final false
static inline void DrawCylinder(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  height, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawCylinder, addr 0x5de9928, size 0x478, virtual false, abstract: false, final false
static inline void DrawCylinder(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawLine, addr 0x5de27c0, size 0x2c8, virtual false, abstract: false, final false
static inline void DrawLine(::UnityEngine::Vector3  v0, ::UnityEngine::Vector3  v1, ::UnityEngine::Color  color, bool  depthTest) ;

/// @brief Method DrawLineStrip, addr 0x5de3920, size 0x294, virtual false, abstract: false, final false
static inline void DrawLineStrip(::ArrayW<::UnityEngine::Vector3>  aVert, ::UnityEngine::Color  color, bool  depthTest) ;

/// @brief Method DrawLines, addr 0x5de3544, size 0x294, virtual false, abstract: false, final false
static inline void DrawLines(::ArrayW<::UnityEngine::Vector3>  aVert, ::UnityEngine::Color  color, bool  depthTest) ;

/// @brief Method DrawLocator, addr 0x5de3cfc, size 0x1f4, virtual false, abstract: false, final false
static inline void DrawLocator(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  right, ::UnityEngine::Vector3  up, ::UnityEngine::Vector3  forward, ::UnityEngine::Color  rightColor, ::UnityEngine::Color  upColor, ::UnityEngine::Color  forwardColor, float_t  size) ;

/// @brief Method DrawLocator, addr 0x5de3ef0, size 0x108, virtual false, abstract: false, final false
static inline void DrawLocator(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  right, ::UnityEngine::Vector3  up, ::UnityEngine::Vector3  forward, float_t  size) ;

/// @brief Method DrawLocator, addr 0x5de3ff8, size 0x238, virtual false, abstract: false, final false
static inline void DrawLocator(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Color  rightColor, ::UnityEngine::Color  upColor, ::UnityEngine::Color  forwardColor, float_t  size) ;

/// @brief Method DrawLocator, addr 0x5de4230, size 0xd0, virtual false, abstract: false, final false
static inline void DrawLocator(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  size) ;

/// @brief Method DrawRect, addr 0x5de5874, size 0x328, virtual false, abstract: false, final false
static inline void DrawRect(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector2  dimensions, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawRect2D, addr 0x5de62ec, size 0x1e8, virtual false, abstract: false, final false
static inline void DrawRect2D(::UnityEngine::Vector3  center, float_t  rotationDeg, ::UnityEngine::Vector2  dimensions, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawSphere, addr 0x5dec27c, size 0x124, virtual false, abstract: false, final false
static inline void DrawSphere(::UnityEngine::Vector3  center, float_t  radius, int32_t  latSegments, int32_t  longSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawSphere, addr 0x5de2c50, size 0x358, virtual false, abstract: false, final false
static inline void DrawSphere(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  radius, int32_t  latSegments, int32_t  longSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawSphereTripleCircles, addr 0x5dec5fc, size 0x114, virtual false, abstract: false, final false
static inline void DrawSphereTripleCircles(::UnityEngine::Vector3  center, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method DrawSphereTripleCircles, addr 0x5dec3a0, size 0x25c, virtual false, abstract: false, final false
static inline void DrawSphereTripleCircles(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style) ;

/// @brief Method GetMaterial, addr 0x5de2fbc, size 0x330, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetMaterial(::GlobalNamespace::DebugUtil_Style  style, bool  depthTest, bool  capShiftScale) ;

/// @brief Method GetMaterialPropertyBlock, addr 0x5de32ec, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityEngine::MaterialPropertyBlock* GetMaterialPropertyBlock() ;

static inline ::CjLib::DebugUtil* New_ctor() ;

/// @brief Method .ctor, addr 0x5df2eec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Material>>* getStaticF_s_materialPool() ;

static inline ::UnityEngine::MaterialPropertyBlock* getStaticF_s_materialProperties() ;

static inline float_t getStaticF_s_wireframeZBias() ;

static inline void setStaticF_s_materialPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Material>>*  value) ;

static inline void setStaticF_s_materialProperties(::UnityEngine::MaterialPropertyBlock*  value) ;

static inline void setStaticF_s_wireframeZBias(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugUtil(DebugUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugUtil(DebugUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5142};

/// @brief Field kCapShiftScaleFlag offset 0xffffffff size 0x4
static constexpr int32_t  kCapShiftScaleFlag{static_cast<int32_t>(0x2)};

/// @brief Field kDepthTestFlag offset 0xffffffff size 0x4
static constexpr int32_t  kDepthTestFlag{static_cast<int32_t>(0x4)};

/// @brief Field kNormalFlag offset 0xffffffff size 0x4
static constexpr int32_t  kNormalFlag{static_cast<int32_t>(0x1)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::CjLib::DebugUtil) == 0x10, "Size mismatch!");

} // namespace end def CjLib

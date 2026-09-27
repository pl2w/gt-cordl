#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__CommandBuilder_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBuilder2D)
namespace Drawing {
struct CommandBuilder;
}
namespace Drawing {
struct LabelAlignment;
}
namespace GlobalNamespace {
struct CommandBuilder_ScopeColor;
}
namespace GlobalNamespace {
struct CommandBuilder_ScopeLineWidth;
}
namespace GlobalNamespace {
struct CommandBuilder_ScopeMatrix;
}
namespace GlobalNamespace {
struct CommandBuilder_ScopePersist;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Collections {
struct FixedString128Bytes;
}
namespace Unity::Collections {
struct FixedString32Bytes;
}
namespace Unity::Collections {
struct FixedString512Bytes;
}
namespace Unity::Collections {
struct FixedString64Bytes;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Drawing {
struct CommandBuilder2D;
}
// Write type traits
MARK_VAL_T(::Drawing::CommandBuilder2D);
DEFINE_IL2CPP_CLASS(::Drawing::CommandBuilder2D, "Drawing", "CommandBuilder2D");
// Dependencies Drawing.CommandBuilder, Unity.Mathematics.float3, Unity.Mathematics.float4x4, Unity.Mathematics.quaternion
namespace Drawing {
// Is value type: true
// CS Name: Drawing.CommandBuilder2D
struct CORDL_TYPE CommandBuilder2D {
public:
// Declarations
/// @brief Field XY_TO_XZ_ROTATION, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_XY_TO_XZ_ROTATION, put=setStaticF_XY_TO_XZ_ROTATION)) ::Unity::Mathematics::quaternion  XY_TO_XZ_ROTATION;

/// @brief Field XY_UP, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_XY_UP, put=setStaticF_XY_UP)) ::Unity::Mathematics::float3  XY_UP;

/// @brief Field XZ_TO_XY_MATRIX, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_XZ_TO_XY_MATRIX, put=setStaticF_XZ_TO_XY_MATRIX)) ::Unity::Mathematics::float4x4  XZ_TO_XY_MATRIX;

/// @brief Field XZ_TO_XZ_ROTATION, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_XZ_TO_XZ_ROTATION, put=setStaticF_XZ_TO_XZ_ROTATION)) ::Unity::Mathematics::quaternion  XZ_TO_XZ_ROTATION;

/// @brief Field XZ_UP, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_XZ_UP, put=setStaticF_XZ_UP)) ::Unity::Mathematics::float3  XZ_UP;

/// @brief Method Arc, addr 0x55bf914, size 0xc4, virtual false, abstract: false, final false
inline void Arc(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end) ;

/// @brief Method Arc, addr 0x55c2b20, size 0xfc, virtual false, abstract: false, final false
inline void Arc(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end, ::UnityEngine::Color  color) ;

/// @brief Method Arc, addr 0x55bf818, size 0xfc, virtual false, abstract: false, final false
inline void Arc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end) ;

/// @brief Method Arc, addr 0x55c2a04, size 0x11c, virtual false, abstract: false, final false
inline void Arc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::UnityEngine::Color  color) ;

/// @brief Method Arrow, addr 0x55c0748, size 0x98, virtual false, abstract: false, final false
inline void Arrow(::Unity::Mathematics::float2  from, ::Unity::Mathematics::float2  to) ;

/// @brief Method Arrow, addr 0x55c41d4, size 0xcc, virtual false, abstract: false, final false
inline void Arrow(::Unity::Mathematics::float2  from, ::Unity::Mathematics::float2  to, ::UnityEngine::Color  color) ;

/// @brief Method Arrow, addr 0x55c08d4, size 0xd4, virtual false, abstract: false, final false
inline void Arrow(::Unity::Mathematics::float2  from, ::Unity::Mathematics::float2  to, ::Unity::Mathematics::float2  up, float_t  headSize) ;

/// @brief Method Arrow, addr 0x55c43c4, size 0x110, virtual false, abstract: false, final false
inline void Arrow(::Unity::Mathematics::float2  from, ::Unity::Mathematics::float2  to, ::Unity::Mathematics::float2  up, float_t  headSize, ::UnityEngine::Color  color) ;

/// @brief Method Arrow, addr 0x55c0540, size 0x114, virtual false, abstract: false, final false
inline void Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to) ;

/// @brief Method Arrow, addr 0x55c3f9c, size 0x114, virtual false, abstract: false, final false
inline void Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::UnityEngine::Color  color) ;

/// @brief Method Arrow, addr 0x55c07e0, size 0xf4, virtual false, abstract: false, final false
inline void Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headSize) ;

/// @brief Method Arrow, addr 0x55c42a0, size 0x124, virtual false, abstract: false, final false
inline void Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headSize, ::UnityEngine::Color  color) ;

/// @brief Method ArrowRelativeSizeHead, addr 0x55c09a8, size 0xd4, virtual false, abstract: false, final false
inline void ArrowRelativeSizeHead(::Unity::Mathematics::float2  from, ::Unity::Mathematics::float2  to, ::Unity::Mathematics::float2  up, float_t  headFraction) ;

/// @brief Method ArrowRelativeSizeHead, addr 0x55c44d4, size 0x110, virtual false, abstract: false, final false
inline void ArrowRelativeSizeHead(::Unity::Mathematics::float2  from, ::Unity::Mathematics::float2  to, ::Unity::Mathematics::float2  up, float_t  headFraction, ::UnityEngine::Color  color) ;

/// @brief Method ArrowRelativeSizeHead, addr 0x55c0654, size 0xf4, virtual false, abstract: false, final false
inline void ArrowRelativeSizeHead(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headFraction) ;

/// @brief Method ArrowRelativeSizeHead, addr 0x55c40b0, size 0x124, virtual false, abstract: false, final false
inline void ArrowRelativeSizeHead(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headFraction, ::UnityEngine::Color  color) ;

/// @brief Method Arrowhead, addr 0x55c0c78, size 0xa8, virtual false, abstract: false, final false
inline void Arrowhead(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  direction, float_t  radius) ;

/// @brief Method Arrowhead, addr 0x55c4810, size 0xe0, virtual false, abstract: false, final false
inline void Arrowhead(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  direction, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method Arrowhead, addr 0x55c0d20, size 0xd4, virtual false, abstract: false, final false
inline void Arrowhead(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  direction, ::Unity::Mathematics::float2  up, float_t  radius) ;

/// @brief Method Arrowhead, addr 0x55c48f0, size 0x110, virtual false, abstract: false, final false
inline void Arrowhead(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  direction, ::Unity::Mathematics::float2  up, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method Arrowhead, addr 0x55c0a7c, size 0x108, virtual false, abstract: false, final false
inline void Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, float_t  radius) ;

/// @brief Method Arrowhead, addr 0x55c45e4, size 0x108, virtual false, abstract: false, final false
inline void Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method Arrowhead, addr 0x55c0b84, size 0xf4, virtual false, abstract: false, final false
inline void Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, ::Unity::Mathematics::float3  up, float_t  radius) ;

/// @brief Method Arrowhead, addr 0x55c46ec, size 0x124, virtual false, abstract: false, final false
inline void Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, ::Unity::Mathematics::float3  up, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method ArrowheadArc, addr 0x55c50a8, size 0xf4, virtual false, abstract: false, final false
inline void ArrowheadArc(::Unity::Mathematics::float2  origin, ::Unity::Mathematics::float2  direction, float_t  offset, ::UnityEngine::Color  color) ;

/// @brief Method ArrowheadArc, addr 0x55c124c, size 0xb0, virtual false, abstract: false, final false
inline void ArrowheadArc(::Unity::Mathematics::float2  origin, ::Unity::Mathematics::float2  direction, float_t  offset, float_t  width) ;

/// @brief Method ArrowheadArc, addr 0x55c4fd0, size 0xd8, virtual false, abstract: false, final false
inline void ArrowheadArc(::Unity::Mathematics::float2  origin, ::Unity::Mathematics::float2  direction, float_t  offset, float_t  width, ::UnityEngine::Color  color) ;

/// @brief Method ArrowheadArc, addr 0x55c4eac, size 0x124, virtual false, abstract: false, final false
inline void ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, ::UnityEngine::Color  color) ;

/// @brief Method ArrowheadArc, addr 0x55c0df4, size 0x458, virtual false, abstract: false, final false
inline void ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, float_t  width) ;

/// @brief Method ArrowheadArc, addr 0x55c4a00, size 0x4ac, virtual false, abstract: false, final false
inline void ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, float_t  width, ::UnityEngine::Color  color) ;

/// @brief Method Bezier, addr 0x55c0208, size 0xe4, virtual false, abstract: false, final false
inline void Bezier(::Unity::Mathematics::float2  p0, ::Unity::Mathematics::float2  p1, ::Unity::Mathematics::float2  p2, ::Unity::Mathematics::float2  p3) ;

/// @brief Method Bezier, addr 0x55c3b94, size 0x120, virtual false, abstract: false, final false
inline void Bezier(::Unity::Mathematics::float2  p0, ::Unity::Mathematics::float2  p1, ::Unity::Mathematics::float2  p2, ::Unity::Mathematics::float2  p3, ::UnityEngine::Color  color) ;

/// @brief Method Bezier, addr 0x55c00fc, size 0x10c, virtual false, abstract: false, final false
inline void Bezier(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3) ;

/// @brief Method Bezier, addr 0x55c3a60, size 0x134, virtual false, abstract: false, final false
inline void Bezier(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3, ::UnityEngine::Color  color) ;

/// @brief Method CatmullRom, addr 0x55c045c, size 0xe4, virtual false, abstract: false, final false
inline void CatmullRom(::Unity::Mathematics::float2  p0, ::Unity::Mathematics::float2  p1, ::Unity::Mathematics::float2  p2, ::Unity::Mathematics::float2  p3) ;

/// @brief Method CatmullRom, addr 0x55c3e7c, size 0x120, virtual false, abstract: false, final false
inline void CatmullRom(::Unity::Mathematics::float2  p0, ::Unity::Mathematics::float2  p1, ::Unity::Mathematics::float2  p2, ::Unity::Mathematics::float2  p3, ::UnityEngine::Color  color) ;

/// @brief Method CatmullRom, addr 0x55c0350, size 0x10c, virtual false, abstract: false, final false
inline void CatmullRom(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3) ;

/// @brief Method CatmullRom, addr 0x55c3d48, size 0x134, virtual false, abstract: false, final false
inline void CatmullRom(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3, ::UnityEngine::Color  color) ;

/// @brief Method CatmullRom, addr 0x55c02ec, size 0x64, virtual false, abstract: false, final false
inline void CatmullRom(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points) ;

/// @brief Method CatmullRom, addr 0x55c3cb4, size 0x94, virtual false, abstract: false, final false
inline void CatmullRom(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::UnityEngine::Color  color) ;

/// @brief Method Circle, addr 0x55c7658, size 0xbc, virtual false, abstract: false, final false
inline void Circle(::Unity::Mathematics::float2  center, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method Circle, addr 0x55bd7e8, size 0xa4, virtual false, abstract: false, final false
inline void Circle(::Unity::Mathematics::float2  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// @brief Method Circle, addr 0x55c7400, size 0xdc, virtual false, abstract: false, final false
inline void Circle(::Unity::Mathematics::float2  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// @brief Method Circle, addr 0x55c7714, size 0xc4, virtual false, abstract: false, final false
inline void Circle(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method Circle, addr 0x55bd88c, size 0x14c, virtual false, abstract: false, final false
inline void Circle(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// @brief Method Circle, addr 0x55c74dc, size 0x17c, virtual false, abstract: false, final false
inline void Circle(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xy.Circle instead")]
/// @brief Method CircleXY, addr 0x55c2eb8, size 0xbc, virtual false, abstract: false, final false
inline void CircleXY(::Unity::Mathematics::float2  center, float_t  radius, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xy.Circle instead")]
/// @brief Method CircleXY, addr 0x55bfa74, size 0xa4, virtual false, abstract: false, final false
inline void CircleXY(::Unity::Mathematics::float2  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// [Obsolete("Use Draw.xy.Circle instead")]
/// @brief Method CircleXY, addr 0x55c2ddc, size 0xdc, virtual false, abstract: false, final false
inline void CircleXY(::Unity::Mathematics::float2  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xy.Circle instead")]
/// @brief Method CircleXY, addr 0x55c2d18, size 0xc4, virtual false, abstract: false, final false
inline void CircleXY(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xy.Circle instead")]
/// @brief Method CircleXY, addr 0x55bf9d8, size 0x9c, virtual false, abstract: false, final false
inline void CircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// [Obsolete("Use Draw.xy.Circle instead")]
/// @brief Method CircleXY, addr 0x55c2c1c, size 0xfc, virtual false, abstract: false, final false
inline void CircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// @brief Method Cross, addr 0x55c8a28, size 0xa0, virtual false, abstract: false, final false
inline void Cross(::Unity::Mathematics::float2  position, ::UnityEngine::Color  color) ;

/// @brief Method Cross, addr 0x55be620, size 0xa4, virtual false, abstract: false, final false
inline void Cross(::Unity::Mathematics::float2  position, float_t  size) ;

/// @brief Method Cross, addr 0x55c8920, size 0x108, virtual false, abstract: false, final false
inline void Cross(::Unity::Mathematics::float2  position, float_t  size, ::UnityEngine::Color  color) ;

/// @brief Method Cross, addr 0x55c39b0, size 0xb0, virtual false, abstract: false, final false
inline void Cross(::Unity::Mathematics::float3  position, ::UnityEngine::Color  color) ;

/// @brief Method Cross, addr 0x55c0078, size 0x84, virtual false, abstract: false, final false
inline void Cross(::Unity::Mathematics::float3  position, float_t  size) ;

/// @brief Method Cross, addr 0x55c38fc, size 0xb4, virtual false, abstract: false, final false
inline void Cross(::Unity::Mathematics::float3  position, float_t  size, ::UnityEngine::Color  color) ;

/// @brief Method DashedLine, addr 0x55bff4c, size 0xb0, virtual false, abstract: false, final false
inline void DashedLine(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, float_t  dash, float_t  gap) ;

/// @brief Method DashedLine, addr 0x55c3778, size 0xd8, virtual false, abstract: false, final false
inline void DashedLine(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, float_t  dash, float_t  gap, ::UnityEngine::Color  color) ;

/// @brief Method DashedLine, addr 0x55bfe98, size 0xb4, virtual false, abstract: false, final false
inline void DashedLine(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  dash, float_t  gap) ;

/// @brief Method DashedLine, addr 0x55c3674, size 0x104, virtual false, abstract: false, final false
inline void DashedLine(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  dash, float_t  gap, ::UnityEngine::Color  color) ;

/// @brief Method DashedPolyline, addr 0x55bfffc, size 0x7c, virtual false, abstract: false, final false
inline void DashedPolyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, float_t  dash, float_t  gap) ;

/// @brief Method DashedPolyline, addr 0x55c3850, size 0xac, virtual false, abstract: false, final false
inline void DashedPolyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, float_t  dash, float_t  gap, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method InLocalSpace, addr 0x55bed7c, size 0x88, virtual false, abstract: false, final false
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix InLocalSpace(::UnityEngine::Transform*  transform) ;

/// [BurstDiscard]
/// @brief Method InScreenSpace, addr 0x55bee04, size 0x88, virtual false, abstract: false, final false
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix InScreenSpace(::UnityEngine::Camera*  camera) ;

/// @brief Method Label2D, addr 0x55c5c40, size 0xb0, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::StringW  text, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c1a50, size 0x9c, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::StringW  text, float_t  sizeInPixels) ;

/// @brief Method Label2D, addr 0x55c1bb0, size 0xcc, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label2D, addr 0x55c5dfc, size 0xf8, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c5b74, size 0xcc, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::StringW  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c6744, size 0xb0, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c1f70, size 0x9c, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels) ;

/// @brief Method Label2D, addr 0x55c2520, size 0xcc, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label2D, addr 0x55c7008, size 0xf8, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c6678, size 0xcc, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c6144, size 0xb0, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c1d10, size 0x9c, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels) ;

/// @brief Method Label2D, addr 0x55c2200, size 0xcc, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label2D, addr 0x55c6c00, size 0xf8, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c6078, size 0xcc, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c6a44, size 0xb0, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c20a0, size 0x9c, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels) ;

/// @brief Method Label2D, addr 0x55c26b0, size 0xcc, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label2D, addr 0x55c720c, size 0xf8, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c6978, size 0xcc, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c6444, size 0xb0, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c1e40, size 0x9c, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels) ;

/// @brief Method Label2D, addr 0x55c2390, size 0xcc, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label2D, addr 0x55c6e04, size 0xf8, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c6378, size 0xcc, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c5ab4, size 0xc0, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::StringW  text, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c19bc, size 0x94, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels) ;

/// @brief Method Label2D, addr 0x55c1aec, size 0xc4, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label2D, addr 0x55c5cf0, size 0x10c, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c59f0, size 0xc4, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c65b8, size 0xc0, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c1edc, size 0x94, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels) ;

/// @brief Method Label2D, addr 0x55c245c, size 0xc4, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label2D, addr 0x55c6efc, size 0x10c, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c64f4, size 0xc4, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c5fb8, size 0xc0, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c1c7c, size 0x94, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels) ;

/// @brief Method Label2D, addr 0x55c213c, size 0xc4, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label2D, addr 0x55c6af4, size 0x10c, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c5ef4, size 0xc4, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c68b8, size 0xc0, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c200c, size 0x94, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels) ;

/// @brief Method Label2D, addr 0x55c25ec, size 0xc4, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label2D, addr 0x55c7100, size 0x10c, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c67f4, size 0xc4, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c62b8, size 0xc0, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c1dac, size 0x94, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels) ;

/// @brief Method Label2D, addr 0x55c22cc, size 0xc4, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label2D, addr 0x55c6cf8, size 0x10c, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55c61f4, size 0xc4, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// @brief Method Line, addr 0x55bd52c, size 0xec, virtual false, abstract: false, final false
inline void Line(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method Line, addr 0x55bd618, size 0x134, virtual false, abstract: false, final false
inline void Line(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::UnityEngine::Color  color) ;

/// @brief Method Line, addr 0x55bd74c, size 0x9c, virtual false, abstract: false, final false
inline void Line(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method Line, addr 0x55c7304, size 0xfc, virtual false, abstract: false, final false
inline void Line(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::UnityEngine::Color  color) ;

/// @brief Method Line, addr 0x55be1c4, size 0x98, virtual false, abstract: false, final false
inline void Line(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b) ;

/// @brief Method Line, addr 0x55bf588, size 0xcc, virtual false, abstract: false, final false
inline void Line(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b, ::UnityEngine::Color  color) ;

/// @brief Method Line, addr 0x55bf3f0, size 0x9c, virtual false, abstract: false, final false
inline void Line(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method Line, addr 0x55bf48c, size 0xfc, virtual false, abstract: false, final false
inline void Line(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55c8680, size 0x98, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::Unity::Mathematics::float2>  points, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55be3ac, size 0x150, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::Unity::Mathematics::float2>  points, bool  cycle) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55c84e8, size 0x198, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::Unity::Mathematics::float2>  points, bool  cycle, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55c3490, size 0x98, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::Unity::Mathematics::float3>  points, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55bfdb0, size 0x6c, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::Unity::Mathematics::float3>  points, bool  cycle) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55c33f4, size 0x9c, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::Unity::Mathematics::float3>  points, bool  cycle, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55c8450, size 0x98, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::UnityEngine::Vector2>  points, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55be25c, size 0x150, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::UnityEngine::Vector2>  points, bool  cycle) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55c82b8, size 0x198, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::UnityEngine::Vector2>  points, bool  cycle, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55c335c, size 0x98, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::UnityEngine::Vector3>  points, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55bfd44, size 0x6c, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::UnityEngine::Vector3>  points, bool  cycle) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55c32c0, size 0x9c, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::UnityEngine::Vector3>  points, bool  cycle, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55c8220, size 0x98, virtual false, abstract: false, final false
inline void Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  points, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55be03c, size 0x188, virtual false, abstract: false, final false
inline void Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  points, bool  cycle) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55c8050, size 0x1d0, virtual false, abstract: false, final false
inline void Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  points, bool  cycle, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55c3228, size 0x98, virtual false, abstract: false, final false
inline void Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55bfcd8, size 0x6c, virtual false, abstract: false, final false
inline void Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, bool  cycle) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55c318c, size 0x9c, virtual false, abstract: false, final false
inline void Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, bool  cycle, ::UnityEngine::Color  color) ;

/// @brief Method Polyline, addr 0x55c8880, size 0xa0, virtual false, abstract: false, final false
inline void Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>  points, ::UnityEngine::Color  color) ;

/// @brief Method Polyline, addr 0x55be4fc, size 0x124, virtual false, abstract: false, final false
inline void Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>  points, bool  cycle) ;

/// @brief Method Polyline, addr 0x55c8718, size 0x168, virtual false, abstract: false, final false
inline void Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>  points, bool  cycle, ::UnityEngine::Color  color) ;

/// @brief Method Polyline, addr 0x55c35d4, size 0xa0, virtual false, abstract: false, final false
inline void Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, ::UnityEngine::Color  color) ;

/// @brief Method Polyline, addr 0x55bfe1c, size 0x7c, virtual false, abstract: false, final false
inline void Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, bool  cycle) ;

/// @brief Method Polyline, addr 0x55c3528, size 0xac, virtual false, abstract: false, final false
inline void Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, bool  cycle, ::UnityEngine::Color  color) ;

/// @brief Method PopColor, addr 0x55bf164, size 0x54, virtual false, abstract: false, final false
inline void PopColor() ;

/// @brief Method PopDuration, addr 0x55bf21c, size 0x54, virtual false, abstract: false, final false
inline void PopDuration() ;

/// @brief Method PopLineWidth, addr 0x55bf39c, size 0x54, virtual false, abstract: false, final false
inline void PopLineWidth() ;

/// @brief Method PopMatrix, addr 0x55bf08c, size 0x54, virtual false, abstract: false, final false
inline void PopMatrix() ;

/// [Obsolete("Renamed to PopDuration for consistency")]
/// @brief Method PopPersist, addr 0x55bf2d4, size 0x54, virtual false, abstract: false, final false
inline void PopPersist() ;

/// @brief Method PushColor, addr 0x55bf0e0, size 0x84, virtual false, abstract: false, final false
inline void PushColor(::UnityEngine::Color  color) ;

/// @brief Method PushDuration, addr 0x55bf1b8, size 0x64, virtual false, abstract: false, final false
inline void PushDuration(float_t  duration) ;

/// @brief Method PushLineWidth, addr 0x55bf328, size 0x74, virtual false, abstract: false, final false
inline void PushLineWidth(float_t  pixels, bool  automaticJoins) ;

/// @brief Method PushMatrix, addr 0x55bef0c, size 0x80, virtual false, abstract: false, final false
inline void PushMatrix(::Unity::Mathematics::float4x4  matrix) ;

/// @brief Method PushMatrix, addr 0x55bee8c, size 0x80, virtual false, abstract: false, final false
inline void PushMatrix(::UnityEngine::Matrix4x4  matrix) ;

/// [Obsolete("Renamed to PushDuration for consistency")]
/// @brief Method PushPersist, addr 0x55bf270, size 0x64, virtual false, abstract: false, final false
inline void PushPersist(float_t  duration) ;

/// @brief Method PushSetMatrix, addr 0x55bf00c, size 0x80, virtual false, abstract: false, final false
inline void PushSetMatrix(::Unity::Mathematics::float4x4  matrix) ;

/// @brief Method PushSetMatrix, addr 0x55bef8c, size 0x80, virtual false, abstract: false, final false
inline void PushSetMatrix(::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method Ray, addr 0x55bf6f0, size 0x98, virtual false, abstract: false, final false
inline void Ray(::Unity::Mathematics::float2  origin, ::Unity::Mathematics::float2  direction) ;

/// @brief Method Ray, addr 0x55c2878, size 0xcc, virtual false, abstract: false, final false
inline void Ray(::Unity::Mathematics::float2  origin, ::Unity::Mathematics::float2  direction, ::UnityEngine::Color  color) ;

/// @brief Method Ray, addr 0x55bf654, size 0x9c, virtual false, abstract: false, final false
inline void Ray(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction) ;

/// @brief Method Ray, addr 0x55c277c, size 0xfc, virtual false, abstract: false, final false
inline void Ray(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, ::UnityEngine::Color  color) ;

/// @brief Method Ray, addr 0x55bf788, size 0x90, virtual false, abstract: false, final false
inline void Ray(::UnityEngine::Ray  ray, float_t  length) ;

/// @brief Method Ray, addr 0x55c2944, size 0xc0, virtual false, abstract: false, final false
inline void Ray(::UnityEngine::Ray  ray, float_t  length, ::UnityEngine::Color  color) ;

/// @brief Method SolidArc, addr 0x55bfc14, size 0xc4, virtual false, abstract: false, final false
inline void SolidArc(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end) ;

/// @brief Method SolidArc, addr 0x55c3090, size 0xfc, virtual false, abstract: false, final false
inline void SolidArc(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end, ::UnityEngine::Color  color) ;

/// @brief Method SolidArc, addr 0x55bfb18, size 0xfc, virtual false, abstract: false, final false
inline void SolidArc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end) ;

/// @brief Method SolidArc, addr 0x55c2f74, size 0x11c, virtual false, abstract: false, final false
inline void SolidArc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::UnityEngine::Color  color) ;

/// @brief Method SolidCircle, addr 0x55c7a2c, size 0xbc, virtual false, abstract: false, final false
inline void SolidCircle(::Unity::Mathematics::float2  center, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method SolidCircle, addr 0x55bd9d8, size 0xa4, virtual false, abstract: false, final false
inline void SolidCircle(::Unity::Mathematics::float2  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// @brief Method SolidCircle, addr 0x55c77d8, size 0xdc, virtual false, abstract: false, final false
inline void SolidCircle(::Unity::Mathematics::float2  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// @brief Method SolidCircle, addr 0x55c7ae8, size 0xc4, virtual false, abstract: false, final false
inline void SolidCircle(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method SolidCircle, addr 0x55bda7c, size 0x14c, virtual false, abstract: false, final false
inline void SolidCircle(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// @brief Method SolidCircle, addr 0x55c78b4, size 0x178, virtual false, abstract: false, final false
inline void SolidCircle(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// @brief Method SolidRectangle, addr 0x55b0b9c, size 0x134, virtual false, abstract: false, final false
inline void SolidRectangle(::UnityEngine::Rect  rect) ;

/// @brief Method SolidRectangle, addr 0x55b96fc, size 0x14c, virtual false, abstract: false, final false
inline void SolidRectangle(::UnityEngine::Rect  rect, ::UnityEngine::Color  color) ;

/// @brief Method SolidTriangle, addr 0x55c18f8, size 0xc4, virtual false, abstract: false, final false
inline void SolidTriangle(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::float2  c) ;

/// @brief Method SolidTriangle, addr 0x55c58f4, size 0xfc, virtual false, abstract: false, final false
inline void SolidTriangle(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::float2  c, ::UnityEngine::Color  color) ;

/// @brief Method SolidTriangle, addr 0x55c17fc, size 0xfc, virtual false, abstract: false, final false
inline void SolidTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c) ;

/// @brief Method SolidTriangle, addr 0x55c57d8, size 0x11c, virtual false, abstract: false, final false
inline void SolidTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c, ::UnityEngine::Color  color) ;

/// @brief Method WireGrid, addr 0x55be7f4, size 0x140, virtual false, abstract: false, final false
inline void WireGrid(::Unity::Mathematics::float2  center, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize) ;

/// @brief Method WireGrid, addr 0x55c8bfc, size 0x15c, virtual false, abstract: false, final false
inline void WireGrid(::Unity::Mathematics::float2  center, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize, ::UnityEngine::Color  color) ;

/// @brief Method WireGrid, addr 0x55be934, size 0x140, virtual false, abstract: false, final false
inline void WireGrid(::Unity::Mathematics::float3  center, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize) ;

/// @brief Method WireGrid, addr 0x55c8d58, size 0x144, virtual false, abstract: false, final false
inline void WireGrid(::Unity::Mathematics::float3  center, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize, ::UnityEngine::Color  color) ;

/// @brief Method WirePill, addr 0x55bdbc8, size 0xdc, virtual false, abstract: false, final false
inline void WirePill(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, float_t  radius) ;

/// @brief Method WirePill, addr 0x55c7bac, size 0xf4, virtual false, abstract: false, final false
inline void WirePill(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method WirePill, addr 0x55bdca4, size 0x398, virtual false, abstract: false, final false
inline void WirePill(::Unity::Mathematics::float2  position, ::Unity::Mathematics::float2  direction, float_t  length, float_t  radius) ;

/// @brief Method WirePill, addr 0x55c7ca0, size 0x3b0, virtual false, abstract: false, final false
inline void WirePill(::Unity::Mathematics::float2  position, ::Unity::Mathematics::float2  direction, float_t  length, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method WireRectangle, addr 0x55c15c0, size 0xcc, virtual false, abstract: false, final false
inline void WireRectangle(::Unity::Mathematics::float2  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size) ;

/// @brief Method WireRectangle, addr 0x55c54d8, size 0x114, virtual false, abstract: false, final false
inline void WireRectangle(::Unity::Mathematics::float2  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// @brief Method WireRectangle, addr 0x55c14bc, size 0x104, virtual false, abstract: false, final false
inline void WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size) ;

/// @brief Method WireRectangle, addr 0x55c53b4, size 0x124, virtual false, abstract: false, final false
inline void WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// @brief Method WireRectangle, addr 0x55be6c4, size 0x130, virtual false, abstract: false, final false
inline void WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float2  size) ;

/// @brief Method WireRectangle, addr 0x55c8ac8, size 0x134, virtual false, abstract: false, final false
inline void WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// @brief Method WireRectangle, addr 0x55b0540, size 0x108, virtual false, abstract: false, final false
inline void WireRectangle(::UnityEngine::Rect  rect) ;

/// @brief Method WireRectangle, addr 0x55b8f0c, size 0x164, virtual false, abstract: false, final false
inline void WireRectangle(::UnityEngine::Rect  rect, ::UnityEngine::Color  color) ;

/// @brief Method WireTriangle, addr 0x55c13f8, size 0xc4, virtual false, abstract: false, final false
inline void WireTriangle(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::float2  c) ;

/// @brief Method WireTriangle, addr 0x55c52b8, size 0xfc, virtual false, abstract: false, final false
inline void WireTriangle(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::float2  c, ::UnityEngine::Color  color) ;

/// @brief Method WireTriangle, addr 0x55c12fc, size 0xfc, virtual false, abstract: false, final false
inline void WireTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c) ;

/// @brief Method WireTriangle, addr 0x55c519c, size 0x11c, virtual false, abstract: false, final false
inline void WireTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c, ::UnityEngine::Color  color) ;

/// @brief Method WireTriangle, addr 0x55c1740, size 0xbc, virtual false, abstract: false, final false
inline void WireTriangle(::Unity::Mathematics::float2  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius) ;

/// @brief Method WireTriangle, addr 0x55c56f0, size 0xe8, virtual false, abstract: false, final false
inline void WireTriangle(::Unity::Mathematics::float2  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method WireTriangle, addr 0x55c168c, size 0xb4, virtual false, abstract: false, final false
inline void WireTriangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius) ;

/// @brief Method WireTriangle, addr 0x55c55ec, size 0x104, virtual false, abstract: false, final false
inline void WireTriangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WithColor, addr 0x55beba4, size 0xb0, virtual false, abstract: false, final false
inline ::GlobalNamespace::CommandBuilder_ScopeColor WithColor(::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WithDuration, addr 0x55bec54, size 0x90, virtual false, abstract: false, final false
inline ::GlobalNamespace::CommandBuilder_ScopePersist WithDuration(float_t  duration) ;

/// [BurstDiscard]
/// @brief Method WithLineWidth, addr 0x55bece4, size 0x98, virtual false, abstract: false, final false
inline ::GlobalNamespace::CommandBuilder_ScopeLineWidth WithLineWidth(float_t  pixels, bool  automaticJoins) ;

/// [BurstDiscard]
/// @brief Method WithMatrix, addr 0x55beb0c, size 0x98, virtual false, abstract: false, final false
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix WithMatrix(::Unity::Mathematics::float3x3  matrix) ;

/// [BurstDiscard]
/// @brief Method WithMatrix, addr 0x55bea74, size 0x98, virtual false, abstract: false, final false
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix WithMatrix(::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method .ctor, addr 0x55a86a8, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::Drawing::CommandBuilder  draw, bool  xy) ;

static inline ::Unity::Mathematics::quaternion getStaticF_XY_TO_XZ_ROTATION() ;

static inline ::Unity::Mathematics::float3 getStaticF_XY_UP() ;

static inline ::Unity::Mathematics::float4x4 getStaticF_XZ_TO_XY_MATRIX() ;

static inline ::Unity::Mathematics::quaternion getStaticF_XZ_TO_XZ_ROTATION() ;

static inline ::Unity::Mathematics::float3 getStaticF_XZ_UP() ;

static inline void setStaticF_XY_TO_XZ_ROTATION(::Unity::Mathematics::quaternion  value) ;

static inline void setStaticF_XY_UP(::Unity::Mathematics::float3  value) ;

static inline void setStaticF_XZ_TO_XY_MATRIX(::Unity::Mathematics::float4x4  value) ;

static inline void setStaticF_XZ_TO_XZ_ROTATION(::Unity::Mathematics::quaternion  value) ;

static inline void setStaticF_XZ_UP(::Unity::Mathematics::float3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder2D() ;

// Ctor Parameters [CppParam { name: "draw", ty: "::Drawing::CommandBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "xy", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder2D(::Drawing::CommandBuilder  draw, bool  xy) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27722};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field draw, offset: 0x0, size: 0x18, def value: None
 ::Drawing::CommandBuilder  draw;

/// @brief Field xy, offset: 0x18, size: 0x1, def value: None
 bool  xy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Drawing::CommandBuilder2D, draw) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Drawing::CommandBuilder2D, xy) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Drawing::CommandBuilder2D) == 0x20, "Size mismatch!");

} // namespace end def Drawing

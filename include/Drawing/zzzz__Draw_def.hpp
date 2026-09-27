#pragma once
// IWYU pragma private; include "Drawing/Draw.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__CommandBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Draw)
namespace Drawing {
struct CommandBuilder2D;
}
namespace Drawing {
struct CommandBuilder;
}
namespace Drawing {
struct LabelAlignment;
}
namespace GlobalNamespace {
struct CommandBuilder_ScopeEmpty;
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
struct Bounds;
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
class Mesh;
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
struct Vector3;
}
// Forward declare root types
namespace Drawing {
class Draw;
}
// Write type traits
MARK_REF_T(::Drawing::Draw*);
DEFINE_IL2CPP_CLASS(::Drawing::Draw*, "Drawing", "Draw");
// Dependencies Drawing.CommandBuilder, System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.Draw
class CORDL_TYPE Draw : public ::System::Object {
public:
// Declarations
/// @brief Field builder, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_builder, put=setStaticF_builder)) ::Drawing::CommandBuilder  builder;

/// @brief Field ingame_builder, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_ingame_builder, put=setStaticF_ingame_builder)) ::Drawing::CommandBuilder  ingame_builder;

/// [BurstDiscard]
/// @brief Method Arc, addr 0x55cb02c, size 0x4, virtual false, abstract: false, final false
static inline void Arc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end) ;

/// [BurstDiscard]
/// @brief Method Arc, addr 0x55cb178, size 0x4, virtual false, abstract: false, final false
static inline void Arc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Arrow, addr 0x55cb0b4, size 0x4, virtual false, abstract: false, final false
static inline void Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to) ;

/// [BurstDiscard]
/// @brief Method Arrow, addr 0x55cb224, size 0x4, virtual false, abstract: false, final false
static inline void Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Arrow, addr 0x55cb0b8, size 0x4, virtual false, abstract: false, final false
static inline void Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headSize) ;

/// [BurstDiscard]
/// @brief Method Arrow, addr 0x55cb228, size 0x4, virtual false, abstract: false, final false
static inline void Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headSize, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method ArrowRelativeSizeHead, addr 0x55cb0bc, size 0x4, virtual false, abstract: false, final false
static inline void ArrowRelativeSizeHead(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headFraction) ;

/// [BurstDiscard]
/// @brief Method ArrowRelativeSizeHead, addr 0x55cb22c, size 0x4, virtual false, abstract: false, final false
static inline void ArrowRelativeSizeHead(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headFraction, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Arrowhead, addr 0x55cb0c0, size 0x4, virtual false, abstract: false, final false
static inline void Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, float_t  radius) ;

/// [BurstDiscard]
/// @brief Method Arrowhead, addr 0x55cb230, size 0x4, virtual false, abstract: false, final false
static inline void Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Arrowhead, addr 0x55cb0c4, size 0x4, virtual false, abstract: false, final false
static inline void Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, ::Unity::Mathematics::float3  up, float_t  radius) ;

/// [BurstDiscard]
/// @brief Method Arrowhead, addr 0x55cb234, size 0x4, virtual false, abstract: false, final false
static inline void Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, ::Unity::Mathematics::float3  up, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method ArrowheadArc, addr 0x55cb23c, size 0x4, virtual false, abstract: false, final false
static inline void ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method ArrowheadArc, addr 0x55cb0c8, size 0x4, virtual false, abstract: false, final false
static inline void ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, float_t  width) ;

/// [BurstDiscard]
/// @brief Method ArrowheadArc, addr 0x55cb238, size 0x4, virtual false, abstract: false, final false
static inline void ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, float_t  width, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Bezier, addr 0x55cb0a8, size 0x4, virtual false, abstract: false, final false
static inline void Bezier(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3) ;

/// [BurstDiscard]
/// @brief Method Bezier, addr 0x55cb218, size 0x4, virtual false, abstract: false, final false
static inline void Bezier(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method CatmullRom, addr 0x55cb0b0, size 0x4, virtual false, abstract: false, final false
static inline void CatmullRom(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3) ;

/// [BurstDiscard]
/// @brief Method CatmullRom, addr 0x55cb220, size 0x4, virtual false, abstract: false, final false
static inline void CatmullRom(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method CatmullRom, addr 0x55cb0ac, size 0x4, virtual false, abstract: false, final false
static inline void CatmullRom(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points) ;

/// [BurstDiscard]
/// @brief Method CatmullRom, addr 0x55cb21c, size 0x4, virtual false, abstract: false, final false
static inline void CatmullRom(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Circle, addr 0x55cb038, size 0x4, virtual false, abstract: false, final false
static inline void Circle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius) ;

/// [BurstDiscard]
/// @brief Method Circle, addr 0x55cb18c, size 0x4, virtual false, abstract: false, final false
static inline void Circle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xy.Circle instead")]
/// @brief Method CircleXY, addr 0x55cb188, size 0x4, virtual false, abstract: false, final false
static inline void CircleXY(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xy.Circle instead")]
/// @brief Method CircleXY, addr 0x55cb034, size 0x4, virtual false, abstract: false, final false
static inline void CircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xy.Circle instead")]
/// @brief Method CircleXY, addr 0x55cb184, size 0x4, virtual false, abstract: false, final false
static inline void CircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xz.Circle instead")]
/// @brief Method CircleXZ, addr 0x55cb180, size 0x4, virtual false, abstract: false, final false
static inline void CircleXZ(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xz.Circle instead")]
/// @brief Method CircleXZ, addr 0x55cb030, size 0x4, virtual false, abstract: false, final false
static inline void CircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xz.Circle instead")]
/// @brief Method CircleXZ, addr 0x55cb17c, size 0x4, virtual false, abstract: false, final false
static inline void CircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Cross, addr 0x55cb204, size 0x4, virtual false, abstract: false, final false
static inline void Cross(::Unity::Mathematics::float3  position, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Cross, addr 0x55cb09c, size 0x4, virtual false, abstract: false, final false
static inline void Cross(::Unity::Mathematics::float3  position, float_t  size) ;

/// [BurstDiscard]
/// @brief Method Cross, addr 0x55cb200, size 0x4, virtual false, abstract: false, final false
static inline void Cross(::Unity::Mathematics::float3  position, float_t  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xy.Cross instead")]
/// @brief Method CrossXY, addr 0x55cb214, size 0x4, virtual false, abstract: false, final false
static inline void CrossXY(::Unity::Mathematics::float3  position, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xy.Cross instead")]
/// @brief Method CrossXY, addr 0x55cb0a4, size 0x4, virtual false, abstract: false, final false
static inline void CrossXY(::Unity::Mathematics::float3  position, float_t  size) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xy.Cross instead")]
/// @brief Method CrossXY, addr 0x55cb210, size 0x4, virtual false, abstract: false, final false
static inline void CrossXY(::Unity::Mathematics::float3  position, float_t  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xz.Cross instead")]
/// @brief Method CrossXZ, addr 0x55cb20c, size 0x4, virtual false, abstract: false, final false
static inline void CrossXZ(::Unity::Mathematics::float3  position, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xz.Cross instead")]
/// @brief Method CrossXZ, addr 0x55cb0a0, size 0x4, virtual false, abstract: false, final false
static inline void CrossXZ(::Unity::Mathematics::float3  position, float_t  size) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xz.Cross instead")]
/// @brief Method CrossXZ, addr 0x55cb208, size 0x4, virtual false, abstract: false, final false
static inline void CrossXZ(::Unity::Mathematics::float3  position, float_t  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method DashedLine, addr 0x55cb074, size 0x4, virtual false, abstract: false, final false
static inline void DashedLine(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  dash, float_t  gap) ;

/// [BurstDiscard]
/// @brief Method DashedLine, addr 0x55cb1e0, size 0x4, virtual false, abstract: false, final false
static inline void DashedLine(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  dash, float_t  gap, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method DashedPolyline, addr 0x55cb078, size 0x4, virtual false, abstract: false, final false
static inline void DashedPolyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, float_t  dash, float_t  gap) ;

/// [BurstDiscard]
/// @brief Method DashedPolyline, addr 0x55cb1e4, size 0x4, virtual false, abstract: false, final false
static inline void DashedPolyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, float_t  dash, float_t  gap, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method InLocalSpace, addr 0x55cafd4, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CommandBuilder_ScopeEmpty InLocalSpace(::UnityEngine::Transform*  transform) ;

/// [BurstDiscard]
/// @brief Method InScreenSpace, addr 0x55cafdc, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CommandBuilder_ScopeEmpty InScreenSpace(::UnityEngine::Camera*  camera) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb29c, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::StringW  text, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb124, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb128, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb2a0, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb298, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb2b8, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb134, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb144, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb2cc, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb2b4, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb2a8, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb12c, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb13c, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb2c4, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb2a4, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb2c0, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb138, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb148, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb2d0, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb2bc, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb2b0, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb130, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb140, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb2c8, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label2D, addr 0x55cb2ac, size 0x4, virtual false, abstract: false, final false
static inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb11c, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb120, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size, ::Drawing::LabelAlignment  alignment) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb294, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb290, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb154, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb164, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb2ec, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb2dc, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb14c, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb15c, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb2e4, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb2d4, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb158, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb168, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb2f0, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb2e0, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb150, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb160, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb2e8, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Label3D, addr 0x55cb2d8, size 0x4, virtual false, abstract: false, final false
static inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Line, addr 0x55cb018, size 0x4, virtual false, abstract: false, final false
static inline void Line(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b) ;

/// [BurstDiscard]
/// @brief Method Line, addr 0x55cb16c, size 0x4, virtual false, abstract: false, final false
static inline void Line(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Line, addr 0x55cb01c, size 0x4, virtual false, abstract: false, final false
static inline void Line(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// [BurstDiscard]
/// @brief Method Line, addr 0x55cb020, size 0x4, virtual false, abstract: false, final false
static inline void Line(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method PlaneWithNormal, addr 0x55cb104, size 0x4, virtual false, abstract: false, final false
static inline void PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size) ;

/// [BurstDiscard]
/// @brief Method PlaneWithNormal, addr 0x55cb278, size 0x4, virtual false, abstract: false, final false
static inline void PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method PlaneWithNormal, addr 0x55cb108, size 0x4, virtual false, abstract: false, final false
static inline void PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size) ;

/// [BurstDiscard]
/// @brief Method PlaneWithNormal, addr 0x55cb27c, size 0x4, virtual false, abstract: false, final false
static inline void PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55cb1d4, size 0x4, virtual false, abstract: false, final false
static inline void Polyline(::ArrayW<::Unity::Mathematics::float3>  points, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55cb06c, size 0x4, virtual false, abstract: false, final false
static inline void Polyline(::ArrayW<::Unity::Mathematics::float3>  points, bool  cycle) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55cb1d0, size 0x4, virtual false, abstract: false, final false
static inline void Polyline(::ArrayW<::Unity::Mathematics::float3>  points, bool  cycle, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55cb1cc, size 0x4, virtual false, abstract: false, final false
static inline void Polyline(::ArrayW<::UnityEngine::Vector3>  points, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55cb068, size 0x4, virtual false, abstract: false, final false
static inline void Polyline(::ArrayW<::UnityEngine::Vector3>  points, bool  cycle) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55cb1c8, size 0x4, virtual false, abstract: false, final false
static inline void Polyline(::ArrayW<::UnityEngine::Vector3>  points, bool  cycle, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55cb1c4, size 0x4, virtual false, abstract: false, final false
static inline void Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55cb064, size 0x4, virtual false, abstract: false, final false
static inline void Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, bool  cycle) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55cb1c0, size 0x4, virtual false, abstract: false, final false
static inline void Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, bool  cycle, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55cb1dc, size 0x4, virtual false, abstract: false, final false
static inline void Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55cb070, size 0x4, virtual false, abstract: false, final false
static inline void Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, bool  cycle) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55cb1d8, size 0x4, virtual false, abstract: false, final false
static inline void Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, bool  cycle, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method PopColor, addr 0x55caffc, size 0x4, virtual false, abstract: false, final false
static inline void PopColor() ;

/// [BurstDiscard]
/// @brief Method PopDuration, addr 0x55cb004, size 0x4, virtual false, abstract: false, final false
static inline void PopDuration() ;

/// [BurstDiscard]
/// @brief Method PopLineWidth, addr 0x55cb014, size 0x4, virtual false, abstract: false, final false
static inline void PopLineWidth() ;

/// [BurstDiscard]
/// @brief Method PopMatrix, addr 0x55caff4, size 0x4, virtual false, abstract: false, final false
static inline void PopMatrix() ;

/// [BurstDiscard]
/// [Obsolete("Renamed to PopDuration for consistency")]
/// @brief Method PopPersist, addr 0x55cb00c, size 0x4, virtual false, abstract: false, final false
static inline void PopPersist() ;

/// [BurstDiscard]
/// @brief Method PushColor, addr 0x55caff8, size 0x4, virtual false, abstract: false, final false
static inline void PushColor(::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method PushDuration, addr 0x55cb000, size 0x4, virtual false, abstract: false, final false
static inline void PushDuration(float_t  duration) ;

/// [BurstDiscard]
/// @brief Method PushLineWidth, addr 0x55cb010, size 0x4, virtual false, abstract: false, final false
static inline void PushLineWidth(float_t  pixels, bool  automaticJoins) ;

/// [BurstDiscard]
/// @brief Method PushMatrix, addr 0x55cafe8, size 0x4, virtual false, abstract: false, final false
static inline void PushMatrix(::Unity::Mathematics::float4x4  matrix) ;

/// [BurstDiscard]
/// @brief Method PushMatrix, addr 0x55cafe4, size 0x4, virtual false, abstract: false, final false
static inline void PushMatrix(::UnityEngine::Matrix4x4  matrix) ;

/// [BurstDiscard]
/// [Obsolete("Renamed to PushDuration for consistency")]
/// @brief Method PushPersist, addr 0x55cb008, size 0x4, virtual false, abstract: false, final false
static inline void PushPersist(float_t  duration) ;

/// [BurstDiscard]
/// @brief Method PushSetMatrix, addr 0x55caff0, size 0x4, virtual false, abstract: false, final false
static inline void PushSetMatrix(::Unity::Mathematics::float4x4  matrix) ;

/// [BurstDiscard]
/// @brief Method PushSetMatrix, addr 0x55cafec, size 0x4, virtual false, abstract: false, final false
static inline void PushSetMatrix(::UnityEngine::Matrix4x4  matrix) ;

/// [BurstDiscard]
/// @brief Method Ray, addr 0x55cb024, size 0x4, virtual false, abstract: false, final false
static inline void Ray(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction) ;

/// [BurstDiscard]
/// @brief Method Ray, addr 0x55cb170, size 0x4, virtual false, abstract: false, final false
static inline void Ray(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Ray, addr 0x55cb028, size 0x4, virtual false, abstract: false, final false
static inline void Ray(::UnityEngine::Ray  ray, float_t  length) ;

/// [BurstDiscard]
/// @brief Method Ray, addr 0x55cb174, size 0x4, virtual false, abstract: false, final false
static inline void Ray(::UnityEngine::Ray  ray, float_t  length, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method SolidArc, addr 0x55cb03c, size 0x4, virtual false, abstract: false, final false
static inline void SolidArc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end) ;

/// [BurstDiscard]
/// @brief Method SolidArc, addr 0x55cb190, size 0x4, virtual false, abstract: false, final false
static inline void SolidArc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method SolidBox, addr 0x55cb114, size 0x4, virtual false, abstract: false, final false
static inline void SolidBox(::UnityEngine::Bounds  bounds) ;

/// [BurstDiscard]
/// @brief Method SolidBox, addr 0x55cb288, size 0x4, virtual false, abstract: false, final false
static inline void SolidBox(::UnityEngine::Bounds  bounds, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method SolidBox, addr 0x55cb118, size 0x4, virtual false, abstract: false, final false
static inline void SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size) ;

/// [BurstDiscard]
/// @brief Method SolidBox, addr 0x55cb28c, size 0x4, virtual false, abstract: false, final false
static inline void SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method SolidBox, addr 0x55cb110, size 0x4, virtual false, abstract: false, final false
static inline void SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size) ;

/// [BurstDiscard]
/// @brief Method SolidBox, addr 0x55cb284, size 0x4, virtual false, abstract: false, final false
static inline void SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method SolidCircle, addr 0x55cb048, size 0x4, virtual false, abstract: false, final false
static inline void SolidCircle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius) ;

/// [BurstDiscard]
/// @brief Method SolidCircle, addr 0x55cb1a4, size 0x4, virtual false, abstract: false, final false
static inline void SolidCircle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xy.SolidCircle instead")]
/// @brief Method SolidCircleXY, addr 0x55cb1a0, size 0x4, virtual false, abstract: false, final false
static inline void SolidCircleXY(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xy.SolidCircle instead")]
/// @brief Method SolidCircleXY, addr 0x55cb044, size 0x4, virtual false, abstract: false, final false
static inline void SolidCircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xy.SolidCircle instead")]
/// @brief Method SolidCircleXY, addr 0x55cb19c, size 0x4, virtual false, abstract: false, final false
static inline void SolidCircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xz.SolidCircle instead")]
/// @brief Method SolidCircleXZ, addr 0x55cb198, size 0x4, virtual false, abstract: false, final false
static inline void SolidCircleXZ(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xz.SolidCircle instead")]
/// @brief Method SolidCircleXZ, addr 0x55cb040, size 0x4, virtual false, abstract: false, final false
static inline void SolidCircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xz.SolidCircle instead")]
/// @brief Method SolidCircleXZ, addr 0x55cb194, size 0x4, virtual false, abstract: false, final false
static inline void SolidCircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method SolidMesh, addr 0x55cb090, size 0x4, virtual false, abstract: false, final false
static inline void SolidMesh(::UnityEngine::Mesh*  mesh) ;

/// [BurstDiscard]
/// @brief Method SolidMesh, addr 0x55cb1fc, size 0x4, virtual false, abstract: false, final false
static inline void SolidMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method SolidMesh, addr 0x55cb098, size 0x4, virtual false, abstract: false, final false
static inline void SolidMesh(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<int32_t>  triangles, ::ArrayW<::UnityEngine::Color>  colors, int32_t  vertexCount, int32_t  indexCount) ;

/// [BurstDiscard]
/// @brief Method SolidMesh, addr 0x55cb094, size 0x4, virtual false, abstract: false, final false
static inline void SolidMesh(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::System::Collections::Generic::List_1<::UnityEngine::Color>*  colors) ;

/// [BurstDiscard]
/// @brief Method SolidPlane, addr 0x55cb0f4, size 0x4, virtual false, abstract: false, final false
static inline void SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size) ;

/// [BurstDiscard]
/// @brief Method SolidPlane, addr 0x55cb268, size 0x4, virtual false, abstract: false, final false
static inline void SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method SolidPlane, addr 0x55cb0f8, size 0x4, virtual false, abstract: false, final false
static inline void SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size) ;

/// [BurstDiscard]
/// @brief Method SolidPlane, addr 0x55cb26c, size 0x4, virtual false, abstract: false, final false
static inline void SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xy.SolidRectangle instead")]
/// @brief Method SolidRectangle, addr 0x55cb0f0, size 0x4, virtual false, abstract: false, final false
static inline void SolidRectangle(::UnityEngine::Rect  rect) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xy.SolidRectangle instead")]
/// @brief Method SolidRectangle, addr 0x55cb264, size 0x4, virtual false, abstract: false, final false
static inline void SolidRectangle(::UnityEngine::Rect  rect, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method SolidTriangle, addr 0x55cb10c, size 0x4, virtual false, abstract: false, final false
static inline void SolidTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c) ;

/// [BurstDiscard]
/// @brief Method SolidTriangle, addr 0x55cb280, size 0x4, virtual false, abstract: false, final false
static inline void SolidTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method SphereOutline, addr 0x55cb04c, size 0x4, virtual false, abstract: false, final false
static inline void SphereOutline(::Unity::Mathematics::float3  center, float_t  radius) ;

/// [BurstDiscard]
/// @brief Method SphereOutline, addr 0x55cb1a8, size 0x4, virtual false, abstract: false, final false
static inline void SphereOutline(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WireBox, addr 0x55cb084, size 0x4, virtual false, abstract: false, final false
static inline void WireBox(::UnityEngine::Bounds  bounds) ;

/// [BurstDiscard]
/// @brief Method WireBox, addr 0x55cb1f0, size 0x4, virtual false, abstract: false, final false
static inline void WireBox(::UnityEngine::Bounds  bounds, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WireBox, addr 0x55cb080, size 0x4, virtual false, abstract: false, final false
static inline void WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size) ;

/// [BurstDiscard]
/// @brief Method WireBox, addr 0x55cb1ec, size 0x4, virtual false, abstract: false, final false
static inline void WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WireBox, addr 0x55cb07c, size 0x4, virtual false, abstract: false, final false
static inline void WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size) ;

/// [BurstDiscard]
/// @brief Method WireBox, addr 0x55cb1e8, size 0x4, virtual false, abstract: false, final false
static inline void WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WireCapsule, addr 0x55cb05c, size 0x4, virtual false, abstract: false, final false
static inline void WireCapsule(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  direction, float_t  length, float_t  radius) ;

/// [BurstDiscard]
/// @brief Method WireCapsule, addr 0x55cb1b8, size 0x4, virtual false, abstract: false, final false
static inline void WireCapsule(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  direction, float_t  length, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WireCapsule, addr 0x55cb058, size 0x4, virtual false, abstract: false, final false
static inline void WireCapsule(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, float_t  radius) ;

/// [BurstDiscard]
/// @brief Method WireCapsule, addr 0x55cb1b4, size 0x4, virtual false, abstract: false, final false
static inline void WireCapsule(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WireCylinder, addr 0x55cb050, size 0x4, virtual false, abstract: false, final false
static inline void WireCylinder(::Unity::Mathematics::float3  bottom, ::Unity::Mathematics::float3  top, float_t  radius) ;

/// [BurstDiscard]
/// @brief Method WireCylinder, addr 0x55cb1ac, size 0x4, virtual false, abstract: false, final false
static inline void WireCylinder(::Unity::Mathematics::float3  bottom, ::Unity::Mathematics::float3  top, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WireCylinder, addr 0x55cb054, size 0x4, virtual false, abstract: false, final false
static inline void WireCylinder(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  up, float_t  height, float_t  radius) ;

/// [BurstDiscard]
/// @brief Method WireCylinder, addr 0x55cb1b0, size 0x4, virtual false, abstract: false, final false
static inline void WireCylinder(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  up, float_t  height, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WireGrid, addr 0x55cb0cc, size 0x4, virtual false, abstract: false, final false
static inline void WireGrid(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize) ;

/// [BurstDiscard]
/// @brief Method WireGrid, addr 0x55cb240, size 0x4, virtual false, abstract: false, final false
static inline void WireGrid(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WireHexagon, addr 0x55cb0e8, size 0x4, virtual false, abstract: false, final false
static inline void WireHexagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius) ;

/// [BurstDiscard]
/// @brief Method WireHexagon, addr 0x55cb25c, size 0x4, virtual false, abstract: false, final false
static inline void WireHexagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WireMesh, addr 0x55cb088, size 0x4, virtual false, abstract: false, final false
static inline void WireMesh(::UnityEngine::Mesh*  mesh) ;

/// [BurstDiscard]
/// @brief Method WireMesh, addr 0x55cb1f4, size 0x4, virtual false, abstract: false, final false
static inline void WireMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WireMesh, addr 0x55cb08c, size 0x4, virtual false, abstract: false, final false
static inline void WireMesh(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  vertices, ::Unity::Collections::NativeArray_1<int32_t>  triangles) ;

/// [BurstDiscard]
/// @brief Method WireMesh, addr 0x55cb1f8, size 0x4, virtual false, abstract: false, final false
static inline void WireMesh(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  vertices, ::Unity::Collections::NativeArray_1<int32_t>  triangles, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WirePentagon, addr 0x55cb0e4, size 0x4, virtual false, abstract: false, final false
static inline void WirePentagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius) ;

/// [BurstDiscard]
/// @brief Method WirePentagon, addr 0x55cb258, size 0x4, virtual false, abstract: false, final false
static inline void WirePentagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WirePlane, addr 0x55cb0fc, size 0x4, virtual false, abstract: false, final false
static inline void WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size) ;

/// [BurstDiscard]
/// @brief Method WirePlane, addr 0x55cb270, size 0x4, virtual false, abstract: false, final false
static inline void WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WirePlane, addr 0x55cb100, size 0x4, virtual false, abstract: false, final false
static inline void WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size) ;

/// [BurstDiscard]
/// @brief Method WirePlane, addr 0x55cb274, size 0x4, virtual false, abstract: false, final false
static inline void WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WirePolygon, addr 0x55cb0ec, size 0x4, virtual false, abstract: false, final false
static inline void WirePolygon(::Unity::Mathematics::float3  center, int32_t  vertices, ::Unity::Mathematics::quaternion  rotation, float_t  radius) ;

/// [BurstDiscard]
/// @brief Method WirePolygon, addr 0x55cb260, size 0x4, virtual false, abstract: false, final false
static inline void WirePolygon(::Unity::Mathematics::float3  center, int32_t  vertices, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WireRectangle, addr 0x55cb0d8, size 0x4, virtual false, abstract: false, final false
static inline void WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size) ;

/// [BurstDiscard]
/// @brief Method WireRectangle, addr 0x55cb24c, size 0x4, virtual false, abstract: false, final false
static inline void WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xy.WireRectangle instead")]
/// @brief Method WireRectangle, addr 0x55cb0dc, size 0x4, virtual false, abstract: false, final false
static inline void WireRectangle(::UnityEngine::Rect  rect) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xy.WireRectangle instead")]
/// @brief Method WireRectangle, addr 0x55cb250, size 0x4, virtual false, abstract: false, final false
static inline void WireRectangle(::UnityEngine::Rect  rect, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xz.WireRectangle instead")]
/// @brief Method WireRectangleXZ, addr 0x55cb0d4, size 0x4, virtual false, abstract: false, final false
static inline void WireRectangleXZ(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float2  size) ;

/// [BurstDiscard]
/// [Obsolete("Use Draw.xz.WireRectangle instead")]
/// @brief Method WireRectangleXZ, addr 0x55cb248, size 0x4, virtual false, abstract: false, final false
static inline void WireRectangleXZ(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WireSphere, addr 0x55cb060, size 0x4, virtual false, abstract: false, final false
static inline void WireSphere(::Unity::Mathematics::float3  position, float_t  radius) ;

/// [BurstDiscard]
/// @brief Method WireSphere, addr 0x55cb1bc, size 0x4, virtual false, abstract: false, final false
static inline void WireSphere(::Unity::Mathematics::float3  position, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WireTriangle, addr 0x55cb0d0, size 0x4, virtual false, abstract: false, final false
static inline void WireTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c) ;

/// [BurstDiscard]
/// @brief Method WireTriangle, addr 0x55cb244, size 0x4, virtual false, abstract: false, final false
static inline void WireTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WireTriangle, addr 0x55cb0e0, size 0x4, virtual false, abstract: false, final false
static inline void WireTriangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius) ;

/// [BurstDiscard]
/// @brief Method WireTriangle, addr 0x55cb254, size 0x4, virtual false, abstract: false, final false
static inline void WireTriangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WithColor, addr 0x55cafbc, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CommandBuilder_ScopeEmpty WithColor(::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WithDuration, addr 0x55cafc4, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CommandBuilder_ScopeEmpty WithDuration(float_t  duration) ;

/// [BurstDiscard]
/// @brief Method WithLineWidth, addr 0x55cafcc, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CommandBuilder_ScopeEmpty WithLineWidth(float_t  pixels, bool  automaticJoins) ;

/// [BurstDiscard]
/// @brief Method WithMatrix, addr 0x55cafb4, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CommandBuilder_ScopeEmpty WithMatrix(::Unity::Mathematics::float3x3  matrix) ;

/// [BurstDiscard]
/// @brief Method WithMatrix, addr 0x55cafac, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CommandBuilder_ScopeEmpty WithMatrix(::UnityEngine::Matrix4x4  matrix) ;

static inline ::Drawing::CommandBuilder getStaticF_builder() ;

static inline ::Drawing::CommandBuilder getStaticF_ingame_builder() ;

/// @brief Method get_editor, addr 0x55cade8, size 0x6c, virtual false, abstract: false, final false
static inline ::by_ref<::Drawing::CommandBuilder> get_editor() ;

/// @brief Method get_ingame, addr 0x55cabe0, size 0x70, virtual false, abstract: false, final false
static inline ::by_ref<::Drawing::CommandBuilder> get_ingame() ;

/// @brief Method get_xy, addr 0x55cae54, size 0xac, virtual false, abstract: false, final false
static inline ::Drawing::CommandBuilder2D get_xy() ;

/// @brief Method get_xz, addr 0x55caf00, size 0xac, virtual false, abstract: false, final false
static inline ::Drawing::CommandBuilder2D get_xz() ;

static inline void setStaticF_builder(::Drawing::CommandBuilder  value) ;

static inline void setStaticF_ingame_builder(::Drawing::CommandBuilder  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Draw() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Draw", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Draw(Draw && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Draw", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Draw(Draw const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27723};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::Draw) == 0x10, "Size mismatch!");

} // namespace end def Drawing

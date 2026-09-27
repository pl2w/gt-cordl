#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__DrawingData_BuilderData_BitPackedMeta_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBuilder)
namespace Drawing {
struct AllowedDelay;
}
namespace Drawing {
struct CommandBuilder2D;
}
namespace Drawing {
class CommandBuilder_JobWireMesh;
}
namespace Drawing {
class DrawingData;
}
namespace Drawing {
class JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall;
}
namespace Drawing {
class JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate;
}
namespace Drawing {
class JobWireMesh_CommandBuilder_JobWireMeshDelegate;
}
namespace Drawing {
class JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall;
}
namespace Drawing {
class JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate;
}
namespace Drawing {
struct LabelAlignment;
}
namespace Drawing {
struct RedrawScope;
}
namespace GlobalNamespace {
struct BuilderData_DrawingData_BitPackedMeta;
}
namespace GlobalNamespace {
struct CommandBuilder_BoxData;
}
namespace GlobalNamespace {
struct CommandBuilder_CircleData;
}
namespace GlobalNamespace {
struct CommandBuilder_CircleXZData;
}
namespace GlobalNamespace {
struct CommandBuilder_Command;
}
namespace GlobalNamespace {
struct CommandBuilder_LineDataV3;
}
namespace GlobalNamespace {
struct CommandBuilder_LineData;
}
namespace GlobalNamespace {
struct CommandBuilder_LineWidthData;
}
namespace GlobalNamespace {
struct CommandBuilder_PersistData;
}
namespace GlobalNamespace {
struct CommandBuilder_PlaneData;
}
namespace GlobalNamespace {
struct CommandBuilder_PolylineWithSymbol;
}
namespace GlobalNamespace {
struct CommandBuilder_ScopeColor;
}
namespace GlobalNamespace {
struct CommandBuilder_ScopeEmpty;
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
namespace GlobalNamespace {
struct CommandBuilder_SphereData;
}
namespace GlobalNamespace {
struct CommandBuilder_SymbolDecoration;
}
namespace GlobalNamespace {
struct CommandBuilder_TextData3D;
}
namespace GlobalNamespace {
struct CommandBuilder_TextData;
}
namespace GlobalNamespace {
struct CommandBuilder_TriangleData;
}
namespace GlobalNamespace {
struct DrawingData_Hasher;
}
namespace GlobalNamespace {
struct Mesh_MeshData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer;
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
namespace Unity::Jobs {
struct JobHandle;
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
class CommandBuilder_JobWireMesh;
}
namespace Drawing {
class JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall;
}
namespace Drawing {
class JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate;
}
namespace Drawing {
class JobWireMesh_CommandBuilder_JobWireMeshDelegate;
}
namespace Drawing {
class JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall;
}
namespace Drawing {
class JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate;
}
namespace Drawing {
struct CommandBuilder;
}
// Write type traits
MARK_REF_T(::Drawing::CommandBuilder_JobWireMesh*);
MARK_REF_T(::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall*);
MARK_REF_T(::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate*);
MARK_REF_T(::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*);
MARK_REF_T(::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall*);
MARK_REF_T(::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate*);
MARK_VAL_T(::Drawing::CommandBuilder);
DEFINE_IL2CPP_CLASS(::Drawing::CommandBuilder_JobWireMesh*, "Drawing", "CommandBuilder/JobWireMesh");
DEFINE_IL2CPP_CLASS(::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall*, "Drawing", "CommandBuilder/JobWireMesh/Execute_0000010A$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate*, "Drawing", "CommandBuilder/JobWireMesh/Execute_0000010A$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*, "Drawing", "CommandBuilder/JobWireMesh/JobWireMeshDelegate");
DEFINE_IL2CPP_CLASS(::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall*, "Drawing", "CommandBuilder/JobWireMesh/WireMesh_00000109$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate*, "Drawing", "CommandBuilder/JobWireMesh/WireMesh_00000109$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::Drawing::CommandBuilder, "Drawing", "CommandBuilder");
// [BurstCompile]
// Dependencies Drawing.DrawingData::BuilderData::BitPackedMeta, System.Collections.Generic.IReadOnlyList`1<T>, System.Runtime.InteropServices.GCHandle, Unity.Mathematics.float3, Unity.Mathematics.float4x4
namespace Drawing {
// Is value type: true
// CS Name: Drawing.CommandBuilder
struct CORDL_TYPE CommandBuilder {
public:
// Declarations
using JobWireMesh = ::Drawing::CommandBuilder_JobWireMesh;

using BoxData = ::GlobalNamespace::CommandBuilder_BoxData;

using CircleData = ::GlobalNamespace::CommandBuilder_CircleData;

using CircleXZData = ::GlobalNamespace::CommandBuilder_CircleXZData;

using Command = ::GlobalNamespace::CommandBuilder_Command;

using LineData = ::GlobalNamespace::CommandBuilder_LineData;

using LineDataV3 = ::GlobalNamespace::CommandBuilder_LineDataV3;

using LineWidthData = ::GlobalNamespace::CommandBuilder_LineWidthData;

using PersistData = ::GlobalNamespace::CommandBuilder_PersistData;

using PlaneData = ::GlobalNamespace::CommandBuilder_PlaneData;

using PolylineWithSymbol = ::GlobalNamespace::CommandBuilder_PolylineWithSymbol;

using ScopeColor = ::GlobalNamespace::CommandBuilder_ScopeColor;

using ScopeEmpty = ::GlobalNamespace::CommandBuilder_ScopeEmpty;

using ScopeLineWidth = ::GlobalNamespace::CommandBuilder_ScopeLineWidth;

using ScopeMatrix = ::GlobalNamespace::CommandBuilder_ScopeMatrix;

using ScopePersist = ::GlobalNamespace::CommandBuilder_ScopePersist;

using SphereData = ::GlobalNamespace::CommandBuilder_SphereData;

using SymbolDecoration = ::GlobalNamespace::CommandBuilder_SymbolDecoration;

using TextData = ::GlobalNamespace::CommandBuilder_TextData;

using TextData3D = ::GlobalNamespace::CommandBuilder_TextData3D;

using TriangleData = ::GlobalNamespace::CommandBuilder_TriangleData;

 __declspec(property(get=get_BufferSize, put=set_BufferSize)) int32_t  BufferSize;

/// @brief Field DEFAULT_UP, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_DEFAULT_UP, put=setStaticF_DEFAULT_UP)) ::Unity::Mathematics::float3  DEFAULT_UP;

/// @brief Field XZtoXYPlaneMatrix, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_XZtoXYPlaneMatrix, put=setStaticF_XZtoXYPlaneMatrix)) ::Unity::Mathematics::float4x4  XZtoXYPlaneMatrix;

/// @brief Field XZtoYZPlaneMatrix, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_XZtoYZPlaneMatrix, put=setStaticF_XZtoYZPlaneMatrix)) ::Unity::Mathematics::float4x4  XZtoYZPlaneMatrix;

 __declspec(property(get=get_cameraTargets, put=set_cameraTargets)) ::ArrayW<::UnityW<::UnityEngine::Camera>>  cameraTargets;

 __declspec(property(get=get_xy)) ::Drawing::CommandBuilder2D  xy;

 __declspec(property(get=get_xz)) ::Drawing::CommandBuilder2D  xz;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Add(T  value) ;

/// @brief Method Arc, addr 0x55aada4, size 0x3b4, virtual false, abstract: false, final false
inline void Arc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end) ;

/// @brief Method Arc, addr 0x55b3820, size 0x41c, virtual false, abstract: false, final false
inline void Arc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::UnityEngine::Color  color) ;

/// @brief Method Arrow, addr 0x55af184, size 0xcc, virtual false, abstract: false, final false
inline void Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to) ;

/// @brief Method Arrow, addr 0x55b7790, size 0x10c, virtual false, abstract: false, final false
inline void Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::UnityEngine::Color  color) ;

/// @brief Method Arrow, addr 0x55af54c, size 0x16c, virtual false, abstract: false, final false
inline void Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headSize) ;

/// @brief Method Arrow, addr 0x55b7c10, size 0x198, virtual false, abstract: false, final false
inline void Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headSize, ::UnityEngine::Color  color) ;

/// @brief Method ArrowRelativeSizeHead, addr 0x55af250, size 0x2fc, virtual false, abstract: false, final false
inline void ArrowRelativeSizeHead(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headFraction) ;

/// @brief Method ArrowRelativeSizeHead, addr 0x55b789c, size 0x374, virtual false, abstract: false, final false
inline void ArrowRelativeSizeHead(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headFraction, ::UnityEngine::Color  color) ;

/// @brief Method Arrowhead, addr 0x55af6b8, size 0xd0, virtual false, abstract: false, final false
inline void Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, float_t  radius) ;

/// @brief Method Arrowhead, addr 0x55b7da8, size 0x110, virtual false, abstract: false, final false
inline void Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method Arrowhead, addr 0x55af788, size 0x298, virtual false, abstract: false, final false
inline void Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, ::Unity::Mathematics::float3  up, float_t  radius) ;

/// @brief Method Arrowhead, addr 0x55b7eb8, size 0x2cc, virtual false, abstract: false, final false
inline void Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, ::Unity::Mathematics::float3  up, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method ArrowheadArc, addr 0x55b859c, size 0x124, virtual false, abstract: false, final false
inline void ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, ::UnityEngine::Color  color) ;

/// @brief Method ArrowheadArc, addr 0x55afa20, size 0x3e4, virtual false, abstract: false, final false
inline void ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, float_t  width) ;

/// @brief Method ArrowheadArc, addr 0x55b8184, size 0x418, virtual false, abstract: false, final false
inline void ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, float_t  width, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method AssertBufferExists, addr 0x55a9490, size 0x158, virtual false, abstract: false, final false
inline void AssertBufferExists() ;

/// [BurstDiscard]
/// @brief Method AssertNotRendering, addr 0x55a95e8, size 0x118, virtual false, abstract: false, final false
static inline void AssertNotRendering() ;

/// @brief Method Bezier, addr 0x55aeb4c, size 0x12c, virtual false, abstract: false, final false
inline void Bezier(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3) ;

/// @brief Method Bezier, addr 0x55b706c, size 0x170, virtual false, abstract: false, final false
inline void Bezier(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3, ::UnityEngine::Color  color) ;

/// @brief Method CatmullRom, addr 0x55af040, size 0x144, virtual false, abstract: false, final false
inline void CatmullRom(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3) ;

/// @brief Method CatmullRom, addr 0x55b75ec, size 0x1a4, virtual false, abstract: false, final false
inline void CatmullRom(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3, ::UnityEngine::Color  color) ;

/// @brief Method CatmullRom, addr 0x55aec78, size 0x3c8, virtual false, abstract: false, final false
inline void CatmullRom(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points) ;

/// @brief Method CatmullRom, addr 0x55b71dc, size 0x410, virtual false, abstract: false, final false
inline void CatmullRom(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::UnityEngine::Color  color) ;

/// @brief Method Circle, addr 0x55ab520, size 0x114, virtual false, abstract: false, final false
inline void Circle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius) ;

/// @brief Method Circle, addr 0x55b3fc0, size 0x15c, virtual false, abstract: false, final false
inline void Circle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xy.Circle instead")]
/// @brief Method CircleXY, addr 0x55b3efc, size 0xc4, virtual false, abstract: false, final false
inline void CircleXY(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xy.Circle instead")]
/// @brief Method CircleXY, addr 0x55ab448, size 0xd8, virtual false, abstract: false, final false
inline void CircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// [Obsolete("Use Draw.xy.Circle instead")]
/// @brief Method CircleXY, addr 0x55b3dfc, size 0x100, virtual false, abstract: false, final false
inline void CircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xz.Circle instead")]
/// @brief Method CircleXZ, addr 0x55b3d38, size 0xc4, virtual false, abstract: false, final false
inline void CircleXZ(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xz.Circle instead")]
/// @brief Method CircleXZ, addr 0x55ab25c, size 0x9c, virtual false, abstract: false, final false
inline void CircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// [Obsolete("Use Draw.xz.Circle instead")]
/// @brief Method CircleXZ, addr 0x55b3c3c, size 0xfc, virtual false, abstract: false, final false
inline void CircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// @brief Method CircleXZInternal, addr 0x55ab158, size 0x104, virtual false, abstract: false, final false
inline void CircleXZInternal(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// @brief Method CircleXZInternal, addr 0x55ab2f8, size 0x150, virtual false, abstract: false, final false
inline void CircleXZInternal(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// @brief Method ConvertColor, addr 0x55a9700, size 0x1a4, virtual false, abstract: false, final false
static inline uint32_t ConvertColor(::UnityEngine::Color  color) ;

/// @brief Method Cross, addr 0x55b6c64, size 0xb0, virtual false, abstract: false, final false
inline void Cross(::Unity::Mathematics::float3  position, ::UnityEngine::Color  color) ;

/// @brief Method Cross, addr 0x55ae804, size 0xf4, virtual false, abstract: false, final false
inline void Cross(::Unity::Mathematics::float3  position, float_t  size) ;

/// @brief Method Cross, addr 0x55b6b40, size 0x124, virtual false, abstract: false, final false
inline void Cross(::Unity::Mathematics::float3  position, float_t  size, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xy.Cross instead")]
/// @brief Method CrossXY, addr 0x55b6fbc, size 0xb0, virtual false, abstract: false, final false
inline void CrossXY(::Unity::Mathematics::float3  position, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xy.Cross instead")]
/// @brief Method CrossXY, addr 0x55ae9bc, size 0xc4, virtual false, abstract: false, final false
inline void CrossXY(::Unity::Mathematics::float3  position, float_t  size) ;

/// [Obsolete("Use Draw.xy.Cross instead")]
/// @brief Method CrossXY, addr 0x55b6ec0, size 0xfc, virtual false, abstract: false, final false
inline void CrossXY(::Unity::Mathematics::float3  position, float_t  size, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xz.Cross instead")]
/// @brief Method CrossXZ, addr 0x55b6e10, size 0xb0, virtual false, abstract: false, final false
inline void CrossXZ(::Unity::Mathematics::float3  position, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xz.Cross instead")]
/// @brief Method CrossXZ, addr 0x55ae8f8, size 0xc4, virtual false, abstract: false, final false
inline void CrossXZ(::Unity::Mathematics::float3  position, float_t  size) ;

/// [Obsolete("Use Draw.xz.Cross instead")]
/// @brief Method CrossXZ, addr 0x55b6d14, size 0xfc, virtual false, abstract: false, final false
inline void CrossXZ(::Unity::Mathematics::float3  position, float_t  size, ::UnityEngine::Color  color) ;

/// @brief Method DashedLine, addr 0x55ad2f0, size 0xa0, virtual false, abstract: false, final false
inline void DashedLine(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  dash, float_t  gap) ;

/// @brief Method DashedLine, addr 0x55b6150, size 0x108, virtual false, abstract: false, final false
inline void DashedLine(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  dash, float_t  gap, ::UnityEngine::Color  color) ;

/// @brief Method DashedPolyline, addr 0x55ada3c, size 0xe4, virtual false, abstract: false, final false
inline void DashedPolyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, float_t  dash, float_t  gap) ;

/// @brief Method DashedPolyline, addr 0x55b6258, size 0x154, virtual false, abstract: false, final false
inline void DashedPolyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, float_t  dash, float_t  gap, ::UnityEngine::Color  color) ;

/// @brief Method DiscardAndDispose, addr 0x55a9078, size 0xac, virtual false, abstract: false, final false
inline void DiscardAndDispose() ;

/// @brief Method DiscardAndDisposeInternal, addr 0x55a9124, size 0x218, virtual false, abstract: false, final false
inline void DiscardAndDisposeInternal() ;

/// @brief Method Dispose, addr 0x55a89ec, size 0xac, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DisposeAfter, addr 0x55a8de4, size 0x294, virtual false, abstract: false, final false
inline void DisposeAfter(::Unity::Jobs::JobHandle  dependency, ::Drawing::AllowedDelay  allowedDelay) ;

/// @brief Method DisposeInternal, addr 0x55a8a98, size 0x34c, virtual false, abstract: false, final false
inline void DisposeInternal() ;

/// @brief Method EvaluateCubicBezier, addr 0x55aea80, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EvaluateCubicBezier(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3, float_t  t) ;

/// [BurstDiscard]
/// @brief Method InLocalSpace, addr 0x55aa0e0, size 0xb0, virtual false, abstract: false, final false
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix InLocalSpace(::UnityEngine::Transform*  transform) ;

/// [BurstDiscard]
/// @brief Method InScreenSpace, addr 0x55aa190, size 0x208, virtual false, abstract: false, final false
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix InScreenSpace(::UnityEngine::Camera*  camera) ;

/// @brief Method Label2D, addr 0x55bafbc, size 0xc0, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::StringW  text, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55b1dec, size 0xe8, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels) ;

/// @brief Method Label2D, addr 0x55b1ed4, size 0x2e8, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label2D, addr 0x55bac74, size 0x348, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55bab6c, size 0x108, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55bb7cc, size 0xc0, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55b2524, size 0xe8, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels) ;

/// @brief Method Label2D, addr 0x55b260c, size 0xcc, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label2D, addr 0x55bb6e4, size 0xe8, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55bb5dc, size 0x108, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55bb26c, size 0xc0, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55b21bc, size 0xe8, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels) ;

/// @brief Method Label2D, addr 0x55b22a4, size 0xcc, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label2D, addr 0x55bb184, size 0xe8, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55bb07c, size 0x108, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55bba7c, size 0xc0, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55b26d8, size 0xe8, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels) ;

/// @brief Method Label2D, addr 0x55b27c0, size 0xcc, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label2D, addr 0x55bb994, size 0xe8, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55bb88c, size 0x108, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55bb51c, size 0xc0, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55b2370, size 0xe8, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels) ;

/// @brief Method Label2D, addr 0x55b2458, size 0xcc, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label2D, addr 0x55bb434, size 0xe8, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55bb32c, size 0x108, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color) ;

/// @brief Method Label2D, addr 0x55b288c, size 0x218, virtual false, abstract: false, final false
inline void Label2D(::Unity::Mathematics::float3  position, uint8_t*  text, int32_t  byteCount, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label3D, addr 0x55b19f8, size 0xfc, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size) ;

/// @brief Method Label3D, addr 0x55b1af4, size 0x2f8, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label3D, addr 0x55ba810, size 0x35c, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label3D, addr 0x55ba714, size 0xfc, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size, ::UnityEngine::Color  color) ;

/// @brief Method Label3D, addr 0x55b2ec4, size 0xfc, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size) ;

/// @brief Method Label3D, addr 0x55b2fc0, size 0x114, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label3D, addr 0x55bc000, size 0xe8, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label3D, addr 0x55bbf04, size 0xfc, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size, ::UnityEngine::Color  color) ;

/// @brief Method Label3D, addr 0x55b2aa4, size 0xfc, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size) ;

/// @brief Method Label3D, addr 0x55b2ba0, size 0x114, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label3D, addr 0x55bbc38, size 0xe8, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label3D, addr 0x55bbb3c, size 0xfc, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size, ::UnityEngine::Color  color) ;

/// @brief Method Label3D, addr 0x55b30d4, size 0xfc, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size) ;

/// @brief Method Label3D, addr 0x55b31d0, size 0x114, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label3D, addr 0x55bc1e4, size 0xe8, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label3D, addr 0x55bc0e8, size 0xfc, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size, ::UnityEngine::Color  color) ;

/// @brief Method Label3D, addr 0x55b2cb4, size 0xfc, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size) ;

/// @brief Method Label3D, addr 0x55b2db0, size 0x114, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Label3D, addr 0x55bbe1c, size 0xe8, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color) ;

/// @brief Method Label3D, addr 0x55bbd20, size 0xfc, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size, ::UnityEngine::Color  color) ;

/// @brief Method Label3D, addr 0x55b32e4, size 0x220, virtual false, abstract: false, final false
inline void Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, uint8_t*  text, int32_t  byteCount, float_t  size, ::Drawing::LabelAlignment  alignment) ;

/// @brief Method Line, addr 0x55aa978, size 0x104, virtual false, abstract: false, final false
inline void Line(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method Line, addr 0x55b3504, size 0x150, virtual false, abstract: false, final false
inline void Line(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::UnityEngine::Color  color) ;

/// @brief Method Line, addr 0x55aaa7c, size 0xe0, virtual false, abstract: false, final false
inline void Line(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method Line, addr 0x55aab5c, size 0xf8, virtual false, abstract: false, final false
inline void Line(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Color  color) ;

/// @brief Method OrthonormalBasis, addr 0x55ac3d8, size 0x14c, virtual false, abstract: false, final false
static inline void OrthonormalBasis(::Unity::Mathematics::float3  normal, ::by_ref<::Unity::Mathematics::float3>  basis1, ::by_ref<::Unity::Mathematics::float3>  basis2) ;

/// @brief Method PlaneWithNormal, addr 0x55b11c4, size 0x158, virtual false, abstract: false, final false
inline void PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size) ;

/// @brief Method PlaneWithNormal, addr 0x55b9d8c, size 0x18c, virtual false, abstract: false, final false
inline void PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// @brief Method PlaneWithNormal, addr 0x55b131c, size 0x1fc, virtual false, abstract: false, final false
inline void PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size) ;

/// @brief Method PlaneWithNormal, addr 0x55b9f18, size 0x230, virtual false, abstract: false, final false
inline void PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55b5e94, size 0x98, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::Unity::Mathematics::float3>  points, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55ad01c, size 0x17c, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::Unity::Mathematics::float3>  points, bool  cycle) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55b5ce8, size 0x1ac, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::Unity::Mathematics::float3>  points, bool  cycle, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55b5c50, size 0x98, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::UnityEngine::Vector3>  points, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55acea0, size 0x17c, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::UnityEngine::Vector3>  points, bool  cycle) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55b5aa4, size 0x1ac, virtual false, abstract: false, final false
inline void Polyline(::ArrayW<::UnityEngine::Vector3>  points, bool  cycle, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55b5a0c, size 0x98, virtual false, abstract: false, final false
inline void Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55accec, size 0x1b4, virtual false, abstract: false, final false
inline void Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, bool  cycle) ;

/// [BurstDiscard]
/// @brief Method Polyline, addr 0x55b5828, size 0x1e4, virtual false, abstract: false, final false
inline void Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, bool  cycle, ::UnityEngine::Color  color) ;

/// @brief Method Polyline, addr 0x55b60b0, size 0xa0, virtual false, abstract: false, final false
inline void Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, ::UnityEngine::Color  color) ;

/// @brief Method Polyline, addr 0x55ad198, size 0x158, virtual false, abstract: false, final false
inline void Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, bool  cycle) ;

/// @brief Method Polyline, addr 0x55b5f2c, size 0x184, virtual false, abstract: false, final false
inline void Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, bool  cycle, ::UnityEngine::Color  color) ;

/// @brief Method Polyline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*>)
inline void Polyline(T  points, bool  cycle) ;

/// @brief Method PopColor, addr 0x55aa644, size 0xd4, virtual false, abstract: false, final false
inline void PopColor() ;

/// @brief Method PopDuration, addr 0x55aa718, size 0xd4, virtual false, abstract: false, final false
inline void PopDuration() ;

/// @brief Method PopLineWidth, addr 0x55aa8a4, size 0xd4, virtual false, abstract: false, final false
inline void PopLineWidth() ;

/// @brief Method PopMatrix, addr 0x55aa570, size 0xd4, virtual false, abstract: false, final false
inline void PopMatrix() ;

/// [Obsolete("Renamed to PopDuration for consistency")]
/// @brief Method PopPersist, addr 0x55aa850, size 0x54, virtual false, abstract: false, final false
inline void PopPersist() ;

/// @brief Method Preallocate, addr 0x55a933c, size 0xcc, virtual false, abstract: false, final false
inline void Preallocate(int32_t  size) ;

/// @brief Method PushColor, addr 0x55a9c80, size 0xf4, virtual false, abstract: false, final false
inline void PushColor(::UnityEngine::Color  color) ;

/// @brief Method PushDuration, addr 0x55a9df8, size 0x11c, virtual false, abstract: false, final false
inline void PushDuration(float_t  duration) ;

/// @brief Method PushLineWidth, addr 0x55a9fa0, size 0x140, virtual false, abstract: false, final false
inline void PushLineWidth(float_t  pixels, bool  automaticJoins) ;

/// @brief Method PushMatrix, addr 0x55a9b00, size 0xdc, virtual false, abstract: false, final false
inline void PushMatrix(::Unity::Mathematics::float4x4  matrix) ;

/// @brief Method PushMatrix, addr 0x55a9938, size 0xdc, virtual false, abstract: false, final false
inline void PushMatrix(::UnityEngine::Matrix4x4  matrix) ;

/// [Obsolete("Renamed to PushDuration for consistency")]
/// @brief Method PushPersist, addr 0x55aa7ec, size 0x64, virtual false, abstract: false, final false
inline void PushPersist(float_t  duration) ;

/// @brief Method PushSetMatrix, addr 0x55aa494, size 0xdc, virtual false, abstract: false, final false
inline void PushSetMatrix(::Unity::Mathematics::float4x4  matrix) ;

/// @brief Method PushSetMatrix, addr 0x55aa398, size 0xfc, virtual false, abstract: false, final false
inline void PushSetMatrix(::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method Ray, addr 0x55aac54, size 0x9c, virtual false, abstract: false, final false
inline void Ray(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction) ;

/// @brief Method Ray, addr 0x55b3654, size 0xcc, virtual false, abstract: false, final false
inline void Ray(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, ::UnityEngine::Color  color) ;

/// @brief Method Ray, addr 0x55aacf0, size 0xb4, virtual false, abstract: false, final false
inline void Ray(::UnityEngine::Ray  ray, float_t  length) ;

/// @brief Method Ray, addr 0x55b3720, size 0x100, virtual false, abstract: false, final false
inline void Ray(::UnityEngine::Ray  ray, float_t  length, ::UnityEngine::Color  color) ;

/// @brief Method Reserve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename A>
requires(::cordl_internals::value_type_constraint<A> && ::cordl_internals::default_constructor_constraint<A>)
inline void Reserve() ;

/// @brief Method Reserve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename A,typename B>
requires(::cordl_internals::value_type_constraint<A> && ::cordl_internals::default_constructor_constraint<A> && ::cordl_internals::value_type_constraint<B> && ::cordl_internals::default_constructor_constraint<B>)
inline void Reserve() ;

/// @brief Method Reserve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename A,typename B,typename C>
requires(::cordl_internals::value_type_constraint<A> && ::cordl_internals::default_constructor_constraint<A> && ::cordl_internals::value_type_constraint<B> && ::cordl_internals::default_constructor_constraint<B> && ::cordl_internals::value_type_constraint<C> && ::cordl_internals::default_constructor_constraint<C>)
inline void Reserve() ;

/// @brief Method Reserve, addr 0x55a9408, size 0x88, virtual false, abstract: false, final false
inline void Reserve(int32_t  additionalSpace) ;

/// @brief Method SolidArc, addr 0x55ab634, size 0x370, virtual false, abstract: false, final false
inline void SolidArc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end) ;

/// @brief Method SolidArc, addr 0x55b411c, size 0x3b0, virtual false, abstract: false, final false
inline void SolidArc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::UnityEngine::Color  color) ;

/// @brief Method SolidBox, addr 0x55b173c, size 0xd8, virtual false, abstract: false, final false
inline void SolidBox(::UnityEngine::Bounds  bounds) ;

/// @brief Method SolidBox, addr 0x55ba3fc, size 0x104, virtual false, abstract: false, final false
inline void SolidBox(::UnityEngine::Bounds  bounds, ::UnityEngine::Color  color) ;

/// @brief Method SolidBox, addr 0x55b1814, size 0x1e4, virtual false, abstract: false, final false
inline void SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size) ;

/// @brief Method SolidBox, addr 0x55ba500, size 0x214, virtual false, abstract: false, final false
inline void SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color) ;

/// @brief Method SolidBox, addr 0x55b1638, size 0x104, virtual false, abstract: false, final false
inline void SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size) ;

/// @brief Method SolidBox, addr 0x55ba2ac, size 0x150, virtual false, abstract: false, final false
inline void SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color) ;

/// @brief Method SolidCircle, addr 0x55abd6c, size 0x114, virtual false, abstract: false, final false
inline void SolidCircle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius) ;

/// @brief Method SolidCircle, addr 0x55b4850, size 0x15c, virtual false, abstract: false, final false
inline void SolidCircle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xy.SolidCircle instead")]
/// @brief Method SolidCircleXY, addr 0x55b478c, size 0xc4, virtual false, abstract: false, final false
inline void SolidCircleXY(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xy.SolidCircle instead")]
/// @brief Method SolidCircleXY, addr 0x55abc94, size 0xd8, virtual false, abstract: false, final false
inline void SolidCircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// [Obsolete("Use Draw.xy.SolidCircle instead")]
/// @brief Method SolidCircleXY, addr 0x55b468c, size 0x100, virtual false, abstract: false, final false
inline void SolidCircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xz.SolidCircle instead")]
/// @brief Method SolidCircleXZ, addr 0x55b45c8, size 0xc4, virtual false, abstract: false, final false
inline void SolidCircleXZ(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xz.SolidCircle instead")]
/// @brief Method SolidCircleXZ, addr 0x55abaa8, size 0x9c, virtual false, abstract: false, final false
inline void SolidCircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// [Obsolete("Use Draw.xz.SolidCircle instead")]
/// @brief Method SolidCircleXZ, addr 0x55b44cc, size 0xfc, virtual false, abstract: false, final false
inline void SolidCircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// @brief Method SolidCircleXZInternal, addr 0x55ab9a4, size 0x104, virtual false, abstract: false, final false
inline void SolidCircleXZInternal(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle) ;

/// @brief Method SolidCircleXZInternal, addr 0x55abb44, size 0x150, virtual false, abstract: false, final false
inline void SolidCircleXZInternal(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color) ;

/// @brief Method SolidMesh, addr 0x55ae0b0, size 0x68, virtual false, abstract: false, final false
inline void SolidMesh(::UnityEngine::Mesh*  mesh) ;

/// @brief Method SolidMesh, addr 0x55b6aa8, size 0x98, virtual false, abstract: false, final false
inline void SolidMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method SolidMesh, addr 0x55ae5f8, size 0x20c, virtual false, abstract: false, final false
inline void SolidMesh(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<int32_t>  triangles, ::ArrayW<::UnityEngine::Color>  colors, int32_t  vertexCount, int32_t  indexCount) ;

/// [BurstDiscard]
/// @brief Method SolidMesh, addr 0x55ae404, size 0x1f4, virtual false, abstract: false, final false
inline void SolidMesh(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::System::Collections::Generic::List_1<::UnityEngine::Color>*  colors) ;

/// @brief Method SolidMeshInternal, addr 0x55ae118, size 0x240, virtual false, abstract: false, final false
inline void SolidMeshInternal(::UnityEngine::Mesh*  mesh, bool  temporary) ;

/// @brief Method SolidMeshInternal, addr 0x55ae358, size 0xac, virtual false, abstract: false, final false
inline void SolidMeshInternal(::UnityEngine::Mesh*  mesh, bool  temporary, ::UnityEngine::Color  color) ;

/// @brief Method SolidPlane, addr 0x55b0cd0, size 0x158, virtual false, abstract: false, final false
inline void SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size) ;

/// @brief Method SolidPlane, addr 0x55b9848, size 0x18c, virtual false, abstract: false, final false
inline void SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// @brief Method SolidPlane, addr 0x55b0e8c, size 0x1e0, virtual false, abstract: false, final false
inline void SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size) ;

/// @brief Method SolidPlane, addr 0x55b99d4, size 0x22c, virtual false, abstract: false, final false
inline void SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xy.SolidRectangle instead")]
/// @brief Method SolidRectangle, addr 0x55b0acc, size 0xd0, virtual false, abstract: false, final false
inline void SolidRectangle(::UnityEngine::Rect  rect) ;

/// [Obsolete("Use Draw.xy.SolidRectangle instead")]
/// @brief Method SolidRectangle, addr 0x55b95fc, size 0x100, virtual false, abstract: false, final false
inline void SolidRectangle(::UnityEngine::Rect  rect, ::UnityEngine::Color  color) ;

/// @brief Method SolidTriangle, addr 0x55b1518, size 0x120, virtual false, abstract: false, final false
inline void SolidTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c) ;

/// @brief Method SolidTriangle, addr 0x55ba148, size 0x164, virtual false, abstract: false, final false
inline void SolidTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c, ::UnityEngine::Color  color) ;

/// @brief Method SphereOutline, addr 0x55abe80, size 0xe8, virtual false, abstract: false, final false
inline void SphereOutline(::Unity::Mathematics::float3  center, float_t  radius) ;

/// @brief Method SphereOutline, addr 0x55b49ac, size 0x144, virtual false, abstract: false, final false
inline void SphereOutline(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method WireBox, addr 0x55addbc, size 0xd8, virtual false, abstract: false, final false
inline void WireBox(::UnityEngine::Bounds  bounds) ;

/// @brief Method WireBox, addr 0x55b66c4, size 0x104, virtual false, abstract: false, final false
inline void WireBox(::UnityEngine::Bounds  bounds, ::UnityEngine::Color  color) ;

/// @brief Method WireBox, addr 0x55adc24, size 0x198, virtual false, abstract: false, final false
inline void WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size) ;

/// @brief Method WireBox, addr 0x55b64fc, size 0x1c8, virtual false, abstract: false, final false
inline void WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color) ;

/// @brief Method WireBox, addr 0x55adb20, size 0x104, virtual false, abstract: false, final false
inline void WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size) ;

/// @brief Method WireBox, addr 0x55b63ac, size 0x150, virtual false, abstract: false, final false
inline void WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color) ;

/// @brief Method WireCapsule, addr 0x55ac7a4, size 0x548, virtual false, abstract: false, final false
inline void WireCapsule(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  direction, float_t  length, float_t  radius) ;

/// @brief Method WireCapsule, addr 0x55b5178, size 0x580, virtual false, abstract: false, final false
inline void WireCapsule(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  direction, float_t  length, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method WireCapsule, addr 0x55ac524, size 0x190, virtual false, abstract: false, final false
inline void WireCapsule(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, float_t  radius) ;

/// @brief Method WireCapsule, addr 0x55b4fa8, size 0x1d0, virtual false, abstract: false, final false
inline void WireCapsule(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method WireCylinder, addr 0x55abf68, size 0xfc, virtual false, abstract: false, final false
inline void WireCylinder(::Unity::Mathematics::float3  bottom, ::Unity::Mathematics::float3  top, float_t  radius) ;

/// @brief Method WireCylinder, addr 0x55b4af0, size 0x118, virtual false, abstract: false, final false
inline void WireCylinder(::Unity::Mathematics::float3  bottom, ::Unity::Mathematics::float3  top, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method WireCylinder, addr 0x55ac064, size 0x374, virtual false, abstract: false, final false
inline void WireCylinder(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  up, float_t  height, float_t  radius) ;

/// @brief Method WireCylinder, addr 0x55b4c08, size 0x3a0, virtual false, abstract: false, final false
inline void WireCylinder(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  up, float_t  height, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method WireGrid, addr 0x55afe04, size 0x23c, virtual false, abstract: false, final false
inline void WireGrid(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize) ;

/// @brief Method WireGrid, addr 0x55b86c0, size 0x264, virtual false, abstract: false, final false
inline void WireGrid(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize, ::UnityEngine::Color  color) ;

/// @brief Method WireHexagon, addr 0x55b0a14, size 0xb8, virtual false, abstract: false, final false
inline void WireHexagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius) ;

/// @brief Method WireHexagon, addr 0x55b94fc, size 0x100, virtual false, abstract: false, final false
inline void WireHexagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method WireMesh, addr 0x55ade94, size 0x138, virtual false, abstract: false, final false
inline void WireMesh(::UnityEngine::Mesh*  mesh) ;

/// @brief Method WireMesh, addr 0x55b67c8, size 0x19c, virtual false, abstract: false, final false
inline void WireMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Color  color) ;

/// @brief Method WireMesh, addr 0x55adfcc, size 0xe0, virtual false, abstract: false, final false
inline void WireMesh(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  vertices, ::Unity::Collections::NativeArray_1<int32_t>  triangles) ;

/// @brief Method WireMesh, addr 0x55b6964, size 0x144, virtual false, abstract: false, final false
inline void WireMesh(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  vertices, ::Unity::Collections::NativeArray_1<int32_t>  triangles, ::UnityEngine::Color  color) ;

/// @brief Method WirePentagon, addr 0x55b095c, size 0xb8, virtual false, abstract: false, final false
inline void WirePentagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius) ;

/// @brief Method WirePentagon, addr 0x55b93fc, size 0x100, virtual false, abstract: false, final false
inline void WirePentagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method WirePlane, addr 0x55b106c, size 0x158, virtual false, abstract: false, final false
inline void WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size) ;

/// @brief Method WirePlane, addr 0x55b9c00, size 0x18c, virtual false, abstract: false, final false
inline void WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// @brief Method WirePlane, addr 0x55b0350, size 0x120, virtual false, abstract: false, final false
inline void WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size) ;

/// @brief Method WirePlane, addr 0x55b8ca8, size 0x164, virtual false, abstract: false, final false
inline void WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// @brief Method WirePolygon, addr 0x55b0700, size 0x25c, virtual false, abstract: false, final false
inline void WirePolygon(::Unity::Mathematics::float3  center, int32_t  vertices, ::Unity::Mathematics::quaternion  rotation, float_t  radius) ;

/// @brief Method WirePolygon, addr 0x55b9170, size 0x28c, virtual false, abstract: false, final false
inline void WirePolygon(::Unity::Mathematics::float3  center, int32_t  vertices, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method WireRectangle, addr 0x55b024c, size 0x104, virtual false, abstract: false, final false
inline void WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size) ;

/// @brief Method WireRectangle, addr 0x55b8b84, size 0x124, virtual false, abstract: false, final false
inline void WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xy.WireRectangle instead")]
/// @brief Method WireRectangle, addr 0x55b0470, size 0xd0, virtual false, abstract: false, final false
inline void WireRectangle(::UnityEngine::Rect  rect) ;

/// [Obsolete("Use Draw.xy.WireRectangle instead")]
/// @brief Method WireRectangle, addr 0x55b8e0c, size 0x100, virtual false, abstract: false, final false
inline void WireRectangle(::UnityEngine::Rect  rect, ::UnityEngine::Color  color) ;

/// [Obsolete("Use Draw.xz.WireRectangle instead")]
/// @brief Method WireRectangleXZ, addr 0x55b013c, size 0x110, virtual false, abstract: false, final false
inline void WireRectangleXZ(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float2  size) ;

/// [Obsolete("Use Draw.xz.WireRectangle instead")]
/// @brief Method WireRectangleXZ, addr 0x55b8a74, size 0x110, virtual false, abstract: false, final false
inline void WireRectangleXZ(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color) ;

/// @brief Method WireSphere, addr 0x55ac6b4, size 0xf0, virtual false, abstract: false, final false
inline void WireSphere(::Unity::Mathematics::float3  position, float_t  radius) ;

/// @brief Method WireSphere, addr 0x55b56f8, size 0x130, virtual false, abstract: false, final false
inline void WireSphere(::Unity::Mathematics::float3  position, float_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method WireTriangle, addr 0x55b0040, size 0xfc, virtual false, abstract: false, final false
inline void WireTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c) ;

/// @brief Method WireTriangle, addr 0x55b8924, size 0x150, virtual false, abstract: false, final false
inline void WireTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c, ::UnityEngine::Color  color) ;

/// @brief Method WireTriangle, addr 0x55b0648, size 0xb8, virtual false, abstract: false, final false
inline void WireTriangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius) ;

/// @brief Method WireTriangle, addr 0x55b9070, size 0x100, virtual false, abstract: false, final false
inline void WireTriangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WithColor, addr 0x55a9bdc, size 0xa4, virtual false, abstract: false, final false
inline ::GlobalNamespace::CommandBuilder_ScopeColor WithColor(::UnityEngine::Color  color) ;

/// [BurstDiscard]
/// @brief Method WithDuration, addr 0x55a9d74, size 0x84, virtual false, abstract: false, final false
inline ::GlobalNamespace::CommandBuilder_ScopePersist WithDuration(float_t  duration) ;

/// [BurstDiscard]
/// @brief Method WithLineWidth, addr 0x55a9f14, size 0x8c, virtual false, abstract: false, final false
inline ::GlobalNamespace::CommandBuilder_ScopeLineWidth WithLineWidth(float_t  pixels, bool  automaticJoins) ;

/// [BurstDiscard]
/// @brief Method WithMatrix, addr 0x55a9a14, size 0xec, virtual false, abstract: false, final false
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix WithMatrix(::Unity::Mathematics::float3x3  matrix) ;

/// [BurstDiscard]
/// @brief Method WithMatrix, addr 0x55a98a4, size 0x94, virtual false, abstract: false, final false
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix WithMatrix(::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method .ctor, addr 0x55a8510, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffer, ::System::Runtime::InteropServices::GCHandle  gizmos, int32_t  threadIndex, ::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  uniqueID) ;

/// @brief Method .ctor, addr 0x55a851c, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::Drawing::DrawingData*  gizmos, ::GlobalNamespace::DrawingData_Hasher  hasher, ::Drawing::RedrawScope  frameRedrawScope, ::Drawing::RedrawScope  customRedrawScope, bool  isGizmos, bool  isBuiltInCommandBuilder, int32_t  sceneModeVersion) ;

/// @brief Method calculateTangent, addr 0x55b0e28, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 calculateTangent(::Unity::Mathematics::float3  normal) ;

static inline ::Unity::Mathematics::float3 getStaticF_DEFAULT_UP() ;

static inline ::Unity::Mathematics::float4x4 getStaticF_XZtoXYPlaneMatrix() ;

static inline ::Unity::Mathematics::float4x4 getStaticF_XZtoYZPlaneMatrix() ;

/// @brief Method get_BufferSize, addr 0x55a865c, size 0x18, virtual false, abstract: false, final false
inline int32_t get_BufferSize() ;

/// @brief Method get_cameraTargets, addr 0x55a86d8, size 0x168, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Camera>> get_cameraTargets() ;

/// @brief Method get_xy, addr 0x55a868c, size 0x1c, virtual false, abstract: false, final false
inline ::Drawing::CommandBuilder2D get_xy() ;

/// @brief Method get_xz, addr 0x55a86c0, size 0x18, virtual false, abstract: false, final false
inline ::Drawing::CommandBuilder2D get_xz() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_DEFAULT_UP(::Unity::Mathematics::float3  value) ;

static inline void setStaticF_XZtoXYPlaneMatrix(::Unity::Mathematics::float4x4  value) ;

static inline void setStaticF_XZtoYZPlaneMatrix(::Unity::Mathematics::float4x4  value) ;

/// @brief Method set_BufferSize, addr 0x55a8674, size 0x18, virtual false, abstract: false, final false
inline void set_BufferSize(int32_t  value) ;

/// @brief Method set_cameraTargets, addr 0x55a8840, size 0x1ac, virtual false, abstract: false, final false
inline void set_cameraTargets(::ArrayW<::UnityEngine::Camera*>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder() ;

// Ctor Parameters [CppParam { name: "buffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "gizmos", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "threadIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uniqueID", ty: "::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffer, ::System::Runtime::InteropServices::GCHandle  gizmos, int32_t  threadIndex, ::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  uniqueID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27721};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field buffer, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffer;

/// @brief Field gizmos, offset: 0x8, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  gizmos;

/// [NativeSetThreadIndex]
/// @brief Field threadIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  threadIndex;

/// @brief Field uniqueID, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  uniqueID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Drawing::CommandBuilder, buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Drawing::CommandBuilder, gizmos) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Drawing::CommandBuilder, threadIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Drawing::CommandBuilder, uniqueID) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Drawing::CommandBuilder) == 0x18, "Size mismatch!");

} // namespace end def Drawing
// [BurstCompile]
// Dependencies System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.CommandBuilder/JobWireMesh
class CORDL_TYPE CommandBuilder_JobWireMesh : public ::System::Object {
public:
// Declarations
using Execute_0000010A$BurstDirectCall = ::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall;

using Execute_0000010A$PostfixBurstDelegate = ::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate;

using JobWireMeshDelegate = ::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate;

using WireMesh_00000109$BurstDirectCall = ::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall;

using WireMesh_00000109$PostfixBurstDelegate = ::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate;

/// @brief Field JobWireMeshFunctionPointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_JobWireMeshFunctionPointer, put=setStaticF_JobWireMeshFunctionPointer)) ::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*  JobWireMeshFunctionPointer;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(Drawing.CommandBuilder::JobWireMesh::JobWireMeshDelegate))]
/// @brief Method Execute, addr 0x55bc5c8, size 0x4, virtual false, abstract: false, final false
static inline void Execute(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(Drawing.CommandBuilder::JobWireMesh::JobWireMeshDelegate))]
/// @brief Method Execute$BurstManaged, addr 0x55bccb0, size 0x224, virtual false, abstract: false, final false
static inline void Execute$BurstManaged(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw) ;

static inline ::Drawing::CommandBuilder_JobWireMesh* New_ctor() ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(Drawing.CommandBuilder::JobWireMesh::WireMesh_00000109$PostfixBurstDelegate))]
/// @brief Method WireMesh, addr 0x55ae0ac, size 0x4, virtual false, abstract: false, final false
static inline void WireMesh(::Unity::Mathematics::float3*  verts, int32_t*  indices, int32_t  vertexCount, int32_t  indexCount, ::by_ref<::Drawing::CommandBuilder>  draw) ;

/// [BurstCompile]
/// @brief Method WireMesh$BurstManaged, addr 0x55bc960, size 0x350, virtual false, abstract: false, final false
static inline void WireMesh$BurstManaged(::Unity::Mathematics::float3*  verts, int32_t*  indices, int32_t  vertexCount, int32_t  indexCount, ::by_ref<::Drawing::CommandBuilder>  draw) ;

/// @brief Method .ctor, addr 0x55bc790, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate* getStaticF_JobWireMeshFunctionPointer() ;

static inline void setStaticF_JobWireMeshFunctionPointer(::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_JobWireMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommandBuilder_JobWireMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CommandBuilder_JobWireMesh(CommandBuilder_JobWireMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommandBuilder_JobWireMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommandBuilder_JobWireMesh(CommandBuilder_JobWireMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27720};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::CommandBuilder_JobWireMesh) == 0x10, "Size mismatch!");

} // namespace end def Drawing
// Dependencies System.IntPtr, System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.CommandBuilder/JobWireMesh/Execute_0000010A$BurstDirectCall
class CORDL_TYPE JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x55bd514, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x55bd424, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x55bc6cc, size 0xc4, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall(JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall(JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27719};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def Drawing
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Drawing {
// Is value type: false
// CS Name: Drawing.CommandBuilder/JobWireMesh/Execute_0000010A$PostfixBurstDelegate
class CORDL_TYPE JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x55bd354, size 0xc4, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method EndInvoke, addr 0x55bd418, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x55bd340, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw) ;

static inline ::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x55bd28c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate(JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate(JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27718};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def Drawing
// Dependencies System.IntPtr, System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.CommandBuilder/JobWireMesh/WireMesh_00000109$BurstDirectCall
class CORDL_TYPE JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x55bd274, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x55bd184, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x55bc5cc, size 0x100, virtual false, abstract: false, final false
static inline void Invoke(::Unity::Mathematics::float3*  verts, int32_t*  indices, int32_t  vertexCount, int32_t  indexCount, ::by_ref<::Drawing::CommandBuilder>  draw) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall(JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall(JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27717};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def Drawing
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Drawing {
// Is value type: false
// CS Name: Drawing.CommandBuilder/JobWireMesh/WireMesh_00000109$PostfixBurstDelegate
class CORDL_TYPE JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x55bd098, size 0xe0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Unity::Mathematics::float3*  verts, int32_t*  indices, int32_t  vertexCount, int32_t  indexCount, ::by_ref<::Drawing::CommandBuilder>  draw, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0x55bd178, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x55bd084, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Unity::Mathematics::float3*  verts, int32_t*  indices, int32_t  vertexCount, int32_t  indexCount, ::by_ref<::Drawing::CommandBuilder>  draw) ;

static inline ::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x55bcfd0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate(JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate(JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27716};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def Drawing
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Drawing {
// Is value type: false
// CS Name: Drawing.CommandBuilder/JobWireMesh/JobWireMeshDelegate
class CORDL_TYPE JobWireMesh_CommandBuilder_JobWireMeshDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x55bcee8, size 0xc4, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x55bcfac, size 0x24, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x55bced4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw) ;

static inline ::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x55bc8ac, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JobWireMesh_CommandBuilder_JobWireMeshDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JobWireMesh_CommandBuilder_JobWireMeshDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JobWireMesh_CommandBuilder_JobWireMeshDelegate(JobWireMesh_CommandBuilder_JobWireMeshDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JobWireMesh_CommandBuilder_JobWireMeshDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JobWireMesh_CommandBuilder_JobWireMeshDelegate(JobWireMesh_CommandBuilder_JobWireMeshDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27715};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate) == 0x80, "Size mismatch!");

} // namespace end def Drawing

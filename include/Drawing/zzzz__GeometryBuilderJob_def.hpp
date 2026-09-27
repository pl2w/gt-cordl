#pragma once
// IWYU pragma private; include "Drawing/GeometryBuilderJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__CommandBuilder_LineWidthData_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryBuilderJob)
namespace Drawing::Text {
struct SDFCharacter;
}
namespace Drawing {
struct LabelAlignment;
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
struct CommandBuilder_LineData;
}
namespace GlobalNamespace {
struct CommandBuilder_LineWidthData;
}
namespace GlobalNamespace {
struct CommandBuilder_PlaneData;
}
namespace GlobalNamespace {
struct CommandBuilder_SphereData;
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
struct GeometryBuilderJob_TextVertex;
}
namespace GlobalNamespace {
struct GeometryBuilderJob_Vertex;
}
namespace GlobalNamespace {
struct ProcessedBuilderData_DrawingData_MeshBuffers;
}
namespace GlobalNamespace {
struct UnsafeAppendBuffer_Reader;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace Drawing {
struct GeometryBuilderJob;
}
// Write type traits
MARK_VAL_T(::Drawing::GeometryBuilderJob);
DEFINE_IL2CPP_CLASS(::Drawing::GeometryBuilderJob, "Drawing", "GeometryBuilderJob");
// [BurstCompile(FloatMode = (Unity.Burst.FloatMode)0)]
// Dependencies Drawing.CommandBuilder::LineWidthData, Unity.Mathematics.float2, Unity.Mathematics.float3, Unity.Mathematics.float4, Unity.Mathematics.float4x4, Unity.Mathematics.quaternion, UnityEngine.Color32
namespace Drawing {
// Is value type: true
// CS Name: Drawing.GeometryBuilderJob
struct CORDL_TYPE GeometryBuilderJob {
public:
// Declarations
using TextVertex = ::GlobalNamespace::GeometryBuilderJob_TextVertex;

using Vertex = ::GlobalNamespace::GeometryBuilderJob_Vertex;

/// @brief Field BoxTriangles, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BoxTriangles, put=setStaticF_BoxTriangles)) ::ArrayW<int32_t>  BoxTriangles;

/// @brief Field BoxVertices, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BoxVertices, put=setStaticF_BoxVertices)) ::ArrayW<::Unity::Mathematics::float4>  BoxVertices;

/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Add(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffer, T  value) ;

/// @brief Method AddBox, addr 0x55d9238, size 0x3c4, virtual false, abstract: false, final false
inline void AddBox(::GlobalNamespace::CommandBuilder_BoxData  box) ;

/// @brief Method AddCircle, addr 0x55d69c8, size 0x354, virtual false, abstract: false, final false
inline void AddCircle(::GlobalNamespace::CommandBuilder_CircleData  circle) ;

/// @brief Method AddCircle, addr 0x55d6d1c, size 0xbe8, virtual false, abstract: false, final false
inline void AddCircle(::GlobalNamespace::CommandBuilder_CircleXZData  circle) ;

/// @brief Method AddDisc, addr 0x55d7904, size 0x604, virtual false, abstract: false, final false
inline void AddDisc(::GlobalNamespace::CommandBuilder_CircleData  circle) ;

/// @brief Method AddDisc, addr 0x55d83f4, size 0x5e8, virtual false, abstract: false, final false
inline void AddDisc(::GlobalNamespace::CommandBuilder_CircleXZData  circle) ;

/// @brief Method AddLine, addr 0x55d615c, size 0x53c, virtual false, abstract: false, final false
inline void AddLine(::GlobalNamespace::CommandBuilder_LineData  line) ;

/// @brief Method AddPlane, addr 0x55d9020, size 0x218, virtual false, abstract: false, final false
inline void AddPlane(::GlobalNamespace::CommandBuilder_PlaneData  plane) ;

/// @brief Method AddSolidTriangle, addr 0x55d89dc, size 0x45c, virtual false, abstract: false, final false
inline void AddSolidTriangle(::GlobalNamespace::CommandBuilder_TriangleData  triangle) ;

/// @brief Method AddSphereOutline, addr 0x55d7f08, size 0x4ec, virtual false, abstract: false, final false
inline void AddSphereOutline(::GlobalNamespace::CommandBuilder_SphereData  circle) ;

/// @brief Method AddText, addr 0x55d53d4, size 0x1e8, virtual false, abstract: false, final false
inline void AddText(uint16_t*  text, ::GlobalNamespace::CommandBuilder_TextData  textData, ::UnityEngine::Color32  color) ;

/// @brief Method AddText3D, addr 0x55d5f84, size 0x1d8, virtual false, abstract: false, final false
inline void AddText3D(uint16_t*  text, ::GlobalNamespace::CommandBuilder_TextData3D  textData, ::UnityEngine::Color32  color) ;

/// @brief Method AddTextInternal, addr 0x55d55bc, size 0x9c8, virtual false, abstract: false, final false
inline void AddTextInternal(uint16_t*  text, ::Unity::Mathematics::float3  pivot, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::float3  up, ::Drawing::LabelAlignment  alignment, float_t  size, bool  sizeIsInPixels, int32_t  numCharacters, ::UnityEngine::Color32  color) ;

/// @brief Method AddWireBox, addr 0x55d8e38, size 0x1e8, virtual false, abstract: false, final false
inline void AddWireBox(::GlobalNamespace::CommandBuilder_BoxData  box) ;

/// @brief Method CircleSteps, addr 0x55d6698, size 0x330, virtual false, abstract: false, final false
static inline int32_t CircleSteps(::Unity::Mathematics::float3  center, float_t  radius, float_t  maxPixelError, ::by_ref<::Unity::Mathematics::float4x4>  currentMatrix, ::Unity::Mathematics::float2  cameraDepthToPixelSize, ::Unity::Mathematics::float3  cameraPosition) ;

/// @brief Method CreateTriangles, addr 0x55d9f70, size 0xf0, virtual false, abstract: false, final false
inline void CreateTriangles() ;

/// @brief Method Execute, addr 0x55da060, size 0x380, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Method Next, addr 0x55d95fc, size 0x974, virtual false, abstract: false, final false
inline void Next(::by_ref<::GlobalNamespace::UnsafeAppendBuffer_Reader>  reader, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>  matrixStack, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Color32>>  colorStack, ::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::CommandBuilder_LineWidthData>>  lineWidthStack, ::by_ref<int32_t>  matrixStackSize, ::by_ref<int32_t>  colorStackSize, ::by_ref<int32_t>  lineWidthStackSize) ;

/// @brief Method PerspectiveDivide, addr 0x55d53bc, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 PerspectiveDivide(::Unity::Mathematics::float4  p) ;

/// @brief Method Reserve, addr 0x55d5388, size 0x34, virtual false, abstract: false, final false
static inline void Reserve(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffer, int32_t  size) ;

static inline ::ArrayW<int32_t> getStaticF_BoxTriangles() ;

static inline ::ArrayW<::Unity::Mathematics::float4> getStaticF_BoxVertices() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

static inline void setStaticF_BoxTriangles(::ArrayW<int32_t>  value) ;

static inline void setStaticF_BoxVertices(::ArrayW<::Unity::Mathematics::float4>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GeometryBuilderJob() ;

// Ctor Parameters [CppParam { name: "buffers", ty: "::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers*", modifiers: "", def_value: None, comment: None }, CppParam { name: "characterInfo", ty: "::Drawing::Text::SDFCharacter*", modifiers: "", def_value: None, comment: None }, CppParam { name: "characterInfoLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentMatrix", ty: "::Unity::Mathematics::float4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentLineWidthData", ty: "::GlobalNamespace::CommandBuilder_LineWidthData", modifiers: "", def_value: None, comment: None }, CppParam { name: "lineWidthMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minBounds", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxBounds", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "cameraPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "cameraRotation", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "cameraDepthToPixelSize", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxPixelError", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cameraIsOrthographic", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastNormalizedLineDir", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastLineWidth", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GeometryBuilderJob(::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers*  buffers, ::Drawing::Text::SDFCharacter*  characterInfo, int32_t  characterInfoLength, ::UnityEngine::Color32  currentColor, ::Unity::Mathematics::float4x4  currentMatrix, ::GlobalNamespace::CommandBuilder_LineWidthData  currentLineWidthData, float_t  lineWidthMultiplier, ::Unity::Mathematics::float3  minBounds, ::Unity::Mathematics::float3  maxBounds, ::Unity::Mathematics::float3  cameraPosition, ::Unity::Mathematics::quaternion  cameraRotation, ::Unity::Mathematics::float2  cameraDepthToPixelSize, float_t  maxPixelError, bool  cameraIsOrthographic, ::Unity::Mathematics::float3  lastNormalizedLineDir, float_t  lastLineWidth) noexcept;

/// @brief Field MaxCirclePixelError offset 0xffffffff size 0x4
static constexpr float_t  MaxCirclePixelError{static_cast<float_t>(0.5f)};

/// @brief Field MaxStackSize offset 0xffffffff size 0x4
static constexpr int32_t  MaxStackSize{static_cast<int32_t>(0x20)};

/// @brief Field TrianglesPerCharacter offset 0xffffffff size 0x4
static constexpr int32_t  TrianglesPerCharacter{static_cast<int32_t>(0x6)};

/// @brief Field VerticesPerCharacter offset 0xffffffff size 0x4
static constexpr int32_t  VerticesPerCharacter{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27765};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb8};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field buffers, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers*  buffers;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field characterInfo, offset: 0x8, size: 0x8, def value: None
 ::Drawing::Text::SDFCharacter*  characterInfo;

/// @brief Field characterInfoLength, offset: 0x10, size: 0x4, def value: None
 int32_t  characterInfoLength;

/// @brief Field currentColor, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::Color32  currentColor;

/// @brief Field currentMatrix, offset: 0x18, size: 0x40, def value: None
 ::Unity::Mathematics::float4x4  currentMatrix;

/// @brief Field currentLineWidthData, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::CommandBuilder_LineWidthData  currentLineWidthData;

/// @brief Field lineWidthMultiplier, offset: 0x60, size: 0x4, def value: None
 float_t  lineWidthMultiplier;

/// @brief Field minBounds, offset: 0x64, size: 0xc, def value: None
 ::Unity::Mathematics::float3  minBounds;

/// @brief Field maxBounds, offset: 0x70, size: 0xc, def value: None
 ::Unity::Mathematics::float3  maxBounds;

/// @brief Field cameraPosition, offset: 0x7c, size: 0xc, def value: None
 ::Unity::Mathematics::float3  cameraPosition;

/// @brief Field cameraRotation, offset: 0x88, size: 0x10, def value: None
 ::Unity::Mathematics::quaternion  cameraRotation;

/// @brief Field cameraDepthToPixelSize, offset: 0x98, size: 0x8, def value: None
 ::Unity::Mathematics::float2  cameraDepthToPixelSize;

/// @brief Field maxPixelError, offset: 0xa0, size: 0x4, def value: None
 float_t  maxPixelError;

/// @brief Field cameraIsOrthographic, offset: 0xa4, size: 0x1, def value: None
 bool  cameraIsOrthographic;

/// @brief Field lastNormalizedLineDir, offset: 0xa8, size: 0xc, def value: None
 ::Unity::Mathematics::float3  lastNormalizedLineDir;

/// @brief Field lastLineWidth, offset: 0xb4, size: 0x4, def value: None
 float_t  lastLineWidth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Drawing::GeometryBuilderJob, buffers) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Drawing::GeometryBuilderJob, characterInfo) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Drawing::GeometryBuilderJob, characterInfoLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Drawing::GeometryBuilderJob, currentColor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Drawing::GeometryBuilderJob, currentMatrix) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Drawing::GeometryBuilderJob, currentLineWidthData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Drawing::GeometryBuilderJob, lineWidthMultiplier) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Drawing::GeometryBuilderJob, minBounds) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Drawing::GeometryBuilderJob, maxBounds) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Drawing::GeometryBuilderJob, cameraPosition) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Drawing::GeometryBuilderJob, cameraRotation) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Drawing::GeometryBuilderJob, cameraDepthToPixelSize) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Drawing::GeometryBuilderJob, maxPixelError) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Drawing::GeometryBuilderJob, cameraIsOrthographic) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Drawing::GeometryBuilderJob, lastNormalizedLineDir) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Drawing::GeometryBuilderJob, lastLineWidth) == 0xb4, "Offset mismatch!");

static_assert(sizeof(::Drawing::GeometryBuilderJob) == 0xb8, "Size mismatch!");

} // namespace end def Drawing

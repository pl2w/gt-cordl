#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshBuilderNative.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshBuilderNative)
namespace GlobalNamespace {
struct MeshBuilderNative_NativeBorderParams;
}
namespace GlobalNamespace {
struct MeshBuilderNative_NativeColorPage;
}
namespace GlobalNamespace {
struct MeshBuilderNative_NativeRectParams;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::UIElements {
struct MeshWriteDataInterface;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MeshBuilderNative;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::MeshBuilderNative*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::MeshBuilderNative*, "UnityEngine.UIElements", "MeshBuilderNative");
// [NativeHeader("Modules/UIElements/Core/Native/Renderer/UIRMeshBuilder.bindings.h")]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MeshBuilderNative
class CORDL_TYPE MeshBuilderNative : public ::System::Object {
public:
// Declarations
using NativeBorderParams = ::GlobalNamespace::MeshBuilderNative_NativeBorderParams;

using NativeColorPage = ::GlobalNamespace::MeshBuilderNative_NativeColorPage;

using NativeRectParams = ::GlobalNamespace::MeshBuilderNative_NativeRectParams;

/// [ThreadSafe]
/// @brief Method MakeBorder, addr 0xb8bb560, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::MeshWriteDataInterface MakeBorder(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeBorderParams>  borderParams) ;

/// @brief Method MakeBorder_Injected, addr 0xb8bb5c8, size 0x44, virtual false, abstract: false, final false
static inline void MakeBorder_Injected(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeBorderParams>  borderParams, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>  ret) ;

/// [ThreadSafe]
/// @brief Method MakeSolidRect, addr 0xb8bb60c, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::MeshWriteDataInterface MakeSolidRect(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  rectParams) ;

/// @brief Method MakeSolidRect_Injected, addr 0xb8bb674, size 0x44, virtual false, abstract: false, final false
static inline void MakeSolidRect_Injected(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  rectParams, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>  ret) ;

/// [ThreadSafe]
/// @brief Method MakeTexturedRect, addr 0xb8bb6b8, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::MeshWriteDataInterface MakeTexturedRect(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  rectParams) ;

/// @brief Method MakeTexturedRect_Injected, addr 0xb8bb720, size 0x44, virtual false, abstract: false, final false
static inline void MakeTexturedRect_Injected(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  rectParams, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>  ret) ;

/// [ThreadSafe]
/// @brief Method MakeVectorGraphics9SliceBackground, addr 0xb8bb9bc, size 0x1a8, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::MeshWriteDataInterface MakeVectorGraphics9SliceBackground(::ArrayW<::UnityEngine::UIElements::Vertex>  svgVertices, ::ArrayW<uint16_t>  svgIndices, float_t  svgWidth, float_t  svgHeight, ::UnityEngine::Rect  targetRect, ::UnityEngine::Vector4  sliceLTRB, ::UnityEngine::Color  tint, ::GlobalNamespace::MeshBuilderNative_NativeColorPage  colorPage) ;

/// @brief Method MakeVectorGraphics9SliceBackground_Injected, addr 0xb8bbb64, size 0x9c, virtual false, abstract: false, final false
static inline void MakeVectorGraphics9SliceBackground_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  svgVertices, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  svgIndices, float_t  svgWidth, float_t  svgHeight, ::by_ref<::UnityEngine::Rect>  targetRect, ::by_ref<::UnityEngine::Vector4>  sliceLTRB, ::by_ref<::UnityEngine::Color>  tint, ::by_ref<::GlobalNamespace::MeshBuilderNative_NativeColorPage>  colorPage, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>  ret) ;

/// [ThreadSafe]
/// @brief Method MakeVectorGraphicsStretchBackground, addr 0xb8bb764, size 0x1b4, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::MeshWriteDataInterface MakeVectorGraphicsStretchBackground(::ArrayW<::UnityEngine::UIElements::Vertex>  svgVertices, ::ArrayW<uint16_t>  svgIndices, float_t  svgWidth, float_t  svgHeight, ::UnityEngine::Rect  targetRect, ::UnityEngine::Rect  sourceUV, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::Color  tint, ::GlobalNamespace::MeshBuilderNative_NativeColorPage  colorPage) ;

/// @brief Method MakeVectorGraphicsStretchBackground_Injected, addr 0xb8bb918, size 0xa4, virtual false, abstract: false, final false
static inline void MakeVectorGraphicsStretchBackground_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  svgVertices, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  svgIndices, float_t  svgWidth, float_t  svgHeight, ::by_ref<::UnityEngine::Rect>  targetRect, ::by_ref<::UnityEngine::Rect>  sourceUV, ::UnityEngine::ScaleMode  scaleMode, ::by_ref<::UnityEngine::Color>  tint, ::by_ref<::GlobalNamespace::MeshBuilderNative_NativeColorPage>  colorPage, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>  ret) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshBuilderNative() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshBuilderNative", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshBuilderNative(MeshBuilderNative && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshBuilderNative", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshBuilderNative(MeshBuilderNative const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7822};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::MeshBuilderNative) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements

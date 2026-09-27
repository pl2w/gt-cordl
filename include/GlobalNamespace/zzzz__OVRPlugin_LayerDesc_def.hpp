#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_LayerDesc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_EyeTextureFormat_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FovfPair_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_LayerLayout_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_OverlayShape_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_RectfPair_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Sizei_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_LayerDesc)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_LayerDesc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_LayerDesc);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_LayerDesc, "", "OVRPlugin/LayerDesc");
// Dependencies OVRPlugin::EyeTextureFormat, OVRPlugin::FovfPair, OVRPlugin::LayerLayout, OVRPlugin::OverlayShape, OVRPlugin::RectfPair, OVRPlugin::Sizei
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/LayerDesc
struct CORDL_TYPE OVRPlugin_LayerDesc {
public:
// Declarations
/// @brief Method ToString, addr 0xa60f2a0, size 0x354, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_LayerDesc() ;

// Ctor Parameters [CppParam { name: "Shape", ty: "::GlobalNamespace::OVRPlugin_OverlayShape", modifiers: "", def_value: None, comment: None }, CppParam { name: "Layout", ty: "::GlobalNamespace::OVRPlugin_LayerLayout", modifiers: "", def_value: None, comment: None }, CppParam { name: "TextureSize", ty: "::GlobalNamespace::OVRPlugin_Sizei", modifiers: "", def_value: None, comment: None }, CppParam { name: "MipLevels", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SampleCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Format", ty: "::GlobalNamespace::OVRPlugin_EyeTextureFormat", modifiers: "", def_value: None, comment: None }, CppParam { name: "LayerFlags", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Fov", ty: "::GlobalNamespace::OVRPlugin_FovfPair", modifiers: "", def_value: None, comment: None }, CppParam { name: "VisibleRect", ty: "::GlobalNamespace::OVRPlugin_RectfPair", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxViewportSize", ty: "::GlobalNamespace::OVRPlugin_Sizei", modifiers: "", def_value: None, comment: None }, CppParam { name: "DepthFormat", ty: "::GlobalNamespace::OVRPlugin_EyeTextureFormat", modifiers: "", def_value: None, comment: None }, CppParam { name: "MotionVectorFormat", ty: "::GlobalNamespace::OVRPlugin_EyeTextureFormat", modifiers: "", def_value: None, comment: None }, CppParam { name: "MotionVectorDepthFormat", ty: "::GlobalNamespace::OVRPlugin_EyeTextureFormat", modifiers: "", def_value: None, comment: None }, CppParam { name: "MotionVectorTextureSize", ty: "::GlobalNamespace::OVRPlugin_Sizei", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_LayerDesc(::GlobalNamespace::OVRPlugin_OverlayShape  Shape, ::GlobalNamespace::OVRPlugin_LayerLayout  Layout, ::GlobalNamespace::OVRPlugin_Sizei  TextureSize, int32_t  MipLevels, int32_t  SampleCount, ::GlobalNamespace::OVRPlugin_EyeTextureFormat  Format, int32_t  LayerFlags, ::GlobalNamespace::OVRPlugin_FovfPair  Fov, ::GlobalNamespace::OVRPlugin_RectfPair  VisibleRect, ::GlobalNamespace::OVRPlugin_Sizei  MaxViewportSize, ::GlobalNamespace::OVRPlugin_EyeTextureFormat  DepthFormat, ::GlobalNamespace::OVRPlugin_EyeTextureFormat  MotionVectorFormat, ::GlobalNamespace::OVRPlugin_EyeTextureFormat  MotionVectorDepthFormat, ::GlobalNamespace::OVRPlugin_Sizei  MotionVectorTextureSize) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12126};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x7c};

/// @brief Field Shape, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_OverlayShape  Shape;

/// @brief Field Layout, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_LayerLayout  Layout;

/// @brief Field TextureSize, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_Sizei  TextureSize;

/// @brief Field MipLevels, offset: 0x10, size: 0x4, def value: None
 int32_t  MipLevels;

/// @brief Field SampleCount, offset: 0x14, size: 0x4, def value: None
 int32_t  SampleCount;

/// @brief Field Format, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_EyeTextureFormat  Format;

/// @brief Field LayerFlags, offset: 0x1c, size: 0x4, def value: None
 int32_t  LayerFlags;

/// @brief Field Fov, offset: 0x20, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_FovfPair  Fov;

/// @brief Field VisibleRect, offset: 0x40, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_RectfPair  VisibleRect;

/// @brief Field MaxViewportSize, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_Sizei  MaxViewportSize;

/// @brief Field DepthFormat, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_EyeTextureFormat  DepthFormat;

/// @brief Field MotionVectorFormat, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_EyeTextureFormat  MotionVectorFormat;

/// @brief Field MotionVectorDepthFormat, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_EyeTextureFormat  MotionVectorDepthFormat;

/// @brief Field MotionVectorTextureSize, offset: 0x74, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_Sizei  MotionVectorTextureSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerDesc, Shape) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerDesc, Layout) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerDesc, TextureSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerDesc, MipLevels) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerDesc, SampleCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerDesc, Format) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerDesc, LayerFlags) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerDesc, Fov) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerDesc, VisibleRect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerDesc, MaxViewportSize) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerDesc, DepthFormat) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerDesc, MotionVectorFormat) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerDesc, MotionVectorDepthFormat) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerDesc, MotionVectorTextureSize) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_LayerDesc) == 0x7c, "Size mismatch!");

} // namespace end def GlobalNamespace

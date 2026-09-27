#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystem_XRRenderParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRDisplaySubsystem_XRRenderParameter)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct XRDisplaySubsystem_XRRenderParameter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter, "UnityEngine.XR", "XRDisplaySubsystem/XRRenderParameter");
// [NativeHeader("Modules/XR/Subsystems/Display/XRDisplaySubsystem.bindings.h")]
// Dependencies UnityEngine.Matrix4x4, UnityEngine.Rect
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter
struct CORDL_TYPE XRDisplaySubsystem_XRRenderParameter {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr XRDisplaySubsystem_XRRenderParameter() ;

// Ctor Parameters [CppParam { name: "view", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "projection", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "viewport", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "occlusionMesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None, comment: None }, CppParam { name: "visibleMesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None, comment: None }, CppParam { name: "textureArraySlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "previousView", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "isPreviousViewValid", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr XRDisplaySubsystem_XRRenderParameter(::UnityEngine::Matrix4x4  view, ::UnityEngine::Matrix4x4  projection, ::UnityEngine::Rect  viewport, ::UnityW<::UnityEngine::Mesh>  occlusionMesh, ::UnityW<::UnityEngine::Mesh>  visibleMesh, int32_t  textureArraySlice, ::UnityEngine::Matrix4x4  previousView, bool  isPreviousViewValid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31626};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xe8};

/// @brief Field view, offset: 0x0, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  view;

/// @brief Field projection, offset: 0x40, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  projection;

/// @brief Field viewport, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Rect  viewport;

/// @brief Field occlusionMesh, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  occlusionMesh;

/// @brief Field visibleMesh, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  visibleMesh;

/// @brief Field textureArraySlice, offset: 0xa0, size: 0x4, def value: None
 int32_t  textureArraySlice;

/// @brief Field previousView, offset: 0xa4, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  previousView;

/// @brief Field isPreviousViewValid, offset: 0xe4, size: 0x1, def value: None
 bool  isPreviousViewValid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter, view) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter, projection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter, viewport) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter, occlusionMesh) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter, visibleMesh) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter, textureArraySlice) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter, previousView) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter, isPreviousViewValid) == 0xe4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceOcclusionEventDebugArray_Request.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventDebugArray_Info_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InstanceOcclusionEventDebugArray_Request)
// Forward declare root types
namespace GlobalNamespace {
struct InstanceOcclusionEventDebugArray_Request;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceOcclusionEventDebugArray_Request);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceOcclusionEventDebugArray_Request, "UnityEngine.Rendering", "InstanceOcclusionEventDebugArray/Request");
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>, UnityEngine.Rendering.AsyncGPUReadbackRequest, UnityEngine.Rendering.InstanceOcclusionEventDebugArray::Info
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceOcclusionEventDebugArray/Request
struct CORDL_TYPE InstanceOcclusionEventDebugArray_Request {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InstanceOcclusionEventDebugArray_Request() ;

// Ctor Parameters [CppParam { name: "info", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::GlobalNamespace::InstanceOcclusionEventDebugArray_Info>", modifiers: "", def_value: None, comment: None }, CppParam { name: "readback", ty: "::UnityEngine::Rendering::AsyncGPUReadbackRequest", modifiers: "", def_value: None, comment: None }]
constexpr InstanceOcclusionEventDebugArray_Request(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::GlobalNamespace::InstanceOcclusionEventDebugArray_Info>  info, ::UnityEngine::Rendering::AsyncGPUReadbackRequest  readback) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26576};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field info, offset: 0x0, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::GlobalNamespace::InstanceOcclusionEventDebugArray_Info>  info;

/// @brief Field readback, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Rendering::AsyncGPUReadbackRequest  readback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceOcclusionEventDebugArray_Request, info) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceOcclusionEventDebugArray_Request, readback) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceOcclusionEventDebugArray_Request) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

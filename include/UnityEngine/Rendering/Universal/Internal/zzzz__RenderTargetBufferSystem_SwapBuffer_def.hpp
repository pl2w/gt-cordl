#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/RenderTargetBufferSystem_SwapBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTargetBufferSystem_SwapBuffer)
namespace UnityEngine::Rendering {
class RTHandle;
}
// Forward declare root types
namespace GlobalNamespace {
struct RenderTargetBufferSystem_SwapBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderTargetBufferSystem_SwapBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderTargetBufferSystem_SwapBuffer, "UnityEngine.Rendering.Universal.Internal", "RenderTargetBufferSystem/SwapBuffer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer
struct CORDL_TYPE RenderTargetBufferSystem_SwapBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RenderTargetBufferSystem_SwapBuffer() ;

// Ctor Parameters [CppParam { name: "rtMSAA", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: None, comment: None }, CppParam { name: "rtResolve", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: None, comment: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "msaa", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderTargetBufferSystem_SwapBuffer(::UnityEngine::Rendering::RTHandle*  rtMSAA, ::UnityEngine::Rendering::RTHandle*  rtResolve, ::StringW  name, int32_t  msaa) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18769};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field rtMSAA, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  rtMSAA;

/// @brief Field rtResolve, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  rtResolve;

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field msaa, offset: 0x18, size: 0x4, def value: None
 int32_t  msaa;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderTargetBufferSystem_SwapBuffer, rtMSAA) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderTargetBufferSystem_SwapBuffer, rtResolve) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderTargetBufferSystem_SwapBuffer, name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderTargetBufferSystem_SwapBuffer, msaa) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderTargetBufferSystem_SwapBuffer) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

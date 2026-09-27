#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/BufferHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferHandle)
namespace UnityEngine::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::BufferHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::BufferHandle, "UnityEngine.Rendering.RenderGraphModule", "BufferHandle");
// [DebuggerDisplay("Buffer ({handle.index})")]
// [MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
// Dependencies UnityEngine.Rendering.RenderGraphModule.ResourceHandle
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.BufferHandle
struct CORDL_TYPE BufferHandle {
public:
// Declarations
/// @brief Field s_NullHandle, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_s_NullHandle, put=setStaticF_s_NullHandle)) ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  s_NullHandle;

/// @brief Method IsValid, addr 0xb1ba0ac, size 0xd0, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method .ctor, addr 0xb1ba054, size 0x14, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>  h) ;

/// @brief Method .ctor, addr 0xb1ba068, size 0x44, virtual false, abstract: false, final false
inline void _ctor(int32_t  handle, bool  shared) ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle getStaticF_s_NullHandle() ;

/// @brief Method get_nullHandle, addr 0xb1b9ff8, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle get_nullHandle() ;

/// @brief Method op_Implicit, addr 0xb1a3340, size 0xe4, virtual false, abstract: false, final false
static inline ::UnityEngine::GraphicsBuffer* op_Implicit___UnityEngine__GraphicsBuffer_(::UnityEngine::Rendering::RenderGraphModule::BufferHandle  buffer) ;

static inline void setStaticF_s_NullHandle(::UnityEngine::Rendering::RenderGraphModule::BufferHandle  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BufferHandle() ;

// Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: None, comment: None }]
constexpr BufferHandle(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle  handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17180};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field handle, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle  handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::BufferHandle, handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::BufferHandle) == 0xc, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::RenderGraphModule

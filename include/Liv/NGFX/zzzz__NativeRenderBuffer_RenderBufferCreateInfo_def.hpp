#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeRenderBuffer_RenderBufferCreateInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/NGFX/zzzz__EventType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeRenderBuffer_RenderBufferCreateInfo)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
// Forward declare root types
namespace GlobalNamespace {
struct NativeRenderBuffer_RenderBufferCreateInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo, "Liv.NGFX", "NativeRenderBuffer/RenderBufferCreateInfo");
// Dependencies Liv.NGFX.EventType, System.IntPtr, UnityEngine.Experimental.Rendering.GraphicsFormat
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.NGFX.NativeRenderBuffer/RenderBufferCreateInfo
#pragma pack(push, 1)
struct CORDL_TYPE NativeRenderBuffer_RenderBufferCreateInfo {
public:
// Declarations
/// @brief Field eventType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_eventType, put=setStaticF_eventType)) ::Liv::NGFX::EventType  eventType;

/// @brief Method .ctor, addr 0x9cdbe7c, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ctx, uint32_t  id, ::System::IntPtr  handle, int32_t  width, int32_t  height, int32_t  mips, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

static inline ::Liv::NGFX::EventType getStaticF_eventType() ;

/// @brief Method id, addr 0x9cdc200, size 0x8, virtual false, abstract: false, final false
inline uint32_t id() ;

static inline void setStaticF_eventType(::Liv::NGFX::EventType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeRenderBuffer_RenderBufferCreateInfo() ;

// Ctor Parameters [CppParam { name: "m_context", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_handle", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_width", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_height", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_mips", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_format", ty: "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_out_id", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr NativeRenderBuffer_RenderBufferCreateInfo(::System::IntPtr  m_context, ::System::IntPtr  m_handle, int32_t  m_width, int32_t  m_height, int32_t  m_mips, ::UnityEngine::Experimental::Rendering::GraphicsFormat  m_format, uint32_t  m_out_id) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24670};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field m_context, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_context;

/// @brief Field m_handle, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_handle;

/// @brief Field m_width, offset: 0x10, size: 0x4, def value: None
 int32_t  m_width;

/// @brief Field m_height, offset: 0x14, size: 0x4, def value: None
 int32_t  m_height;

/// @brief Field m_mips, offset: 0x18, size: 0x4, def value: None
 int32_t  m_mips;

/// @brief Field m_format, offset: 0x1c, size: 0x4, def value: None
 ::UnityEngine::Experimental::Rendering::GraphicsFormat  m_format;

/// @brief Field m_out_id, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_out_id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo, m_context) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo, m_handle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo, m_width) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo, m_height) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo, m_mips) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo, m_format) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo, m_out_id) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeRenderBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeRenderBuffer)
namespace GlobalNamespace {
struct NativeRenderBuffer_Format;
}
namespace GlobalNamespace {
struct NativeRenderBuffer_RenderBufferCreateInfo;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct RenderBuffer;
}
// Forward declare root types
namespace Liv::NGFX {
class NativeRenderBuffer;
}
// Write type traits
MARK_REF_T(::Liv::NGFX::NativeRenderBuffer*);
DEFINE_IL2CPP_CLASS(::Liv::NGFX::NativeRenderBuffer*, "Liv.NGFX", "NativeRenderBuffer");
// Dependencies System.IntPtr, System.Object, UnityEngine.RenderBuffer
namespace Liv::NGFX {
// Is value type: false
// CS Name: Liv.NGFX.NativeRenderBuffer
class CORDL_TYPE NativeRenderBuffer : public ::System::Object {
public:
// Declarations
using Format = ::GlobalNamespace::NativeRenderBuffer_Format;

using RenderBufferCreateInfo = ::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo;

 __declspec(property(get=get_buffer)) ::UnityEngine::RenderBuffer  buffer;

 __declspec(property(get=get_id)) uint32_t  id;

/// @brief Field m_buffer, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_buffer, put=__cordl_internal_set_m_buffer)) ::UnityEngine::RenderBuffer  m_buffer;

/// @brief Field m_context, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_context, put=__cordl_internal_set_m_context)) ::System::IntPtr  m_context;

/// @brief Field m_id, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_id, put=__cordl_internal_set_m_id)) uint32_t  m_id;

/// @brief Field m_mips, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_mips, put=__cordl_internal_set_m_mips)) int32_t  m_mips;

/// @brief Field m_valid, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_valid, put=__cordl_internal_set_m_valid)) bool  m_valid;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x9cdc094, size 0x16c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x9cdc060, size 0x8, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Liv::NGFX::NativeRenderBuffer* New_ctor(::System::IntPtr  ctx, ::UnityEngine::RenderBuffer  rb, ::System::IntPtr  texturePtr, int32_t  width, int32_t  height, int32_t  mips, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

static inline ::Liv::NGFX::NativeRenderBuffer* New_ctor(::System::IntPtr  ctx, ::UnityEngine::RenderBuffer  rb, int32_t  width, int32_t  height, int32_t  mips, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

constexpr ::UnityEngine::RenderBuffer const& __cordl_internal_get_m_buffer() const;

constexpr ::UnityEngine::RenderBuffer& __cordl_internal_get_m_buffer() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_context() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_context() ;

constexpr uint32_t const& __cordl_internal_get_m_id() const;

constexpr uint32_t& __cordl_internal_get_m_id() ;

constexpr int32_t const& __cordl_internal_get_m_mips() const;

constexpr int32_t& __cordl_internal_get_m_mips() ;

constexpr bool const& __cordl_internal_get_m_valid() const;

constexpr bool& __cordl_internal_get_m_valid() ;

constexpr void __cordl_internal_set_m_buffer(::UnityEngine::RenderBuffer  value) ;

constexpr void __cordl_internal_set_m_context(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_id(uint32_t  value) ;

constexpr void __cordl_internal_set_m_mips(int32_t  value) ;

constexpr void __cordl_internal_set_m_valid(bool  value) ;

/// @brief Method .ctor, addr 0x9cdbe90, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ctx, ::UnityEngine::RenderBuffer  rb, ::System::IntPtr  texturePtr, int32_t  width, int32_t  height, int32_t  mips, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method .ctor, addr 0x9cdbc9c, size 0x1e0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ctx, ::UnityEngine::RenderBuffer  rb, int32_t  width, int32_t  height, int32_t  mips, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method get_buffer, addr 0x9cdc088, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::RenderBuffer get_buffer() ;

/// @brief Method get_id, addr 0x9cdc080, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method op_Implicit, addr 0x9cdc068, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderBuffer op_Implicit___UnityEngine__RenderBuffer(::Liv::NGFX::NativeRenderBuffer*  o) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeRenderBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeRenderBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeRenderBuffer(NativeRenderBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeRenderBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeRenderBuffer(NativeRenderBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24671};

/// @brief Field m_buffer, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::RenderBuffer  ___m_buffer;

/// @brief Field m_id, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___m_id;

/// @brief Field m_mips, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_mips;

/// @brief Field m_valid, offset: 0x28, size: 0x1, def value: None
 bool  ___m_valid;

/// @brief Field m_context, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  ___m_context;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::NGFX::NativeRenderBuffer, ___m_buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::NGFX::NativeRenderBuffer, ___m_id) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::NGFX::NativeRenderBuffer, ___m_mips) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Liv::NGFX::NativeRenderBuffer, ___m_valid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::NGFX::NativeRenderBuffer, ___m_context) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::NGFX::NativeRenderBuffer) == 0x38, "Size mismatch!");

} // namespace end def Liv::NGFX

#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeGraphicsBuffer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeGraphicsBuffer_1)
namespace GlobalNamespace {
struct GraphicsBuffer_Target;
}
namespace GlobalNamespace {
template<typename T>
struct NativeGraphicsBuffer_1_BufferCopyInfo;
}
namespace GlobalNamespace {
template<typename T>
struct NativeGraphicsBuffer_1_BufferCreateInfo;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace Liv::NGFX {
template<typename T>
class NativeGraphicsBuffer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Liv::NGFX::NativeGraphicsBuffer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Liv::NGFX::NativeGraphicsBuffer_1, "Liv.NGFX", "NativeGraphicsBuffer`1");
// Dependencies System.IntPtr, System.Object
namespace Liv::NGFX {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Liv.NGFX.NativeGraphicsBuffer`1<T>
class CORDL_TYPE NativeGraphicsBuffer_1 : public ::System::Object {
public:
// Declarations
using BufferCopyInfo = ::GlobalNamespace::NativeGraphicsBuffer_1_BufferCopyInfo<T>;

using BufferCreateInfo = ::GlobalNamespace::NativeGraphicsBuffer_1_BufferCreateInfo<T>;

 __declspec(property(get=get_buffer)) ::UnityEngine::GraphicsBuffer*  buffer;

 __declspec(property(get=get_count)) int32_t  count;

 __declspec(property(get=get_id)) uint32_t  id;

/// @brief Field m_buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_buffer, put=__cordl_internal_set_m_buffer)) ::UnityEngine::GraphicsBuffer*  m_buffer;

/// @brief Field m_context, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_context, put=__cordl_internal_set_m_context)) ::System::IntPtr  m_context;

/// @brief Field m_count, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_count, put=__cordl_internal_set_m_count)) int32_t  m_count;

/// @brief Field m_id, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_id, put=__cordl_internal_set_m_id)) uint32_t  m_id;

/// @brief Field m_valid, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_valid, put=__cordl_internal_set_m_valid)) bool  m_valid;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BufferCopy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void BufferCopy(::Liv::NGFX::NativeGraphicsBuffer_1<T>*  dst, uint32_t  size) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Liv::NGFX::NativeGraphicsBuffer_1<T>* New_ctor(::System::IntPtr  ctx, ::UnityEngine::GraphicsBuffer*  buffer, ::GlobalNamespace::GraphicsBuffer_Target  target) ;

static inline ::Liv::NGFX::NativeGraphicsBuffer_1<T>* New_ctor(::System::IntPtr  ctx, int32_t  count, ::System::IntPtr  nativeBuffer, ::GlobalNamespace::GraphicsBuffer_Target  target) ;

static inline ::Liv::NGFX::NativeGraphicsBuffer_1<T>* New_ctor(::System::IntPtr  ctx, int32_t  count, ::GlobalNamespace::GraphicsBuffer_Target  target) ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_buffer() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_buffer() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_context() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_context() ;

constexpr int32_t const& __cordl_internal_get_m_count() const;

constexpr int32_t& __cordl_internal_get_m_count() ;

constexpr uint32_t const& __cordl_internal_get_m_id() const;

constexpr uint32_t& __cordl_internal_get_m_id() ;

constexpr bool const& __cordl_internal_get_m_valid() const;

constexpr bool& __cordl_internal_get_m_valid() ;

constexpr void __cordl_internal_set_m_buffer(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_m_context(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_count(int32_t  value) ;

constexpr void __cordl_internal_set_m_id(uint32_t  value) ;

constexpr void __cordl_internal_set_m_valid(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ctx, ::UnityEngine::GraphicsBuffer*  buffer, ::GlobalNamespace::GraphicsBuffer_Target  target) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ctx, int32_t  count, ::System::IntPtr  nativeBuffer, ::GlobalNamespace::GraphicsBuffer_Target  target) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ctx, int32_t  count, ::GlobalNamespace::GraphicsBuffer_Target  target) ;

/// @brief Method get_buffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* get_buffer() ;

/// @brief Method get_count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_count() ;

/// @brief Method get_id, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline uint32_t get_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityEngine::GraphicsBuffer* op_Implicit___UnityEngine__GraphicsBuffer_(::Liv::NGFX::NativeGraphicsBuffer_1<T>*  o) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeGraphicsBuffer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeGraphicsBuffer_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeGraphicsBuffer_1(NativeGraphicsBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeGraphicsBuffer_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeGraphicsBuffer_1(NativeGraphicsBuffer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24674};

/// @brief Field m_buffer, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___m_buffer;

/// @brief Field m_id, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___m_id;

/// @brief Field m_count, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_count;

/// @brief Field m_valid, offset: 0x20, size: 0x1, def value: None
 bool  ___m_valid;

/// @brief Field m_context, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  ___m_context;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::NGFX

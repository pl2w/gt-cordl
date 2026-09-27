#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeGraphicsBuffer`1_BufferCreateInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/NGFX/zzzz__EventType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_Target_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeGraphicsBuffer`1_BufferCreateInfo)
namespace GlobalNamespace {
struct GraphicsBuffer_Target;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct NativeGraphicsBuffer_1_BufferCreateInfo;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NativeGraphicsBuffer_1_BufferCreateInfo);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NativeGraphicsBuffer_1_BufferCreateInfo, "Liv.NGFX", "NativeGraphicsBuffer`1/BufferCreateInfo");
// Dependencies Liv.NGFX.EventType, System.IntPtr, UnityEngine.GraphicsBuffer::Target
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Liv.NGFX.NativeGraphicsBuffer`1/BufferCreateInfo<T>
#pragma pack(push, 1)
struct CORDL_TYPE NativeGraphicsBuffer_1_BufferCreateInfo {
public:
// Declarations
/// @brief Field eventType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_eventType, put=setStaticF_eventType)) ::Liv::NGFX::EventType  eventType;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ctx, uint32_t  id, ::System::IntPtr  handle, int32_t  count, int32_t  stride, ::GlobalNamespace::GraphicsBuffer_Target  target) ;

static inline ::Liv::NGFX::EventType getStaticF_eventType() ;

/// @brief Method id, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline uint32_t id() ;

static inline void setStaticF_eventType(::Liv::NGFX::EventType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeGraphicsBuffer_1_BufferCreateInfo() ;

// Ctor Parameters [CppParam { name: "m_context", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_handle", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_stride", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_target", ty: "::GlobalNamespace::GraphicsBuffer_Target", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_out_id", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr NativeGraphicsBuffer_1_BufferCreateInfo(::System::IntPtr  m_context, ::System::IntPtr  m_handle, int32_t  m_count, int32_t  m_stride, ::GlobalNamespace::GraphicsBuffer_Target  m_target, uint32_t  m_out_id) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24672};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_context, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_context;

/// @brief Field m_handle, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_handle;

/// @brief Field m_count, offset: 0x10, size: 0x4, def value: None
 int32_t  m_count;

/// @brief Field m_stride, offset: 0x14, size: 0x4, def value: None
 int32_t  m_stride;

/// @brief Field m_target, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::GraphicsBuffer_Target  m_target;

/// @brief Field m_out_id, offset: 0x1c, size: 0x4, def value: None
 uint32_t  m_out_id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def GlobalNamespace

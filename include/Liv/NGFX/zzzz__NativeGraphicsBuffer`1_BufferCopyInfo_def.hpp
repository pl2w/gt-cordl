#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeGraphicsBuffer`1_BufferCopyInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/NGFX/zzzz__EventType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeGraphicsBuffer`1_BufferCopyInfo)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct NativeGraphicsBuffer_1_BufferCopyInfo;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NativeGraphicsBuffer_1_BufferCopyInfo);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NativeGraphicsBuffer_1_BufferCopyInfo, "Liv.NGFX", "NativeGraphicsBuffer`1/BufferCopyInfo");
// Dependencies Liv.NGFX.EventType, System.IntPtr
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Liv.NGFX.NativeGraphicsBuffer`1/BufferCopyInfo<T>
#pragma pack(push, 1)
struct CORDL_TYPE NativeGraphicsBuffer_1_BufferCopyInfo {
public:
// Declarations
/// @brief Field eventType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_eventType, put=setStaticF_eventType)) ::Liv::NGFX::EventType  eventType;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ctx, uint32_t  src, uint32_t  dst, uint32_t  size) ;

static inline ::Liv::NGFX::EventType getStaticF_eventType() ;

static inline void setStaticF_eventType(::Liv::NGFX::EventType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeGraphicsBuffer_1_BufferCopyInfo() ;

// Ctor Parameters [CppParam { name: "m_context", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_src", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_dst", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_size", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr NativeGraphicsBuffer_1_BufferCopyInfo(::System::IntPtr  m_context, uint32_t  m_src, uint32_t  m_dst, uint32_t  m_size) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24673};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_context, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_context;

/// @brief Field m_src, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_src;

/// @brief Field m_dst, offset: 0xc, size: 0x4, def value: None
 uint32_t  m_dst;

/// @brief Field m_size, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def GlobalNamespace

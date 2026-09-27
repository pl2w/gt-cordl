#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreUnsafeUtils_FixedBufferStringQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreUnsafeUtils_FixedBufferStringQueue)
// Forward declare root types
namespace GlobalNamespace {
struct CoreUnsafeUtils_FixedBufferStringQueue;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue, "UnityEngine.Rendering", "CoreUnsafeUtils/FixedBufferStringQueue");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.CoreUnsafeUtils/FixedBufferStringQueue
struct CORDL_TYPE CoreUnsafeUtils_FixedBufferStringQueue {
public:
// Declarations
 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

/// @brief Method Clear, addr 0xb123354, size 0x1c, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method TryPop, addr 0xb123420, size 0x90, virtual false, abstract: false, final false
inline bool TryPop(::by_ref<::StringW>  v) ;

/// @brief Method TryPush, addr 0xb123370, size 0xb0, virtual false, abstract: false, final false
inline bool TryPush(::StringW  v) ;

/// @brief Method .ctor, addr 0xb123324, size 0x30, virtual false, abstract: false, final false
inline void _ctor(uint8_t*  ptr, int32_t  length) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Count, addr 0xb123314, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// [CompilerGenerated]
/// @brief Method set_Count, addr 0xb12331c, size 0x8, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CoreUnsafeUtils_FixedBufferStringQueue() ;

// Ctor Parameters [CppParam { name: "m_ReadCursor", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_WriteCursor", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BufferEnd", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BufferStart", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BufferLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Count_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CoreUnsafeUtils_FixedBufferStringQueue(uint8_t*  m_ReadCursor, uint8_t*  m_WriteCursor, uint8_t*  m_BufferEnd, uint8_t*  m_BufferStart, int32_t  m_BufferLength, int32_t  _Count_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16610};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ReadCursor, offset: 0x0, size: 0x8, def value: None
 uint8_t*  m_ReadCursor;

/// @brief Field m_WriteCursor, offset: 0x8, size: 0x8, def value: None
 uint8_t*  m_WriteCursor;

/// @brief Field m_BufferEnd, offset: 0x10, size: 0x8, def value: None
 uint8_t*  m_BufferEnd;

/// @brief Field m_BufferStart, offset: 0x18, size: 0x8, def value: None
 uint8_t*  m_BufferStart;

/// @brief Field m_BufferLength, offset: 0x20, size: 0x4, def value: None
 int32_t  m_BufferLength;

/// [CompilerGenerated]
/// @brief Field <Count>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  _Count_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue, m_ReadCursor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue, m_WriteCursor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue, m_BufferEnd) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue, m_BufferStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue, m_BufferLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue, _Count_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

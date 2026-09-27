#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager_Block.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_Range_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AllocatorManager_Block)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct AllocatorManager_Block;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AllocatorManager_Block);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AllocatorManager_Block, "Unity.Collections", "AllocatorManager/Block");
// Dependencies Unity.Collections.AllocatorManager::Range
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/Block
struct CORDL_TYPE AllocatorManager_Block {
public:
// Declarations
 __declspec(property(get=get_Alignment, put=set_Alignment)) int32_t  Alignment;

 __declspec(property(get=get_AllocatedBytes)) int64_t  AllocatedBytes;

 __declspec(property(get=get_Bytes)) int64_t  Bytes;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xaf039f8, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method TryFree, addr 0xaf03a44, size 0x58, virtual false, abstract: false, final false
inline int32_t TryFree() ;

/// @brief Method get_Alignment, addr 0xaf035b4, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Alignment() ;

/// @brief Method get_AllocatedBytes, addr 0xaf039fc, size 0xc, virtual false, abstract: false, final false
inline int64_t get_AllocatedBytes() ;

/// @brief Method get_Bytes, addr 0xaf035a4, size 0x10, virtual false, abstract: false, final false
inline int64_t get_Bytes() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method set_Alignment, addr 0xaf03a08, size 0x3c, virtual false, abstract: false, final false
inline void set_Alignment(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AllocatorManager_Block() ;

// Ctor Parameters [CppParam { name: "Range", ty: "::GlobalNamespace::AllocatorManager_Range", modifiers: "", def_value: None, comment: None }, CppParam { name: "BytesPerItem", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllocatedItems", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Log2Alignment", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Padding0", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Padding1", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Padding2", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr AllocatorManager_Block(::GlobalNamespace::AllocatorManager_Range  Range, int32_t  BytesPerItem, int32_t  AllocatedItems, uint8_t  Log2Alignment, uint8_t  Padding0, uint16_t  Padding1, uint32_t  Padding2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30107};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Range, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::AllocatorManager_Range  Range;

/// @brief Field BytesPerItem, offset: 0x10, size: 0x4, def value: None
 int32_t  BytesPerItem;

/// @brief Field AllocatedItems, offset: 0x14, size: 0x4, def value: None
 int32_t  AllocatedItems;

/// @brief Field Log2Alignment, offset: 0x18, size: 0x1, def value: None
 uint8_t  Log2Alignment;

/// @brief Field Padding0, offset: 0x19, size: 0x1, def value: None
 uint8_t  Padding0;

/// @brief Field Padding1, offset: 0x1a, size: 0x2, def value: None
 uint16_t  Padding1;

/// @brief Field Padding2, offset: 0x1c, size: 0x4, def value: None
 uint32_t  Padding2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AllocatorManager_Block, Range) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AllocatorManager_Block, BytesPerItem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AllocatorManager_Block, AllocatedItems) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AllocatorManager_Block, Log2Alignment) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AllocatorManager_Block, Padding0) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AllocatorManager_Block, Padding1) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AllocatorManager_Block, Padding2) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AllocatorManager_Block) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

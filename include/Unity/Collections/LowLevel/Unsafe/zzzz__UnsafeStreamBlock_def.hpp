#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeStreamBlock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStreamBlock__Data_e__FixedBuffer_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UnsafeStreamBlock)
namespace GlobalNamespace {
struct UnsafeStreamBlock__Data_e__FixedBuffer;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStreamBlock;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock);
DEFINE_IL2CPP_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock, "Unity.Collections.LowLevel.Unsafe", "UnsafeStreamBlock");
// [GenerateTestsForBurstCompatibility]
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock::<Data>e__FixedBuffer
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct CORDL_TYPE UnsafeStreamBlock {
public:
// Declarations
using _Data_e__FixedBuffer = ::GlobalNamespace::UnsafeStreamBlock__Data_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeStreamBlock() ;

// Ctor Parameters [CppParam { name: "Next", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Data", ty: "::GlobalNamespace::UnsafeStreamBlock__Data_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeStreamBlock(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*  Next, ::GlobalNamespace::UnsafeStreamBlock__Data_e__FixedBuffer  Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30249};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Next, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*  Next;

/// [FixedBuffer(typeof(System.Byte), 1)]
/// @brief Field Data, offset: 0x8, size: 0x1, def value: None
 ::GlobalNamespace::UnsafeStreamBlock__Data_e__FixedBuffer  Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock, Next) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock, Data) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections::LowLevel::Unsafe

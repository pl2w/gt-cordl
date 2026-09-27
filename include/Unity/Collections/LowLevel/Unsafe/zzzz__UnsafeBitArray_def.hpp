#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeBitArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeBitArray)
namespace GlobalNamespace {
struct AllocatorManager_AllocatorHandle;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeBitArray;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray);
DEFINE_IL2CPP_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, "Unity.Collections.LowLevel.Unsafe", "UnsafeBitArray");
// [DebuggerDisplay("Length = {Length}, IsCreated = {IsCreated}")]
// [DebuggerTypeProxy(typeof(Unity.Collections.LowLevel.Unsafe.UnsafeBitArrayDebugView))]
// [GenerateTestsForBurstCompatibility]
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeBitArray
struct CORDL_TYPE UnsafeBitArray {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xaf07a48, size 0x98, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Free, addr 0xaf06cb0, size 0xa4, virtual false, abstract: false, final false
static inline void Free(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray*  data, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

/// [IsReadOnly]
/// @brief Method get_IsCreated, addr 0xaf07ae0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeBitArray() ;

// Ctor Parameters [CppParam { name: "Ptr", ty: "uint64_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Allocator", ty: "::GlobalNamespace::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeBitArray(uint64_t*  Ptr, int32_t  Length, int32_t  Capacity, ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30223};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
 uint64_t*  Ptr;

/// @brief Field Length, offset: 0x8, size: 0x4, def value: None
 int32_t  Length;

/// @brief Field Capacity, offset: 0xc, size: 0x4, def value: None
 int32_t  Capacity;

/// @brief Field Allocator, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, Ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, Length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, Capacity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, Allocator) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray) == 0x18, "Size mismatch!");

} // namespace end def Unity::Collections::LowLevel::Unsafe

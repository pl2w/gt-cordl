#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeAppendBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeAppendBuffer)
namespace GlobalNamespace {
struct AllocatorManager_AllocatorHandle;
}
namespace GlobalNamespace {
struct UnsafeAppendBuffer_Reader;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer);
DEFINE_IL2CPP_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer, "Unity.Collections.LowLevel.Unsafe", "UnsafeAppendBuffer");
// [GenerateTestsForBurstCompatibility]
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer
struct CORDL_TYPE UnsafeAppendBuffer {
public:
// Declarations
using Reader = ::GlobalNamespace::UnsafeAppendBuffer_Reader;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Add(T  value) ;

/// @brief Method AsReader, addr 0xaf07984, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::UnsafeAppendBuffer_Reader AsReader() ;

/// @brief Method Dispose, addr 0xaf078e8, size 0x94, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Reset, addr 0xaf0797c, size 0x8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetCapacity, addr 0xaf07814, size 0xc4, virtual false, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method .ctor, addr 0xaf07800, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int32_t  initialCapacity, int32_t  alignment, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

/// [IsReadOnly]
/// @brief Method get_IsCreated, addr 0xaf078d8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeAppendBuffer() ;

// Ctor Parameters [CppParam { name: "Ptr", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Allocator", ty: "::GlobalNamespace::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "Alignment", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeAppendBuffer(uint8_t*  Ptr, int32_t  Length, int32_t  Capacity, ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator, int32_t  Alignment) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30221};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
 uint8_t*  Ptr;

/// @brief Field Length, offset: 0x8, size: 0x4, def value: None
 int32_t  Length;

/// @brief Field Capacity, offset: 0xc, size: 0x4, def value: None
 int32_t  Capacity;

/// @brief Field Allocator, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator;

/// @brief Field Alignment, offset: 0x14, size: 0x4, def value: None
 int32_t  Alignment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer, Ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer, Length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer, Capacity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer, Allocator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer, Alignment) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer) == 0x18, "Size mismatch!");

} // namespace end def Unity::Collections::LowLevel::Unsafe

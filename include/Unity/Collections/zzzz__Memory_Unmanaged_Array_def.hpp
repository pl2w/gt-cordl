#pragma once
// IWYU pragma private; include "Unity/Collections/Memory_Unmanaged_Array.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Memory_Unmanaged_Array)
namespace GlobalNamespace {
struct AllocatorManager_AllocatorHandle;
}
// Forward declare root types
namespace GlobalNamespace {
struct Unmanaged_Memory_Array;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Unmanaged_Memory_Array);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Unmanaged_Memory_Array, "Unity.Collections", "Memory/Unmanaged/Array");
// [GenerateTestsForBurstCompatibility]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Collections.Memory/Unmanaged/Array
#pragma pack(push, 0)
struct CORDL_TYPE Unmanaged_Memory_Array {
public:
// Declarations
/// @brief Method CustomResize, addr 0xaf06bb4, size 0xec, virtual false, abstract: false, final false
static inline void* CustomResize(void*  oldPointer, int64_t  oldCount, int64_t  newCount, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator, int64_t  size, int32_t  align) ;

/// @brief Method IsCustom, addr 0xaf06ba8, size 0xc, virtual false, abstract: false, final false
static inline bool IsCustom(::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
/// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* Resize(T*  oldPointer, int64_t  oldCount, int64_t  newCount, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method Resize, addr 0xaf06ac8, size 0xe0, virtual false, abstract: false, final false
static inline void* Resize(void*  oldPointer, int64_t  oldCount, int64_t  newCount, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator, int64_t  size, int32_t  align) ;

// Ctor Parameters []
// @brief default ctor
constexpr Unmanaged_Memory_Array() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30153};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Unmanaged_Memory_Array) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace

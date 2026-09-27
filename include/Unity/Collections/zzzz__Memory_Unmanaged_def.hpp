#pragma once
// IWYU pragma private; include "Unity/Collections/Memory_Unmanaged.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Memory_Unmanaged)
namespace GlobalNamespace {
struct AllocatorManager_AllocatorHandle;
}
namespace GlobalNamespace {
struct Unmanaged_Memory_Array;
}
// Forward declare root types
namespace GlobalNamespace {
struct Memory_Unmanaged;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Memory_Unmanaged);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Memory_Unmanaged, "Unity.Collections", "Memory/Unmanaged");
// [GenerateTestsForBurstCompatibility]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Collections.Memory/Unmanaged
#pragma pack(push, 0)
struct CORDL_TYPE Memory_Unmanaged {
public:
// Declarations
using Array = ::GlobalNamespace::Unmanaged_Memory_Array;

/// @brief Method Allocate, addr 0xaf035cc, size 0x1c, virtual false, abstract: false, final false
static inline void* Allocate(int64_t  size, int32_t  align, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
/// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Free(T*  pointer, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method Free, addr 0xaf035e8, size 0x20, virtual false, abstract: false, final false
static inline void Free(void*  pointer, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

// Ctor Parameters []
// @brief default ctor
constexpr Memory_Unmanaged() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30154};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Memory_Unmanaged) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace

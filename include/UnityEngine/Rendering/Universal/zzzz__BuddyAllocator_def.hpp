#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/BuddyAllocator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuddyAllocator)
namespace GlobalNamespace {
struct BuddyAllocator_Header;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering::Universal {
struct BuddyAllocation;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct BuddyAllocator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::BuddyAllocator);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::BuddyAllocator, "UnityEngine.Rendering.Universal", "BuddyAllocator");
// Dependencies System.ValueTuple`2<T1, T2>, Unity.Collections.Allocator
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.BuddyAllocator
struct CORDL_TYPE BuddyAllocator {
public:
// Declarations
using Header = ::GlobalNamespace::BuddyAllocator_Header;

 __declspec(property(get=get_freeMaskCounts)) ::Unity::Collections::NativeArray_1<int32_t>  freeMaskCounts;

 __declspec(property(get=get_freeMaskIndicesStorage)) ::Unity::Collections::NativeArray_1<int32_t>  freeMaskIndicesStorage;

 __declspec(property(get=get_freeMasksStorage)) ::Unity::Collections::NativeArray_1<uint64_t>  freeMasksStorage;

 __declspec(property(get=get_header)) ::GlobalNamespace::BuddyAllocator_Header  header;

 __declspec(property(get=get_levelCount)) int32_t  levelCount;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AlignForward, addr 0xb2587b0, size 0x1c, virtual false, abstract: false, final false
static inline int32_t AlignForward(int32_t  offset, int32_t  alignment) ;

/// @brief Method AllocateRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::System::ValueTuple_2<int32_t,int32_t> AllocateRange(int32_t  length, ::by_ref<int32_t>  dataSize) ;

/// @brief Method Dispose, addr 0xb258748, size 0x28, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Free, addr 0xb2585e8, size 0x160, virtual false, abstract: false, final false
inline void Free(::UnityEngine::Rendering::Universal::BuddyAllocation  allocation) ;

/// @brief Method FreeMaskIndices, addr 0xb258160, size 0xdc, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> FreeMaskIndices(int32_t  level) ;

/// @brief Method FreeMasks, addr 0xb257fdc, size 0xdc, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<uint64_t> FreeMasks(int32_t  level) ;

/// @brief Method GetNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> GetNativeArray(int32_t  offset, int32_t  length) ;

/// @brief Method LevelLength, addr 0xb258790, size 0x10, virtual false, abstract: false, final false
static inline int32_t LevelLength(int32_t  level, int32_t  branchingOrder) ;

/// @brief Method LevelLength64, addr 0xb2580f0, size 0x24, virtual false, abstract: false, final false
static inline int32_t LevelLength64(int32_t  level, int32_t  branchingOrder) ;

/// @brief Method LevelOffset, addr 0xb258770, size 0x20, virtual false, abstract: false, final false
static inline int32_t LevelOffset(int32_t  level, int32_t  branchingOrder) ;

/// @brief Method LevelOffset64, addr 0xb2580b8, size 0x38, virtual false, abstract: false, final false
static inline int32_t LevelOffset64(int32_t  level, int32_t  branchingOrder) ;

/// @brief Method Pow2, addr 0xb2585dc, size 0xc, virtual false, abstract: false, final false
static inline int32_t Pow2(int32_t  n) ;

/// @brief Method Pow2N, addr 0xb2587a0, size 0x10, virtual false, abstract: false, final false
static inline int32_t Pow2N(int32_t  x, int32_t  n) ;

/// @brief Method PtrAdd, addr 0xb2587cc, size 0x28, virtual false, abstract: false, final false
static inline void* PtrAdd(void*  ptr, int32_t  bytes) ;

/// @brief Method TryAllocate, addr 0xb2583dc, size 0x200, virtual false, abstract: false, final false
inline bool TryAllocate(int32_t  requestedLevel, ::by_ref<::UnityEngine::Rendering::Universal::BuddyAllocation>  allocation) ;

/// @brief Method .ctor, addr 0xb25827c, size 0x160, virtual false, abstract: false, final false
inline void _ctor(int32_t  levelCount, int32_t  branchingOrder, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method get_freeMaskCounts, addr 0xb257f44, size 0x4c, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_freeMaskCounts() ;

/// @brief Method get_freeMaskIndicesStorage, addr 0xb258114, size 0x4c, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_freeMaskIndicesStorage() ;

/// @brief Method get_freeMasksStorage, addr 0xb257f90, size 0x4c, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<uint64_t> get_freeMasksStorage() ;

/// @brief Method get_header, addr 0xb257f08, size 0x3c, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::BuddyAllocator_Header> get_header() ;

/// @brief Method get_levelCount, addr 0xb25823c, size 0x40, virtual false, abstract: false, final false
inline int32_t get_levelCount() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr BuddyAllocator() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ActiveFreeMaskCounts", ty: "::System::ValueTuple_2<int32_t,int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_FreeMasksStorage", ty: "::System::ValueTuple_2<int32_t,int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_FreeMaskIndicesStorage", ty: "::System::ValueTuple_2<int32_t,int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None, comment: None }]
constexpr BuddyAllocator(void*  m_Data, ::System::ValueTuple_2<int32_t,int32_t>  m_ActiveFreeMaskCounts, ::System::ValueTuple_2<int32_t,int32_t>  m_FreeMasksStorage, ::System::ValueTuple_2<int32_t,int32_t>  m_FreeMaskIndicesStorage, ::Unity::Collections::Allocator  m_Allocator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18422};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
 void*  m_Data;

/// @brief Field m_ActiveFreeMaskCounts, offset: 0x8, size: 0x10, def value: None
 ::System::ValueTuple_2<int32_t,int32_t>  m_ActiveFreeMaskCounts;

/// @brief Field m_FreeMasksStorage, offset: 0x18, size: 0x10, def value: None
 ::System::ValueTuple_2<int32_t,int32_t>  m_FreeMasksStorage;

/// @brief Size padding 0x28 - 0x40 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

/// @brief Field m_FreeMaskIndicesStorage, offset: 0x28, size: 0x10, def value: None
 ::System::ValueTuple_2<int32_t,int32_t>  m_FreeMaskIndicesStorage;

/// @brief Field m_Allocator, offset: 0x38, size: 0x4, def value: None
 ::Unity::Collections::Allocator  m_Allocator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocator, m_Data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocator, m_ActiveFreeMaskCounts) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocator, m_FreeMasksStorage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocator, m_FreeMaskIndicesStorage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocator, m_Allocator) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::BuddyAllocator) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal

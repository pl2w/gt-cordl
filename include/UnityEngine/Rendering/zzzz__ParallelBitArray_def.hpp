#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ParallelBitArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParallelBitArray)
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ParallelBitArray;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ParallelBitArray);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ParallelBitArray, "UnityEngine.Rendering", "ParallelBitArray");
// Dependencies Unity.Collections.Allocator, Unity.Collections.NativeArray`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ParallelBitArray
struct CORDL_TYPE ParallelBitArray {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Method Dispose, addr 0xb212fd8, size 0x50, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Get, addr 0xb2074e8, size 0x68, virtual false, abstract: false, final false
inline bool Get(int32_t  index) ;

/// @brief Method GetChunk, addr 0xb2074dc, size 0xc, virtual false, abstract: false, final false
inline uint64_t GetChunk(int32_t  chunk_index) ;

/// @brief Method GetSubArray, addr 0xb213270, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ParallelBitArray GetSubArray(int32_t  length) ;

/// @brief Method InterlockedOrChunk, addr 0xb2131e4, size 0x8c, virtual false, abstract: false, final false
inline void InterlockedOrChunk(int32_t  chunk_index, uint64_t  chunk_bits) ;

/// @brief Method Resize, addr 0xb213028, size 0x1bc, virtual false, abstract: false, final false
inline void Resize(int32_t  newLength) ;

/// @brief Method Set, addr 0xb207bfc, size 0xa8, virtual false, abstract: false, final false
inline void Set(int32_t  index, bool  value) ;

/// @brief Method SetChunk, addr 0xb207550, size 0xc, virtual false, abstract: false, final false
inline void SetChunk(int32_t  chunk_index, uint64_t  chunk_bits) ;

/// @brief Method .ctor, addr 0xb212f38, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method get_IsCreated, addr 0xb212ef4, size 0x44, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_Length, addr 0xb212eec, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParallelBitArray() ;

// Ctor Parameters [CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Bits", ty: "::Unity::Collections::NativeArray_1<int64_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ParallelBitArray(::Unity::Collections::Allocator  m_Allocator, ::Unity::Collections::NativeArray_1<int64_t>  m_Bits, int32_t  m_Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26727};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Allocator, offset: 0x0, size: 0x4, def value: None
 ::Unity::Collections::Allocator  m_Allocator;

/// @brief Field m_Bits, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int64_t>  m_Bits;

/// @brief Field m_Length, offset: 0x18, size: 0x4, def value: None
 int32_t  m_Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ParallelBitArray, m_Allocator) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelBitArray, m_Bits) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelBitArray, m_Length) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ParallelBitArray) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering

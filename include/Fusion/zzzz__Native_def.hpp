#pragma once
// IWYU pragma private; include "Fusion/Native.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Native)
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class Native;
}
// Write type traits
MARK_REF_T(::Fusion::Native*);
DEFINE_IL2CPP_CLASS(::Fusion::Native*, "Fusion", "Native");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Native
class CORDL_TYPE Native : public ::System::Object {
public:
// Declarations
/// @brief Method CopyFromArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t CopyFromArray(void*  destination, ::ArrayW<T>  source) ;

/// @brief Method CopyToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t CopyToArray(::ArrayW<T>  destination, void*  source) ;

/// @brief Method DoublePtrArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* DoublePtrArray(T*  array, int32_t  currentLength) ;

/// @brief Method ExpandPtrArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* ExpandPtrArray(T*  array, int32_t  currentLength, int32_t  newLength) ;

/// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Free(::by_ref<T*>  memory) ;

/// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Free(::by_ref<T*>  memory) ;

/// @brief Method Free, addr 0x5f3f48c, size 0x20, virtual false, abstract: false, final false
static inline void Free(::by_ref<void*>  memory) ;

/// @brief Method Free, addr 0x5f3f470, size 0x14, virtual false, abstract: false, final false
static inline void Free(void*  memory) ;

/// @brief Method GetLengthPrefixedUTF8ByteCount, addr 0x5f3f520, size 0x34, virtual false, abstract: false, final false
static inline int32_t GetLengthPrefixedUTF8ByteCount(::StringW  str) ;

/// @brief Method IsPointerAligned, addr 0x5f3f6a4, size 0x18, virtual false, abstract: false, final false
static inline bool IsPointerAligned(void*  pointer, int32_t  alignment) ;

/// @brief Method Malloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* Malloc() ;

/// @brief Method Malloc, addr 0x5f3f394, size 0xdc, virtual false, abstract: false, final false
static inline void* Malloc(int32_t  size) ;

/// @brief Method MallocAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* MallocAndClear() ;

/// @brief Method MallocAndClear, addr 0x5f3f4ac, size 0x38, virtual false, abstract: false, final false
static inline void* MallocAndClear(int32_t  size) ;

/// @brief Method MallocAndClearArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* MallocAndClearArray(int32_t  length) ;

/// @brief Method MallocAndClearArray, addr 0x5f3f4e4, size 0x3c, virtual false, abstract: false, final false
static inline void* MallocAndClearArray(int32_t  stride, int32_t  length) ;

/// @brief Method MallocAndClearBlock, addr 0x5f3f7d4, size 0x9c, virtual false, abstract: false, final false
static inline int32_t MallocAndClearBlock(int32_t  size0, int32_t  size1, ::by_ref<void*>  ptr0, ::by_ref<void*>  ptr1, int32_t  alignment) ;

/// @brief Method MallocAndClearPtrArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* MallocAndClearPtrArray(int32_t  length) ;

/// @brief Method MemClear, addr 0x5f3f364, size 0x14, virtual false, abstract: false, final false
static inline void MemClear(void*  ptr, int32_t  size) ;

/// @brief Method MemCmp, addr 0x5f3f378, size 0x1c, virtual false, abstract: false, final false
static inline int32_t MemCmp(void*  ptr1, void*  ptr2, int32_t  size) ;

/// @brief Method MemCpy, addr 0x5f3f188, size 0xf0, virtual false, abstract: false, final false
static inline void MemCpy(::System::Span_1<int32_t>  d, ::System::Span_1<int32_t>  s) ;

/// @brief Method MemCpy, addr 0x5f3f278, size 0xec, virtual false, abstract: false, final false
static inline void MemCpy(::System::Span_1<uint8_t>  d, ::System::Span_1<uint8_t>  s) ;

/// @brief Method MemCpy, addr 0x5f3f170, size 0x18, virtual false, abstract: false, final false
static inline void MemCpy(void*  destination, void*  source, int32_t  size) ;

/// @brief Method MemMove, addr 0x5f3f158, size 0x18, virtual false, abstract: false, final false
static inline void MemMove(void*  destination, void*  source, int32_t  size) ;

/// @brief Method ReadLengthPrefixedUTF8, addr 0x5f3f650, size 0x54, virtual false, abstract: false, final false
static inline int32_t ReadLengthPrefixedUTF8(void*  source, ::by_ref<::StringW>  result) ;

/// @brief Method ReferenceToPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline uint8_t* ReferenceToPointer(::by_ref<T>  obj) ;

/// @brief Method RoundToAlignment, addr 0x5f3f6c8, size 0xf4, virtual false, abstract: false, final false
static inline int32_t RoundToAlignment(int32_t  stride, int32_t  alignment) ;

/// @brief Method RoundToMaxAlignment, addr 0x5f3f6bc, size 0xc, virtual false, abstract: false, final false
static inline int32_t RoundToMaxAlignment(int32_t  stride) ;

/// @brief Method SizeOf, addr 0x5f3f484, size 0x8, virtual false, abstract: false, final false
static inline int32_t SizeOf(::System::Type*  t) ;

/// @brief Method WordCount, addr 0x5f3f7bc, size 0x18, virtual false, abstract: false, final false
static inline int32_t WordCount(int32_t  stride, int32_t  wordSize) ;

/// @brief Method WriteLengthPrefixedUTF8, addr 0x5f3f554, size 0xfc, virtual false, abstract: false, final false
static inline int32_t WriteLengthPrefixedUTF8(void*  destination, ::StringW  str) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Native() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Native(Native && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Native(Native const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31306};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Native) == 0x10, "Size mismatch!");

} // namespace end def Fusion

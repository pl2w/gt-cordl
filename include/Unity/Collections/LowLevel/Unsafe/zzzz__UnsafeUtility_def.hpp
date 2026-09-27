#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeUtility)
namespace GlobalNamespace {
template<typename T>
struct UnsafeUtility_AlignOfHelper_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
struct LeakCategory;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class UnsafeUtility;
}
// Write type traits
MARK_REF_T(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility");
// [NativeHeader("Runtime/Export/Unsafe/UnsafeUtility.bindings.h")]
// [StaticAccessor("UnsafeUtility", (UnityEngine.Bindings.StaticAccessorType)2)]
// Dependencies System.IConvertible, System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeUtility
class CORDL_TYPE UnsafeUtility : public ::System::Object {
public:
// Declarations
template<typename T>
using AlignOfHelper_1 = ::GlobalNamespace::UnsafeUtility_AlignOfHelper_1<T>;

/// @brief Method AddressOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void* AddressOf(::by_ref<T>  output) ;

/// @brief Method AlignOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t AlignOf() ;

/// @brief Method ArrayElementAsRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::by_ref<T> ArrayElementAsRef(void*  ptr, int32_t  index) ;

/// @brief Method As, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U,typename T>
static inline ::by_ref<T> As(::by_ref<U>  from) ;

/// @brief Method As, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
static inline T As(::System::Object*  from) ;

/// @brief Method AsRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::by_ref<T> AsRef(void*  ptr) ;

/// @brief Method CopyPtrToStructure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void CopyPtrToStructure(void*  ptr, ::by_ref<T>  output) ;

/// @brief Method CopyStructureToPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void CopyStructureToPtr(::by_ref<T>  input, void*  ptr) ;

/// @brief Method EnumEquals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline bool EnumEquals(T  lhs, T  rhs) ;

/// @brief Method EnumToInt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t EnumToInt(T  enumValue) ;

/// [ThreadSafe(ThrowsException = true)]
/// @brief Method Free, addr 0xb55fc90, size 0x44, virtual false, abstract: false, final false
static inline void Free(void*  memory, ::Unity::Collections::Allocator  allocator) ;

/// [ThreadSafe(ThrowsException = true)]
/// @brief Method FreeTracked, addr 0xb55f7b0, size 0x44, virtual false, abstract: false, final false
static inline void FreeTracked(void*  memory, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetFieldOffset, addr 0xb55fa94, size 0xb4, virtual false, abstract: false, final false
static inline int32_t GetFieldOffset(::System::Reflection::FieldInfo*  field) ;

/// [ThreadSafe]
/// @brief Method GetFieldOffsetInClass, addr 0xb55fa58, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetFieldOffsetInClass(::System::Reflection::FieldInfo*  field) ;

/// [ThreadSafe]
/// @brief Method GetFieldOffsetInStruct, addr 0xb55fa1c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetFieldOffsetInStruct(::System::Reflection::FieldInfo*  field) ;

/// @brief Method GetReasonForArrayNonBlittable, addr 0xb56018c, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW GetReasonForArrayNonBlittable(::System::Array*  arr) ;

/// @brief Method GetReasonForGenericListNonBlittable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::StringW GetReasonForGenericListNonBlittable() ;

/// @brief Method GetReasonForTypeNonBlittableImpl, addr 0xb55ffa0, size 0x1bc, virtual false, abstract: false, final false
static inline ::StringW GetReasonForTypeNonBlittableImpl(::System::Type*  t, ::StringW  name) ;

/// @brief Method InternalCopyPtrToStructure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void InternalCopyPtrToStructure(void*  ptr, ::by_ref<T>  output) ;

/// @brief Method InternalCopyStructureToPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void InternalCopyStructureToPtr(::by_ref<T>  input, void*  ptr) ;

/// @brief Method InternalEnumToInt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void InternalEnumToInt(::by_ref<T>  enumValue, ::by_ref<int32_t>  intValue) ;

/// @brief Method IsArrayBlittable, addr 0xb56015c, size 0x30, virtual false, abstract: false, final false
static inline bool IsArrayBlittable(::System::Array*  arr) ;

/// @brief Method IsBlittable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline bool IsBlittable() ;

/// [ThreadSafe]
/// @brief Method IsBlittable, addr 0xb55fec8, size 0x3c, virtual false, abstract: false, final false
static inline bool IsBlittable(::System::Type*  type) ;

/// @brief Method IsBlittableValueType, addr 0xb55ff40, size 0x60, virtual false, abstract: false, final false
static inline bool IsBlittableValueType(::System::Type*  t) ;

/// @brief Method IsGenericListBlittable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline bool IsGenericListBlittable() ;

/// [ThreadSafe]
/// @brief Method IsUnmanaged, addr 0xb55ff04, size 0x3c, virtual false, abstract: false, final false
static inline bool IsUnmanaged(::System::Type*  type) ;

/// [ThreadSafe(ThrowsException = false)]
/// [VisibleToOtherModules(new[] { "UnityEngine.AIModule" })]
/// [BurstAuthorizedExternalMethod]
/// @brief Method LeakErase, addr 0xb55fb9c, size 0x44, virtual false, abstract: false, final false
static inline int32_t LeakErase(::System::IntPtr  handle, ::Unity::Collections::LeakCategory  category) ;

/// [BurstAuthorizedExternalMethod]
/// [ThreadSafe(ThrowsException = false)]
/// [VisibleToOtherModules(new[] { "UnityEngine.AIModule" })]
/// @brief Method LeakRecord, addr 0xb55fb48, size 0x54, virtual false, abstract: false, final false
static inline int32_t LeakRecord(::System::IntPtr  handle, ::Unity::Collections::LeakCategory  category, int32_t  callstacksToSkip) ;

/// [ThreadSafe(ThrowsException = true)]
/// @brief Method Malloc, addr 0xb55fc3c, size 0x54, virtual false, abstract: false, final false
static inline void* Malloc(int64_t  size, int32_t  alignment, ::Unity::Collections::Allocator  allocator) ;

/// [ThreadSafe(ThrowsException = true)]
/// @brief Method MallocTracked, addr 0xb55fbe0, size 0x5c, virtual false, abstract: false, final false
static inline void* MallocTracked(int64_t  size, int32_t  alignment, ::Unity::Collections::Allocator  allocator, int32_t  callstacksToSkip) ;

/// @brief Method MemClear, addr 0xb55fdf0, size 0x48, virtual false, abstract: false, final false
static inline void MemClear(void*  destination, int64_t  size) ;

/// [ThreadSafe(ThrowsException = true)]
/// @brief Method MemCmp, addr 0xb55fe38, size 0x54, virtual false, abstract: false, final false
static inline int32_t MemCmp(void*  ptr1, void*  ptr2, int64_t  size) ;

/// [ThreadSafe(ThrowsException = true)]
/// @brief Method MemCpy, addr 0xb55e6d4, size 0x54, virtual false, abstract: false, final false
static inline void MemCpy(void*  destination, void*  source, int64_t  size) ;

/// [ThreadSafe(ThrowsException = true)]
/// @brief Method MemCpyStride, addr 0xb55fcd4, size 0x74, virtual false, abstract: false, final false
static inline void MemCpyStride(void*  destination, int32_t  destinationStride, void*  source, int32_t  sourceStride, int32_t  elementSize, int32_t  count) ;

/// [ThreadSafe(ThrowsException = true)]
/// @brief Method MemMove, addr 0xb55fd48, size 0x54, virtual false, abstract: false, final false
static inline void MemMove(void*  destination, void*  source, int64_t  size) ;

/// [ThreadSafe(ThrowsException = true)]
/// @brief Method MemSet, addr 0xb55fd9c, size 0x54, virtual false, abstract: false, final false
static inline void MemSet(void*  destination, uint8_t  value, int64_t  size) ;

/// @brief Method ReadArrayElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T ReadArrayElement(void*  source, int32_t  index) ;

/// @brief Method ReadArrayElementWithStride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T ReadArrayElementWithStride(void*  source, int32_t  index, int32_t  stride) ;

/// @brief Method SizeOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t SizeOf() ;

/// [ThreadSafe]
/// @brief Method SizeOf, addr 0xb55fe8c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t SizeOf(::System::Type*  type) ;

/// @brief Method WriteArrayElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void WriteArrayElement(void*  destination, int32_t  index, T  value) ;

/// @brief Method WriteArrayElementWithStride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void WriteArrayElementWithStride(void*  destination, int32_t  index, int32_t  stride, T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeUtility(UnsafeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeUtility(UnsafeUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14754};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections::LowLevel::Unsafe

#pragma once
// IWYU pragma private; include "Unity/Collections/NativeArray_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeArray_1)
namespace GlobalNamespace {
template<typename T>
struct NativeArray_1_Enumerator;
}
namespace GlobalNamespace {
template<typename T>
struct NativeArray_1_ReadOnly;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeArray_1);
DEFINE_IL2CPP_GEN_CLASS(::Unity::Collections::NativeArray_1, "Unity.Collections", "NativeArray`1");
// [DebuggerDisplay("Length = {m_Length}")]
// [NativeContainerSupportsDeferredConvertListToArray]
// [NativeContainerSupportsDeallocateOnJobCompletion]
// [DebuggerTypeProxy(typeof(Unity.Collections.NativeArrayDebugView`1<T>))]
// [NativeContainerSupportsMinMaxWriteRestriction]
// [DefaultMember("Item")]
// [NativeContainer]
// Dependencies Unity.Collections.Allocator
namespace Unity::Collections {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeArray`1<T>
struct CORDL_TYPE NativeArray_1 {
public:
// Declarations
using Enumerator = ::GlobalNamespace::NativeArray_1_Enumerator<T>;

using ReadOnly = ::GlobalNamespace::NativeArray_1_ReadOnly<T>;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>*() ;

/// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<T>>  array) ;

/// @brief Method AsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NativeArray_1_ReadOnly<T> AsReadOnly() ;

/// [IsReadOnly]
/// @brief Method AsReadOnlySpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<T> AsReadOnlySpan() ;

/// [IsReadOnly]
/// [WriteAccessRequired]
/// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Span_1<T> AsSpan() ;

/// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Copy(::ArrayW<T>  src, ::Unity::Collections::NativeArray_1<T>  dst) ;

/// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Copy(::ArrayW<T>  src, ::Unity::Collections::NativeArray_1<T>  dst, int32_t  length) ;

/// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Copy(::ArrayW<T>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<T>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Copy(::Unity::Collections::NativeArray_1<T>  src, ::ArrayW<T>  dst) ;

/// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Copy(::Unity::Collections::NativeArray_1<T>  src, ::ArrayW<T>  dst, int32_t  length) ;

/// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Copy(::Unity::Collections::NativeArray_1<T>  src, ::Unity::Collections::NativeArray_1<T>  dst) ;

/// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Copy(::Unity::Collections::NativeArray_1<T>  src, ::Unity::Collections::NativeArray_1<T>  dst, int32_t  length) ;

/// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Copy(::Unity::Collections::NativeArray_1<T>  src, int32_t  srcIndex, ::ArrayW<T>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Copy(::Unity::Collections::NativeArray_1<T>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<T>  dst, int32_t  dstIndex, int32_t  length) ;

/// [WriteAccessRequired]
/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyFrom(::ArrayW<T>  array) ;

/// [WriteAccessRequired]
/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<T>  array) ;

/// @brief Method CopySafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void CopySafe(::ArrayW<T>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<T>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method CopySafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void CopySafe(::Unity::Collections::NativeArray_1<T>  src, int32_t  srcIndex, ::ArrayW<T>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method CopySafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void CopySafe(::Unity::Collections::NativeArray_1<T>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<T>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<T>  array) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// [WriteAccessRequired]
/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::NativeArray_1<T>  other) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NativeArray_1_Enumerator<T> GetEnumerator() ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetSubArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<T> GetSubArray(int32_t  start, int32_t  length) ;

/// @brief Method InternalReinterpret, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U>
requires(::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U>
requires(::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
inline ::Unity::Collections::NativeArray_1<U> Reinterpret() ;

/// @brief Method Reinterpret, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U>
requires(::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> ToArray() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<T>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::NativeArray_1<T>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>"
constexpr ::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>* i___System__IEquatable_1___Unity__Collections__NativeArray_1_T__() ;

/// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Equality(::Unity::Collections::NativeArray_1<T>  left, ::Unity::Collections::NativeArray_1<T>  right) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<T> op_Implicit___System__ReadOnlySpan_1_T_(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<T>>  source) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Span_1<T> op_Implicit___System__Span_1_T_(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<T>>  source) ;

/// [WriteAccessRequired]
/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeArray_1() ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None, comment: None }]
constexpr NativeArray_1(void*  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14725};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [VisibleToOtherModules(new[] { "UnityEngine.ContentLoadModule", "UnityEngine.TilemapModule" })]
/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
 void*  m_Buffer;

/// @brief Field m_Length, offset: 0x8, size: 0x4, def value: None
 int32_t  m_Length;

/// @brief Field m_AllocatorLabel, offset: 0xc, size: 0x4, def value: None
 ::Unity::Collections::Allocator  m_AllocatorLabel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections

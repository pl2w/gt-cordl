#pragma once
// IWYU pragma private; include "Unity/Collections/NativeList_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeList_1)
namespace GlobalNamespace {
struct AllocatorManager_AllocatorHandle;
}
namespace GlobalNamespace {
template<typename T>
struct NativeArray_1_Enumerator;
}
namespace GlobalNamespace {
template<typename T>
struct NativeList_1_ParallelWriter;
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
namespace Unity::Collections::LowLevel::Unsafe {
template<typename T>
struct UnsafeList_1;
}
namespace Unity::Collections {
template<typename T>
class IIndexable_1;
}
namespace Unity::Collections {
template<typename T>
class INativeList_1;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeList_1);
DEFINE_IL2CPP_GEN_CLASS(::Unity::Collections::NativeList_1, "Unity.Collections", "NativeList`1");
// [DefaultMember("Item")]
// [NativeContainer]
// [DebuggerDisplay("Length = {m_ListData == null ? default : m_ListData->Length}, Capacity = {m_ListData == null ? default : m_ListData->Capacity}")]
// [DebuggerTypeProxy(typeof(Unity.Collections.NativeListDebugView`1<T>))]
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
// Dependencies Unity.Collections.AllocatorManager::IAllocator
namespace Unity::Collections {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeList`1<T>
struct CORDL_TYPE NativeList_1 {
public:
// Declarations
using ParallelWriter = ::GlobalNamespace::NativeList_1_ParallelWriter<T>;

 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

 __declspec(property(get=get_Length, put=set_Length)) int32_t  Length;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
constexpr operator  ::Unity::Collections::IIndexable_1<T>*() ;

/// @brief Convert operator to "::Unity::Collections::INativeList_1<T>"
constexpr operator  ::Unity::Collections::INativeList_1<T>*() ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(/* [IsReadOnly] */ ::by_ref<T>  value) ;

/// @brief Method AddNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddNoResize(T  value) ;

/// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddRange(::Unity::Collections::NativeArray_1<T>  array) ;

/// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddRange(void*  ptr, int32_t  count) ;

/// @brief Method AsArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<T> AsArray() ;

/// @brief Method AsDeferredJobArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<T> AsDeferredJobArray() ;

/// @brief Method AsParallelWriter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NativeList_1_ParallelWriter<T> AsParallelWriter() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method ElementAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::by_ref<T> ElementAt(int32_t  index) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NativeArray_1_Enumerator<T> GetEnumerator() ;

/// @brief Method GetUnsafeList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* GetUnsafeList() ;

/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.AllocatorManager::AllocatorHandle) })]
/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U>
requires(::cordl_internals::type_constraint<U, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
inline void Initialize(int32_t  initialCapacity, ::by_ref<U>  allocator) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveAtSwapBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveAtSwapBack(int32_t  index) ;

/// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Resize(int32_t  length, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method ResizeUninitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ResizeUninitialized(int32_t  length) ;

/// @brief Method SetCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  initialCapacity, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

/// [IsReadOnly]
/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Capacity() ;

/// [IsReadOnly]
/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// [IsReadOnly]
/// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsEmpty() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Item(int32_t  index) ;

/// [IsReadOnly]
/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Length() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
constexpr ::Unity::Collections::IIndexable_1<T>* i___Unity__Collections__IIndexable_1_T_() ;

/// @brief Convert to "::Unity::Collections::INativeList_1<T>"
constexpr ::Unity::Collections::INativeList_1<T>* i___Unity__Collections__INativeList_1_T_() ;

/// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, T  value) ;

/// @brief Method set_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Length(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeList_1() ;

// Ctor Parameters [CppParam { name: "m_ListData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr NativeList_1(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*  m_ListData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30172};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_ListData, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*  m_ListData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections

#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelMultiHashMap_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelMultiHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeParallelMultiHashMap_2)
namespace GlobalNamespace {
struct AllocatorManager_AllocatorHandle;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct NativeParallelMultiHashMap_2_Enumerator;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct NativeParallelMultiHashMap_2_ParallelWriter;
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
template<typename TKey,typename TValue>
struct KeyValue_2;
}
namespace Unity::Collections {
template<typename TKey>
struct NativeParallelMultiHashMapIterator_1;
}
// Forward declare root types
namespace Unity::Collections {
template<typename TKey,typename TValue>
struct NativeParallelMultiHashMap_2;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeParallelMultiHashMap_2);
DEFINE_IL2CPP_GEN_CLASS(::Unity::Collections::NativeParallelMultiHashMap_2, "Unity.Collections", "NativeParallelMultiHashMap`2");
// [NativeContainer]
// [DebuggerTypeProxy(typeof(Unity.Collections.NativeParallelMultiHashMapDebuggerTypeProxy`2<TKey, TValue>))]
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
// Dependencies Unity.Collections.AllocatorManager::IAllocator, Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2<TKey, TValue>
namespace Unity::Collections {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Unity.Collections.NativeParallelMultiHashMap`2<TKey,TValue>
struct CORDL_TYPE NativeParallelMultiHashMap_2 {
public:
// Declarations
using Enumerator = ::GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey, TValue>;

using ParallelWriter = ::GlobalNamespace::NativeParallelMultiHashMap_2_ParallelWriter<TKey, TValue>;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(TKey  key, TValue  item) ;

/// @brief Method AsParallelWriter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NativeParallelMultiHashMap_2_ParallelWriter<TKey,TValue> AsParallelWriter() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetValuesForKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue> GetValuesForKey(TKey  key) ;

/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.AllocatorManager::AllocatorHandle) })]
/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U>
requires(::cordl_internals::type_constraint<U, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
inline void Initialize(int32_t  capacity, ::by_ref<U>  allocator) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Remove(TKey  key) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Remove(::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>  it) ;

/// @brief Method System.Collections.Generic.IEnumerable<Unity.Collections.LowLevel.Unsafe.KeyValue<TKey,TValue>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>* System_Collections_Generic_IEnumerable_Unity_Collections_LowLevel_Unsafe_KeyValue_TKey_TValue___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TryGetFirstValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetFirstValue(TKey  key, ::by_ref<TValue>  item, ::by_ref<::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>>  it) ;

/// @brief Method TryGetNextValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetNextValue(::by_ref<TValue>  item, ::by_ref<::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>>  it) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

/// [IsReadOnly]
/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>* i___System__Collections__Generic__IEnumerable_1___Unity__Collections__LowLevel__Unsafe__KeyValue_2_TKey_TValue__() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeParallelMultiHashMap_2() ;

// Ctor Parameters [CppParam { name: "m_MultiHashMapData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<TKey,TValue>", modifiers: "", def_value: None, comment: None }]
constexpr NativeParallelMultiHashMap_2(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<TKey,TValue>  m_MultiHashMapData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30185};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_MultiHashMapData, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<TKey,TValue>  m_MultiHashMapData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections

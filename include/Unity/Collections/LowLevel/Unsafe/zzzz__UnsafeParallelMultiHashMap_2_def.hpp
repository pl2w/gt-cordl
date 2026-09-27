#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelMultiHashMap_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeParallelMultiHashMap_2)
namespace GlobalNamespace {
struct AllocatorManager_AllocatorHandle;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct UnsafeParallelMultiHashMap_2_ParallelWriter;
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
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeParallelHashMapData;
}
namespace Unity::Collections {
template<typename TKey>
struct NativeParallelMultiHashMapIterator_1;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
template<typename TKey,typename TValue>
struct UnsafeParallelMultiHashMap_2;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2);
DEFINE_IL2CPP_GEN_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2, "Unity.Collections.LowLevel.Unsafe", "UnsafeParallelMultiHashMap`2");
// [DebuggerTypeProxy(typeof(Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMapDebuggerTypeProxy`2<TKey, TValue>))]
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2<TKey,TValue>
struct CORDL_TYPE UnsafeParallelMultiHashMap_2 {
public:
// Declarations
using ParallelWriter = ::GlobalNamespace::UnsafeParallelMultiHashMap_2_ParallelWriter<TKey, TValue>;

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
inline ::GlobalNamespace::UnsafeParallelMultiHashMap_2_ParallelWriter<TKey,TValue> AsParallelWriter() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Remove(TKey  key) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Remove(::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>  it) ;

/// @brief Method System.Collections.Generic.IEnumerable<Unity.Collections.LowLevel.Unsafe.KeyValue<TKey,TValue>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>* System_Collections_Generic_IEnumerable_Unity_Collections_LowLevel_Unsafe_KeyValue_TKey_TValue___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [IsReadOnly]
/// @brief Method TryGetFirstValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetFirstValue(TKey  key, ::by_ref<TValue>  item, ::by_ref<::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>>  it) ;

/// [IsReadOnly]
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
constexpr UnsafeParallelMultiHashMap_2() ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AllocatorLabel", ty: "::GlobalNamespace::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeParallelMultiHashMap_2(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*  m_Buffer, ::GlobalNamespace::AllocatorManager_AllocatorHandle  m_AllocatorLabel) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30244};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*  m_Buffer;

/// @brief Field m_AllocatorLabel, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::AllocatorManager_AllocatorHandle  m_AllocatorLabel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe

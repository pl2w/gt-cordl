#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelHashMap_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeParallelHashMap_2)
namespace GlobalNamespace {
struct AllocatorManager_AllocatorHandle;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct NativeParallelHashMap_2_Enumerator;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct NativeParallelHashMap_2_ParallelWriter;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct NativeParallelHashMap_2_ReadOnly;
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
// Forward declare root types
namespace Unity::Collections {
template<typename TKey,typename TValue>
struct NativeParallelHashMap_2;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeParallelHashMap_2);
DEFINE_IL2CPP_GEN_CLASS(::Unity::Collections::NativeParallelHashMap_2, "Unity.Collections", "NativeParallelHashMap`2");
// [DefaultMember("Item")]
// [NativeContainer]
// [DebuggerDisplay("Count = {m_HashMapData.Count()}, Capacity = {m_HashMapData.Capacity}, IsCreated = {m_HashMapData.IsCreated}, IsEmpty = {IsEmpty}")]
// [DebuggerTypeProxy(typeof(Unity.Collections.NativeParallelHashMapDebuggerTypeProxy`2<TKey, TValue>))]
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey, TValue>
namespace Unity::Collections {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Unity.Collections.NativeParallelHashMap`2<TKey,TValue>
struct CORDL_TYPE NativeParallelHashMap_2 {
public:
// Declarations
using Enumerator = ::GlobalNamespace::NativeParallelHashMap_2_Enumerator<TKey, TValue>;

using ParallelWriter = ::GlobalNamespace::NativeParallelHashMap_2_ParallelWriter<TKey, TValue>;

using ReadOnly = ::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey, TValue>;

 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_Item, put=set_Item)) TValue  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(TKey  key, TValue  item) ;

/// @brief Method AsParallelWriter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NativeParallelHashMap_2_ParallelWriter<TKey,TValue> AsParallelWriter() ;

/// @brief Method AsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue> AsReadOnly() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ContainsKey(TKey  key) ;

/// @brief Method Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Count() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NativeParallelHashMap_2_Enumerator<TKey,TValue> GetEnumerator() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Remove(TKey  key) ;

/// @brief Method System.Collections.Generic.IEnumerable<Unity.Collections.LowLevel.Unsafe.KeyValue<TKey,TValue>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>* System_Collections_Generic_IEnumerable_Unity_Collections_LowLevel_Unsafe_KeyValue_TKey_TValue___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryAdd(TKey  key, TValue  item) ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetValue(TKey  key, ::by_ref<TValue>  item) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

/// [IsReadOnly]
/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// [IsReadOnly]
/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TValue get_Item(TKey  key) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>* i___System__Collections__Generic__IEnumerable_1___Unity__Collections__LowLevel__Unsafe__KeyValue_2_TKey_TValue__() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(TKey  key, TValue  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeParallelHashMap_2() ;

// Ctor Parameters [CppParam { name: "m_HashMapData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey,TValue>", modifiers: "", def_value: None, comment: None }]
constexpr NativeParallelHashMap_2(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey,TValue>  m_HashMapData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30180};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_HashMapData, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey,TValue>  m_HashMapData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections

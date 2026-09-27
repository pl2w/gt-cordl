#pragma once
// IWYU pragma private; include "Unity/Collections/NativeHashMap_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeHashMap_2)
namespace GlobalNamespace {
struct AllocatorManager_AllocatorHandle;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct NativeHashMap_2_Enumerator;
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
template<typename TKey>
struct HashMapHelper_1;
}
namespace Unity::Collections {
template<typename TKey,typename TValue>
struct KVPair_2;
}
// Forward declare root types
namespace Unity::Collections {
template<typename TKey,typename TValue>
struct NativeHashMap_2;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeHashMap_2);
DEFINE_IL2CPP_GEN_CLASS(::Unity::Collections::NativeHashMap_2, "Unity.Collections", "NativeHashMap`2");
// [DefaultMember("Item")]
// [NativeContainer]
// [DebuggerTypeProxy(typeof(Unity.Collections.NativeHashMapDebuggerTypeProxy`2<TKey, TValue>))]
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
// Dependencies 
namespace Unity::Collections {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Unity.Collections.NativeHashMap`2<TKey,TValue>
struct CORDL_TYPE NativeHashMap_2 {
public:
// Declarations
using Enumerator = ::GlobalNamespace::NativeHashMap_2_Enumerator<TKey, TValue>;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(TKey  key, TValue  item) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ContainsKey(TKey  key) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<Unity.Collections.KVPair<TKey,TValue>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>* System_Collections_Generic_IEnumerable_Unity_Collections_KVPair_TKey_TValue___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryAdd(TKey  key, TValue  item) ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetValue(TKey  key, ::by_ref<TValue>  item) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  initialCapacity, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

/// [IsReadOnly]
/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// [IsReadOnly]
/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>* i___System__Collections__Generic__IEnumerable_1___Unity__Collections__KVPair_2_TKey_TValue__() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeHashMap_2() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*", modifiers: "", def_value: None, comment: None }]
constexpr NativeHashMap_2(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*  m_Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30163};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*  m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections

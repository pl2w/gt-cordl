#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelHashMap`2_ReadOnly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeParallelHashMap`2_ReadOnly)
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
namespace Unity::Collections::LowLevel::Unsafe {
template<typename TKey,typename TValue>
struct KeyValue_2;
}
namespace Unity::Collections::LowLevel::Unsafe {
template<typename TKey,typename TValue>
struct UnsafeParallelHashMap_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct NativeParallelHashMap_2_ReadOnly;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NativeParallelHashMap_2_ReadOnly);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NativeParallelHashMap_2_ReadOnly, "Unity.Collections", "NativeParallelHashMap`2/ReadOnly");
// [DefaultMember("Item")]
// [NativeContainer]
// [NativeContainerIsReadOnly]
// [DebuggerTypeProxy(typeof(Unity.Collections.NativeParallelHashMapDebuggerTypeProxy`2<TKey, TValue>))]
// [DebuggerDisplay("Count = {m_HashMapData.Count()}, Capacity = {m_HashMapData.Capacity}, IsCreated = {m_HashMapData.IsCreated}, IsEmpty = {IsEmpty}")]
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey, TValue>
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Unity.Collections.NativeParallelHashMap`2/ReadOnly<TKey,TValue>
struct CORDL_TYPE NativeParallelHashMap_2_ReadOnly {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// [IsReadOnly]
/// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ContainsKey(TKey  key) ;

/// @brief Method System.Collections.Generic.IEnumerable<Unity.Collections.LowLevel.Unsafe.KeyValue<TKey,TValue>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>* System_Collections_Generic_IEnumerable_Unity_Collections_LowLevel_Unsafe_KeyValue_TKey_TValue___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [IsReadOnly]
/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetValue(TKey  key, ::by_ref<TValue>  item) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey,TValue>  hashMapData) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>* i___System__Collections__Generic__IEnumerable_1___Unity__Collections__LowLevel__Unsafe__KeyValue_2_TKey_TValue__() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeParallelHashMap_2_ReadOnly() ;

// Ctor Parameters [CppParam { name: "m_HashMapData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey,TValue>", modifiers: "", def_value: None, comment: None }]
constexpr NativeParallelHashMap_2_ReadOnly(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey,TValue>  m_HashMapData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30177};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_HashMapData, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey,TValue>  m_HashMapData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

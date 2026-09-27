#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeHashMap_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UnsafeHashMap_2)
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
namespace Unity::Collections {
template<typename TKey,typename TValue>
struct KVPair_2;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
template<typename TKey,typename TValue>
struct UnsafeHashMap_2;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2);
DEFINE_IL2CPP_GEN_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2, "Unity.Collections.LowLevel.Unsafe", "UnsafeHashMap`2");
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapDebuggerTypeProxy`2<TKey, TValue>))]
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
// Dependencies Unity.Collections.LowLevel.Unsafe.HashMapHelper`1<TKey>
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<TKey,TValue>
struct CORDL_TYPE UnsafeHashMap_2 {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method System.Collections.Generic.IEnumerable<Unity.Collections.KVPair<TKey,TValue>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>* System_Collections_Generic_IEnumerable_Unity_Collections_KVPair_TKey_TValue___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

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
constexpr UnsafeHashMap_2() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeHashMap_2(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>  m_Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30227};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Data, offset: 0x0, size: 0x40, def value: None
 ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>  m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe

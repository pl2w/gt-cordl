#pragma once
// IWYU pragma private; include "Unity/Collections/NativeHashMap`2_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper`1_Enumerator_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeHashMap`2_Enumerator)
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename TKey,typename TValue>
struct KVPair_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct NativeHashMap_2_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NativeHashMap_2_Enumerator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NativeHashMap_2_Enumerator, "Unity.Collections", "NativeHashMap`2/Enumerator");
// [NativeContainer]
// [NativeContainerIsReadOnly]
// Dependencies Unity.Collections.LowLevel.Unsafe.HashMapHelper`1::Enumerator<TKey>
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Unity.Collections.NativeHashMap`2/Enumerator<TKey,TValue>
struct CORDL_TYPE NativeHashMap_2_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::Unity::Collections::KVPair_2<TKey,TValue>  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Unity::Collections::KVPair_2<TKey,TValue> get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>* i___System__Collections__Generic__IEnumerator_1___Unity__Collections__KVPair_2_TKey_TValue__() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeHashMap_2_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::GlobalNamespace::HashMapHelper_1_Enumerator<TKey>", modifiers: "", def_value: None, comment: None }]
constexpr NativeHashMap_2_Enumerator(::GlobalNamespace::HashMapHelper_1_Enumerator<TKey>  m_Enumerator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30162};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Enumerator, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::HashMapHelper_1_Enumerator<TKey>  m_Enumerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

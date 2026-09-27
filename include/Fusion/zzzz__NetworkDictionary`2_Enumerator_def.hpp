#pragma once
// IWYU pragma private; include "Fusion/NetworkDictionary`2_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkDictionary_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkDictionary`2_Enumerator)
namespace Fusion {
template<typename K,typename V>
struct NetworkDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
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
// Forward declare root types
namespace GlobalNamespace {
template<typename K,typename V>
struct NetworkDictionary_2_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NetworkDictionary_2_Enumerator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NetworkDictionary_2_Enumerator, "Fusion", "NetworkDictionary`2/Enumerator");
// Dependencies Fusion.NetworkDictionary`2<K, V>
namespace GlobalNamespace {
// cpp template
template<typename K,typename V>
// Is value type: true
// CS Name: Fusion.NetworkDictionary`2/Enumerator<K,V>
struct CORDL_TYPE NetworkDictionary_2_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Collections::Generic::KeyValuePair_2<K,V>  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*() ;

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

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkDictionary_2<K,V>  dict) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::KeyValuePair_2<K,V> get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>* i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_K_V__() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkDictionary_2_Enumerator() ;

// Ctor Parameters [CppParam { name: "_bucket", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_entry", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_dict", ty: "::Fusion::NetworkDictionary_2<K,V>", modifiers: "", def_value: None, comment: None }]
constexpr NetworkDictionary_2_Enumerator(int32_t  _bucket, int32_t  _entry, ::Fusion::NetworkDictionary_2<K,V>  _dict) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19066};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field _bucket, offset: 0x0, size: 0x4, def value: None
 int32_t  _bucket;

/// @brief Field _entry, offset: 0x4, size: 0x4, def value: None
 int32_t  _entry;

/// @brief Field _dict, offset: 0x8, size: 0x40, def value: None
 ::Fusion::NetworkDictionary_2<K,V>  _dict;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

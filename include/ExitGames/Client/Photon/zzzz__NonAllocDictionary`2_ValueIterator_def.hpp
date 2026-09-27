#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/NonAllocDictionary`2_ValueIterator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NonAllocDictionary`2_ValueIterator)
namespace ExitGames::Client::Photon {
template<typename K,typename V>
class NonAllocDictionary_2;
}
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
// Forward declare root types
namespace GlobalNamespace {
template<typename K,typename V>
struct NonAllocDictionary_2_ValueIterator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NonAllocDictionary_2_ValueIterator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NonAllocDictionary_2_ValueIterator, "ExitGames.Client.Photon", "NonAllocDictionary`2/ValueIterator");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename K,typename V>
// Is value type: true
// CS Name: ExitGames.Client.Photon.NonAllocDictionary`2/ValueIterator<K,V>
struct CORDL_TYPE NonAllocDictionary_2_ValueIterator {
public:
// Declarations
 __declspec(property(get=get_Current)) V  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<V>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<V>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V> GetEnumerator() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*  dictionary) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline V get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<V>"
constexpr ::System::Collections::Generic::IEnumerator_1<V>* i___System__Collections__Generic__IEnumerator_1_V_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NonAllocDictionary_2_ValueIterator() ;

// Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_dict", ty: "::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*", modifiers: "", def_value: None, comment: None }]
constexpr NonAllocDictionary_2_ValueIterator(int32_t  _index, ::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*  _dict) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26414};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _index, offset: 0x0, size: 0x4, def value: None
 int32_t  _index;

/// @brief Field _dict, offset: 0x8, size: 0x8, def value: None
 ::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*  _dict;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

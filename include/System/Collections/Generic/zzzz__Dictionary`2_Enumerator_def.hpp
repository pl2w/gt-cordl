#pragma once
// IWYU pragma private; include "System/Collections/Generic/Dictionary`2_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Dictionary`2_Enumerator)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
struct DictionaryEntry;
}
namespace System::Collections {
class IDictionaryEnumerator;
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
template<typename TKey,typename TValue>
struct Dictionary_2_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Dictionary_2_Enumerator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Dictionary_2_Enumerator, "System.Collections.Generic", "Dictionary`2/Enumerator");
// Dependencies System.Collections.Generic.KeyValuePair`2<TKey, TValue>
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue>
struct CORDL_TYPE Dictionary_2_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  Current;

 __declspec(property(get=System_Collections_IDictionaryEnumerator_get_Entry)) ::System::Collections::DictionaryEntry  System_Collections_IDictionaryEnumerator_Entry;

 __declspec(property(get=System_Collections_IDictionaryEnumerator_get_Key)) ::System::Object*  System_Collections_IDictionaryEnumerator_Key;

 __declspec(property(get=System_Collections_IDictionaryEnumerator_get_Value)) ::System::Object*  System_Collections_IDictionaryEnumerator_Value;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() ;

/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr operator  ::System::Collections::IDictionaryEnumerator*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IDictionaryEnumerator.get_Entry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_get_Entry() ;

/// @brief Method System.Collections.IDictionaryEnumerator.get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IDictionaryEnumerator_get_Key() ;

/// @brief Method System.Collections.IDictionaryEnumerator.get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IDictionaryEnumerator_get_Value() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary, int32_t  getEnumeratorRetType) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() ;

/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Dictionary_2_Enumerator() ;

// Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_current", ty: "::System::Collections::Generic::KeyValuePair_2<TKey,TValue>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_getEnumeratorRetType", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Dictionary_2_Enumerator(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  _dictionary, int32_t  _version, int32_t  _index, ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  _current, int32_t  _getEnumeratorRetType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6883};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _dictionary, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<TKey,TValue>*  _dictionary;

/// @brief Field _version, offset: 0x8, size: 0x4, def value: None
 int32_t  _version;

/// @brief Field _index, offset: 0xc, size: 0x4, def value: None
 int32_t  _index;

/// @brief Field _current, offset: 0x10, size: 0x10, def value: None
 ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  _current;

/// @brief Field _getEnumeratorRetType, offset: 0x20, size: 0x4, def value: None
 int32_t  _getEnumeratorRetType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

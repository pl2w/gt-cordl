#pragma once
// IWYU pragma private; include "System/Collections/ObjectModel/ReadOnlyDictionary`2_DictionaryEnumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ReadOnlyDictionary`2_DictionaryEnumerator)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
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
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct ReadOnlyDictionary_2_DictionaryEnumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::ReadOnlyDictionary_2_DictionaryEnumerator, "System.Collections.ObjectModel", "ReadOnlyDictionary`2/DictionaryEnumerator");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: System.Collections.ObjectModel.ReadOnlyDictionary`2/DictionaryEnumerator<TKey,TValue>
struct CORDL_TYPE ReadOnlyDictionary_2_DictionaryEnumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Object*  Current;

 __declspec(property(get=get_Entry)) ::System::Collections::DictionaryEntry  Entry;

 __declspec(property(get=get_Key)) ::System::Object*  Key;

 __declspec(property(get=get_Value)) ::System::Object*  Value;

/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr operator  ::System::Collections::IDictionaryEnumerator*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  dictionary) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* get_Current() ;

/// @brief Method get_Entry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* get_Key() ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* get_Value() ;

/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlyDictionary_2_DictionaryEnumerator() ;

// Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::IDictionary_2<TKey,TValue>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_enumerator", ty: "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*", modifiers: "", def_value: None, comment: None }]
constexpr ReadOnlyDictionary_2_DictionaryEnumerator(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _dictionary, ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*  _enumerator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6876};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _dictionary, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _dictionary;

/// @brief Field _enumerator, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*  _enumerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

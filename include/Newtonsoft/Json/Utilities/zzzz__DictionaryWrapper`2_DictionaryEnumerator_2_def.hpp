#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/DictionaryWrapper`2_DictionaryEnumerator_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(DictionaryWrapper`2_DictionaryEnumerator_2)
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
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
struct DictionaryWrapper_2_DictionaryEnumerator_2;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2, "Newtonsoft.Json.Utilities", "DictionaryWrapper`2/DictionaryEnumerator`2");
// [Nullable(0)]
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
// Is value type: true
// CS Name: Newtonsoft.Json.Utilities.DictionaryWrapper`2/DictionaryEnumerator`2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>
struct CORDL_TYPE DictionaryWrapper_2_DictionaryEnumerator_2 {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Object*  Current;

 __declspec(property(get=get_Entry)) ::System::Collections::DictionaryEntry  Entry;

 __declspec(property(get=get_Key)) ::System::Object*  Key;

/// @brief [Nullable(2)]
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
inline void _ctor(/* [Nullable(new[] { 1, 0, 1, 1 })] */ ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*  e) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* get_Current() ;

/// @brief Method get_Entry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* get_Key() ;

/// [NullableContext(2)]
/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* get_Value() ;

/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

// Ctor Parameters []
// @brief default ctor
constexpr DictionaryWrapper_2_DictionaryEnumerator_2() ;

// Ctor Parameters [CppParam { name: "_e", ty: "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*", modifiers: "", def_value: None, comment: None }]
constexpr DictionaryWrapper_2_DictionaryEnumerator_2(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*  _e) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23175};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [Nullable(new[] { 1, 0, 1, 1 })]
/// @brief Field _e, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*  _e;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

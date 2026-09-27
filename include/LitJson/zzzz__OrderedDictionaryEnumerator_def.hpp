#pragma once
// IWYU pragma private; include "LitJson/OrderedDictionaryEnumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OrderedDictionaryEnumerator)
namespace LitJson {
class JsonData;
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
namespace LitJson {
class OrderedDictionaryEnumerator;
}
// Write type traits
MARK_REF_T(::LitJson::OrderedDictionaryEnumerator*);
DEFINE_IL2CPP_CLASS(::LitJson::OrderedDictionaryEnumerator*, "LitJson", "OrderedDictionaryEnumerator");
// Dependencies System.Object
namespace LitJson {
// Is value type: false
// CS Name: LitJson.OrderedDictionaryEnumerator
class CORDL_TYPE OrderedDictionaryEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Object*  Current;

 __declspec(property(get=get_Entry)) ::System::Collections::DictionaryEntry  Entry;

 __declspec(property(get=get_Key)) ::System::Object*  Key;

 __declspec(property(get=get_Value)) ::System::Object*  Value;

/// @brief Field list_enumerator, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_list_enumerator, put=__cordl_internal_set_list_enumerator)) ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*  list_enumerator;

/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr operator  ::System::Collections::IDictionaryEnumerator*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method MoveNext, addr 0x5b5f40c, size 0xa0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::LitJson::OrderedDictionaryEnumerator* New_ctor(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*  enumerator) ;

/// @brief Method Reset, addr 0x5b5f4ac, size 0xa4, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>* const& __cordl_internal_get_list_enumerator() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*& __cordl_internal_get_list_enumerator() ;

constexpr void __cordl_internal_set_list_enumerator(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*  value) ;

/// @brief Method .ctor, addr 0x5b5f3dc, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*  enumerator) ;

/// @brief Method get_Current, addr 0x5b5f130, size 0x64, virtual true, abstract: false, final true
inline ::System::Object* get_Current() ;

/// @brief Method get_Entry, addr 0x5b5f194, size 0xe8, virtual true, abstract: false, final true
inline ::System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Key, addr 0x5b5f27c, size 0xac, virtual true, abstract: false, final true
inline ::System::Object* get_Key() ;

/// @brief Method get_Value, addr 0x5b5f328, size 0xb4, virtual true, abstract: false, final true
inline ::System::Object* get_Value() ;

/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OrderedDictionaryEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OrderedDictionaryEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedDictionaryEnumerator(OrderedDictionaryEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedDictionaryEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedDictionaryEnumerator(OrderedDictionaryEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3820};

/// @brief Field list_enumerator, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*  ___list_enumerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LitJson::OrderedDictionaryEnumerator, ___list_enumerator) == 0x10, "Offset mismatch!");

static_assert(sizeof(::LitJson::OrderedDictionaryEnumerator) == 0x18, "Size mismatch!");

} // namespace end def LitJson

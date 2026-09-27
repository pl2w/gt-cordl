#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/DictionaryList_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DictionaryList_2)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Meta::WitAi::Utilities {
template<typename T,typename U>
class DictionaryList_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::WitAi::Utilities::DictionaryList_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::Utilities::DictionaryList_2, "Meta.WitAi.Utilities", "DictionaryList`2");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace Meta::WitAi::Utilities {
// cpp template
template<typename T,typename U>
// Is value type: false
// CS Name: Meta.WitAi.Utilities.DictionaryList`2<T,U>
class CORDL_TYPE DictionaryList_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Item)) ::System::Collections::Generic::List_1<U>*  Item[];

/// @brief Field dictionary, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_dictionary, put=__cordl_internal_set_dictionary)) ::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<U>*>*  dictionary;

static inline ::Meta::WitAi::Utilities::DictionaryList_2<T,U>* New_ctor() ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetValue(T  key, ::by_ref<::System::Collections::Generic::List_1<U>*>  values) ;

constexpr ::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<U>*>* const& __cordl_internal_get_dictionary() const;

constexpr ::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<U>*>*& __cordl_internal_get_dictionary() ;

constexpr void __cordl_internal_set_dictionary(::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<U>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<U>* get_Item(T  key) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DictionaryList_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DictionaryList_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DictionaryList_2(DictionaryList_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryList_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictionaryList_2(DictionaryList_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25575};

/// @brief Field dictionary, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<U>*>*  ___dictionary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Utilities

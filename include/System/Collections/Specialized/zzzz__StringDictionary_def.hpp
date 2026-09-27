#pragma once
// IWYU pragma private; include "System/Collections/Specialized/StringDictionary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringDictionary)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Collections::Specialized {
class StringDictionary;
}
// Write type traits
MARK_REF_T(::System::Collections::Specialized::StringDictionary*);
DEFINE_IL2CPP_CLASS(::System::Collections::Specialized::StringDictionary*, "System.Collections.Specialized", "StringDictionary");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: System.Collections.Specialized.StringDictionary
class CORDL_TYPE StringDictionary : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) ::StringW  Item[];

/// @brief Field contents, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_contents, put=__cordl_internal_set_contents)) ::System::Collections::Hashtable*  contents;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0xada0380, size 0x94, virtual true, abstract: false, final false
inline void Add(::StringW  key, ::StringW  value) ;

/// @brief Method Clear, addr 0xada0414, size 0x20, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method GetEnumerator, addr 0xada0434, size 0x20, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* GetEnumerator() ;

static inline ::System::Collections::Specialized::StringDictionary* New_ctor() ;

/// @brief Method Remove, addr 0xada0454, size 0x84, virtual true, abstract: false, final false
inline void Remove(::StringW  key) ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_contents() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get_contents() ;

constexpr void __cordl_internal_set_contents(::System::Collections::Hashtable*  value) ;

/// @brief Method .ctor, addr 0xada01d8, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Item, addr 0xada0244, size 0xa8, virtual true, abstract: false, final false
inline ::StringW get_Item(::StringW  key) ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0xada02ec, size 0x94, virtual true, abstract: false, final false
inline void set_Item(::StringW  key, ::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringDictionary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringDictionary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringDictionary(StringDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringDictionary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringDictionary(StringDictionary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10339};

/// @brief Field contents, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ___contents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Specialized::StringDictionary, ___contents) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Collections::Specialized::StringDictionary) == 0x18, "Size mismatch!");

} // namespace end def System::Collections::Specialized

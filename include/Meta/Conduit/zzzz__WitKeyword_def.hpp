#pragma once
// IWYU pragma private; include "Meta/Conduit/WitKeyword.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitKeyword)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Conduit {
class WitKeyword;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::WitKeyword*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::WitKeyword*, "Meta.Conduit", "WitKeyword");
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.WitKeyword
class CORDL_TYPE WitKeyword : public ::System::Object {
public:
// Declarations
/// @brief Field keyword, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyword, put=__cordl_internal_set_keyword)) ::StringW  keyword;

/// @brief Field synonyms, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_synonyms, put=__cordl_internal_set_synonyms)) ::System::Collections::Generic::HashSet_1<::StringW>*  synonyms;

/// @brief Method Equals, addr 0x9e2387c, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x9e23908, size 0x80, virtual false, abstract: false, final false
inline bool Equals(::Meta::Conduit::WitKeyword*  other) ;

/// @brief Method GetHashCode, addr 0x9e23988, size 0x54, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief [Preserve]
static inline ::Meta::Conduit::WitKeyword* New_ctor() ;

static inline ::Meta::Conduit::WitKeyword* New_ctor(::StringW  keyword, ::System::Collections::Generic::List_1<::StringW>*  synonyms) ;

constexpr ::StringW const& __cordl_internal_get_keyword() const;

constexpr ::StringW& __cordl_internal_get_keyword() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_synonyms() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_synonyms() ;

constexpr void __cordl_internal_set_keyword(::StringW  value) ;

constexpr void __cordl_internal_set_synonyms(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9e235cc, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9e23618, size 0x264, virtual false, abstract: false, final false
inline void _ctor(::StringW  keyword, ::System::Collections::Generic::List_1<::StringW>*  synonyms) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitKeyword() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitKeyword", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitKeyword(WitKeyword && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitKeyword", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitKeyword(WitKeyword const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25425};

/// @brief Field keyword, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___keyword;

/// @brief Field synonyms, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ___synonyms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::WitKeyword, ___keyword) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::WitKeyword, ___synonyms) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::WitKeyword) == 0x20, "Size mismatch!");

} // namespace end def Meta::Conduit

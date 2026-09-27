#pragma once
// IWYU pragma private; include "GorillaTag/StringList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringList)
// Forward declare root types
namespace GorillaTag {
class StringList;
}
// Write type traits
MARK_REF_T(::GorillaTag::StringList*);
DEFINE_IL2CPP_CLASS(::GorillaTag::StringList*, "GorillaTag", "StringList");
// [CreateAssetMenu(fileName = "New String List", menuName = "String List")]
// Dependencies UnityEngine.ScriptableObject
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.StringList
class CORDL_TYPE StringList : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_Strings)) ::ArrayW<::StringW>  Strings;

/// @brief Field strings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_strings, put=__cordl_internal_set_strings)) ::ArrayW<::StringW>  strings;

static inline ::GorillaTag::StringList* New_ctor() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_strings() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_strings() ;

constexpr void __cordl_internal_set_strings(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x5d295c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Strings, addr 0x5d295b8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_Strings() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringList(StringList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringList(StringList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4631};

/// [SerializeField]
/// @brief Field strings, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___strings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::StringList, ___strings) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::StringList) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag

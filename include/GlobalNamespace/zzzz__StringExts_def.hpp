#pragma once
// IWYU pragma private; include "GlobalNamespace/StringExts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringExts)
// Forward declare root types
namespace GlobalNamespace {
class StringExts;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StringExts*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StringExts*, "", "StringExts");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StringExts
class CORDL_TYPE StringExts : public ::System::Object {
public:
// Declarations
/// @brief Field _escapeChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__escapeChars, put=setStaticF__escapeChars)) ::ArrayW<char16_t>  _escapeChars;

/// [Extension]
/// @brief Method EscapeCsv, addr 0x5a211b0, size 0x120, virtual false, abstract: false, final false
static inline ::StringW EscapeCsv(::StringW  field) ;

static inline ::ArrayW<char16_t> getStaticF__escapeChars() ;

static inline void setStaticF__escapeChars(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringExts() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringExts", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringExts(StringExts && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringExts", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringExts(StringExts const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2842};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::StringExts) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "System/Net/DelayedRegex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DelayedRegex)
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace System::Net {
class DelayedRegex;
}
// Write type traits
MARK_REF_T(::System::Net::DelayedRegex*);
DEFINE_IL2CPP_CLASS(::System::Net::DelayedRegex*, "System.Net", "DelayedRegex");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.DelayedRegex
class CORDL_TYPE DelayedRegex : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AsRegex)) ::System::Text::RegularExpressions::Regex*  AsRegex;

/// @brief Field _AsRegex, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__AsRegex, put=__cordl_internal_set__AsRegex)) ::System::Text::RegularExpressions::Regex*  _AsRegex;

/// @brief Field _AsString, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__AsString, put=__cordl_internal_set__AsString)) ::StringW  _AsString;

static inline ::System::Net::DelayedRegex* New_ctor(::System::Text::RegularExpressions::Regex*  regex) ;

static inline ::System::Net::DelayedRegex* New_ctor(::StringW  regexString) ;

/// @brief Method ToString, addr 0xac64d1c, size 0x50, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Text::RegularExpressions::Regex* const& __cordl_internal_get__AsRegex() const;

constexpr ::System::Text::RegularExpressions::Regex*& __cordl_internal_get__AsRegex() ;

constexpr ::StringW const& __cordl_internal_get__AsString() const;

constexpr ::StringW& __cordl_internal_get__AsString() ;

constexpr void __cordl_internal_set__AsRegex(::System::Text::RegularExpressions::Regex*  value) ;

constexpr void __cordl_internal_set__AsString(::StringW  value) ;

/// @brief Method .ctor, addr 0xac64bf0, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::System::Text::RegularExpressions::Regex*  regex) ;

/// @brief Method .ctor, addr 0xac63990, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::StringW  regexString) ;

/// @brief Method get_AsRegex, addr 0xac64c6c, size 0xb0, virtual false, abstract: false, final false
inline ::System::Text::RegularExpressions::Regex* get_AsRegex() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelayedRegex() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelayedRegex", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelayedRegex(DelayedRegex && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelayedRegex", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelayedRegex(DelayedRegex const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10561};

/// @brief Field _AsRegex, offset: 0x10, size: 0x8, def value: None
 ::System::Text::RegularExpressions::Regex*  ____AsRegex;

/// @brief Field _AsString, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____AsString;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::DelayedRegex, ____AsRegex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::DelayedRegex, ____AsString) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Net::DelayedRegex) == 0x20, "Size mismatch!");

} // namespace end def System::Net

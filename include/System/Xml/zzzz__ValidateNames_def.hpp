#pragma once
// IWYU pragma private; include "System/Xml/ValidateNames.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValidateNames)
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml {
class ValidateNames;
}
// Write type traits
MARK_REF_T(::System::Xml::ValidateNames*);
DEFINE_IL2CPP_CLASS(::System::Xml::ValidateNames*, "System.Xml", "ValidateNames");
// Dependencies System.Object, System.Xml.XmlCharType
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.ValidateNames
class CORDL_TYPE ValidateNames : public ::System::Object {
public:
// Declarations
/// @brief Field xmlCharType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_xmlCharType, put=setStaticF_xmlCharType)) ::System::Xml::XmlCharType  xmlCharType;

/// @brief Method GetInvalidNameException, addr 0xabecdb4, size 0x1c4, virtual false, abstract: false, final false
static inline ::System::Exception* GetInvalidNameException(::StringW  s, int32_t  offsetStartChar, int32_t  offsetBadChar) ;

/// @brief Method IsNameNoNamespaces, addr 0xabec800, size 0x80, virtual false, abstract: false, final false
static inline bool IsNameNoNamespaces(::StringW  s) ;

/// @brief Method ParseNCName, addr 0xabec99c, size 0x58, virtual false, abstract: false, final false
static inline int32_t ParseNCName(::StringW  s) ;

/// @brief Method ParseNCName, addr 0xabec880, size 0x11c, virtual false, abstract: false, final false
static inline int32_t ParseNCName(::StringW  s, int32_t  offset) ;

/// @brief Method ParseNameNoNamespaces, addr 0xabec6a8, size 0x158, virtual false, abstract: false, final false
static inline int32_t ParseNameNoNamespaces(::StringW  s, int32_t  offset) ;

/// @brief Method ParseNmtoken, addr 0xabec4fc, size 0xc8, virtual false, abstract: false, final false
static inline int32_t ParseNmtoken(::StringW  s, int32_t  offset) ;

/// @brief Method ParseNmtokenNoNamespaces, addr 0xabec5c4, size 0xe4, virtual false, abstract: false, final false
static inline int32_t ParseNmtokenNoNamespaces(::StringW  s, int32_t  offset) ;

/// @brief Method ParseQName, addr 0xabec9f4, size 0xdc, virtual false, abstract: false, final false
static inline int32_t ParseQName(::StringW  s, int32_t  offset, ::by_ref<int32_t>  colonOffset) ;

/// @brief Method ParseQNameThrow, addr 0xabecad0, size 0x134, virtual false, abstract: false, final false
static inline void ParseQNameThrow(::StringW  s, ::by_ref<::StringW>  prefix, ::by_ref<::StringW>  localName) ;

/// @brief Method SplitQName, addr 0xabecf78, size 0x150, virtual false, abstract: false, final false
static inline void SplitQName(::StringW  name, ::by_ref<::StringW>  prefix, ::by_ref<::StringW>  lname) ;

/// @brief Method ThrowInvalidName, addr 0xabecc04, size 0x17c, virtual false, abstract: false, final false
static inline void ThrowInvalidName(::StringW  s, int32_t  offsetStartChar, int32_t  offsetBadChar) ;

static inline ::System::Xml::XmlCharType getStaticF_xmlCharType() ;

static inline void setStaticF_xmlCharType(::System::Xml::XmlCharType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValidateNames() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValidateNames", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValidateNames(ValidateNames && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValidateNames", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValidateNames(ValidateNames const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14160};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::ValidateNames) == 0x10, "Size mismatch!");

} // namespace end def System::Xml

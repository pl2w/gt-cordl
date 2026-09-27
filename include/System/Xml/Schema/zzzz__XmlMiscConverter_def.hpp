#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlMiscConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XmlMiscConverter)
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlMiscConverter;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::XmlMiscConverter*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlMiscConverter*, "System.Xml.Schema", "XmlMiscConverter");
// Dependencies System.Xml.Schema.XmlBaseConverter
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlMiscConverter
class CORDL_TYPE XmlMiscConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief Method ChangeType, addr 0xab6479c, size 0x4f8, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::StringW  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0xab64dec, size 0xccc, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeTypeWildcardDestination, addr 0xab6466c, size 0x130, virtual false, abstract: false, final false
inline ::System::Object* ChangeTypeWildcardDestination(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeTypeWildcardSource, addr 0xab64c94, size 0x158, virtual false, abstract: false, final false
inline ::System::Object* ChangeTypeWildcardSource(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method Create, addr 0xab640f8, size 0x58, virtual false, abstract: false, final false
static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

static inline ::System::Xml::Schema::XmlMiscConverter* New_ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method ToString, addr 0xab64150, size 0x51c, virtual true, abstract: false, final false
inline ::StringW ToString(::System::Object*  value, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method .ctor, addr 0xab64090, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlMiscConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlMiscConverter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlMiscConverter(XmlMiscConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlMiscConverter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlMiscConverter(XmlMiscConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14568};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Schema::XmlMiscConverter) == 0x28, "Size mismatch!");

} // namespace end def System::Xml::Schema

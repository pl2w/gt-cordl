#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaObjectTable_XmlSchemaObjectEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(XmlSchemaObjectTable_XmlSchemaObjectEntry)
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace GlobalNamespace {
struct XmlSchemaObjectTable_XmlSchemaObjectEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry, "System.Xml.Schema", "XmlSchemaObjectTable/XmlSchemaObjectEntry");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry
struct CORDL_TYPE XmlSchemaObjectTable_XmlSchemaObjectEntry {
public:
// Declarations
/// @brief Method .ctor, addr 0xab40590, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlQualifiedName*  name, ::System::Xml::Schema::XmlSchemaObject*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaObjectTable_XmlSchemaObjectEntry() ;

// Ctor Parameters [CppParam { name: "qname", ty: "::System::Xml::XmlQualifiedName*", modifiers: "", def_value: None, comment: None }, CppParam { name: "xso", ty: "::System::Xml::Schema::XmlSchemaObject*", modifiers: "", def_value: None, comment: None }]
constexpr XmlSchemaObjectTable_XmlSchemaObjectEntry(::System::Xml::XmlQualifiedName*  qname, ::System::Xml::Schema::XmlSchemaObject*  xso) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14530};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field qname, offset: 0x0, size: 0x8, def value: None
 ::System::Xml::XmlQualifiedName*  qname;

/// @brief Field xso, offset: 0x8, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchemaObject*  xso;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry, qname) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry, xso) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

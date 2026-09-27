#pragma once
// IWYU pragma private; include "System/Xml/XmlWellFormedWriter_ElementScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlWellFormedWriter_ElementScope)
namespace System::Xml {
class XmlRawWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct XmlWellFormedWriter_ElementScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlWellFormedWriter_ElementScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlWellFormedWriter_ElementScope, "System.Xml", "XmlWellFormedWriter/ElementScope");
// Dependencies System.Xml.XmlSpace
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/ElementScope
struct CORDL_TYPE XmlWellFormedWriter_ElementScope {
public:
// Declarations
/// @brief Method Set, addr 0xabb409c, size 0x60, virtual false, abstract: false, final false
inline void Set(::StringW  prefix, ::StringW  localName, ::StringW  namespaceUri, int32_t  prevNSTop) ;

/// @brief Method WriteEndElement, addr 0xabb5850, size 0x2c, virtual false, abstract: false, final false
inline void WriteEndElement(::System::Xml::XmlRawWriter*  rawWriter) ;

/// @brief Method WriteFullEndElement, addr 0xabb5b34, size 0x2c, virtual false, abstract: false, final false
inline void WriteFullEndElement(::System::Xml::XmlRawWriter*  rawWriter) ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlWellFormedWriter_ElementScope() ;

// Ctor Parameters [CppParam { name: "prevNSTop", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "xmlSpace", ty: "::System::Xml::XmlSpace", modifiers: "", def_value: None, comment: None }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr XmlWellFormedWriter_ElementScope(int32_t  prevNSTop, ::StringW  prefix, ::StringW  localName, ::StringW  namespaceUri, ::System::Xml::XmlSpace  xmlSpace, ::StringW  xmlLang) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14083};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field prevNSTop, offset: 0x0, size: 0x4, def value: None
 int32_t  prevNSTop;

/// @brief Field prefix, offset: 0x8, size: 0x8, def value: None
 ::StringW  prefix;

/// @brief Field localName, offset: 0x10, size: 0x8, def value: None
 ::StringW  localName;

/// @brief Field namespaceUri, offset: 0x18, size: 0x8, def value: None
 ::StringW  namespaceUri;

/// @brief Field xmlSpace, offset: 0x20, size: 0x4, def value: None
 ::System::Xml::XmlSpace  xmlSpace;

/// @brief Field xmlLang, offset: 0x28, size: 0x8, def value: None
 ::StringW  xmlLang;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_ElementScope, prevNSTop) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_ElementScope, prefix) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_ElementScope, localName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_ElementScope, namespaceUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_ElementScope, xmlSpace) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_ElementScope, xmlLang) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlWellFormedWriter_ElementScope) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

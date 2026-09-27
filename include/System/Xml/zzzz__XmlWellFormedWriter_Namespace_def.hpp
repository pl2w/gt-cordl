#pragma once
// IWYU pragma private; include "System/Xml/XmlWellFormedWriter_Namespace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlWellFormedWriter_NamespaceKind_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlWellFormedWriter_Namespace)
namespace GlobalNamespace {
struct XmlWellFormedWriter_NamespaceKind;
}
namespace System::Xml {
class XmlRawWriter;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct XmlWellFormedWriter_Namespace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlWellFormedWriter_Namespace);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlWellFormedWriter_Namespace, "System.Xml", "XmlWellFormedWriter/Namespace");
// Dependencies System.Xml.XmlWellFormedWriter::NamespaceKind
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/Namespace
struct CORDL_TYPE XmlWellFormedWriter_Namespace {
public:
// Declarations
/// @brief Method Set, addr 0xabb405c, size 0x40, virtual false, abstract: false, final false
inline void Set(::StringW  prefix, ::StringW  namespaceUri, ::GlobalNamespace::XmlWellFormedWriter_NamespaceKind  kind) ;

/// @brief Method WriteDecl, addr 0xabbaf04, size 0x130, virtual false, abstract: false, final false
inline void WriteDecl(::System::Xml::XmlWriter*  writer, ::System::Xml::XmlRawWriter*  rawWriter) ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlWellFormedWriter_Namespace() ;

// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "kind", ty: "::GlobalNamespace::XmlWellFormedWriter_NamespaceKind", modifiers: "", def_value: None, comment: None }, CppParam { name: "prevNsIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlWellFormedWriter_Namespace(::StringW  prefix, ::StringW  namespaceUri, ::GlobalNamespace::XmlWellFormedWriter_NamespaceKind  kind, int32_t  prevNsIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14085};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field prefix, offset: 0x0, size: 0x8, def value: None
 ::StringW  prefix;

/// @brief Field namespaceUri, offset: 0x8, size: 0x8, def value: None
 ::StringW  namespaceUri;

/// @brief Field kind, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::XmlWellFormedWriter_NamespaceKind  kind;

/// @brief Field prevNsIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  prevNsIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_Namespace, prefix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_Namespace, namespaceUri) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_Namespace, kind) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_Namespace, prevNsIndex) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlWellFormedWriter_Namespace) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

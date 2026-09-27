#pragma once
// IWYU pragma private; include "System/Xml/XmlSqlBinaryReader_ElemInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_QName_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(XmlSqlBinaryReader_ElemInfo)
namespace GlobalNamespace {
struct XmlSqlBinaryReader_QName;
}
namespace System::Xml {
class XmlSqlBinaryReader_NamespaceDecl;
}
// Forward declare root types
namespace GlobalNamespace {
struct XmlSqlBinaryReader_ElemInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlSqlBinaryReader_ElemInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlSqlBinaryReader_ElemInfo, "System.Xml", "XmlSqlBinaryReader/ElemInfo");
// Dependencies System.Xml.XmlSpace, System.Xml.XmlSqlBinaryReader::QName
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlSqlBinaryReader/ElemInfo
struct CORDL_TYPE XmlSqlBinaryReader_ElemInfo {
public:
// Declarations
/// @brief Method Clear, addr 0xaab5d4c, size 0x20, virtual false, abstract: false, final false
inline ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* Clear() ;

/// @brief Method Set, addr 0xaab5d00, size 0x4c, virtual false, abstract: false, final false
inline void Set(::GlobalNamespace::XmlSqlBinaryReader_QName  name, bool  xmlspacePreserve) ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlSqlBinaryReader_ElemInfo() ;

// Ctor Parameters [CppParam { name: "name", ty: "::GlobalNamespace::XmlSqlBinaryReader_QName", modifiers: "", def_value: None, comment: None }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "xmlSpace", ty: "::System::Xml::XmlSpace", modifiers: "", def_value: None, comment: None }, CppParam { name: "xmlspacePreserve", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "nsdecls", ty: "::System::Xml::XmlSqlBinaryReader_NamespaceDecl*", modifiers: "", def_value: None, comment: None }]
constexpr XmlSqlBinaryReader_ElemInfo(::GlobalNamespace::XmlSqlBinaryReader_QName  name, ::StringW  xmlLang, ::System::Xml::XmlSpace  xmlSpace, bool  xmlspacePreserve, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*  nsdecls) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13984};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field name, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::XmlSqlBinaryReader_QName  name;

/// @brief Field xmlLang, offset: 0x18, size: 0x8, def value: None
 ::StringW  xmlLang;

/// @brief Field xmlSpace, offset: 0x20, size: 0x4, def value: None
 ::System::Xml::XmlSpace  xmlSpace;

/// @brief Field xmlspacePreserve, offset: 0x24, size: 0x1, def value: None
 bool  xmlspacePreserve;

/// @brief Field nsdecls, offset: 0x28, size: 0x8, def value: None
 ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*  nsdecls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_ElemInfo, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_ElemInfo, xmlLang) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_ElemInfo, xmlSpace) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_ElemInfo, xmlspacePreserve) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_ElemInfo, nsdecls) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlSqlBinaryReader_ElemInfo) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

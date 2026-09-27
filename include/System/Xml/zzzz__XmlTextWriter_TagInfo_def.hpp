#pragma once
// IWYU pragma private; include "System/Xml/XmlTextWriter_TagInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlTextWriter_NamespaceState_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextWriter_TagInfo)
// Forward declare root types
namespace GlobalNamespace {
struct XmlTextWriter_TagInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlTextWriter_TagInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlTextWriter_TagInfo, "System.Xml", "XmlTextWriter/TagInfo");
// Dependencies System.Xml.XmlSpace, System.Xml.XmlTextWriter::NamespaceState
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlTextWriter/TagInfo
struct CORDL_TYPE XmlTextWriter_TagInfo {
public:
// Declarations
/// @brief Method Init, addr 0xaba95f4, size 0x64, virtual false, abstract: false, final false
inline void Init(int32_t  nsTop) ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlTextWriter_TagInfo() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "defaultNs", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "defaultNsState", ty: "::GlobalNamespace::XmlTextWriter_NamespaceState", modifiers: "", def_value: None, comment: None }, CppParam { name: "xmlSpace", ty: "::System::Xml::XmlSpace", modifiers: "", def_value: None, comment: None }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "prevNsTop", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefixCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mixed", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr XmlTextWriter_TagInfo(::StringW  name, ::StringW  prefix, ::StringW  defaultNs, ::GlobalNamespace::XmlTextWriter_NamespaceState  defaultNsState, ::System::Xml::XmlSpace  xmlSpace, ::StringW  xmlLang, int32_t  prevNsTop, int32_t  prefixCount, bool  mixed) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14068};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field prefix, offset: 0x8, size: 0x8, def value: None
 ::StringW  prefix;

/// @brief Field defaultNs, offset: 0x10, size: 0x8, def value: None
 ::StringW  defaultNs;

/// @brief Field defaultNsState, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::XmlTextWriter_NamespaceState  defaultNsState;

/// @brief Field xmlSpace, offset: 0x1c, size: 0x4, def value: None
 ::System::Xml::XmlSpace  xmlSpace;

/// @brief Field xmlLang, offset: 0x20, size: 0x8, def value: None
 ::StringW  xmlLang;

/// @brief Field prevNsTop, offset: 0x28, size: 0x4, def value: None
 int32_t  prevNsTop;

/// @brief Field prefixCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  prefixCount;

/// @brief Field mixed, offset: 0x30, size: 0x1, def value: None
 bool  mixed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlTextWriter_TagInfo, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextWriter_TagInfo, prefix) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextWriter_TagInfo, defaultNs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextWriter_TagInfo, defaultNsState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextWriter_TagInfo, xmlSpace) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextWriter_TagInfo, xmlLang) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextWriter_TagInfo, prevNsTop) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextWriter_TagInfo, prefixCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextWriter_TagInfo, mixed) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlTextWriter_TagInfo) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "System/Xml/XmlWellFormedWriter_AttrName.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlWellFormedWriter_AttrName)
// Forward declare root types
namespace GlobalNamespace {
struct XmlWellFormedWriter_AttrName;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlWellFormedWriter_AttrName);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlWellFormedWriter_AttrName, "System.Xml", "XmlWellFormedWriter/AttrName");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/AttrName
struct CORDL_TYPE XmlWellFormedWriter_AttrName {
public:
// Declarations
/// @brief Method IsDuplicate, addr 0xabbb1c4, size 0x6c, virtual false, abstract: false, final false
inline bool IsDuplicate(::StringW  prefix, ::StringW  localName, ::StringW  namespaceUri) ;

/// @brief Method Set, addr 0xabbb178, size 0x4c, virtual false, abstract: false, final false
inline void Set(::StringW  prefix, ::StringW  localName, ::StringW  namespaceUri) ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlWellFormedWriter_AttrName() ;

// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "prev", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlWellFormedWriter_AttrName(::StringW  prefix, ::StringW  namespaceUri, ::StringW  localName, int32_t  prev) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14086};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field prefix, offset: 0x0, size: 0x8, def value: None
 ::StringW  prefix;

/// @brief Field namespaceUri, offset: 0x8, size: 0x8, def value: None
 ::StringW  namespaceUri;

/// @brief Field localName, offset: 0x10, size: 0x8, def value: None
 ::StringW  localName;

/// @brief Field prev, offset: 0x18, size: 0x4, def value: None
 int32_t  prev;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_AttrName, prefix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_AttrName, namespaceUri) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_AttrName, localName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_AttrName, prev) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlWellFormedWriter_AttrName) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

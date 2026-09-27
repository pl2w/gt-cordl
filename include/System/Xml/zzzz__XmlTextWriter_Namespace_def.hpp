#pragma once
// IWYU pragma private; include "System/Xml/XmlTextWriter_Namespace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextWriter_Namespace)
// Forward declare root types
namespace GlobalNamespace {
struct XmlTextWriter_Namespace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlTextWriter_Namespace);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlTextWriter_Namespace, "System.Xml", "XmlTextWriter/Namespace");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlTextWriter/Namespace
struct CORDL_TYPE XmlTextWriter_Namespace {
public:
// Declarations
/// @brief Method Set, addr 0xabadfa0, size 0x44, virtual false, abstract: false, final false
inline void Set(::StringW  prefix, ::StringW  ns, bool  declared) ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlTextWriter_Namespace() ;

// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "ns", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "declared", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "prevNsIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlTextWriter_Namespace(::StringW  prefix, ::StringW  ns, bool  declared, int32_t  prevNsIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14069};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field prefix, offset: 0x0, size: 0x8, def value: None
 ::StringW  prefix;

/// @brief Field ns, offset: 0x8, size: 0x8, def value: None
 ::StringW  ns;

/// @brief Field declared, offset: 0x10, size: 0x1, def value: None
 bool  declared;

/// @brief Field prevNsIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  prevNsIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlTextWriter_Namespace, prefix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextWriter_Namespace, ns) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextWriter_Namespace, declared) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlTextWriter_Namespace, prevNsIndex) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlTextWriter_Namespace) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

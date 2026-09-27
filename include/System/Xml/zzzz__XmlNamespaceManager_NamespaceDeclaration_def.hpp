#pragma once
// IWYU pragma private; include "System/Xml/XmlNamespaceManager_NamespaceDeclaration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNamespaceManager_NamespaceDeclaration)
// Forward declare root types
namespace GlobalNamespace {
struct XmlNamespaceManager_NamespaceDeclaration;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlNamespaceManager_NamespaceDeclaration);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlNamespaceManager_NamespaceDeclaration, "System.Xml", "XmlNamespaceManager/NamespaceDeclaration");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlNamespaceManager/NamespaceDeclaration
struct CORDL_TYPE XmlNamespaceManager_NamespaceDeclaration {
public:
// Declarations
/// @brief Method Set, addr 0xabf9318, size 0x48, virtual false, abstract: false, final false
inline void Set(::StringW  prefix, ::StringW  uri, int32_t  scopeId, int32_t  previousNsIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlNamespaceManager_NamespaceDeclaration() ;

// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "scopeId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "previousNsIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlNamespaceManager_NamespaceDeclaration(::StringW  prefix, ::StringW  uri, int32_t  scopeId, int32_t  previousNsIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14187};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field prefix, offset: 0x0, size: 0x8, def value: None
 ::StringW  prefix;

/// @brief Field uri, offset: 0x8, size: 0x8, def value: None
 ::StringW  uri;

/// @brief Field scopeId, offset: 0x10, size: 0x4, def value: None
 int32_t  scopeId;

/// @brief Field previousNsIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  previousNsIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlNamespaceManager_NamespaceDeclaration, prefix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlNamespaceManager_NamespaceDeclaration, uri) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlNamespaceManager_NamespaceDeclaration, scopeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlNamespaceManager_NamespaceDeclaration, previousNsIndex) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlNamespaceManager_NamespaceDeclaration) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "System/Xml/XmlCanonicalWriter_Scope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlCanonicalWriter_Scope)
// Forward declare root types
namespace GlobalNamespace {
struct XmlCanonicalWriter_Scope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlCanonicalWriter_Scope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlCanonicalWriter_Scope, "System.Xml", "XmlCanonicalWriter/Scope");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlCanonicalWriter/Scope
struct CORDL_TYPE XmlCanonicalWriter_Scope {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr XmlCanonicalWriter_Scope() ;

// Ctor Parameters [CppParam { name: "xmlnsAttributeCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "xmlnsOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlCanonicalWriter_Scope(int32_t  xmlnsAttributeCount, int32_t  xmlnsOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24449};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field xmlnsAttributeCount, offset: 0x0, size: 0x4, def value: None
 int32_t  xmlnsAttributeCount;

/// @brief Field xmlnsOffset, offset: 0x4, size: 0x4, def value: None
 int32_t  xmlnsOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_Scope, xmlnsAttributeCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_Scope, xmlnsOffset) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlCanonicalWriter_Scope) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "System/Xml/XmlCanonicalWriter_Element.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlCanonicalWriter_Element)
// Forward declare root types
namespace GlobalNamespace {
struct XmlCanonicalWriter_Element;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlCanonicalWriter_Element);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlCanonicalWriter_Element, "System.Xml", "XmlCanonicalWriter/Element");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlCanonicalWriter/Element
struct CORDL_TYPE XmlCanonicalWriter_Element {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr XmlCanonicalWriter_Element() ;

// Ctor Parameters [CppParam { name: "prefixOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefixLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "localNameOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "localNameLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlCanonicalWriter_Element(int32_t  prefixOffset, int32_t  prefixLength, int32_t  localNameOffset, int32_t  localNameLength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24450};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field prefixOffset, offset: 0x0, size: 0x4, def value: None
 int32_t  prefixOffset;

/// @brief Field prefixLength, offset: 0x4, size: 0x4, def value: None
 int32_t  prefixLength;

/// @brief Field localNameOffset, offset: 0x8, size: 0x4, def value: None
 int32_t  localNameOffset;

/// @brief Field localNameLength, offset: 0xc, size: 0x4, def value: None
 int32_t  localNameLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_Element, prefixOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_Element, prefixLength) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_Element, localNameOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_Element, localNameLength) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlCanonicalWriter_Element) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

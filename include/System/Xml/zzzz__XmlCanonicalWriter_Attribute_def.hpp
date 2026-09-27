#pragma once
// IWYU pragma private; include "System/Xml/XmlCanonicalWriter_Attribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlCanonicalWriter_Attribute)
// Forward declare root types
namespace GlobalNamespace {
struct XmlCanonicalWriter_Attribute;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlCanonicalWriter_Attribute);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlCanonicalWriter_Attribute, "System.Xml", "XmlCanonicalWriter/Attribute");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlCanonicalWriter/Attribute
struct CORDL_TYPE XmlCanonicalWriter_Attribute {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr XmlCanonicalWriter_Attribute() ;

// Ctor Parameters [CppParam { name: "prefixOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefixLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "localNameOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "localNameLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "nsOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "nsLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlCanonicalWriter_Attribute(int32_t  prefixOffset, int32_t  prefixLength, int32_t  localNameOffset, int32_t  localNameLength, int32_t  nsOffset, int32_t  nsLength, int32_t  offset, int32_t  length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24451};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field prefixOffset, offset: 0x0, size: 0x4, def value: None
 int32_t  prefixOffset;

/// @brief Field prefixLength, offset: 0x4, size: 0x4, def value: None
 int32_t  prefixLength;

/// @brief Field localNameOffset, offset: 0x8, size: 0x4, def value: None
 int32_t  localNameOffset;

/// @brief Field localNameLength, offset: 0xc, size: 0x4, def value: None
 int32_t  localNameLength;

/// @brief Field nsOffset, offset: 0x10, size: 0x4, def value: None
 int32_t  nsOffset;

/// @brief Field nsLength, offset: 0x14, size: 0x4, def value: None
 int32_t  nsLength;

/// @brief Field offset, offset: 0x18, size: 0x4, def value: None
 int32_t  offset;

/// @brief Field length, offset: 0x1c, size: 0x4, def value: None
 int32_t  length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_Attribute, prefixOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_Attribute, prefixLength) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_Attribute, localNameOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_Attribute, localNameLength) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_Attribute, nsOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_Attribute, nsLength) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_Attribute, offset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_Attribute, length) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlCanonicalWriter_Attribute) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

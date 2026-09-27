#pragma once
// IWYU pragma private; include "System/Xml/XmlCanonicalWriter_XmlnsAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlCanonicalWriter_XmlnsAttribute)
// Forward declare root types
namespace GlobalNamespace {
struct XmlCanonicalWriter_XmlnsAttribute;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute, "System.Xml", "XmlCanonicalWriter/XmlnsAttribute");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlCanonicalWriter/XmlnsAttribute
struct CORDL_TYPE XmlCanonicalWriter_XmlnsAttribute {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr XmlCanonicalWriter_XmlnsAttribute() ;

// Ctor Parameters [CppParam { name: "prefixOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefixLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "nsOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "nsLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "referred", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr XmlCanonicalWriter_XmlnsAttribute(int32_t  prefixOffset, int32_t  prefixLength, int32_t  nsOffset, int32_t  nsLength, bool  referred) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24452};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field prefixOffset, offset: 0x0, size: 0x4, def value: None
 int32_t  prefixOffset;

/// @brief Field prefixLength, offset: 0x4, size: 0x4, def value: None
 int32_t  prefixLength;

/// @brief Field nsOffset, offset: 0x8, size: 0x4, def value: None
 int32_t  nsOffset;

/// @brief Field nsLength, offset: 0xc, size: 0x4, def value: None
 int32_t  nsLength;

/// @brief Field referred, offset: 0x10, size: 0x1, def value: None
 bool  referred;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute, prefixOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute, prefixLength) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute, nsOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute, nsLength) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute, referred) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace

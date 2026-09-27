#pragma once
// IWYU pragma private; include "System/Xml/XmlNodeReaderNavigator_VirtualAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(XmlNodeReaderNavigator_VirtualAttribute)
// Forward declare root types
namespace GlobalNamespace {
struct XmlNodeReaderNavigator_VirtualAttribute;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute, "System.Xml", "XmlNodeReaderNavigator/VirtualAttribute");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlNodeReaderNavigator/VirtualAttribute
struct CORDL_TYPE XmlNodeReaderNavigator_VirtualAttribute {
public:
// Declarations
/// @brief Method .ctor, addr 0xabdec8c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlNodeReaderNavigator_VirtualAttribute() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr XmlNodeReaderNavigator_VirtualAttribute(::StringW  name, ::StringW  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14134};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field value, offset: 0x8, size: 0x8, def value: None
 ::StringW  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute, value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlNodeReaderNavigator_VirtualAttribute) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "System/Xml/XmlBaseReader_XmlNode_XmlNodeFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlBaseReader_XmlNode_XmlNodeFlags)
// Forward declare root types
namespace GlobalNamespace {
struct XmlNode_XmlBaseReader_XmlNodeFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags, "System.Xml", "XmlBaseReader/XmlNode/XmlNodeFlags");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlBaseReader/XmlNode/XmlNodeFlags
struct CORDL_TYPE XmlNode_XmlBaseReader_XmlNodeFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlNode_XmlBaseReader_XmlNodeFlags_Unwrapped
enum struct __XmlNode_XmlBaseReader_XmlNodeFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_CanGetAttribute = static_cast<int32_t>(0x1),
__E_CanMoveToElement = static_cast<int32_t>(0x2),
__E_HasValue = static_cast<int32_t>(0x4),
__E_AtomicValue = static_cast<int32_t>(0x8),
__E_SkipValue = static_cast<int32_t>(0x10),
__E_HasContent = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlNode_XmlBaseReader_XmlNodeFlags_Unwrapped () const noexcept {
return static_cast<__XmlNode_XmlBaseReader_XmlNodeFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlNode_XmlBaseReader_XmlNodeFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlNode_XmlBaseReader_XmlNodeFlags(int32_t  value__) noexcept;

/// @brief Field AtomicValue value: I32(8)
static ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags const AtomicValue;

/// @brief Field CanGetAttribute value: I32(1)
static ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags const CanGetAttribute;

/// @brief Field CanMoveToElement value: I32(2)
static ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags const CanMoveToElement;

/// @brief Field HasContent value: I32(32)
static ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags const HasContent;

/// @brief Field HasValue value: I32(4)
static ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags const HasValue;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags const None;

/// @brief Field SkipValue value: I32(16)
static ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags const SkipValue;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24417};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

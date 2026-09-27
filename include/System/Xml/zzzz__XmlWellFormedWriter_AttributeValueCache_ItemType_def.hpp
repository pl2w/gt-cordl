#pragma once
// IWYU pragma private; include "System/Xml/XmlWellFormedWriter_AttributeValueCache_ItemType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlWellFormedWriter_AttributeValueCache_ItemType)
// Forward declare root types
namespace GlobalNamespace {
struct AttributeValueCache_XmlWellFormedWriter_ItemType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AttributeValueCache_XmlWellFormedWriter_ItemType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AttributeValueCache_XmlWellFormedWriter_ItemType, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/ItemType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/AttributeValueCache/ItemType
struct CORDL_TYPE AttributeValueCache_XmlWellFormedWriter_ItemType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AttributeValueCache_XmlWellFormedWriter_ItemType_Unwrapped
enum struct __AttributeValueCache_XmlWellFormedWriter_ItemType_Unwrapped : int32_t {
__E_EntityRef = static_cast<int32_t>(0x0),
__E_CharEntity = static_cast<int32_t>(0x1),
__E_SurrogateCharEntity = static_cast<int32_t>(0x2),
__E_Whitespace = static_cast<int32_t>(0x3),
__E_String = static_cast<int32_t>(0x4),
__E_StringChars = static_cast<int32_t>(0x5),
__E_Raw = static_cast<int32_t>(0x6),
__E_RawChars = static_cast<int32_t>(0x7),
__E_ValueString = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AttributeValueCache_XmlWellFormedWriter_ItemType_Unwrapped () const noexcept {
return static_cast<__AttributeValueCache_XmlWellFormedWriter_ItemType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AttributeValueCache_XmlWellFormedWriter_ItemType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AttributeValueCache_XmlWellFormedWriter_ItemType(int32_t  value__) noexcept;

/// @brief Field CharEntity value: I32(1)
static ::GlobalNamespace::AttributeValueCache_XmlWellFormedWriter_ItemType const CharEntity;

/// @brief Field EntityRef value: I32(0)
static ::GlobalNamespace::AttributeValueCache_XmlWellFormedWriter_ItemType const EntityRef;

/// @brief Field Raw value: I32(6)
static ::GlobalNamespace::AttributeValueCache_XmlWellFormedWriter_ItemType const Raw;

/// @brief Field RawChars value: I32(7)
static ::GlobalNamespace::AttributeValueCache_XmlWellFormedWriter_ItemType const RawChars;

/// @brief Field String value: I32(4)
static ::GlobalNamespace::AttributeValueCache_XmlWellFormedWriter_ItemType const String;

/// @brief Field StringChars value: I32(5)
static ::GlobalNamespace::AttributeValueCache_XmlWellFormedWriter_ItemType const StringChars;

/// @brief Field SurrogateCharEntity value: I32(2)
static ::GlobalNamespace::AttributeValueCache_XmlWellFormedWriter_ItemType const SurrogateCharEntity;

/// @brief Field ValueString value: I32(8)
static ::GlobalNamespace::AttributeValueCache_XmlWellFormedWriter_ItemType const ValueString;

/// @brief Field Whitespace value: I32(3)
static ::GlobalNamespace::AttributeValueCache_XmlWellFormedWriter_ItemType const Whitespace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14088};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AttributeValueCache_XmlWellFormedWriter_ItemType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AttributeValueCache_XmlWellFormedWriter_ItemType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

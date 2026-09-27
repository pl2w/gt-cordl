#pragma once
// IWYU pragma private; include "System/Xml/DtdParser_LiteralType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DtdParser_LiteralType)
// Forward declare root types
namespace GlobalNamespace {
struct DtdParser_LiteralType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DtdParser_LiteralType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DtdParser_LiteralType, "System.Xml", "DtdParser/LiteralType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.DtdParser/LiteralType
struct CORDL_TYPE DtdParser_LiteralType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DtdParser_LiteralType_Unwrapped
enum struct __DtdParser_LiteralType_Unwrapped : int32_t {
__E_AttributeValue = static_cast<int32_t>(0x0),
__E_EntityReplText = static_cast<int32_t>(0x1),
__E_SystemOrPublicID = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DtdParser_LiteralType_Unwrapped () const noexcept {
return static_cast<__DtdParser_LiteralType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DtdParser_LiteralType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DtdParser_LiteralType(int32_t  value__) noexcept;

/// @brief Field AttributeValue value: I32(0)
static ::GlobalNamespace::DtdParser_LiteralType const AttributeValue;

/// @brief Field EntityReplText value: I32(1)
static ::GlobalNamespace::DtdParser_LiteralType const EntityReplText;

/// @brief Field SystemOrPublicID value: I32(2)
static ::GlobalNamespace::DtdParser_LiteralType const SystemOrPublicID;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14155};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DtdParser_LiteralType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DtdParser_LiteralType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

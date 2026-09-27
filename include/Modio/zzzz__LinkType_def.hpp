#pragma once
// IWYU pragma private; include "Modio/LinkType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LinkType)
// Forward declare root types
namespace Modio {
struct LinkType;
}
// Write type traits
MARK_VAL_T(::Modio::LinkType);
DEFINE_IL2CPP_CLASS(::Modio::LinkType, "Modio", "LinkType");
// Dependencies 
namespace Modio {
// Is value type: true
// CS Name: Modio.LinkType
struct CORDL_TYPE LinkType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LinkType_Unwrapped
enum struct __LinkType_Unwrapped : int32_t {
__E_Website = static_cast<int32_t>(0x0),
__E_Terms = static_cast<int32_t>(0x1),
__E_Privacy = static_cast<int32_t>(0x2),
__E_Manage = static_cast<int32_t>(0x3),
__E_Refund = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LinkType_Unwrapped () const noexcept {
return static_cast<__LinkType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LinkType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LinkType(int32_t  value__) noexcept;

/// @brief Field Manage value: I32(3)
static ::Modio::LinkType const Manage;

/// @brief Field Privacy value: I32(2)
static ::Modio::LinkType const Privacy;

/// @brief Field Refund value: I32(4)
static ::Modio::LinkType const Refund;

/// @brief Field Terms value: I32(1)
static ::Modio::LinkType const Terms;

/// @brief Field Website value: I32(0)
static ::Modio::LinkType const Website;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17522};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::LinkType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::LinkType) == 0x4, "Size mismatch!");

} // namespace end def Modio

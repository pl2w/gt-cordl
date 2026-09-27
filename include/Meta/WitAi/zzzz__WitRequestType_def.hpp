#pragma once
// IWYU pragma private; include "Meta/WitAi/WitRequestType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitRequestType)
// Forward declare root types
namespace Meta::WitAi {
struct WitRequestType;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::WitRequestType);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitRequestType, "Meta.WitAi", "WitRequestType");
// Dependencies 
namespace Meta::WitAi {
// Is value type: true
// CS Name: Meta.WitAi.WitRequestType
struct CORDL_TYPE WitRequestType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WitRequestType_Unwrapped
enum struct __WitRequestType_Unwrapped : int32_t {
__E_Http = static_cast<int32_t>(0x0),
__E_WebSocket = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WitRequestType_Unwrapped () const noexcept {
return static_cast<__WitRequestType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WitRequestType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WitRequestType(int32_t  value__) noexcept;

/// @brief Field Http value: I32(0)
static ::Meta::WitAi::WitRequestType const Http;

/// @brief Field WebSocket value: I32(1)
static ::Meta::WitAi::WitRequestType const WebSocket;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30976};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::WitRequestType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::WitRequestType) == 0x4, "Size mismatch!");

} // namespace end def Meta::WitAi

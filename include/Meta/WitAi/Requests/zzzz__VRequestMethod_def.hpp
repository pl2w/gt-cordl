#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequestMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRequestMethod)
// Forward declare root types
namespace Meta::WitAi::Requests {
struct VRequestMethod;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::Requests::VRequestMethod);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VRequestMethod, "Meta.WitAi.Requests", "VRequestMethod");
// Dependencies 
namespace Meta::WitAi::Requests {
// Is value type: true
// CS Name: Meta.WitAi.Requests.VRequestMethod
struct CORDL_TYPE VRequestMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VRequestMethod_Unwrapped
enum struct __VRequestMethod_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_HttpGet = static_cast<int32_t>(0x1),
__E_HttpPost = static_cast<int32_t>(0x2),
__E_HttpPut = static_cast<int32_t>(0x3),
__E_HttpHead = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VRequestMethod_Unwrapped () const noexcept {
return static_cast<__VRequestMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VRequestMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VRequestMethod(int32_t  value__) noexcept;

/// @brief Field HttpGet value: I32(1)
static ::Meta::WitAi::Requests::VRequestMethod const HttpGet;

/// @brief Field HttpHead value: I32(4)
static ::Meta::WitAi::Requests::VRequestMethod const HttpHead;

/// @brief Field HttpPost value: I32(2)
static ::Meta::WitAi::Requests::VRequestMethod const HttpPost;

/// @brief Field HttpPut value: I32(3)
static ::Meta::WitAi::Requests::VRequestMethod const HttpPut;

/// @brief Field Unknown value: I32(0)
static ::Meta::WitAi::Requests::VRequestMethod const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25595};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::VRequestMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::VRequestMethod) == 0x4, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests

#pragma once
// IWYU pragma private; include "Modio/API/Filtering.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Filtering)
// Forward declare root types
namespace Modio::API {
struct Filtering;
}
// Write type traits
MARK_VAL_T(::Modio::API::Filtering);
DEFINE_IL2CPP_CLASS(::Modio::API::Filtering, "Modio.API", "Filtering");
// Dependencies 
namespace Modio::API {
// Is value type: true
// CS Name: Modio.API.Filtering
struct CORDL_TYPE Filtering {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Filtering_Unwrapped
enum struct __Filtering_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Like = static_cast<int32_t>(0x1),
__E_Not = static_cast<int32_t>(0x2),
__E_NotLike = static_cast<int32_t>(0x3),
__E_In = static_cast<int32_t>(0x4),
__E_NotIn = static_cast<int32_t>(0x5),
__E_Max = static_cast<int32_t>(0x6),
__E_Min = static_cast<int32_t>(0x7),
__E_BitwiseAnd = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Filtering_Unwrapped () const noexcept {
return static_cast<__Filtering_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Filtering() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Filtering(int32_t  value__) noexcept;

/// @brief Field BitwiseAnd value: I32(8)
static ::Modio::API::Filtering const BitwiseAnd;

/// @brief Field In value: I32(4)
static ::Modio::API::Filtering const In;

/// @brief Field Like value: I32(1)
static ::Modio::API::Filtering const Like;

/// @brief Field Max value: I32(6)
static ::Modio::API::Filtering const Max;

/// @brief Field Min value: I32(7)
static ::Modio::API::Filtering const Min;

/// @brief Field None value: I32(0)
static ::Modio::API::Filtering const None;

/// @brief Field Not value: I32(2)
static ::Modio::API::Filtering const Not;

/// @brief Field NotIn value: I32(5)
static ::Modio::API::Filtering const NotIn;

/// @brief Field NotLike value: I32(3)
static ::Modio::API::Filtering const NotLike;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18032};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::Filtering, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::API::Filtering) == 0x4, "Size mismatch!");

} // namespace end def Modio::API

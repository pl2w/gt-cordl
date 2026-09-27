#pragma once
// IWYU pragma private; include "GlobalNamespace/GetSessionResponseType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetSessionResponseType)
// Forward declare root types
namespace GlobalNamespace {
struct GetSessionResponseType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GetSessionResponseType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetSessionResponseType, "", "GetSessionResponseType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GetSessionResponseType
struct CORDL_TYPE GetSessionResponseType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GetSessionResponseType_Unwrapped
enum struct __GetSessionResponseType_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0xc8),
__E_NOT_FOUND = static_cast<int32_t>(0xcc),
__E_LOST = static_cast<int32_t>(0x194),
__E_ERROR = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GetSessionResponseType_Unwrapped () const noexcept {
return static_cast<__GetSessionResponseType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GetSessionResponseType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GetSessionResponseType(int32_t  value__) noexcept;

/// @brief Field ERROR value: I32(0)
static ::GlobalNamespace::GetSessionResponseType const ERROR;

/// @brief Field LOST value: I32(404)
static ::GlobalNamespace::GetSessionResponseType const LOST;

/// @brief Field NOT_FOUND value: I32(204)
static ::GlobalNamespace::GetSessionResponseType const NOT_FOUND;

/// @brief Field OK value: I32(200)
static ::GlobalNamespace::GetSessionResponseType const OK;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2867};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetSessionResponseType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetSessionResponseType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

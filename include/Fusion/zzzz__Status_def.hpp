#pragma once
// IWYU pragma private; include "Fusion/Status.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Status)
// Forward declare root types
namespace Fusion {
struct Status;
}
// Write type traits
MARK_VAL_T(::Fusion::Status);
DEFINE_IL2CPP_CLASS(::Fusion::Status, "Fusion", "Status");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.Status
struct CORDL_TYPE Status {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Status_Unwrapped
enum struct __Status_Unwrapped : int32_t {
__E_Good = static_cast<int32_t>(0x0),
__E_Ahead = static_cast<int32_t>(0x1),
__E_Behind = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Status_Unwrapped () const noexcept {
return static_cast<__Status_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Status() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Status(int32_t  value__) noexcept;

/// @brief Field Ahead value: I32(1)
static ::Fusion::Status const Ahead;

/// @brief Field Behind value: I32(2)
static ::Fusion::Status const Behind;

/// @brief Field Good value: I32(0)
static ::Fusion::Status const Good;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19299};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Status, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Status) == 0x4, "Size mismatch!");

} // namespace end def Fusion

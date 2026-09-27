#pragma once
// IWYU pragma private; include "BoingKit/BoingReactorField_FalloffModeEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingReactorField_FalloffModeEnum)
// Forward declare root types
namespace GlobalNamespace {
struct BoingReactorField_FalloffModeEnum;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoingReactorField_FalloffModeEnum);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoingReactorField_FalloffModeEnum, "BoingKit", "BoingReactorField/FalloffModeEnum");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.BoingReactorField/FalloffModeEnum
struct CORDL_TYPE BoingReactorField_FalloffModeEnum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BoingReactorField_FalloffModeEnum_Unwrapped
enum struct __BoingReactorField_FalloffModeEnum_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Circle = static_cast<int32_t>(0x1),
__E_Square = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BoingReactorField_FalloffModeEnum_Unwrapped () const noexcept {
return static_cast<__BoingReactorField_FalloffModeEnum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BoingReactorField_FalloffModeEnum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BoingReactorField_FalloffModeEnum(int32_t  value__) noexcept;

/// @brief Field Circle value: I32(1)
static ::GlobalNamespace::BoingReactorField_FalloffModeEnum const Circle;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::BoingReactorField_FalloffModeEnum const None;

/// @brief Field Square value: I32(2)
static ::GlobalNamespace::BoingReactorField_FalloffModeEnum const Square;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5197};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoingReactorField_FalloffModeEnum, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoingReactorField_FalloffModeEnum) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

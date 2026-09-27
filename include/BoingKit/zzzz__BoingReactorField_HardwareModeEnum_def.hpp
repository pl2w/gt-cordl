#pragma once
// IWYU pragma private; include "BoingKit/BoingReactorField_HardwareModeEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingReactorField_HardwareModeEnum)
// Forward declare root types
namespace GlobalNamespace {
struct BoingReactorField_HardwareModeEnum;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoingReactorField_HardwareModeEnum);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoingReactorField_HardwareModeEnum, "BoingKit", "BoingReactorField/HardwareModeEnum");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.BoingReactorField/HardwareModeEnum
struct CORDL_TYPE BoingReactorField_HardwareModeEnum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BoingReactorField_HardwareModeEnum_Unwrapped
enum struct __BoingReactorField_HardwareModeEnum_Unwrapped : int32_t {
__E_CPU = static_cast<int32_t>(0x0),
__E_GPU = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BoingReactorField_HardwareModeEnum_Unwrapped () const noexcept {
return static_cast<__BoingReactorField_HardwareModeEnum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BoingReactorField_HardwareModeEnum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BoingReactorField_HardwareModeEnum(int32_t  value__) noexcept;

/// @brief Field CPU value: I32(0)
static ::GlobalNamespace::BoingReactorField_HardwareModeEnum const CPU;

/// @brief Field GPU value: I32(1)
static ::GlobalNamespace::BoingReactorField_HardwareModeEnum const GPU;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5195};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoingReactorField_HardwareModeEnum, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoingReactorField_HardwareModeEnum) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

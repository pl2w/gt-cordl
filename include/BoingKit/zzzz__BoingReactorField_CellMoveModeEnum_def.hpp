#pragma once
// IWYU pragma private; include "BoingKit/BoingReactorField_CellMoveModeEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingReactorField_CellMoveModeEnum)
// Forward declare root types
namespace GlobalNamespace {
struct BoingReactorField_CellMoveModeEnum;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoingReactorField_CellMoveModeEnum);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoingReactorField_CellMoveModeEnum, "BoingKit", "BoingReactorField/CellMoveModeEnum");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.BoingReactorField/CellMoveModeEnum
struct CORDL_TYPE BoingReactorField_CellMoveModeEnum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BoingReactorField_CellMoveModeEnum_Unwrapped
enum struct __BoingReactorField_CellMoveModeEnum_Unwrapped : int32_t {
__E_Follow = static_cast<int32_t>(0x0),
__E_WrapAround = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BoingReactorField_CellMoveModeEnum_Unwrapped () const noexcept {
return static_cast<__BoingReactorField_CellMoveModeEnum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BoingReactorField_CellMoveModeEnum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BoingReactorField_CellMoveModeEnum(int32_t  value__) noexcept;

/// @brief Field Follow value: I32(0)
static ::GlobalNamespace::BoingReactorField_CellMoveModeEnum const Follow;

/// @brief Field WrapAround value: I32(1)
static ::GlobalNamespace::BoingReactorField_CellMoveModeEnum const WrapAround;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5196};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoingReactorField_CellMoveModeEnum, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoingReactorField_CellMoveModeEnum) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

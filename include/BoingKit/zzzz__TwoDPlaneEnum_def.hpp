#pragma once
// IWYU pragma private; include "BoingKit/TwoDPlaneEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TwoDPlaneEnum)
// Forward declare root types
namespace BoingKit {
struct TwoDPlaneEnum;
}
// Write type traits
MARK_VAL_T(::BoingKit::TwoDPlaneEnum);
DEFINE_IL2CPP_CLASS(::BoingKit::TwoDPlaneEnum, "BoingKit", "TwoDPlaneEnum");
// Dependencies 
namespace BoingKit {
// Is value type: true
// CS Name: BoingKit.TwoDPlaneEnum
struct CORDL_TYPE TwoDPlaneEnum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TwoDPlaneEnum_Unwrapped
enum struct __TwoDPlaneEnum_Unwrapped : int32_t {
__E_XY = static_cast<int32_t>(0x0),
__E_XZ = static_cast<int32_t>(0x1),
__E_YZ = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TwoDPlaneEnum_Unwrapped () const noexcept {
return static_cast<__TwoDPlaneEnum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TwoDPlaneEnum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TwoDPlaneEnum(int32_t  value__) noexcept;

/// @brief Field XY value: I32(0)
static ::BoingKit::TwoDPlaneEnum const XY;

/// @brief Field XZ value: I32(1)
static ::BoingKit::TwoDPlaneEnum const XZ;

/// @brief Field YZ value: I32(2)
static ::BoingKit::TwoDPlaneEnum const YZ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5219};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::TwoDPlaneEnum, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::BoingKit::TwoDPlaneEnum) == 0x4, "Size mismatch!");

} // namespace end def BoingKit

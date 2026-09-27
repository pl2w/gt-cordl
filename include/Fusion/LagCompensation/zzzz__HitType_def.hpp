#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/HitType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HitType)
// Forward declare root types
namespace Fusion::LagCompensation {
struct HitType;
}
// Write type traits
MARK_VAL_T(::Fusion::LagCompensation::HitType);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::HitType, "Fusion.LagCompensation", "HitType");
// Dependencies 
namespace Fusion::LagCompensation {
// Is value type: true
// CS Name: Fusion.LagCompensation.HitType
struct CORDL_TYPE HitType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HitType_Unwrapped
enum struct __HitType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Hitbox = static_cast<int32_t>(0x1),
__E_PhysX = static_cast<int32_t>(0x2),
__E_Box2D = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HitType_Unwrapped () const noexcept {
return static_cast<__HitType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HitType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HitType(int32_t  value__) noexcept;

/// @brief Field Box2D value: I32(3)
static ::Fusion::LagCompensation::HitType const Box2D;

/// @brief Field Hitbox value: I32(1)
static ::Fusion::LagCompensation::HitType const Hitbox;

/// @brief Field None value: I32(0)
static ::Fusion::LagCompensation::HitType const None;

/// @brief Field PhysX value: I32(2)
static ::Fusion::LagCompensation::HitType const PhysX;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19409};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::HitType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::HitType) == 0x4, "Size mismatch!");

} // namespace end def Fusion::LagCompensation

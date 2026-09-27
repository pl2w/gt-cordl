#pragma once
// IWYU pragma private; include "BoingKit/BoingBoneCollider_Type.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingBoneCollider_Type)
// Forward declare root types
namespace GlobalNamespace {
struct BoingBoneCollider_Type;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoingBoneCollider_Type);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoingBoneCollider_Type, "BoingKit", "BoingBoneCollider/Type");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.BoingBoneCollider/Type
struct CORDL_TYPE BoingBoneCollider_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BoingBoneCollider_Type_Unwrapped
enum struct __BoingBoneCollider_Type_Unwrapped : int32_t {
__E_Sphere = static_cast<int32_t>(0x0),
__E_Capsule = static_cast<int32_t>(0x1),
__E_Box = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BoingBoneCollider_Type_Unwrapped () const noexcept {
return static_cast<__BoingBoneCollider_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BoingBoneCollider_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BoingBoneCollider_Type(int32_t  value__) noexcept;

/// @brief Field Box value: I32(2)
static ::GlobalNamespace::BoingBoneCollider_Type const Box;

/// @brief Field Capsule value: I32(1)
static ::GlobalNamespace::BoingBoneCollider_Type const Capsule;

/// @brief Field Sphere value: I32(0)
static ::GlobalNamespace::BoingBoneCollider_Type const Sphere;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5164};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoingBoneCollider_Type, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoingBoneCollider_Type) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

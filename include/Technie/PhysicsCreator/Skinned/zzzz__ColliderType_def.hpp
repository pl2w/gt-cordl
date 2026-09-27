#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/ColliderType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColliderType)
// Forward declare root types
namespace Technie::PhysicsCreator::Skinned {
struct ColliderType;
}
// Write type traits
MARK_VAL_T(::Technie::PhysicsCreator::Skinned::ColliderType);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::Skinned::ColliderType, "Technie.PhysicsCreator.Skinned", "ColliderType");
// Dependencies 
namespace Technie::PhysicsCreator::Skinned {
// Is value type: true
// CS Name: Technie.PhysicsCreator.Skinned.ColliderType
struct CORDL_TYPE ColliderType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ColliderType_Unwrapped
enum struct __ColliderType_Unwrapped : int32_t {
__E_Convex = static_cast<int32_t>(0x0),
__E_Capsule = static_cast<int32_t>(0x1),
__E_Box = static_cast<int32_t>(0x2),
__E_Sphere = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ColliderType_Unwrapped () const noexcept {
return static_cast<__ColliderType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ColliderType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ColliderType(int32_t  value__) noexcept;

/// @brief Field Box value: I32(2)
static ::Technie::PhysicsCreator::Skinned::ColliderType const Box;

/// @brief Field Capsule value: I32(1)
static ::Technie::PhysicsCreator::Skinned::ColliderType const Capsule;

/// @brief Field Convex value: I32(0)
static ::Technie::PhysicsCreator::Skinned::ColliderType const Convex;

/// @brief Field Sphere value: I32(3)
static ::Technie::PhysicsCreator::Skinned::ColliderType const Sphere;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30532};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::Skinned::ColliderType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::Skinned::ColliderType) == 0x4, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::Skinned

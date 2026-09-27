#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/HullType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HullType)
// Forward declare root types
namespace Technie::PhysicsCreator {
struct HullType;
}
// Write type traits
MARK_VAL_T(::Technie::PhysicsCreator::HullType);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::HullType, "Technie.PhysicsCreator", "HullType");
// Dependencies 
namespace Technie::PhysicsCreator {
// Is value type: true
// CS Name: Technie.PhysicsCreator.HullType
struct CORDL_TYPE HullType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HullType_Unwrapped
enum struct __HullType_Unwrapped : int32_t {
__E_Box = static_cast<int32_t>(0x0),
__E_ConvexHull = static_cast<int32_t>(0x1),
__E_Sphere = static_cast<int32_t>(0x2),
__E_Face = static_cast<int32_t>(0x3),
__E_FaceAsBox = static_cast<int32_t>(0x4),
__E_Auto = static_cast<int32_t>(0x5),
__E_Capsule = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HullType_Unwrapped () const noexcept {
return static_cast<__HullType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HullType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HullType(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(5)
static ::Technie::PhysicsCreator::HullType const Auto;

/// @brief Field Box value: I32(0)
static ::Technie::PhysicsCreator::HullType const Box;

/// @brief Field Capsule value: I32(6)
static ::Technie::PhysicsCreator::HullType const Capsule;

/// @brief Field ConvexHull value: I32(1)
static ::Technie::PhysicsCreator::HullType const ConvexHull;

/// @brief Field Face value: I32(3)
static ::Technie::PhysicsCreator::HullType const Face;

/// @brief Field FaceAsBox value: I32(4)
static ::Technie::PhysicsCreator::HullType const FaceAsBox;

/// @brief Field Sphere value: I32(2)
static ::Technie::PhysicsCreator::HullType const Sphere;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30510};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::HullType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::HullType) == 0x4, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator

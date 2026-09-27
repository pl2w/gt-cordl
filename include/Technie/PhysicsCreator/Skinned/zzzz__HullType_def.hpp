#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/HullType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HullType)
// Forward declare root types
namespace Technie::PhysicsCreator::Skinned {
struct HullType;
}
// Write type traits
MARK_VAL_T(::Technie::PhysicsCreator::Skinned::HullType);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::Skinned::HullType, "Technie.PhysicsCreator.Skinned", "HullType");
// Dependencies 
namespace Technie::PhysicsCreator::Skinned {
// Is value type: true
// CS Name: Technie.PhysicsCreator.Skinned.HullType
struct CORDL_TYPE HullType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HullType_Unwrapped
enum struct __HullType_Unwrapped : int32_t {
__E_Auto = static_cast<int32_t>(0x0),
__E_Manual = static_cast<int32_t>(0x1),
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

/// @brief Field Auto value: I32(0)
static ::Technie::PhysicsCreator::Skinned::HullType const Auto;

/// @brief Field Manual value: I32(1)
static ::Technie::PhysicsCreator::Skinned::HullType const Manual;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30531};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::Skinned::HullType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::Skinned::HullType) == 0x4, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::Skinned

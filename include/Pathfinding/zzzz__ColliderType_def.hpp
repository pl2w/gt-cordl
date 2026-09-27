#pragma once
// IWYU pragma private; include "Pathfinding/ColliderType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColliderType)
// Forward declare root types
namespace Pathfinding {
struct ColliderType;
}
// Write type traits
MARK_VAL_T(::Pathfinding::ColliderType);
DEFINE_IL2CPP_CLASS(::Pathfinding::ColliderType, "Pathfinding", "ColliderType");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.ColliderType
struct CORDL_TYPE ColliderType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ColliderType_Unwrapped
enum struct __ColliderType_Unwrapped : int32_t {
__E_Sphere = static_cast<int32_t>(0x0),
__E_Capsule = static_cast<int32_t>(0x1),
__E_Ray = static_cast<int32_t>(0x2),
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

/// @brief Field Capsule value: I32(1)
static ::Pathfinding::ColliderType const Capsule;

/// @brief Field Ray value: I32(2)
static ::Pathfinding::ColliderType const Ray;

/// @brief Field Sphere value: I32(0)
static ::Pathfinding::ColliderType const Sphere;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21298};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ColliderType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ColliderType) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding

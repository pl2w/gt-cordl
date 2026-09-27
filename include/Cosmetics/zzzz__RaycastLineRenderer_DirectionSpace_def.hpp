#pragma once
// IWYU pragma private; include "Cosmetics/RaycastLineRenderer_DirectionSpace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastLineRenderer_DirectionSpace)
// Forward declare root types
namespace GlobalNamespace {
struct RaycastLineRenderer_DirectionSpace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RaycastLineRenderer_DirectionSpace);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RaycastLineRenderer_DirectionSpace, "Cosmetics", "RaycastLineRenderer/DirectionSpace");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cosmetics.RaycastLineRenderer/DirectionSpace
struct CORDL_TYPE RaycastLineRenderer_DirectionSpace {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RaycastLineRenderer_DirectionSpace_Unwrapped
enum struct __RaycastLineRenderer_DirectionSpace_Unwrapped : int32_t {
__E_Local = static_cast<int32_t>(0x0),
__E_World = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RaycastLineRenderer_DirectionSpace_Unwrapped () const noexcept {
return static_cast<__RaycastLineRenderer_DirectionSpace_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RaycastLineRenderer_DirectionSpace() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RaycastLineRenderer_DirectionSpace(int32_t  value__) noexcept;

/// @brief Field Local value: I32(0)
static ::GlobalNamespace::RaycastLineRenderer_DirectionSpace const Local;

/// @brief Field World value: I32(1)
static ::GlobalNamespace::RaycastLineRenderer_DirectionSpace const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4574};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RaycastLineRenderer_DirectionSpace, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RaycastLineRenderer_DirectionSpace) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

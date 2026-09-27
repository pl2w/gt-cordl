#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/NearFarInteractor_NearCasterSortingStrategy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NearFarInteractor_NearCasterSortingStrategy)
// Forward declare root types
namespace GlobalNamespace {
struct NearFarInteractor_NearCasterSortingStrategy;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy, "UnityEngine.XR.Interaction.Toolkit.Interactors", "NearFarInteractor/NearCasterSortingStrategy");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/NearCasterSortingStrategy
struct CORDL_TYPE NearFarInteractor_NearCasterSortingStrategy {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NearFarInteractor_NearCasterSortingStrategy_Unwrapped
enum struct __NearFarInteractor_NearCasterSortingStrategy_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_SquareDistance = static_cast<int32_t>(0x1),
__E_InteractableBased = static_cast<int32_t>(0x2),
__E_ClosestPointOnCollider = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NearFarInteractor_NearCasterSortingStrategy_Unwrapped () const noexcept {
return static_cast<__NearFarInteractor_NearCasterSortingStrategy_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NearFarInteractor_NearCasterSortingStrategy() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NearFarInteractor_NearCasterSortingStrategy(int32_t  value__) noexcept;

/// @brief Field ClosestPointOnCollider value: I32(3)
static ::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy const ClosestPointOnCollider;

/// @brief Field InteractableBased value: I32(2)
static ::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy const InteractableBased;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy const None;

/// @brief Field SquareDistance value: I32(1)
static ::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy const SquareDistance;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11443};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

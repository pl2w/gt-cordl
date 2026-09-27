#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/NearFarInteractor_Region.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NearFarInteractor_Region)
// Forward declare root types
namespace GlobalNamespace {
struct NearFarInteractor_Region;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NearFarInteractor_Region);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NearFarInteractor_Region, "UnityEngine.XR.Interaction.Toolkit.Interactors", "NearFarInteractor/Region");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor/Region
struct CORDL_TYPE NearFarInteractor_Region {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NearFarInteractor_Region_Unwrapped
enum struct __NearFarInteractor_Region_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Near = static_cast<int32_t>(0x1),
__E_Far = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NearFarInteractor_Region_Unwrapped () const noexcept {
return static_cast<__NearFarInteractor_Region_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NearFarInteractor_Region() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NearFarInteractor_Region(int32_t  value__) noexcept;

/// @brief Field Far value: I32(2)
static ::GlobalNamespace::NearFarInteractor_Region const Far;

/// @brief Field Near value: I32(1)
static ::GlobalNamespace::NearFarInteractor_Region const Near;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::NearFarInteractor_Region const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11442};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NearFarInteractor_Region, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NearFarInteractor_Region) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

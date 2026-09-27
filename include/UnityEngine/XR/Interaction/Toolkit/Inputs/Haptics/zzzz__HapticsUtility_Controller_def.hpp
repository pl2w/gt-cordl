#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/HapticsUtility_Controller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HapticsUtility_Controller)
// Forward declare root types
namespace GlobalNamespace {
struct HapticsUtility_Controller;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HapticsUtility_Controller);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HapticsUtility_Controller, "UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics", "HapticsUtility/Controller");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.HapticsUtility/Controller
struct CORDL_TYPE HapticsUtility_Controller {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HapticsUtility_Controller_Unwrapped
enum struct __HapticsUtility_Controller_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
__E_Both = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HapticsUtility_Controller_Unwrapped () const noexcept {
return static_cast<__HapticsUtility_Controller_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HapticsUtility_Controller() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HapticsUtility_Controller(int32_t  value__) noexcept;

/// @brief Field Both value: I32(2)
static ::GlobalNamespace::HapticsUtility_Controller const Both;

/// @brief Field Left value: I32(0)
static ::GlobalNamespace::HapticsUtility_Controller const Left;

/// @brief Field Right value: I32(1)
static ::GlobalNamespace::HapticsUtility_Controller const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11673};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HapticsUtility_Controller, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HapticsUtility_Controller) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

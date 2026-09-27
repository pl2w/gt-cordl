#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/ContinuousMoveProviderBase_GravityApplicationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuousMoveProviderBase_GravityApplicationMode)
// Forward declare root types
namespace GlobalNamespace {
struct ContinuousMoveProviderBase_GravityApplicationMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode, "UnityEngine.XR.Interaction.Toolkit", "ContinuousMoveProviderBase/GravityApplicationMode");
// [Obsolete("GravityApplicationMode has been deprecated in XRI 3.0.0 and will be removed in a future version of XRI. Please use LocomotionMediator with a GravityProvider.", false)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase/GravityApplicationMode
struct CORDL_TYPE ContinuousMoveProviderBase_GravityApplicationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContinuousMoveProviderBase_GravityApplicationMode_Unwrapped
enum struct __ContinuousMoveProviderBase_GravityApplicationMode_Unwrapped : int32_t {
__E_AttemptingMove = static_cast<int32_t>(0x0),
__E_Immediately = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContinuousMoveProviderBase_GravityApplicationMode_Unwrapped () const noexcept {
return static_cast<__ContinuousMoveProviderBase_GravityApplicationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContinuousMoveProviderBase_GravityApplicationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContinuousMoveProviderBase_GravityApplicationMode(int32_t  value__) noexcept;

/// @brief Field AttemptingMove value: I32(0)
static ::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode const AttemptingMove;

/// @brief Field Immediately value: I32(1)
static ::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode const Immediately;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11115};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

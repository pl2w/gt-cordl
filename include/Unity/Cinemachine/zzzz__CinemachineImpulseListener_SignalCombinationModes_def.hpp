#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseListener_SignalCombinationModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineImpulseListener_SignalCombinationModes)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineImpulseListener_SignalCombinationModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineImpulseListener_SignalCombinationModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineImpulseListener_SignalCombinationModes, "Unity.Cinemachine", "CinemachineImpulseListener/SignalCombinationModes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineImpulseListener/SignalCombinationModes
struct CORDL_TYPE CinemachineImpulseListener_SignalCombinationModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineImpulseListener_SignalCombinationModes_Unwrapped
enum struct __CinemachineImpulseListener_SignalCombinationModes_Unwrapped : int32_t {
__E_Additive = static_cast<int32_t>(0x0),
__E_UseLargest = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineImpulseListener_SignalCombinationModes_Unwrapped () const noexcept {
return static_cast<__CinemachineImpulseListener_SignalCombinationModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineImpulseListener_SignalCombinationModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineImpulseListener_SignalCombinationModes(int32_t  value__) noexcept;

/// @brief Field Additive value: I32(0)
static ::GlobalNamespace::CinemachineImpulseListener_SignalCombinationModes const Additive;

/// @brief Field UseLargest value: I32(1)
static ::GlobalNamespace::CinemachineImpulseListener_SignalCombinationModes const UseLargest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22475};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineImpulseListener_SignalCombinationModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineImpulseListener_SignalCombinationModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

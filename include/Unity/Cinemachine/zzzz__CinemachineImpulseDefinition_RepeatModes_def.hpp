#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseDefinition_RepeatModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineImpulseDefinition_RepeatModes)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineImpulseDefinition_RepeatModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineImpulseDefinition_RepeatModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineImpulseDefinition_RepeatModes, "Unity.Cinemachine", "CinemachineImpulseDefinition/RepeatModes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineImpulseDefinition/RepeatModes
struct CORDL_TYPE CinemachineImpulseDefinition_RepeatModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineImpulseDefinition_RepeatModes_Unwrapped
enum struct __CinemachineImpulseDefinition_RepeatModes_Unwrapped : int32_t {
__E_Stretch = static_cast<int32_t>(0x0),
__E_Loop = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineImpulseDefinition_RepeatModes_Unwrapped () const noexcept {
return static_cast<__CinemachineImpulseDefinition_RepeatModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineImpulseDefinition_RepeatModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineImpulseDefinition_RepeatModes(int32_t  value__) noexcept;

/// @brief Field Loop value: I32(1)
static ::GlobalNamespace::CinemachineImpulseDefinition_RepeatModes const Loop;

/// @brief Field Stretch value: I32(0)
static ::GlobalNamespace::CinemachineImpulseDefinition_RepeatModes const Stretch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22471};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineImpulseDefinition_RepeatModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineImpulseDefinition_RepeatModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

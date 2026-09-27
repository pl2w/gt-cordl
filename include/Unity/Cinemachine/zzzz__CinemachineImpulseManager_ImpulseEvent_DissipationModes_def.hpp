#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseManager_ImpulseEvent_DissipationModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineImpulseManager_ImpulseEvent_DissipationModes)
// Forward declare root types
namespace GlobalNamespace {
struct ImpulseEvent_CinemachineImpulseManager_DissipationModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes, "Unity.Cinemachine", "CinemachineImpulseManager/ImpulseEvent/DissipationModes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineImpulseManager/ImpulseEvent/DissipationModes
struct CORDL_TYPE ImpulseEvent_CinemachineImpulseManager_DissipationModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ImpulseEvent_CinemachineImpulseManager_DissipationModes_Unwrapped
enum struct __ImpulseEvent_CinemachineImpulseManager_DissipationModes_Unwrapped : int32_t {
__E_LinearDecay = static_cast<int32_t>(0x0),
__E_SoftDecay = static_cast<int32_t>(0x1),
__E_ExponentialDecay = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ImpulseEvent_CinemachineImpulseManager_DissipationModes_Unwrapped () const noexcept {
return static_cast<__ImpulseEvent_CinemachineImpulseManager_DissipationModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ImpulseEvent_CinemachineImpulseManager_DissipationModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ImpulseEvent_CinemachineImpulseManager_DissipationModes(int32_t  value__) noexcept;

/// @brief Field ExponentialDecay value: I32(2)
static ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes const ExponentialDecay;

/// @brief Field LinearDecay value: I32(0)
static ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes const LinearDecay;

/// @brief Field SoftDecay value: I32(1)
static ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes const SoftDecay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22481};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

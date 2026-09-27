#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_OpenVRControllerDetails.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_OpenVRController_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_OpenVRControllerDetails)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_OpenVRControllerDetails;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_OpenVRControllerDetails);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_OpenVRControllerDetails, "", "OVRInput/OpenVRControllerDetails");
// Dependencies OVR.OpenVR.VRControllerState_t, OVRInput::OpenVRController, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/OpenVRControllerDetails
struct CORDL_TYPE OVRInput_OpenVRControllerDetails {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_OpenVRControllerDetails() ;

// Ctor Parameters [CppParam { name: "state", ty: "::OVR::OpenVR::VRControllerState_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "controllerType", ty: "::GlobalNamespace::OVRInput_OpenVRController", modifiers: "", def_value: None, comment: None }, CppParam { name: "deviceID", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "localOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_OpenVRControllerDetails(::OVR::OpenVR::VRControllerState_t  state, ::GlobalNamespace::OVRInput_OpenVRController  controllerType, uint32_t  deviceID, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localOrientation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11951};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field state, offset: 0x0, size: 0x40, def value: None
 ::OVR::OpenVR::VRControllerState_t  state;

/// @brief Field controllerType, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::OVRInput_OpenVRController  controllerType;

/// @brief Field deviceID, offset: 0x48, size: 0x4, def value: None
 uint32_t  deviceID;

/// @brief Field localPosition, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  localPosition;

/// @brief Field localOrientation, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Quaternion  localOrientation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_OpenVRControllerDetails, state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OpenVRControllerDetails, controllerType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OpenVRControllerDetails, deviceID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OpenVRControllerDetails, localPosition) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OpenVRControllerDetails, localOrientation) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_OpenVRControllerDetails) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace

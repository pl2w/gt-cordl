#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ICinemachineCamera_ActivationEventParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ICinemachineCamera_ActivationEventParams)
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
// Forward declare root types
namespace GlobalNamespace {
struct ICinemachineCamera_ActivationEventParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ICinemachineCamera_ActivationEventParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ICinemachineCamera_ActivationEventParams, "Unity.Cinemachine", "ICinemachineCamera/ActivationEventParams");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.ICinemachineCamera/ActivationEventParams
struct CORDL_TYPE ICinemachineCamera_ActivationEventParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ICinemachineCamera_ActivationEventParams() ;

// Ctor Parameters [CppParam { name: "Origin", ty: "::Unity::Cinemachine::ICinemachineMixer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "OutgoingCamera", ty: "::Unity::Cinemachine::ICinemachineCamera*", modifiers: "", def_value: None, comment: None }, CppParam { name: "IncomingCamera", ty: "::Unity::Cinemachine::ICinemachineCamera*", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsCut", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "WorldUp", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "DeltaTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ICinemachineCamera_ActivationEventParams(::Unity::Cinemachine::ICinemachineMixer*  Origin, ::Unity::Cinemachine::ICinemachineCamera*  OutgoingCamera, ::Unity::Cinemachine::ICinemachineCamera*  IncomingCamera, bool  IsCut, ::UnityEngine::Vector3  WorldUp, float_t  DeltaTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22320};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Origin, offset: 0x0, size: 0x8, def value: None
 ::Unity::Cinemachine::ICinemachineMixer*  Origin;

/// @brief Field OutgoingCamera, offset: 0x8, size: 0x8, def value: None
 ::Unity::Cinemachine::ICinemachineCamera*  OutgoingCamera;

/// @brief Field IncomingCamera, offset: 0x10, size: 0x8, def value: None
 ::Unity::Cinemachine::ICinemachineCamera*  IncomingCamera;

/// @brief Field IsCut, offset: 0x18, size: 0x1, def value: None
 bool  IsCut;

/// @brief Field WorldUp, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  WorldUp;

/// @brief Field DeltaTime, offset: 0x28, size: 0x4, def value: None
 float_t  DeltaTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ICinemachineCamera_ActivationEventParams, Origin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ICinemachineCamera_ActivationEventParams, OutgoingCamera) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ICinemachineCamera_ActivationEventParams, IncomingCamera) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ICinemachineCamera_ActivationEventParams, IsCut) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ICinemachineCamera_ActivationEventParams, WorldUp) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ICinemachineCamera_ActivationEventParams, DeltaTime) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ICinemachineCamera_ActivationEventParams) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

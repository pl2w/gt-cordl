#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineVirtualCamera_LegacyTransitionParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineVirtualCamera_LegacyTransitionParams)
namespace Unity::Cinemachine {
class CinemachineLegacyCameraEvents_OnCameraLiveEvent;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineVirtualCamera_LegacyTransitionParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams, "Unity.Cinemachine", "CinemachineVirtualCamera/LegacyTransitionParams");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineVirtualCamera/LegacyTransitionParams
struct CORDL_TYPE CinemachineVirtualCamera_LegacyTransitionParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineVirtualCamera_LegacyTransitionParams() ;

// Ctor Parameters [CppParam { name: "m_BlendHint", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InheritPosition", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OnCameraLive", ty: "::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineVirtualCamera_LegacyTransitionParams(int32_t  m_BlendHint, bool  m_InheritPosition, ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*  m_OnCameraLive) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22445};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [FormerlySerializedAs("m_PositionBlending")]
/// @brief Field m_BlendHint, offset: 0x0, size: 0x4, def value: None
 int32_t  m_BlendHint;

/// @brief Field m_InheritPosition, offset: 0x4, size: 0x1, def value: None
 bool  m_InheritPosition;

/// @brief Field m_OnCameraLive, offset: 0x8, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*  m_OnCameraLive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams, m_BlendHint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams, m_InheritPosition) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams, m_OnCameraLive) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

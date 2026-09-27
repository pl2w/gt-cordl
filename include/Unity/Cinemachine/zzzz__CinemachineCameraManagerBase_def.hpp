#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCameraManagerBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCameraManagerBase_DefaultTargetSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineCameraManagerBase)
namespace GlobalNamespace {
struct CinemachineCameraManagerBase_DefaultTargetSettings;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
class BlendManager;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
struct CinemachineBlendDefinition;
}
namespace Unity::Cinemachine {
class CinemachineBlend;
}
namespace Unity::Cinemachine {
class CinemachineBlenderSettings;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineCameraManagerBase;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineCameraManagerBase*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCameraManagerBase*, "Unity.Cinemachine", "CinemachineCameraManagerBase");
// Dependencies Unity.Cinemachine.CameraState, Unity.Cinemachine.CinemachineBlendDefinition, Unity.Cinemachine.CinemachineCameraManagerBase::DefaultTargetSettings, Unity.Cinemachine.CinemachineVirtualCameraBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCameraManagerBase
class CORDL_TYPE CinemachineCameraManagerBase : public ::Unity::Cinemachine::CinemachineVirtualCameraBase {
public:
// Declarations
using DefaultTargetSettings = ::GlobalNamespace::CinemachineCameraManagerBase_DefaultTargetSettings;

 __declspec(property(get=get_ActiveBlend, put=set_ActiveBlend)) ::Unity::Cinemachine::CinemachineBlend*  ActiveBlend;

 __declspec(property(get=get_ChildCameras)) ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  ChildCameras;

/// @brief Field CustomBlends, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomBlends, put=__cordl_internal_set_CustomBlends)) ::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings>  CustomBlends;

/// @brief Field DefaultBlend, offset 0xc0, size 0x10 
 __declspec(property(get=__cordl_internal_get_DefaultBlend, put=__cordl_internal_set_DefaultBlend)) ::Unity::Cinemachine::CinemachineBlendDefinition  DefaultBlend;

/// @brief Field DefaultTarget, offset 0xa0, size 0x20 
 __declspec(property(get=__cordl_internal_get_DefaultTarget, put=__cordl_internal_set_DefaultTarget)) ::GlobalNamespace::CinemachineCameraManagerBase_DefaultTargetSettings  DefaultTarget;

 __declspec(property(get=get_Description)) ::StringW  Description;

 __declspec(property(get=get_Follow, put=set_Follow)) ::UnityW<::UnityEngine::Transform>  Follow;

 __declspec(property(get=get_IsBlending)) bool  IsBlending;

 __declspec(property(get=get_LiveChild)) ::Unity::Cinemachine::ICinemachineCamera*  LiveChild;

 __declspec(property(get=get_LookAt, put=set_LookAt)) ::UnityW<::UnityEngine::Transform>  LookAt;

 __declspec(property(get=get_PreviousStateIsValid, put=set_PreviousStateIsValid)) bool  PreviousStateIsValid;

 __declspec(property(get=get_State)) ::Unity::Cinemachine::CameraState  State;

/// @brief Field m_BlendManager, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BlendManager, put=__cordl_internal_set_m_BlendManager)) ::Unity::Cinemachine::BlendManager*  m_BlendManager;

/// @brief Field m_ChildCameras, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ChildCameras, put=__cordl_internal_set_m_ChildCameras)) ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  m_ChildCameras;

/// @brief Field m_ChildCountCache, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ChildCountCache, put=__cordl_internal_set_m_ChildCountCache)) int32_t  m_ChildCountCache;

/// @brief Field m_State, offset 0xf0, size 0x110 
 __declspec(property(get=__cordl_internal_get_m_State, put=__cordl_internal_set_m_State)) ::Unity::Cinemachine::CameraState  m_State;

/// @brief Field m_TransitioningFrom, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TransitioningFrom, put=__cordl_internal_set_m_TransitioningFrom)) ::Unity::Cinemachine::ICinemachineCamera*  m_TransitioningFrom;

/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineCamera"
constexpr operator  ::Unity::Cinemachine::ICinemachineCamera*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineMixer"
constexpr operator  ::Unity::Cinemachine::ICinemachineMixer*() noexcept;

/// @brief Method ChooseCurrentCamera, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> ChooseCurrentCamera(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method FinalizeCameraState, addr 0xaeb0c00, size 0x78, virtual false, abstract: false, final false
inline void FinalizeCameraState(float_t  deltaTime) ;

/// @brief Method ForceCameraPosition, addr 0xaeb0d98, size 0x124, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method InternalUpdateCameraState, addr 0xaeb05c0, size 0x2d4, virtual true, abstract: false, final false
inline void InternalUpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method InvalidateCameraCache, addr 0xaeafe04, size 0x30, virtual false, abstract: false, final false
inline void InvalidateCameraCache() ;

/// @brief Method IsLiveChild, addr 0xaeb020c, size 0x18, virtual true, abstract: false, final false
inline bool IsLiveChild(::Unity::Cinemachine::ICinemachineCamera*  cam, bool  dominantChildOnly) ;

/// @brief Method LookupBlend, addr 0xaeb0c78, size 0x1c, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlendDefinition LookupBlend(::Unity::Cinemachine::ICinemachineCamera*  outgoing, ::Unity::Cinemachine::ICinemachineCamera*  incoming) ;

static inline ::Unity::Cinemachine::CinemachineCameraManagerBase* New_ctor() ;

/// @brief Method OnDisable, addr 0xaeb015c, size 0x2c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xaeafe34, size 0xb8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTargetObjectWarped, addr 0xaeb0c94, size 0xf8, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnTransformChildrenChanged, addr 0xaeb130c, size 0x30, virtual true, abstract: false, final false
inline void OnTransformChildrenChanged() ;

/// @brief Method OnTransitionFromCamera, addr 0xaeb0ec4, size 0x8c, virtual true, abstract: false, final false
inline void OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xaeafdc0, size 0x44, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetLiveChild, addr 0xaeb0ae8, size 0x18, virtual false, abstract: false, final false
inline void ResetLiveChild() ;

/// @brief Method SetLiveChild, addr 0xaeb0b84, size 0x7c, virtual false, abstract: false, final false
inline void SetLiveChild(::Unity::Cinemachine::ICinemachineCamera*  activeCamera, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method UpdateCameraCache, addr 0xaeb1110, size 0x1fc, virtual true, abstract: false, final false
inline bool UpdateCameraCache() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings> const& __cordl_internal_get_CustomBlends() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings>& __cordl_internal_get_CustomBlends() ;

constexpr ::Unity::Cinemachine::CinemachineBlendDefinition const& __cordl_internal_get_DefaultBlend() const;

constexpr ::Unity::Cinemachine::CinemachineBlendDefinition& __cordl_internal_get_DefaultBlend() ;

constexpr ::GlobalNamespace::CinemachineCameraManagerBase_DefaultTargetSettings const& __cordl_internal_get_DefaultTarget() const;

constexpr ::GlobalNamespace::CinemachineCameraManagerBase_DefaultTargetSettings& __cordl_internal_get_DefaultTarget() ;

constexpr ::Unity::Cinemachine::BlendManager* const& __cordl_internal_get_m_BlendManager() const;

constexpr ::Unity::Cinemachine::BlendManager*& __cordl_internal_get_m_BlendManager() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>* const& __cordl_internal_get_m_ChildCameras() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*& __cordl_internal_get_m_ChildCameras() ;

constexpr int32_t const& __cordl_internal_get_m_ChildCountCache() const;

constexpr int32_t& __cordl_internal_get_m_ChildCountCache() ;

constexpr ::Unity::Cinemachine::CameraState const& __cordl_internal_get_m_State() const;

constexpr ::Unity::Cinemachine::CameraState& __cordl_internal_get_m_State() ;

constexpr ::Unity::Cinemachine::ICinemachineCamera* const& __cordl_internal_get_m_TransitioningFrom() const;

constexpr ::Unity::Cinemachine::ICinemachineCamera*& __cordl_internal_get_m_TransitioningFrom() ;

constexpr void __cordl_internal_set_CustomBlends(::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings>  value) ;

constexpr void __cordl_internal_set_DefaultBlend(::Unity::Cinemachine::CinemachineBlendDefinition  value) ;

constexpr void __cordl_internal_set_DefaultTarget(::GlobalNamespace::CinemachineCameraManagerBase_DefaultTargetSettings  value) ;

constexpr void __cordl_internal_set_m_BlendManager(::Unity::Cinemachine::BlendManager*  value) ;

constexpr void __cordl_internal_set_m_ChildCameras(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  value) ;

constexpr void __cordl_internal_set_m_ChildCountCache(int32_t  value) ;

constexpr void __cordl_internal_set_m_State(::Unity::Cinemachine::CameraState  value) ;

constexpr void __cordl_internal_set_m_TransitioningFrom(::Unity::Cinemachine::ICinemachineCamera*  value) ;

/// @brief Method .ctor, addr 0xaeb14dc, size 0x110, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActiveBlend, addr 0xaeb0310, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlend* get_ActiveBlend() ;

/// @brief Method get_ChildCameras, addr 0xaeb0224, size 0x24, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>* get_ChildCameras() ;

/// @brief Method get_Description, addr 0xaeb01e4, size 0x18, virtual true, abstract: false, final false
inline ::StringW get_Description() ;

/// @brief Method get_Follow, addr 0xaeb04c0, size 0x18, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Follow() ;

/// @brief Method get_IsBlending, addr 0xaeb02f8, size 0x18, virtual false, abstract: false, final false
inline bool get_IsBlending() ;

/// @brief Method get_LiveChild, addr 0xaeb0368, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::ICinemachineCamera* get_LiveChild() ;

/// @brief Method get_LookAt, addr 0xaeb03a8, size 0x2c, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_LookAt() ;

/// @brief Method get_PreviousStateIsValid, addr 0xaeb0248, size 0x8, virtual true, abstract: false, final false
inline bool get_PreviousStateIsValid() ;

/// @brief Method get_State, addr 0xaeb01fc, size 0x10, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::CameraState get_State() ;

/// @brief Convert to "::Unity::Cinemachine::ICinemachineCamera"
constexpr ::Unity::Cinemachine::ICinemachineCamera* i___Unity__Cinemachine__ICinemachineCamera() noexcept;

/// @brief Convert to "::Unity::Cinemachine::ICinemachineMixer"
constexpr ::Unity::Cinemachine::ICinemachineMixer* i___Unity__Cinemachine__ICinemachineMixer() noexcept;

/// @brief Method set_ActiveBlend, addr 0xaeb0350, size 0x18, virtual false, abstract: false, final false
inline void set_ActiveBlend(::Unity::Cinemachine::CinemachineBlend*  value) ;

/// @brief Method set_Follow, addr 0xaeb05b0, size 0x10, virtual true, abstract: false, final false
inline void set_Follow(::UnityEngine::Transform*  value) ;

/// @brief Method set_LookAt, addr 0xaeb04ac, size 0x14, virtual true, abstract: false, final false
inline void set_LookAt(::UnityEngine::Transform*  value) ;

/// @brief Method set_PreviousStateIsValid, addr 0xaeb0250, size 0xa8, virtual true, abstract: false, final false
inline void set_PreviousStateIsValid(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCameraManagerBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCameraManagerBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCameraManagerBase(CinemachineCameraManagerBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCameraManagerBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCameraManagerBase(CinemachineCameraManagerBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22273};

/// [FoldoutWithEnabledButton("Enabled")]
/// @brief Field DefaultTarget, offset: 0xa0, size: 0x20, def value: None
 ::GlobalNamespace::CinemachineCameraManagerBase_DefaultTargetSettings  ___DefaultTarget;

/// [Tooltip("The blend which is used if you don\'t explicitly define a blend between two Virtual Camera children")]
/// [FormerlySerializedAs("m_DefaultBlend")]
/// @brief Field DefaultBlend, offset: 0xc0, size: 0x10, def value: None
 ::Unity::Cinemachine::CinemachineBlendDefinition  ___DefaultBlend;

/// [Tooltip("This is the asset which contains custom settings for specific child blends")]
/// [FormerlySerializedAs("m_CustomBlends")]
/// [EmbeddedBlenderSettingsProperty]
/// @brief Field CustomBlends, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings>  ___CustomBlends;

/// @brief Field m_ChildCameras, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  ___m_ChildCameras;

/// @brief Field m_ChildCountCache, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___m_ChildCountCache;

/// @brief Field m_BlendManager, offset: 0xe8, size: 0x8, def value: None
 ::Unity::Cinemachine::BlendManager*  ___m_BlendManager;

/// @brief Field m_State, offset: 0xf0, size: 0x110, def value: None
 ::Unity::Cinemachine::CameraState  ___m_State;

/// @brief Field m_TransitioningFrom, offset: 0x200, size: 0x8, def value: None
 ::Unity::Cinemachine::ICinemachineCamera*  ___m_TransitioningFrom;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraManagerBase, ___DefaultTarget) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraManagerBase, ___DefaultBlend) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraManagerBase, ___CustomBlends) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraManagerBase, ___m_ChildCameras) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraManagerBase, ___m_ChildCountCache) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraManagerBase, ___m_BlendManager) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraManagerBase, ___m_State) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraManagerBase, ___m_TransitioningFrom) == 0x200, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineCameraManagerBase) == 0x208, "Size mismatch!");

} // namespace end def Unity::Cinemachine

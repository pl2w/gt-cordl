#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineMixingCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCameraManagerBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineMixingCamera)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineMixingCamera;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineMixingCamera*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineMixingCamera*, "Unity.Cinemachine", "CinemachineMixingCamera");
// [DisallowMultipleComponent]
// [ExecuteAlways]
// [ExcludeFromPreset]
// [AddComponentMenu("Cinemachine/Cinemachine Mixing Camera")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineMixingCamera.html")]
// Dependencies Unity.Cinemachine.CameraState, Unity.Cinemachine.CinemachineCameraManagerBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineMixingCamera
class CORDL_TYPE CinemachineMixingCamera : public ::Unity::Cinemachine::CinemachineCameraManagerBase {
public:
// Declarations
 __declspec(property(get=get_Description)) ::StringW  Description;

 __declspec(property(get=get_State)) ::Unity::Cinemachine::CameraState  State;

/// @brief Field Weight0, offset 0x208, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight0, put=__cordl_internal_set_Weight0)) float_t  Weight0;

/// @brief Field Weight1, offset 0x20c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight1, put=__cordl_internal_set_Weight1)) float_t  Weight1;

/// @brief Field Weight2, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight2, put=__cordl_internal_set_Weight2)) float_t  Weight2;

/// @brief Field Weight3, offset 0x214, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight3, put=__cordl_internal_set_Weight3)) float_t  Weight3;

/// @brief Field Weight4, offset 0x218, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight4, put=__cordl_internal_set_Weight4)) float_t  Weight4;

/// @brief Field Weight5, offset 0x21c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight5, put=__cordl_internal_set_Weight5)) float_t  Weight5;

/// @brief Field Weight6, offset 0x220, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight6, put=__cordl_internal_set_Weight6)) float_t  Weight6;

/// @brief Field Weight7, offset 0x224, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight7, put=__cordl_internal_set_Weight7)) float_t  Weight7;

/// @brief Field m_CameraState, offset 0x228, size 0x110 
 __declspec(property(get=__cordl_internal_get_m_CameraState, put=__cordl_internal_set_m_CameraState)) ::Unity::Cinemachine::CameraState  m_CameraState;

/// @brief Field m_IndexMap, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IndexMap, put=__cordl_internal_set_m_IndexMap)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,int32_t>*  m_IndexMap;

/// @brief Field m_LiveChildPercent, offset 0x340, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LiveChildPercent, put=__cordl_internal_set_m_LiveChildPercent)) float_t  m_LiveChildPercent;

/// @brief Method ChooseCurrentCamera, addr 0xae96c50, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> ChooseCurrentCamera(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method GetWeight, addr 0xae95f14, size 0x140, virtual false, abstract: false, final false
inline float_t GetWeight(int32_t  index) ;

/// @brief Method GetWeight, addr 0xae96464, size 0x94, virtual false, abstract: false, final false
inline float_t GetWeight(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method InternalUpdateCameraState, addr 0xae969b4, size 0x29c, virtual true, abstract: false, final false
inline void InternalUpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method IsLiveChild, addr 0xae96658, size 0x110, virtual true, abstract: false, final false
inline bool IsLiveChild(::Unity::Cinemachine::ICinemachineCamera*  vcam, bool  dominantChildOnly) ;

static inline ::Unity::Cinemachine::CinemachineMixingCamera* New_ctor() ;

/// @brief Method OnTransitionFromCamera, addr 0xae968ac, size 0x108, virtual true, abstract: false, final false
inline void OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method OnValidate, addr 0xae95ec0, size 0x54, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0xae96194, size 0x5c, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SetWeight, addr 0xae96054, size 0x140, virtual false, abstract: false, final false
inline void SetWeight(int32_t  index, float_t  w) ;

/// @brief Method SetWeight, addr 0xae964f8, size 0x160, virtual false, abstract: false, final false
inline void SetWeight(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, float_t  w) ;

/// @brief Method UpdateCameraCache, addr 0xae96768, size 0x144, virtual true, abstract: false, final false
inline bool UpdateCameraCache() ;

constexpr float_t const& __cordl_internal_get_Weight0() const;

constexpr float_t& __cordl_internal_get_Weight0() ;

constexpr float_t const& __cordl_internal_get_Weight1() const;

constexpr float_t& __cordl_internal_get_Weight1() ;

constexpr float_t const& __cordl_internal_get_Weight2() const;

constexpr float_t& __cordl_internal_get_Weight2() ;

constexpr float_t const& __cordl_internal_get_Weight3() const;

constexpr float_t& __cordl_internal_get_Weight3() ;

constexpr float_t const& __cordl_internal_get_Weight4() const;

constexpr float_t& __cordl_internal_get_Weight4() ;

constexpr float_t const& __cordl_internal_get_Weight5() const;

constexpr float_t& __cordl_internal_get_Weight5() ;

constexpr float_t const& __cordl_internal_get_Weight6() const;

constexpr float_t& __cordl_internal_get_Weight6() ;

constexpr float_t const& __cordl_internal_get_Weight7() const;

constexpr float_t& __cordl_internal_get_Weight7() ;

constexpr ::Unity::Cinemachine::CameraState const& __cordl_internal_get_m_CameraState() const;

constexpr ::Unity::Cinemachine::CameraState& __cordl_internal_get_m_CameraState() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,int32_t>* const& __cordl_internal_get_m_IndexMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,int32_t>*& __cordl_internal_get_m_IndexMap() ;

constexpr float_t const& __cordl_internal_get_m_LiveChildPercent() const;

constexpr float_t& __cordl_internal_get_m_LiveChildPercent() ;

constexpr void __cordl_internal_set_Weight0(float_t  value) ;

constexpr void __cordl_internal_set_Weight1(float_t  value) ;

constexpr void __cordl_internal_set_Weight2(float_t  value) ;

constexpr void __cordl_internal_set_Weight3(float_t  value) ;

constexpr void __cordl_internal_set_Weight4(float_t  value) ;

constexpr void __cordl_internal_set_Weight5(float_t  value) ;

constexpr void __cordl_internal_set_Weight6(float_t  value) ;

constexpr void __cordl_internal_set_Weight7(float_t  value) ;

constexpr void __cordl_internal_set_m_CameraState(::Unity::Cinemachine::CameraState  value) ;

constexpr void __cordl_internal_set_m_IndexMap(::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,int32_t>*  value) ;

constexpr void __cordl_internal_set_m_LiveChildPercent(float_t  value) ;

/// @brief Method .ctor, addr 0xae96c58, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Description, addr 0xae96200, size 0x264, virtual true, abstract: false, final false
inline ::StringW get_Description() ;

/// @brief Method get_State, addr 0xae961f0, size 0x10, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::CameraState get_State() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineMixingCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineMixingCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineMixingCamera(CinemachineMixingCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineMixingCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineMixingCamera(CinemachineMixingCamera const& ) = delete;

/// @brief Field MaxCameras offset 0xffffffff size 0x4
static constexpr int32_t  MaxCameras{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22192};

/// [Tooltip("The weight of the first tracked camera")]
/// [FormerlySerializedAs("m_Weight0")]
/// @brief Field Weight0, offset: 0x208, size: 0x4, def value: None
 float_t  ___Weight0;

/// [Tooltip("The weight of the second tracked camera")]
/// [FormerlySerializedAs("m_Weight1")]
/// @brief Field Weight1, offset: 0x20c, size: 0x4, def value: None
 float_t  ___Weight1;

/// [Tooltip("The weight of the third tracked camera")]
/// [FormerlySerializedAs("m_Weight2")]
/// @brief Field Weight2, offset: 0x210, size: 0x4, def value: None
 float_t  ___Weight2;

/// [Tooltip("The weight of the fourth tracked camera")]
/// [FormerlySerializedAs("m_Weight3")]
/// @brief Field Weight3, offset: 0x214, size: 0x4, def value: None
 float_t  ___Weight3;

/// [Tooltip("The weight of the fifth tracked camera")]
/// [FormerlySerializedAs("m_Weight4")]
/// @brief Field Weight4, offset: 0x218, size: 0x4, def value: None
 float_t  ___Weight4;

/// [Tooltip("The weight of the sixth tracked camera")]
/// [FormerlySerializedAs("m_Weight5")]
/// @brief Field Weight5, offset: 0x21c, size: 0x4, def value: None
 float_t  ___Weight5;

/// [Tooltip("The weight of the seventh tracked camera")]
/// [FormerlySerializedAs("m_Weight6")]
/// @brief Field Weight6, offset: 0x220, size: 0x4, def value: None
 float_t  ___Weight6;

/// [Tooltip("The weight of the eighth tracked camera")]
/// [FormerlySerializedAs("m_Weight7")]
/// @brief Field Weight7, offset: 0x224, size: 0x4, def value: None
 float_t  ___Weight7;

/// @brief Field m_CameraState, offset: 0x228, size: 0x110, def value: None
 ::Unity::Cinemachine::CameraState  ___m_CameraState;

/// @brief Field m_IndexMap, offset: 0x338, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,int32_t>*  ___m_IndexMap;

/// @brief Field m_LiveChildPercent, offset: 0x340, size: 0x4, def value: None
 float_t  ___m_LiveChildPercent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineMixingCamera, ___Weight0) == 0x208, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineMixingCamera, ___Weight1) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineMixingCamera, ___Weight2) == 0x210, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineMixingCamera, ___Weight3) == 0x214, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineMixingCamera, ___Weight4) == 0x218, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineMixingCamera, ___Weight5) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineMixingCamera, ___Weight6) == 0x220, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineMixingCamera, ___Weight7) == 0x224, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineMixingCamera, ___m_CameraState) == 0x228, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineMixingCamera, ___m_IndexMap) == 0x338, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineMixingCamera, ___m_LiveChildPercent) == 0x340, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineMixingCamera) == 0x348, "Size mismatch!");

} // namespace end def Unity::Cinemachine

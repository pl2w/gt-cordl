#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraUpdateManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraUpdateManager_UpdateFilter_def.hpp"
#include "Unity/Cinemachine/zzzz__UpdateTracker_UpdateClock_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraUpdateManager)
namespace GlobalNamespace {
struct CameraUpdateManager_UpdateFilter;
}
namespace GlobalNamespace {
struct UpdateTracker_UpdateClock;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace Unity::Cinemachine {
class CameraUpdateManager_UpdateStatus;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class VirtualCameraRegistry;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CameraUpdateManager;
}
namespace Unity::Cinemachine {
class CameraUpdateManager_UpdateStatus;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CameraUpdateManager*);
MARK_REF_T(::Unity::Cinemachine::CameraUpdateManager_UpdateStatus*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CameraUpdateManager*, "Unity.Cinemachine", "CameraUpdateManager");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CameraUpdateManager_UpdateStatus*, "Unity.Cinemachine", "CameraUpdateManager/UpdateStatus");
// Dependencies System.Object, Unity.Cinemachine.CameraUpdateManager::UpdateFilter
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CameraUpdateManager
class CORDL_TYPE CameraUpdateManager : public ::System::Object {
public:
// Declarations
using UpdateFilter = ::GlobalNamespace::CameraUpdateManager_UpdateFilter;

using UpdateStatus = ::Unity::Cinemachine::CameraUpdateManager_UpdateStatus;

/// @brief Field s_CameraRegistry, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CameraRegistry, put=setStaticF_s_CameraRegistry)) ::Unity::Cinemachine::VirtualCameraRegistry*  s_CameraRegistry;

/// @brief Field s_CurrentUpdateFilter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CurrentUpdateFilter, put=setStaticF_s_CurrentUpdateFilter)) ::GlobalNamespace::CameraUpdateManager_UpdateFilter  s_CurrentUpdateFilter;

/// @brief Field s_FixedFrameCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_FixedFrameCount, put=setStaticF_s_FixedFrameCount)) int32_t  s_FixedFrameCount;

/// @brief Field s_LastFixedUpdateContext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LastFixedUpdateContext, put=setStaticF_s_LastFixedUpdateContext)) ::System::Object*  s_LastFixedUpdateContext;

/// @brief Field s_LastUpdateTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_LastUpdateTime, put=setStaticF_s_LastUpdateTime)) float_t  s_LastUpdateTime;

/// @brief Field s_RoundRobinIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_RoundRobinIndex, put=setStaticF_s_RoundRobinIndex)) int32_t  s_RoundRobinIndex;

/// @brief Field s_RoundRobinSubIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_RoundRobinSubIndex, put=setStaticF_s_RoundRobinSubIndex)) int32_t  s_RoundRobinSubIndex;

/// @brief Field s_UpdateStatus, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_UpdateStatus, put=setStaticF_s_UpdateStatus)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CameraUpdateManager_UpdateStatus*>*  s_UpdateStatus;

/// @brief Method AddActiveCamera, addr 0xaead2f4, size 0x6c, virtual false, abstract: false, final false
static inline void AddActiveCamera(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method CameraDestroyed, addr 0xaead3cc, size 0x10c, virtual false, abstract: false, final false
static inline void CameraDestroyed(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method CameraDisabled, addr 0xaead544, size 0x6c, virtual false, abstract: false, final false
static inline void CameraDisabled(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method CameraEnabled, addr 0xaead4d8, size 0x6c, virtual false, abstract: false, final false
static inline void CameraEnabled(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method ForgetContext, addr 0xaead5b0, size 0x90, virtual false, abstract: false, final false
static inline void ForgetContext(::System::Object*  context) ;

/// @brief Method GetUpdateTarget, addr 0xaeae0bc, size 0x144, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> GetUpdateTarget(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method GetVcamUpdateStatus, addr 0xaeae208, size 0xcc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UpdateTracker_UpdateClock GetVcamUpdateStatus(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method GetVirtualCamera, addr 0xaead288, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> GetVirtualCamera(int32_t  index) ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method InitializeModule, addr 0xaead184, size 0xa0, virtual false, abstract: false, final false
static inline void InitializeModule() ;

/// @brief Method RemoveActiveCamera, addr 0xaead360, size 0x6c, virtual false, abstract: false, final false
static inline void RemoveActiveCamera(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method UpdateAllActiveVirtualCameras, addr 0xaead640, size 0x440, virtual false, abstract: false, final false
static inline void UpdateAllActiveVirtualCameras(uint32_t  channelMask, ::UnityEngine::Vector3  worldUp, float_t  deltaTime, ::System::Object*  context) ;

/// @brief Method UpdateVirtualCamera, addr 0xaeadc18, size 0x4a4, virtual false, abstract: false, final false
static inline void UpdateVirtualCamera(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::VirtualCameraRegistry* getStaticF_s_CameraRegistry() ;

static inline ::GlobalNamespace::CameraUpdateManager_UpdateFilter getStaticF_s_CurrentUpdateFilter() ;

static inline int32_t getStaticF_s_FixedFrameCount() ;

static inline ::System::Object* getStaticF_s_LastFixedUpdateContext() ;

static inline float_t getStaticF_s_LastUpdateTime() ;

static inline int32_t getStaticF_s_RoundRobinIndex() ;

static inline int32_t getStaticF_s_RoundRobinSubIndex() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CameraUpdateManager_UpdateStatus*>* getStaticF_s_UpdateStatus() ;

/// @brief Method get_VirtualCameraCount, addr 0xaead224, size 0x64, virtual false, abstract: false, final false
static inline int32_t get_VirtualCameraCount() ;

static inline void setStaticF_s_CameraRegistry(::Unity::Cinemachine::VirtualCameraRegistry*  value) ;

static inline void setStaticF_s_CurrentUpdateFilter(::GlobalNamespace::CameraUpdateManager_UpdateFilter  value) ;

static inline void setStaticF_s_FixedFrameCount(int32_t  value) ;

static inline void setStaticF_s_LastFixedUpdateContext(::System::Object*  value) ;

static inline void setStaticF_s_LastUpdateTime(float_t  value) ;

static inline void setStaticF_s_RoundRobinIndex(int32_t  value) ;

static inline void setStaticF_s_RoundRobinSubIndex(int32_t  value) ;

static inline void setStaticF_s_UpdateStatus(::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CameraUpdateManager_UpdateStatus*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraUpdateManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraUpdateManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraUpdateManager(CameraUpdateManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraUpdateManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraUpdateManager(CameraUpdateManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22263};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CameraUpdateManager) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object, Unity.Cinemachine.UpdateTracker::UpdateClock
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CameraUpdateManager/UpdateStatus
class CORDL_TYPE CameraUpdateManager_UpdateStatus : public ::System::Object {
public:
// Declarations
/// @brief Field lastUpdateFixedFrame, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastUpdateFixedFrame, put=__cordl_internal_set_lastUpdateFixedFrame)) int32_t  lastUpdateFixedFrame;

/// @brief Field lastUpdateFrame, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastUpdateFrame, put=__cordl_internal_set_lastUpdateFrame)) int32_t  lastUpdateFrame;

/// @brief Field lastUpdateMode, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastUpdateMode, put=__cordl_internal_set_lastUpdateMode)) ::GlobalNamespace::UpdateTracker_UpdateClock  lastUpdateMode;

static inline ::Unity::Cinemachine::CameraUpdateManager_UpdateStatus* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_lastUpdateFixedFrame() const;

constexpr int32_t& __cordl_internal_get_lastUpdateFixedFrame() ;

constexpr int32_t const& __cordl_internal_get_lastUpdateFrame() const;

constexpr int32_t& __cordl_internal_get_lastUpdateFrame() ;

constexpr ::GlobalNamespace::UpdateTracker_UpdateClock const& __cordl_internal_get_lastUpdateMode() const;

constexpr ::GlobalNamespace::UpdateTracker_UpdateClock& __cordl_internal_get_lastUpdateMode() ;

constexpr void __cordl_internal_set_lastUpdateFixedFrame(int32_t  value) ;

constexpr void __cordl_internal_set_lastUpdateFrame(int32_t  value) ;

constexpr void __cordl_internal_set_lastUpdateMode(::GlobalNamespace::UpdateTracker_UpdateClock  value) ;

/// @brief Method .ctor, addr 0xaeae200, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraUpdateManager_UpdateStatus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraUpdateManager_UpdateStatus", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraUpdateManager_UpdateStatus(CameraUpdateManager_UpdateStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraUpdateManager_UpdateStatus", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraUpdateManager_UpdateStatus(CameraUpdateManager_UpdateStatus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22261};

/// @brief Field lastUpdateFrame, offset: 0x10, size: 0x4, def value: None
 int32_t  ___lastUpdateFrame;

/// @brief Field lastUpdateFixedFrame, offset: 0x14, size: 0x4, def value: None
 int32_t  ___lastUpdateFixedFrame;

/// @brief Field lastUpdateMode, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::UpdateTracker_UpdateClock  ___lastUpdateMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CameraUpdateManager_UpdateStatus, ___lastUpdateFrame) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraUpdateManager_UpdateStatus, ___lastUpdateFixedFrame) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraUpdateManager_UpdateStatus, ___lastUpdateMode) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CameraUpdateManager_UpdateStatus) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine

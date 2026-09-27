#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_BlendEventParams_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineCore)
namespace GlobalNamespace {
struct CinemachineCore_BlendEventParams;
}
namespace GlobalNamespace {
struct CinemachineCore_BlendHints;
}
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Cinemachine {
struct CinemachineBlendDefinition;
}
namespace Unity::Cinemachine {
class CinemachineBlend_IBlender;
}
namespace Unity::Cinemachine {
class CinemachineBrain;
}
namespace Unity::Cinemachine {
class CinemachineCore_AxisInputDelegate;
}
namespace Unity::Cinemachine {
class CinemachineCore_BlendEvent;
}
namespace Unity::Cinemachine {
class CinemachineCore_BrainEvent;
}
namespace Unity::Cinemachine {
class CinemachineCore_CameraEvent;
}
namespace Unity::Cinemachine {
class CinemachineCore_GetBlendOverrideDelegate;
}
namespace Unity::Cinemachine {
class CinemachineCore_GetCustomBlenderDelegate;
}
namespace Unity::Cinemachine {
class CinemachineCore___c;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class ICinemachineCamera_ActivationEvent;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineCore;
}
namespace Unity::Cinemachine {
class CinemachineCore_AxisInputDelegate;
}
namespace Unity::Cinemachine {
class CinemachineCore_BlendEvent;
}
namespace Unity::Cinemachine {
class CinemachineCore_BrainEvent;
}
namespace Unity::Cinemachine {
class CinemachineCore_CameraEvent;
}
namespace Unity::Cinemachine {
class CinemachineCore_GetBlendOverrideDelegate;
}
namespace Unity::Cinemachine {
class CinemachineCore_GetCustomBlenderDelegate;
}
namespace Unity::Cinemachine {
class CinemachineCore___c;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineCore*);
MARK_REF_T(::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*);
MARK_REF_T(::Unity::Cinemachine::CinemachineCore_BlendEvent*);
MARK_REF_T(::Unity::Cinemachine::CinemachineCore_BrainEvent*);
MARK_REF_T(::Unity::Cinemachine::CinemachineCore_CameraEvent*);
MARK_REF_T(::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*);
MARK_REF_T(::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*);
MARK_REF_T(::Unity::Cinemachine::CinemachineCore___c*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCore*, "Unity.Cinemachine", "CinemachineCore");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*, "Unity.Cinemachine", "CinemachineCore/AxisInputDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCore_BlendEvent*, "Unity.Cinemachine", "CinemachineCore/BlendEvent");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCore_BrainEvent*, "Unity.Cinemachine", "CinemachineCore/BrainEvent");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCore_CameraEvent*, "Unity.Cinemachine", "CinemachineCore/CameraEvent");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*, "Unity.Cinemachine", "CinemachineCore/GetBlendOverrideDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*, "Unity.Cinemachine", "CinemachineCore/GetCustomBlenderDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCore___c*, "Unity.Cinemachine", "CinemachineCore/<>c");
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCore
class CORDL_TYPE CinemachineCore : public ::System::Object {
public:
// Declarations
using BlendEventParams = ::GlobalNamespace::CinemachineCore_BlendEventParams;

using BlendHints = ::GlobalNamespace::CinemachineCore_BlendHints;

using Stage = ::GlobalNamespace::CinemachineCore_Stage;

using AxisInputDelegate = ::Unity::Cinemachine::CinemachineCore_AxisInputDelegate;

using BlendEvent = ::Unity::Cinemachine::CinemachineCore_BlendEvent;

using BrainEvent = ::Unity::Cinemachine::CinemachineCore_BrainEvent;

using CameraEvent = ::Unity::Cinemachine::CinemachineCore_CameraEvent;

using GetBlendOverrideDelegate = ::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate;

using GetCustomBlenderDelegate = ::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate;

using __c = ::Unity::Cinemachine::CinemachineCore___c;

/// @brief Field BlendCreatedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BlendCreatedEvent, put=setStaticF_BlendCreatedEvent)) ::Unity::Cinemachine::CinemachineCore_BlendEvent*  BlendCreatedEvent;

/// @brief Field BlendFinishedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BlendFinishedEvent, put=setStaticF_BlendFinishedEvent)) ::Unity::Cinemachine::CinemachineCore_CameraEvent*  BlendFinishedEvent;

/// @brief Field CameraActivatedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CameraActivatedEvent, put=setStaticF_CameraActivatedEvent)) ::Unity::Cinemachine::ICinemachineCamera_ActivationEvent*  CameraActivatedEvent;

/// @brief Field CameraDeactivatedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CameraDeactivatedEvent, put=setStaticF_CameraDeactivatedEvent)) ::Unity::Cinemachine::CinemachineCore_CameraEvent*  CameraDeactivatedEvent;

/// @brief Field CameraUpdatedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CameraUpdatedEvent, put=setStaticF_CameraUpdatedEvent)) ::Unity::Cinemachine::CinemachineCore_BrainEvent*  CameraUpdatedEvent;

/// @brief Field CurrentTimeOverride, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CurrentTimeOverride, put=setStaticF_CurrentTimeOverride)) float_t  CurrentTimeOverride;

/// @brief Field CurrentUnscaledTimeTimeOverride, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CurrentUnscaledTimeTimeOverride, put=setStaticF_CurrentUnscaledTimeTimeOverride)) float_t  CurrentUnscaledTimeTimeOverride;

/// @brief Field GetBlendOverride, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GetBlendOverride, put=setStaticF_GetBlendOverride)) ::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*  GetBlendOverride;

/// @brief Field GetCustomBlender, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GetCustomBlender, put=setStaticF_GetCustomBlender)) ::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*  GetCustomBlender;

/// @brief Field GetInputAxis, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GetInputAxis, put=setStaticF_GetInputAxis)) ::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*  GetInputAxis;

/// @brief Field UniformDeltaTimeOverride, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UniformDeltaTimeOverride, put=setStaticF_UniformDeltaTimeOverride)) float_t  UniformDeltaTimeOverride;

/// @brief Field UnitTestMode, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_UnitTestMode, put=setStaticF_UnitTestMode)) bool  UnitTestMode;

/// @brief Field <CurrentUpdateFrame>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CurrentUpdateFrame_k__BackingField, put=setStaticF__CurrentUpdateFrame_k__BackingField)) int32_t  _CurrentUpdateFrame_k__BackingField;

/// @brief Field s_SoloCamera, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SoloCamera, put=setStaticF_s_SoloCamera)) ::Unity::Cinemachine::ICinemachineCamera*  s_SoloCamera;

/// @brief Method FindPotentialTargetBrain, addr 0xaeb267c, size 0x220, virtual false, abstract: false, final false
static inline ::UnityW<::Unity::Cinemachine::CinemachineBrain> FindPotentialTargetBrain(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method GetVirtualCamera, addr 0xaeb22f4, size 0x54, virtual false, abstract: false, final false
static inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> GetVirtualCamera(int32_t  index) ;

/// @brief Method IsLive, addr 0xaeadb08, size 0x110, virtual false, abstract: false, final false
static inline bool IsLive(::Unity::Cinemachine::ICinemachineCamera*  vcam) ;

/// @brief Method IsLiveInBlend, addr 0xaeb2570, size 0x10c, virtual false, abstract: false, final false
static inline bool IsLiveInBlend(::Unity::Cinemachine::ICinemachineCamera*  vcam) ;

/// @brief Method OnTargetObjectWarped, addr 0xaeb289c, size 0xe8, virtual false, abstract: false, final false
static inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method ResetCameraState, addr 0xaeb2984, size 0x124, virtual false, abstract: false, final false
static inline void ResetCameraState() ;

/// @brief Method SoloGUIColor, addr 0xaeb2150, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color SoloGUIColor() ;

static inline ::Unity::Cinemachine::CinemachineCore_BlendEvent* getStaticF_BlendCreatedEvent() ;

static inline ::Unity::Cinemachine::CinemachineCore_CameraEvent* getStaticF_BlendFinishedEvent() ;

static inline ::Unity::Cinemachine::ICinemachineCamera_ActivationEvent* getStaticF_CameraActivatedEvent() ;

static inline ::Unity::Cinemachine::CinemachineCore_CameraEvent* getStaticF_CameraDeactivatedEvent() ;

static inline ::Unity::Cinemachine::CinemachineCore_BrainEvent* getStaticF_CameraUpdatedEvent() ;

static inline float_t getStaticF_CurrentTimeOverride() ;

static inline float_t getStaticF_CurrentUnscaledTimeTimeOverride() ;

static inline ::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate* getStaticF_GetBlendOverride() ;

static inline ::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate* getStaticF_GetCustomBlender() ;

static inline ::Unity::Cinemachine::CinemachineCore_AxisInputDelegate* getStaticF_GetInputAxis() ;

static inline float_t getStaticF_UniformDeltaTimeOverride() ;

static inline bool getStaticF_UnitTestMode() ;

static inline int32_t getStaticF__CurrentUpdateFrame_k__BackingField() ;

static inline ::Unity::Cinemachine::ICinemachineCamera* getStaticF_s_SoloCamera() ;

/// @brief Method get_CurrentTime, addr 0xaeada80, size 0x88, virtual false, abstract: false, final false
static inline float_t get_CurrentTime() ;

/// @brief Method get_CurrentUnscaledTime, addr 0xaeb20c8, size 0x88, virtual false, abstract: false, final false
static inline float_t get_CurrentUnscaledTime() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentUpdateFrame, addr 0xaeb21f4, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_CurrentUpdateFrame() ;

/// @brief Method get_DeltaTime, addr 0xaeb216c, size 0x88, virtual false, abstract: false, final false
static inline float_t get_DeltaTime() ;

/// @brief Method get_SoloCamera, addr 0xaeb2348, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::ICinemachineCamera* get_SoloCamera() ;

/// @brief Method get_VirtualCameraCount, addr 0xaeb22a8, size 0x4c, virtual false, abstract: false, final false
static inline int32_t get_VirtualCameraCount() ;

static inline void setStaticF_BlendCreatedEvent(::Unity::Cinemachine::CinemachineCore_BlendEvent*  value) ;

static inline void setStaticF_BlendFinishedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value) ;

static inline void setStaticF_CameraActivatedEvent(::Unity::Cinemachine::ICinemachineCamera_ActivationEvent*  value) ;

static inline void setStaticF_CameraDeactivatedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value) ;

static inline void setStaticF_CameraUpdatedEvent(::Unity::Cinemachine::CinemachineCore_BrainEvent*  value) ;

static inline void setStaticF_CurrentTimeOverride(float_t  value) ;

static inline void setStaticF_CurrentUnscaledTimeTimeOverride(float_t  value) ;

static inline void setStaticF_GetBlendOverride(::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*  value) ;

static inline void setStaticF_GetCustomBlender(::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*  value) ;

static inline void setStaticF_GetInputAxis(::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*  value) ;

static inline void setStaticF_UniformDeltaTimeOverride(float_t  value) ;

static inline void setStaticF_UnitTestMode(bool  value) ;

static inline void setStaticF__CurrentUpdateFrame_k__BackingField(int32_t  value) ;

static inline void setStaticF_s_SoloCamera(::Unity::Cinemachine::ICinemachineCamera*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentUpdateFrame, addr 0xaeb224c, size 0x5c, virtual false, abstract: false, final false
static inline void set_CurrentUpdateFrame(int32_t  value) ;

/// @brief Method set_SoloCamera, addr 0xaeb23a0, size 0x1d0, virtual false, abstract: false, final false
static inline void set_SoloCamera(::Unity::Cinemachine::ICinemachineCamera*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCore(CinemachineCore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCore(CinemachineCore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22286};

/// @brief Field kPackageRoot offset 0xffffffff size 0x8
static constexpr ::ConstString  kPackageRoot{u"Packages/com.unity.cinemachine"};

/// @brief Field kStreamingVersion offset 0xffffffff size 0x4
static constexpr int32_t  kStreamingVersion{static_cast<int32_t>(0x134da69)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineCore) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// [CompilerGenerated]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCore/<>c
class CORDL_TYPE CinemachineCore___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Unity::Cinemachine::CinemachineCore___c*  __9;

static inline ::Unity::Cinemachine::CinemachineCore___c* New_ctor() ;

/// @brief Method <.cctor>b__46_0, addr 0xaeb328c, size 0x8, virtual false, abstract: false, final false
inline float_t __cctor_b__46_0(::StringW  _p0_) ;

/// @brief Method .ctor, addr 0xaeb3284, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Cinemachine::CinemachineCore___c* getStaticF___9() ;

static inline void setStaticF___9(::Unity::Cinemachine::CinemachineCore___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCore___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCore___c(CinemachineCore___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCore___c(CinemachineCore___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22285};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineCore___c) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineCore::BlendEventParams, UnityEngine.Events.UnityEvent`1<T0>
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCore/BlendEvent
class CORDL_TYPE CinemachineCore_BlendEvent : public ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CinemachineCore_BlendEventParams> {
public:
// Declarations
static inline ::Unity::Cinemachine::CinemachineCore_BlendEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xaeb2e2c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCore_BlendEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore_BlendEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCore_BlendEvent(CinemachineCore_BlendEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore_BlendEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCore_BlendEvent(CinemachineCore_BlendEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22284};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineCore_BlendEvent) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCore/BrainEvent
class CORDL_TYPE CinemachineCore_BrainEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>> {
public:
// Declarations
static inline ::Unity::Cinemachine::CinemachineCore_BrainEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xaeb2d54, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCore_BrainEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore_BrainEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCore_BrainEvent(CinemachineCore_BrainEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore_BrainEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCore_BrainEvent(CinemachineCore_BrainEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22282};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineCore_BrainEvent) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCore/CameraEvent
class CORDL_TYPE CinemachineCore_CameraEvent : public ::UnityEngine::Events::UnityEvent_2<::Unity::Cinemachine::ICinemachineMixer*,::Unity::Cinemachine::ICinemachineCamera*> {
public:
// Declarations
static inline ::Unity::Cinemachine::CinemachineCore_CameraEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xaeb2de4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCore_CameraEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore_CameraEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCore_CameraEvent(CinemachineCore_CameraEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore_CameraEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCore_CameraEvent(CinemachineCore_CameraEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22281};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineCore_CameraEvent) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.MulticastDelegate
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCore/GetCustomBlenderDelegate
class CORDL_TYPE CinemachineCore_GetCustomBlenderDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xaeb31e8, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::Unity::Cinemachine::ICinemachineCamera*  toCam, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xaeb3210, size 0xc, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlend_IBlender* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xaeb31d4, size 0x14, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlend_IBlender* Invoke(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::Unity::Cinemachine::ICinemachineCamera*  toCam) ;

static inline ::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xaeb30c8, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCore_GetCustomBlenderDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore_GetCustomBlenderDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCore_GetCustomBlenderDelegate(CinemachineCore_GetCustomBlenderDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore_GetCustomBlenderDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCore_GetCustomBlenderDelegate(CinemachineCore_GetCustomBlenderDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22280};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.MulticastDelegate
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCore/GetBlendOverrideDelegate
class CORDL_TYPE CinemachineCore_GetBlendOverrideDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xaeb2ff0, size 0xac, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Unity::Cinemachine::ICinemachineCamera*  fromVcam, ::Unity::Cinemachine::ICinemachineCamera*  toVcam, ::Unity::Cinemachine::CinemachineBlendDefinition  defaultBlend, ::UnityEngine::Object*  owner, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xaeb309c, size 0x2c, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlendDefinition EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xaeb2fdc, size 0x14, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlendDefinition Invoke(::Unity::Cinemachine::ICinemachineCamera*  fromVcam, ::Unity::Cinemachine::ICinemachineCamera*  toVcam, ::Unity::Cinemachine::CinemachineBlendDefinition  defaultBlend, ::UnityEngine::Object*  owner) ;

static inline ::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xaeb2ed0, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCore_GetBlendOverrideDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore_GetBlendOverrideDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCore_GetBlendOverrideDelegate(CinemachineCore_GetBlendOverrideDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore_GetBlendOverrideDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCore_GetBlendOverrideDelegate(CinemachineCore_GetBlendOverrideDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22279};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.MulticastDelegate
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCore/AxisInputDelegate
class CORDL_TYPE CinemachineCore_AxisInputDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xaeb2e88, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  axisName, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xaeb2ea8, size 0x28, virtual true, abstract: false, final false
inline float_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xaeb2e74, size 0x14, virtual true, abstract: false, final false
inline float_t Invoke(::StringW  axisName) ;

static inline ::Unity::Cinemachine::CinemachineCore_AxisInputDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xaeb2ca4, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCore_AxisInputDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore_AxisInputDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCore_AxisInputDelegate(CinemachineCore_AxisInputDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCore_AxisInputDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCore_AxisInputDelegate(CinemachineCore_AxisInputDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22278};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineCore_AxisInputDelegate) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine

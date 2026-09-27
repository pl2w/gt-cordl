#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraBlendStack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__NestedBlendSource_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraBlendStack)
namespace GlobalNamespace {
struct ICinemachineCamera_ActivationEventParams;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
class CameraBlendStack_SnapshotBlendSource;
}
namespace Unity::Cinemachine {
class CameraBlendStack_StackFrame;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineBlendDefinition_LookupBlendDelegate;
}
namespace Unity::Cinemachine {
class CinemachineBlend;
}
namespace Unity::Cinemachine {
class ICameraOverrideStack;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CameraBlendStack;
}
namespace Unity::Cinemachine {
class CameraBlendStack_SnapshotBlendSource;
}
namespace Unity::Cinemachine {
class CameraBlendStack_StackFrame;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CameraBlendStack*);
MARK_REF_T(::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*);
MARK_REF_T(::Unity::Cinemachine::CameraBlendStack_StackFrame*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CameraBlendStack*, "Unity.Cinemachine", "CameraBlendStack");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*, "Unity.Cinemachine", "CameraBlendStack/SnapshotBlendSource");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CameraBlendStack_StackFrame*, "Unity.Cinemachine", "CameraBlendStack/StackFrame");
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CameraBlendStack
class CORDL_TYPE CameraBlendStack : public ::System::Object {
public:
// Declarations
using SnapshotBlendSource = ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource;

using StackFrame = ::Unity::Cinemachine::CameraBlendStack_StackFrame;

 __declspec(property(get=get_DefaultWorldUp)) ::UnityEngine::Vector3  DefaultWorldUp;

 __declspec(property(get=get_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_LookupBlendDelegate, put=set_LookupBlendDelegate)) ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*  LookupBlendDelegate;

/// @brief Field <LookupBlendDelegate>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__LookupBlendDelegate_k__BackingField, put=__cordl_internal_set__LookupBlendDelegate_k__BackingField)) ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*  _LookupBlendDelegate_k__BackingField;

/// @brief Field m_FrameStack, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FrameStack, put=__cordl_internal_set_m_FrameStack)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::CameraBlendStack_StackFrame*>*  m_FrameStack;

/// @brief Field m_NextFrameId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NextFrameId, put=__cordl_internal_set_m_NextFrameId)) int32_t  m_NextFrameId;

/// @brief Field s_DefaultLinearAnimationCurve, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DefaultLinearAnimationCurve, put=setStaticF_s_DefaultLinearAnimationCurve)) ::UnityEngine::AnimationCurve*  s_DefaultLinearAnimationCurve;

/// @brief Convert operator to "::Unity::Cinemachine::ICameraOverrideStack"
constexpr operator  ::Unity::Cinemachine::ICameraOverrideStack*() noexcept;

/// @brief Method GetDeltaTimeOverride, addr 0xaeaa9bc, size 0xa8, virtual false, abstract: false, final false
inline float_t GetDeltaTimeOverride() ;

static inline ::Unity::Cinemachine::CameraBlendStack* New_ctor() ;

/// @brief Method OnDisable, addr 0xaea9df8, size 0x6c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xaea8594, size 0x108, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessOverrideFrames, addr 0xaea8be4, size 0x37c, virtual false, abstract: false, final false
inline void ProcessOverrideFrames(::by_ref<::Unity::Cinemachine::CinemachineBlend*>  outputBlend, int32_t  numTopLayersToExclude) ;

/// @brief Method ReleaseCameraOverride, addr 0xaea9d2c, size 0xcc, virtual true, abstract: false, final true
inline void ReleaseCameraOverride(int32_t  overrideId) ;

/// @brief Method ResetRootFrame, addr 0xaea9ec4, size 0x158, virtual false, abstract: false, final false
inline void ResetRootFrame() ;

/// @brief Method SetCameraOverride, addr 0xaea98dc, size 0x2ac, virtual true, abstract: false, final true
inline int32_t SetCameraOverride(int32_t  overrideId, int32_t  priority, ::Unity::Cinemachine::ICinemachineCamera*  camA, ::Unity::Cinemachine::ICinemachineCamera*  camB, float_t  weightB, float_t  deltaTime) ;

/// @brief Method SetRootBlend, addr 0xaea87f4, size 0x130, virtual false, abstract: false, final false
inline void SetRootBlend(::Unity::Cinemachine::CinemachineBlend*  blend) ;

/// @brief Method UpdateRootFrame, addr 0xaeaa01c, size 0x888, virtual false, abstract: false, final false
inline void UpdateRootFrame(::Unity::Cinemachine::ICinemachineMixer*  context, ::Unity::Cinemachine::ICinemachineCamera*  activeCamera, ::UnityEngine::Vector3  up, float_t  deltaTime) ;

/// [CompilerGenerated]
/// @brief Method <SetCameraOverride>g__FindFrame|7_0, addr 0xaea9b88, size 0x1a4, virtual false, abstract: false, final false
inline int32_t _SetCameraOverride_g__FindFrame_7_0(int32_t  withId, int32_t  priority) ;

/// [CompilerGenerated]
/// @brief Method <UpdateRootFrame>g__AdvanceBlend|18_0, addr 0xaeaa8a4, size 0x118, virtual false, abstract: false, final false
static inline bool _UpdateRootFrame_g__AdvanceBlend_18_0(::Unity::Cinemachine::CinemachineBlend*  blend, float_t  deltaTime) ;

constexpr ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate* const& __cordl_internal_get__LookupBlendDelegate_k__BackingField() const;

constexpr ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*& __cordl_internal_get__LookupBlendDelegate_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CameraBlendStack_StackFrame*>* const& __cordl_internal_get_m_FrameStack() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CameraBlendStack_StackFrame*>*& __cordl_internal_get_m_FrameStack() ;

constexpr int32_t const& __cordl_internal_get_m_NextFrameId() const;

constexpr int32_t& __cordl_internal_get_m_NextFrameId() ;

constexpr void __cordl_internal_set__LookupBlendDelegate_k__BackingField(::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*  value) ;

constexpr void __cordl_internal_set_m_FrameStack(::System::Collections::Generic::List_1<::Unity::Cinemachine::CameraBlendStack_StackFrame*>*  value) ;

constexpr void __cordl_internal_set_m_NextFrameId(int32_t  value) ;

/// @brief Method .ctor, addr 0xaea9810, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::AnimationCurve* getStaticF_s_DefaultLinearAnimationCurve() ;

/// @brief Method get_DefaultWorldUp, addr 0xaea9898, size 0x44, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_DefaultWorldUp() ;

/// @brief Method get_IsInitialized, addr 0xaea9e64, size 0x50, virtual false, abstract: false, final false
inline bool get_IsInitialized() ;

/// [CompilerGenerated]
/// @brief Method get_LookupBlendDelegate, addr 0xaea9eb4, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate* get_LookupBlendDelegate() ;

/// @brief Convert to "::Unity::Cinemachine::ICameraOverrideStack"
constexpr ::Unity::Cinemachine::ICameraOverrideStack* i___Unity__Cinemachine__ICameraOverrideStack() noexcept;

static inline void setStaticF_s_DefaultLinearAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

/// [CompilerGenerated]
/// @brief Method set_LookupBlendDelegate, addr 0xaea9ebc, size 0x8, virtual false, abstract: false, final false
inline void set_LookupBlendDelegate(::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraBlendStack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraBlendStack", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraBlendStack(CameraBlendStack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraBlendStack", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraBlendStack(CameraBlendStack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22254};

/// @brief Field kEpsilon offset 0xffffffff size 0x4
static constexpr float_t  kEpsilon{static_cast<float_t>(0.0001f)};

/// @brief Field m_FrameStack, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::CameraBlendStack_StackFrame*>*  ___m_FrameStack;

/// @brief Field m_NextFrameId, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_NextFrameId;

/// [CompilerGenerated]
/// @brief Field <LookupBlendDelegate>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*  ____LookupBlendDelegate_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CameraBlendStack, ___m_FrameStack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraBlendStack, ___m_NextFrameId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraBlendStack, ____LookupBlendDelegate_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CameraBlendStack) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object, Unity.Cinemachine.CameraState
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CameraBlendStack/SnapshotBlendSource
class CORDL_TYPE CameraBlendStack_SnapshotBlendSource : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Description)) ::StringW  Description;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ParentCamera)) ::Unity::Cinemachine::ICinemachineMixer*  ParentCamera;

 __declspec(property(get=get_RemainingTimeInBlend, put=set_RemainingTimeInBlend)) float_t  RemainingTimeInBlend;

 __declspec(property(get=get_State)) ::Unity::Cinemachine::CameraState  State;

/// @brief Field <RemainingTimeInBlend>k__BackingField, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__RemainingTimeInBlend_k__BackingField, put=__cordl_internal_set__RemainingTimeInBlend_k__BackingField)) float_t  _RemainingTimeInBlend_k__BackingField;

/// @brief Field m_Name, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Name, put=__cordl_internal_set_m_Name)) ::StringW  m_Name;

/// @brief Field m_State, offset 0x10, size 0x110 
 __declspec(property(get=__cordl_internal_get_m_State, put=__cordl_internal_set_m_State)) ::Unity::Cinemachine::CameraState  m_State;

/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineCamera"
constexpr operator  ::Unity::Cinemachine::ICinemachineCamera*() noexcept;

static inline ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource* New_ctor(::Unity::Cinemachine::ICinemachineCamera*  source, float_t  remainingTimeInBlend) ;

/// @brief Method OnCameraActivated, addr 0xaeab0d8, size 0x4, virtual true, abstract: false, final true
inline void OnCameraActivated(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt) ;

/// @brief Method TakeSnapshot, addr 0xaeaae98, size 0x1fc, virtual false, abstract: false, final false
inline void TakeSnapshot(::Unity::Cinemachine::ICinemachineCamera*  source) ;

/// @brief Method UpdateCameraState, addr 0xaeab0d4, size 0x4, virtual true, abstract: false, final true
inline void UpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

constexpr float_t const& __cordl_internal_get__RemainingTimeInBlend_k__BackingField() const;

constexpr float_t& __cordl_internal_get__RemainingTimeInBlend_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_m_Name() const;

constexpr ::StringW& __cordl_internal_get_m_Name() ;

constexpr ::Unity::Cinemachine::CameraState const& __cordl_internal_get_m_State() const;

constexpr ::Unity::Cinemachine::CameraState& __cordl_internal_get_m_State() ;

constexpr void __cordl_internal_set__RemainingTimeInBlend_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_m_Name(::StringW  value) ;

constexpr void __cordl_internal_set_m_State(::Unity::Cinemachine::CameraState  value) ;

/// @brief Method .ctor, addr 0xaeaabb8, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::ICinemachineCamera*  source, float_t  remainingTimeInBlend) ;

/// @brief Method get_Description, addr 0xaeab0ac, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Description() ;

/// @brief Method get_IsValid, addr 0xaeab0c4, size 0x8, virtual true, abstract: false, final true
inline bool get_IsValid() ;

/// @brief Method get_Name, addr 0xaeab0a4, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Name() ;

/// @brief Method get_ParentCamera, addr 0xaeab0cc, size 0x8, virtual true, abstract: false, final true
inline ::Unity::Cinemachine::ICinemachineMixer* get_ParentCamera() ;

/// [CompilerGenerated]
/// @brief Method get_RemainingTimeInBlend, addr 0xaeab094, size 0x8, virtual false, abstract: false, final false
inline float_t get_RemainingTimeInBlend() ;

/// @brief Method get_State, addr 0xaeab0b4, size 0x10, virtual true, abstract: false, final true
inline ::Unity::Cinemachine::CameraState get_State() ;

/// @brief Convert to "::Unity::Cinemachine::ICinemachineCamera"
constexpr ::Unity::Cinemachine::ICinemachineCamera* i___Unity__Cinemachine__ICinemachineCamera() noexcept;

/// [CompilerGenerated]
/// @brief Method set_RemainingTimeInBlend, addr 0xaeab09c, size 0x8, virtual false, abstract: false, final false
inline void set_RemainingTimeInBlend(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraBlendStack_SnapshotBlendSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraBlendStack_SnapshotBlendSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraBlendStack_SnapshotBlendSource(CameraBlendStack_SnapshotBlendSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraBlendStack_SnapshotBlendSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraBlendStack_SnapshotBlendSource(CameraBlendStack_SnapshotBlendSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22253};

/// @brief Field m_State, offset: 0x10, size: 0x110, def value: None
 ::Unity::Cinemachine::CameraState  ___m_State;

/// @brief Field m_Name, offset: 0x120, size: 0x8, def value: None
 ::StringW  ___m_Name;

/// [CompilerGenerated]
/// @brief Field <RemainingTimeInBlend>k__BackingField, offset: 0x128, size: 0x4, def value: None
 float_t  ____RemainingTimeInBlend_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource, ___m_State) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource, ___m_Name) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource, ____RemainingTimeInBlend_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource) == 0x130, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.NestedBlendSource
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CameraBlendStack/StackFrame
class CORDL_TYPE CameraBlendStack_StackFrame : public ::Unity::Cinemachine::NestedBlendSource {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field DeltaTimeOverride, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_DeltaTimeOverride, put=__cordl_internal_set_DeltaTimeOverride)) float_t  DeltaTimeOverride;

/// @brief Field Id, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) int32_t  Id;

/// @brief Field Priority, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_Priority, put=__cordl_internal_set_Priority)) int32_t  Priority;

/// @brief Field Source, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_Source, put=__cordl_internal_set_Source)) ::Unity::Cinemachine::CinemachineBlend*  Source;

/// @brief Field m_Snapshot, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Snapshot, put=__cordl_internal_set_m_Snapshot)) ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*  m_Snapshot;

/// @brief Field m_SnapshotBlendWeight, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SnapshotBlendWeight, put=__cordl_internal_set_m_SnapshotBlendWeight)) float_t  m_SnapshotBlendWeight;

/// @brief Field m_SnapshotSource, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SnapshotSource, put=__cordl_internal_set_m_SnapshotSource)) ::Unity::Cinemachine::ICinemachineCamera*  m_SnapshotSource;

/// @brief Method GetSnapshotIfAppropriate, addr 0xaeaad5c, size 0x13c, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::ICinemachineCamera* GetSnapshotIfAppropriate(::Unity::Cinemachine::ICinemachineCamera*  cam, float_t  weight) ;

static inline ::Unity::Cinemachine::CameraBlendStack_StackFrame* New_ctor() ;

constexpr float_t const& __cordl_internal_get_DeltaTimeOverride() const;

constexpr float_t& __cordl_internal_get_DeltaTimeOverride() ;

constexpr int32_t const& __cordl_internal_get_Id() const;

constexpr int32_t& __cordl_internal_get_Id() ;

constexpr int32_t const& __cordl_internal_get_Priority() const;

constexpr int32_t& __cordl_internal_get_Priority() ;

constexpr ::Unity::Cinemachine::CinemachineBlend* const& __cordl_internal_get_Source() const;

constexpr ::Unity::Cinemachine::CinemachineBlend*& __cordl_internal_get_Source() ;

constexpr ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource* const& __cordl_internal_get_m_Snapshot() const;

constexpr ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*& __cordl_internal_get_m_Snapshot() ;

constexpr float_t const& __cordl_internal_get_m_SnapshotBlendWeight() const;

constexpr float_t& __cordl_internal_get_m_SnapshotBlendWeight() ;

constexpr ::Unity::Cinemachine::ICinemachineCamera* const& __cordl_internal_get_m_SnapshotSource() const;

constexpr ::Unity::Cinemachine::ICinemachineCamera*& __cordl_internal_get_m_SnapshotSource() ;

constexpr void __cordl_internal_set_DeltaTimeOverride(float_t  value) ;

constexpr void __cordl_internal_set_Id(int32_t  value) ;

constexpr void __cordl_internal_set_Priority(int32_t  value) ;

constexpr void __cordl_internal_set_Source(::Unity::Cinemachine::CinemachineBlend*  value) ;

constexpr void __cordl_internal_set_m_Snapshot(::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*  value) ;

constexpr void __cordl_internal_set_m_SnapshotBlendWeight(float_t  value) ;

constexpr void __cordl_internal_set_m_SnapshotSource(::Unity::Cinemachine::ICinemachineCamera*  value) ;

/// @brief Method .ctor, addr 0xaeaaad0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xaeaac28, size 0x14, virtual false, abstract: false, final false
inline bool get_Active() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraBlendStack_StackFrame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraBlendStack_StackFrame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraBlendStack_StackFrame(CameraBlendStack_StackFrame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraBlendStack_StackFrame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraBlendStack_StackFrame(CameraBlendStack_StackFrame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22252};

/// @brief Field Id, offset: 0x130, size: 0x4, def value: None
 int32_t  ___Id;

/// @brief Field Priority, offset: 0x134, size: 0x4, def value: None
 int32_t  ___Priority;

/// @brief Field Source, offset: 0x138, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineBlend*  ___Source;

/// @brief Field DeltaTimeOverride, offset: 0x140, size: 0x4, def value: None
 float_t  ___DeltaTimeOverride;

/// @brief Field m_Snapshot, offset: 0x148, size: 0x8, def value: None
 ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*  ___m_Snapshot;

/// @brief Field m_SnapshotSource, offset: 0x150, size: 0x8, def value: None
 ::Unity::Cinemachine::ICinemachineCamera*  ___m_SnapshotSource;

/// @brief Field m_SnapshotBlendWeight, offset: 0x158, size: 0x4, def value: None
 float_t  ___m_SnapshotBlendWeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CameraBlendStack_StackFrame, ___Id) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraBlendStack_StackFrame, ___Priority) == 0x134, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraBlendStack_StackFrame, ___Source) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraBlendStack_StackFrame, ___DeltaTimeOverride) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraBlendStack_StackFrame, ___m_Snapshot) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraBlendStack_StackFrame, ___m_SnapshotSource) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraBlendStack_StackFrame, ___m_SnapshotBlendWeight) == 0x158, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CameraBlendStack_StackFrame) == 0x160, "Size mismatch!");

} // namespace end def Unity::Cinemachine

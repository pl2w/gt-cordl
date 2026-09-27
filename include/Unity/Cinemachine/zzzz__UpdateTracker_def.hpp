#pragma once
// IWYU pragma private; include "Unity/Cinemachine/UpdateTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__UpdateTracker_UpdateClock_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateTracker)
namespace GlobalNamespace {
struct UpdateTracker_UpdateClock;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace Unity::Cinemachine {
class UpdateTracker_UpdateStatus;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Unity::Cinemachine {
class UpdateTracker;
}
namespace Unity::Cinemachine {
class UpdateTracker_UpdateStatus;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::UpdateTracker*);
MARK_REF_T(::Unity::Cinemachine::UpdateTracker_UpdateStatus*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::UpdateTracker*, "Unity.Cinemachine", "UpdateTracker");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::UpdateTracker_UpdateStatus*, "Unity.Cinemachine", "UpdateTracker/UpdateStatus");
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.UpdateTracker
class CORDL_TYPE UpdateTracker : public ::System::Object {
public:
// Declarations
using UpdateClock = ::GlobalNamespace::UpdateTracker_UpdateClock;

using UpdateStatus = ::Unity::Cinemachine::UpdateTracker_UpdateStatus;

/// @brief Field s_LastUpdateContext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LastUpdateContext, put=setStaticF_s_LastUpdateContext)) ::System::Object*  s_LastUpdateContext;

/// @brief Field s_ToDelete, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ToDelete, put=setStaticF_s_ToDelete)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  s_ToDelete;

/// @brief Field s_UpdateStatus, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_UpdateStatus, put=setStaticF_s_UpdateStatus)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::UpdateTracker_UpdateStatus*>*  s_UpdateStatus;

/// @brief Method ForgetContext, addr 0xaec22a8, size 0x90, virtual false, abstract: false, final false
static inline void ForgetContext(::System::Object*  context) ;

/// @brief Method GetPreferredUpdate, addr 0xaec1fa0, size 0x1f0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UpdateTracker_UpdateClock GetPreferredUpdate(::UnityEngine::Transform*  target) ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method InitializeModule, addr 0xaec1aa0, size 0x78, virtual false, abstract: false, final false
static inline void InitializeModule() ;

static inline ::Unity::Cinemachine::UpdateTracker* New_ctor() ;

/// @brief Method OnUpdate, addr 0xaec21e8, size 0xc0, virtual false, abstract: false, final false
static inline void OnUpdate(::GlobalNamespace::UpdateTracker_UpdateClock  currentClock, ::System::Object*  context) ;

/// @brief Method UpdateTargets, addr 0xaec1b18, size 0x354, virtual false, abstract: false, final false
static inline void UpdateTargets(::GlobalNamespace::UpdateTracker_UpdateClock  currentClock) ;

/// @brief Method .ctor, addr 0xaec2338, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Object* getStaticF_s_LastUpdateContext() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* getStaticF_s_ToDelete() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::UpdateTracker_UpdateStatus*>* getStaticF_s_UpdateStatus() ;

static inline void setStaticF_s_LastUpdateContext(::System::Object*  value) ;

static inline void setStaticF_s_ToDelete(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

static inline void setStaticF_s_UpdateStatus(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::UpdateTracker_UpdateStatus*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateTracker(UpdateTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateTracker(UpdateTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22381};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::UpdateTracker) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object, Unity.Cinemachine.UpdateTracker::UpdateClock, UnityEngine.Matrix4x4
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.UpdateTracker/UpdateStatus
class CORDL_TYPE UpdateTracker_UpdateStatus : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PreferredUpdate, put=set_PreferredUpdate)) ::GlobalNamespace::UpdateTracker_UpdateClock  PreferredUpdate;

/// @brief Field <PreferredUpdate>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__PreferredUpdate_k__BackingField, put=__cordl_internal_set__PreferredUpdate_k__BackingField)) ::GlobalNamespace::UpdateTracker_UpdateClock  _PreferredUpdate_k__BackingField;

/// @brief Field m_LastFrameUpdated, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastFrameUpdated, put=__cordl_internal_set_m_LastFrameUpdated)) int32_t  m_LastFrameUpdated;

/// @brief Field m_LastPos, offset 0x24, size 0x40 
 __declspec(property(get=__cordl_internal_get_m_LastPos, put=__cordl_internal_set_m_LastPos)) ::UnityEngine::Matrix4x4  m_LastPos;

/// @brief Field m_NumWindowFixedUpdateMoves, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NumWindowFixedUpdateMoves, put=__cordl_internal_set_m_NumWindowFixedUpdateMoves)) int32_t  m_NumWindowFixedUpdateMoves;

/// @brief Field m_NumWindowLateUpdateMoves, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NumWindowLateUpdateMoves, put=__cordl_internal_set_m_NumWindowLateUpdateMoves)) int32_t  m_NumWindowLateUpdateMoves;

/// @brief Field m_NumWindows, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NumWindows, put=__cordl_internal_set_m_NumWindows)) int32_t  m_NumWindows;

/// @brief Field m_WindowStart, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_WindowStart, put=__cordl_internal_set_m_WindowStart)) int32_t  m_WindowStart;

static inline ::Unity::Cinemachine::UpdateTracker_UpdateStatus* New_ctor(int32_t  currentFrame, ::UnityEngine::Matrix4x4  pos) ;

/// @brief Method OnUpdate, addr 0xaec1e6c, size 0x134, virtual false, abstract: false, final false
inline void OnUpdate(int32_t  currentFrame, ::GlobalNamespace::UpdateTracker_UpdateClock  currentClock, ::UnityEngine::Matrix4x4  pos) ;

constexpr ::GlobalNamespace::UpdateTracker_UpdateClock const& __cordl_internal_get__PreferredUpdate_k__BackingField() const;

constexpr ::GlobalNamespace::UpdateTracker_UpdateClock& __cordl_internal_get__PreferredUpdate_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_m_LastFrameUpdated() const;

constexpr int32_t& __cordl_internal_get_m_LastFrameUpdated() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_LastPos() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_LastPos() ;

constexpr int32_t const& __cordl_internal_get_m_NumWindowFixedUpdateMoves() const;

constexpr int32_t& __cordl_internal_get_m_NumWindowFixedUpdateMoves() ;

constexpr int32_t const& __cordl_internal_get_m_NumWindowLateUpdateMoves() const;

constexpr int32_t& __cordl_internal_get_m_NumWindowLateUpdateMoves() ;

constexpr int32_t const& __cordl_internal_get_m_NumWindows() const;

constexpr int32_t& __cordl_internal_get_m_NumWindows() ;

constexpr int32_t const& __cordl_internal_get_m_WindowStart() const;

constexpr int32_t& __cordl_internal_get_m_WindowStart() ;

constexpr void __cordl_internal_set__PreferredUpdate_k__BackingField(::GlobalNamespace::UpdateTracker_UpdateClock  value) ;

constexpr void __cordl_internal_set_m_LastFrameUpdated(int32_t  value) ;

constexpr void __cordl_internal_set_m_LastPos(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_m_NumWindowFixedUpdateMoves(int32_t  value) ;

constexpr void __cordl_internal_set_m_NumWindowLateUpdateMoves(int32_t  value) ;

constexpr void __cordl_internal_set_m_NumWindows(int32_t  value) ;

constexpr void __cordl_internal_set_m_WindowStart(int32_t  value) ;

/// @brief Method .ctor, addr 0xaec2190, size 0x58, virtual false, abstract: false, final false
inline void _ctor(int32_t  currentFrame, ::UnityEngine::Matrix4x4  pos) ;

/// [CompilerGenerated]
/// @brief Method get_PreferredUpdate, addr 0xaec2430, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::UpdateTracker_UpdateClock get_PreferredUpdate() ;

/// [CompilerGenerated]
/// @brief Method set_PreferredUpdate, addr 0xaec2438, size 0x8, virtual false, abstract: false, final false
inline void set_PreferredUpdate(::GlobalNamespace::UpdateTracker_UpdateClock  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateTracker_UpdateStatus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateTracker_UpdateStatus", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateTracker_UpdateStatus(UpdateTracker_UpdateStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateTracker_UpdateStatus", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateTracker_UpdateStatus(UpdateTracker_UpdateStatus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22380};

/// @brief Field kWindowSize offset 0xffffffff size 0x4
static constexpr int32_t  kWindowSize{static_cast<int32_t>(0x1e)};

/// @brief Field m_WindowStart, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_WindowStart;

/// @brief Field m_NumWindowLateUpdateMoves, offset: 0x14, size: 0x4, def value: None
 int32_t  ___m_NumWindowLateUpdateMoves;

/// @brief Field m_NumWindowFixedUpdateMoves, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_NumWindowFixedUpdateMoves;

/// @brief Field m_NumWindows, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_NumWindows;

/// @brief Field m_LastFrameUpdated, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_LastFrameUpdated;

/// @brief Field m_LastPos, offset: 0x24, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___m_LastPos;

/// [CompilerGenerated]
/// @brief Field <PreferredUpdate>k__BackingField, offset: 0x64, size: 0x4, def value: None
 ::GlobalNamespace::UpdateTracker_UpdateClock  ____PreferredUpdate_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::UpdateTracker_UpdateStatus, ___m_WindowStart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::UpdateTracker_UpdateStatus, ___m_NumWindowLateUpdateMoves) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::UpdateTracker_UpdateStatus, ___m_NumWindowFixedUpdateMoves) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::UpdateTracker_UpdateStatus, ___m_NumWindows) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::UpdateTracker_UpdateStatus, ___m_LastFrameUpdated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::UpdateTracker_UpdateStatus, ___m_LastPos) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::UpdateTracker_UpdateStatus, ____PreferredUpdate_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::UpdateTracker_UpdateStatus) == 0x68, "Size mismatch!");

} // namespace end def Unity::Cinemachine

#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableDirector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayableDirector)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace UnityEngine::Playables {
struct FrameRate;
}
namespace UnityEngine::Playables {
struct PlayState;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class IExposedPropertyTable;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Write type traits
MARK_REF_T(::UnityEngine::Playables::PlayableDirector*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::PlayableDirector*, "UnityEngine.Playables", "PlayableDirector");
// [HelpURL("https://docs.unity3d.com/ScriptReference/Playables.PlayableDirector.html")]
// [RequiredByNativeCode]
// [NativeHeader("Runtime/Mono/MonoBehaviour.h")]
// [NativeHeader("Modules/Director/PlayableDirector.h")]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableDirector
class CORDL_TYPE PlayableDirector : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_duration)) double_t  duration;

 __declspec(property(get=get_extrapolationMode, put=set_extrapolationMode)) ::UnityEngine::Playables::DirectorWrapMode  extrapolationMode;

 __declspec(property(put=set_initialTime)) double_t  initialTime;

/// @brief Field paused, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_paused, put=__cordl_internal_set_paused)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  paused;

 __declspec(property(get=get_playableAsset, put=set_playableAsset)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  playableAsset;

 __declspec(property(get=get_playableGraph)) ::UnityEngine::Playables::PlayableGraph  playableGraph;

/// @brief Field played, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_played, put=__cordl_internal_set_played)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  played;

 __declspec(property(get=get_state)) ::UnityEngine::Playables::PlayState  state;

/// @brief Field stopped, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stopped, put=__cordl_internal_set_stopped)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  stopped;

 __declspec(property(get=get_time, put=set_time)) double_t  time;

/// @brief Convert operator to "::UnityEngine::IExposedPropertyTable"
constexpr operator  ::UnityEngine::IExposedPropertyTable*() noexcept;

/// [NativeThrows]
/// @brief Method Evaluate, addr 0xb6317bc, size 0x78, virtual false, abstract: false, final false
inline void Evaluate() ;

/// @brief Method Evaluate_Injected, addr 0xb631834, size 0x3c, virtual false, abstract: false, final false
static inline void Evaluate_Injected(::System::IntPtr  _unity_self) ;

/// [NativeMethod("GetBindingFor")]
/// @brief Method GetGenericBinding, addr 0xb631b5c, size 0xd0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> GetGenericBinding(::UnityEngine::Object*  key) ;

/// @brief Method GetGenericBinding_Injected, addr 0xb631c2c, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetGenericBinding_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  key) ;

/// @brief Method GetGraphHandle, addr 0xb631240, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableGraph GetGraphHandle() ;

/// @brief Method GetGraphHandle_Injected, addr 0xb631d2c, size 0x44, virtual false, abstract: false, final false
static inline void GetGraphHandle_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableGraph>  ret) ;

/// @brief Method GetPlayState, addr 0xb630ef8, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayState GetPlayState() ;

/// @brief Method GetPlayState_Injected, addr 0xb631c70, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayState GetPlayState_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetReferenceValue, addr 0xb631a58, size 0xb0, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> GetReferenceValue(::UnityEngine::PropertyName  id, ::by_ref<bool>  idValid) ;

/// @brief Method GetReferenceValue_Injected, addr 0xb631b08, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr GetReferenceValue_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::PropertyName>  id, ::by_ref<bool>  idValid) ;

/// @brief Method GetWrapMode, addr 0xb630ff8, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::DirectorWrapMode GetWrapMode() ;

/// @brief Method GetWrapMode_Injected, addr 0xb631cf0, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::DirectorWrapMode GetWrapMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Internal_GetPlayableAsset, addr 0xb6310f0, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ScriptableObject> Internal_GetPlayableAsset() ;

/// @brief Method Internal_GetPlayableAsset_Injected, addr 0xb631db4, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_GetPlayableAsset_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::Playables::PlayableDirector* New_ctor() ;

/// @brief Method Pause, addr 0xb6319a4, size 0x78, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method Pause_Injected, addr 0xb631a1c, size 0x3c, virtual false, abstract: false, final false
static inline void Pause_Injected(::System::IntPtr  _unity_self) ;

/// [NativeThrows]
/// @brief Method Play, addr 0xb631434, size 0x78, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Play, addr 0xb63135c, size 0xd8, virtual false, abstract: false, final false
inline void Play(::UnityEngine::Playables::PlayableAsset*  asset, ::UnityEngine::Playables::DirectorWrapMode  mode) ;

/// @brief Method Play, addr 0xb6312d0, size 0x8, virtual false, abstract: false, final false
inline void Play(::UnityEngine::Playables::FrameRate  frameRate) ;

/// [NativeThrows]
/// @brief Method PlayOnFrame, addr 0xb6312d8, size 0x84, virtual false, abstract: false, final false
inline void PlayOnFrame(::UnityEngine::Playables::FrameRate  frameRate) ;

/// @brief Method PlayOnFrame_Injected, addr 0xb631870, size 0x44, virtual false, abstract: false, final false
static inline void PlayOnFrame_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Playables::FrameRate>  frameRate) ;

/// @brief Method Play_Injected, addr 0xb6318b4, size 0x3c, virtual false, abstract: false, final false
static inline void Play_Injected(::System::IntPtr  _unity_self) ;

/// [RequiredByNativeCode]
/// @brief Method SendOnPlayableDirectorPause, addr 0xb631e10, size 0x20, virtual false, abstract: false, final false
inline void SendOnPlayableDirectorPause() ;

/// [RequiredByNativeCode]
/// @brief Method SendOnPlayableDirectorPlay, addr 0xb631df0, size 0x20, virtual false, abstract: false, final false
inline void SendOnPlayableDirectorPlay() ;

/// [RequiredByNativeCode]
/// @brief Method SendOnPlayableDirectorStop, addr 0xb631e30, size 0x20, virtual false, abstract: false, final false
inline void SendOnPlayableDirectorStop() ;

/// @brief Method SetPlayableAsset, addr 0xb631188, size 0xb4, virtual false, abstract: false, final false
inline void SetPlayableAsset(::UnityEngine::ScriptableObject*  asset) ;

/// @brief Method SetPlayableAsset_Injected, addr 0xb631d70, size 0x44, virtual false, abstract: false, final false
static inline void SetPlayableAsset_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  asset) ;

/// @brief Method SetWrapMode, addr 0xb630f74, size 0x80, virtual false, abstract: false, final false
inline void SetWrapMode(::UnityEngine::Playables::DirectorWrapMode  mode) ;

/// @brief Method SetWrapMode_Injected, addr 0xb631cac, size 0x44, virtual false, abstract: false, final false
static inline void SetWrapMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Playables::DirectorWrapMode  mode) ;

/// @brief Method Stop, addr 0xb6318f0, size 0x78, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Stop_Injected, addr 0xb631968, size 0x3c, virtual false, abstract: false, final false
static inline void Stop_Injected(::System::IntPtr  _unity_self) ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& __cordl_internal_get_paused() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_paused() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& __cordl_internal_get_played() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_played() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& __cordl_internal_get_stopped() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_stopped() ;

constexpr void __cordl_internal_set_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

constexpr void __cordl_internal_set_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

constexpr void __cordl_internal_set_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method .ctor, addr 0xb631e50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_duration, addr 0xb631708, size 0x78, virtual false, abstract: false, final false
inline double_t get_duration() ;

/// @brief Method get_duration_Injected, addr 0xb631780, size 0x3c, virtual false, abstract: false, final false
static inline double_t get_duration_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_extrapolationMode, addr 0xb630ff4, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::DirectorWrapMode get_extrapolationMode() ;

/// @brief Method get_playableAsset, addr 0xb631070, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Playables::PlayableAsset> get_playableAsset() ;

/// @brief Method get_playableGraph, addr 0xb63123c, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableGraph get_playableGraph() ;

/// @brief Method get_state, addr 0xb630ef4, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayState get_state() ;

/// @brief Method get_time, addr 0xb631580, size 0x78, virtual false, abstract: false, final false
inline double_t get_time() ;

/// @brief Method get_time_Injected, addr 0xb6315f8, size 0x3c, virtual false, abstract: false, final false
static inline double_t get_time_Injected(::System::IntPtr  _unity_self) ;

/// @brief Convert to "::UnityEngine::IExposedPropertyTable"
constexpr ::UnityEngine::IExposedPropertyTable* i___UnityEngine__IExposedPropertyTable() noexcept;

/// @brief Method set_extrapolationMode, addr 0xb630f70, size 0x4, virtual false, abstract: false, final false
inline void set_extrapolationMode(::UnityEngine::Playables::DirectorWrapMode  value) ;

/// @brief Method set_initialTime, addr 0xb631634, size 0x88, virtual false, abstract: false, final false
inline void set_initialTime(double_t  value) ;

/// @brief Method set_initialTime_Injected, addr 0xb6316bc, size 0x4c, virtual false, abstract: false, final false
static inline void set_initialTime_Injected(::System::IntPtr  _unity_self, double_t  value) ;

/// @brief Method set_playableAsset, addr 0xb631184, size 0x4, virtual false, abstract: false, final false
inline void set_playableAsset(::UnityEngine::Playables::PlayableAsset*  value) ;

/// @brief Method set_time, addr 0xb6314ac, size 0x88, virtual false, abstract: false, final false
inline void set_time(double_t  value) ;

/// @brief Method set_time_Injected, addr 0xb631534, size 0x4c, virtual false, abstract: false, final false
static inline void set_time_Injected(::System::IntPtr  _unity_self, double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayableDirector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayableDirector(PlayableDirector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayableDirector(PlayableDirector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32644};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field played, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  ___played;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field paused, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  ___paused;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field stopped, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  ___stopped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___played) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___paused) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___stopped) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Playables::PlayableDirector) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Playables

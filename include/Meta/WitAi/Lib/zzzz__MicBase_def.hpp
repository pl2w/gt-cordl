#pragma once
// IWYU pragma private; include "Meta/WitAi/Lib/MicBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MicBase)
namespace Meta::WitAi::Data {
class AudioEncoding;
}
namespace Meta::WitAi::Interfaces {
class IAudioInputSource;
}
namespace Meta::WitAi::Lib {
class MicBase__ReadRawAudio_d__44;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace Meta::WitAi::Lib {
class MicBase;
}
namespace Meta::WitAi::Lib {
class MicBase__ReadRawAudio_d__44;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Lib::MicBase*);
MARK_REF_T(::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Lib::MicBase*, "Meta.WitAi.Lib", "MicBase");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44*, "Meta.WitAi.Lib", "MicBase/<ReadRawAudio>d__44");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::Lib {
// Is value type: false
// CS Name: Meta.WitAi.Lib.MicBase
class CORDL_TYPE MicBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _ReadRawAudio_d__44 = ::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44;

 __declspec(property(get=get_AudioEncoding, put=set_AudioEncoding)) ::Meta::WitAi::Data::AudioEncoding*  AudioEncoding;

 __declspec(property(get=get_IsInputAvailable)) bool  IsInputAvailable;

 __declspec(property(get=get_IsMicListening)) bool  IsMicListening;

 __declspec(property(get=get_IsMuted, put=set_IsMuted)) bool  IsMuted;

 __declspec(property(get=get_IsRecording, put=set_IsRecording)) bool  IsRecording;

 __declspec(property(get=get_MicPosition)) int32_t  MicPosition;

/// @brief Field OnMicMuted, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMicMuted, put=__cordl_internal_set_OnMicMuted)) ::System::Action*  OnMicMuted;

/// @brief Field OnMicUnmuted, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMicUnmuted, put=__cordl_internal_set_OnMicUnmuted)) ::System::Action*  OnMicUnmuted;

/// @brief Field OnSampleReady, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSampleReady, put=__cordl_internal_set_OnSampleReady)) ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  OnSampleReady;

/// @brief Field OnStartRecording, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStartRecording, put=__cordl_internal_set_OnStartRecording)) ::System::Action*  OnStartRecording;

/// @brief Field OnStartRecordingFailed, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStartRecordingFailed, put=__cordl_internal_set_OnStartRecordingFailed)) ::System::Action*  OnStartRecordingFailed;

/// @brief Field OnStopRecording, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStopRecording, put=__cordl_internal_set_OnStopRecording)) ::System::Action*  OnStopRecording;

/// @brief Field <AudioEncoding>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioEncoding_k__BackingField, put=__cordl_internal_set__AudioEncoding_k__BackingField)) ::Meta::WitAi::Data::AudioEncoding*  _AudioEncoding_k__BackingField;

/// @brief Field <IsMuted>k__BackingField, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsMuted_k__BackingField, put=__cordl_internal_set__IsMuted_k__BackingField)) bool  _IsMuted_k__BackingField;

/// @brief Field <IsRecording>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsRecording_k__BackingField, put=__cordl_internal_set__IsRecording_k__BackingField)) bool  _IsRecording_k__BackingField;

/// @brief Field _reader, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__reader, put=__cordl_internal_set__reader)) ::UnityEngine::Coroutine*  _reader;

/// @brief Field _sampleCount, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleCount, put=__cordl_internal_set__sampleCount)) int32_t  _sampleCount;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioInputSource"
constexpr operator  ::Meta::WitAi::Interfaces::IAudioInputSource*() noexcept;

/// @brief Method CheckForInput, addr 0x9e17ca8, size 0x4, virtual true, abstract: false, final false
inline void CheckForInput() ;

/// @brief Method GetMicClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::AudioClip> GetMicClip() ;

/// @brief Method GetMicName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetMicName() ;

/// @brief Method GetMicSampleRate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetMicSampleRate() ;

static inline ::Meta::WitAi::Lib::MicBase* New_ctor() ;

/// [IteratorStateMachine(typeof(Meta.WitAi.Lib.MicBase::<ReadRawAudio>d__44))]
/// @brief Method ReadRawAudio, addr 0x9e17d50, size 0x7c, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* ReadRawAudio(int32_t  sampleDurationMS) ;

/// @brief Method SetMuted, addr 0x9e17c28, size 0x80, virtual true, abstract: false, final false
inline void SetMuted(bool  muted) ;

/// @brief Method StartRecording, addr 0x9e17cac, size 0xa4, virtual true, abstract: false, final false
inline void StartRecording(int32_t  sampleDurationMS) ;

/// @brief Method StopRecording, addr 0x9e17df4, size 0x6c, virtual true, abstract: false, final false
inline void StopRecording() ;

constexpr ::System::Action* const& __cordl_internal_get_OnMicMuted() const;

constexpr ::System::Action*& __cordl_internal_get_OnMicMuted() ;

constexpr ::System::Action* const& __cordl_internal_get_OnMicUnmuted() const;

constexpr ::System::Action*& __cordl_internal_get_OnMicUnmuted() ;

constexpr ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>* const& __cordl_internal_get_OnSampleReady() const;

constexpr ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*& __cordl_internal_get_OnSampleReady() ;

constexpr ::System::Action* const& __cordl_internal_get_OnStartRecording() const;

constexpr ::System::Action*& __cordl_internal_get_OnStartRecording() ;

constexpr ::System::Action* const& __cordl_internal_get_OnStartRecordingFailed() const;

constexpr ::System::Action*& __cordl_internal_get_OnStartRecordingFailed() ;

constexpr ::System::Action* const& __cordl_internal_get_OnStopRecording() const;

constexpr ::System::Action*& __cordl_internal_get_OnStopRecording() ;

constexpr ::Meta::WitAi::Data::AudioEncoding* const& __cordl_internal_get__AudioEncoding_k__BackingField() const;

constexpr ::Meta::WitAi::Data::AudioEncoding*& __cordl_internal_get__AudioEncoding_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsMuted_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsMuted_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsRecording_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsRecording_k__BackingField() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__reader() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__reader() ;

constexpr int32_t const& __cordl_internal_get__sampleCount() const;

constexpr int32_t& __cordl_internal_get__sampleCount() ;

constexpr void __cordl_internal_set_OnMicMuted(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnMicUnmuted(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value) ;

constexpr void __cordl_internal_set_OnStartRecording(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnStartRecordingFailed(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnStopRecording(::System::Action*  value) ;

constexpr void __cordl_internal_set__AudioEncoding_k__BackingField(::Meta::WitAi::Data::AudioEncoding*  value) ;

constexpr void __cordl_internal_set__IsMuted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsRecording_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__reader(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__sampleCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x9e17e60, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnMicMuted, addr 0x9e179b8, size 0x9c, virtual true, abstract: false, final true
inline void add_OnMicMuted(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMicUnmuted, addr 0x9e17af0, size 0x9c, virtual true, abstract: false, final true
inline void add_OnMicUnmuted(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnSampleReady, addr 0x9e17790, size 0xb0, virtual true, abstract: false, final true
inline void add_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStartRecording, addr 0x9e173e8, size 0x9c, virtual true, abstract: false, final true
inline void add_OnStartRecording(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStartRecordingFailed, addr 0x9e17520, size 0x9c, virtual true, abstract: false, final true
inline void add_OnStartRecordingFailed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStopRecording, addr 0x9e17658, size 0x9c, virtual true, abstract: false, final true
inline void add_OnStopRecording(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method get_AudioEncoding, addr 0x9e17998, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Data::AudioEncoding* get_AudioEncoding() ;

/// @brief Method get_IsInputAvailable, addr 0x9e17920, size 0x78, virtual false, abstract: false, final false
inline bool get_IsInputAvailable() ;

/// @brief Method get_IsMicListening, addr 0x9e17900, size 0x20, virtual true, abstract: false, final false
inline bool get_IsMicListening() ;

/// [CompilerGenerated]
/// @brief Method get_IsMuted, addr 0x9e179a8, size 0x8, virtual true, abstract: false, final false
inline bool get_IsMuted() ;

/// [CompilerGenerated]
/// @brief Method get_IsRecording, addr 0x9e178f0, size 0x8, virtual true, abstract: false, final true
inline bool get_IsRecording() ;

/// @brief Method get_MicPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_MicPosition() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioInputSource"
constexpr ::Meta::WitAi::Interfaces::IAudioInputSource* i___Meta__WitAi__Interfaces__IAudioInputSource() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnMicMuted, addr 0x9e17a54, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnMicMuted(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMicUnmuted, addr 0x9e17b8c, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnMicUnmuted(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSampleReady, addr 0x9e17840, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStartRecording, addr 0x9e17484, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnStartRecording(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStartRecordingFailed, addr 0x9e175bc, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnStartRecordingFailed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStopRecording, addr 0x9e176f4, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnStopRecording(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_AudioEncoding, addr 0x9e179a0, size 0x8, virtual false, abstract: false, final false
inline void set_AudioEncoding(::Meta::WitAi::Data::AudioEncoding*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsMuted, addr 0x9e179b0, size 0x8, virtual false, abstract: false, final false
inline void set_IsMuted(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsRecording, addr 0x9e178f8, size 0x8, virtual false, abstract: false, final false
inline void set_IsRecording(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MicBase(MicBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicBase(MicBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32773};

/// [CompilerGenerated]
/// @brief Field OnStartRecording, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___OnStartRecording;

/// [CompilerGenerated]
/// @brief Field OnStartRecordingFailed, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___OnStartRecordingFailed;

/// [CompilerGenerated]
/// @brief Field OnStopRecording, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___OnStopRecording;

/// [CompilerGenerated]
/// @brief Field OnSampleReady, offset: 0x38, size: 0x8, def value: None
 ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  ___OnSampleReady;

/// [CompilerGenerated]
/// @brief Field <IsRecording>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____IsRecording_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AudioEncoding>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Meta::WitAi::Data::AudioEncoding*  ____AudioEncoding_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsMuted>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  ____IsMuted_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnMicMuted, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  ___OnMicMuted;

/// [CompilerGenerated]
/// @brief Field OnMicUnmuted, offset: 0x60, size: 0x8, def value: None
 ::System::Action*  ___OnMicUnmuted;

/// @brief Field _sampleCount, offset: 0x68, size: 0x4, def value: None
 int32_t  ____sampleCount;

/// @brief Field _reader, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____reader;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Lib::MicBase, ___OnStartRecording) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase, ___OnStartRecordingFailed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase, ___OnStopRecording) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase, ___OnSampleReady) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase, ____IsRecording_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase, ____AudioEncoding_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase, ____IsMuted_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase, ___OnMicMuted) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase, ___OnMicUnmuted) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase, ____sampleCount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase, ____reader) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Lib::MicBase) == 0x78, "Size mismatch!");

} // namespace end def Meta::WitAi::Lib
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Lib {
// Is value type: false
// CS Name: Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__44
class CORDL_TYPE MicBase__ReadRawAudio_d__44 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::Lib::MicBase>  __4__this;

/// @brief Field <loops>5__4, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__loops_5__4, put=__cordl_internal_set__loops_5__4)) int32_t  _loops_5__4;

/// @brief Field <micClip>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__micClip_5__2, put=__cordl_internal_set__micClip_5__2)) ::UnityW<::UnityEngine::AudioClip>  _micClip_5__2;

/// @brief Field <micDif>5__8, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__micDif_5__8, put=__cordl_internal_set__micDif_5__8)) int32_t  _micDif_5__8;

/// @brief Field <micTempTotal>5__7, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__micTempTotal_5__7, put=__cordl_internal_set__micTempTotal_5__7)) int32_t  _micTempTotal_5__7;

/// @brief Field <prevPos>5__6, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__prevPos_5__6, put=__cordl_internal_set__prevPos_5__6)) int32_t  _prevPos_5__6;

/// @brief Field <readAbsPos>5__5, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__readAbsPos_5__5, put=__cordl_internal_set__readAbsPos_5__5)) int32_t  _readAbsPos_5__5;

/// @brief Field <sample>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__sample_5__3, put=__cordl_internal_set__sample_5__3)) ::ArrayW<float_t>  _sample_5__3;

/// @brief Field <temp>5__9, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__temp_5__9, put=__cordl_internal_set__temp_5__9)) ::ArrayW<float_t>  _temp_5__9;

/// @brief Field sampleDurationMS, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_sampleDurationMS, put=__cordl_internal_set_sampleDurationMS)) int32_t  sampleDurationMS;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e17ecc, size 0x3d0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e1829c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e182a4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e182dc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e17ec8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::Lib::MicBase> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::Lib::MicBase>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__loops_5__4() const;

constexpr int32_t& __cordl_internal_get__loops_5__4() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__micClip_5__2() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__micClip_5__2() ;

constexpr int32_t const& __cordl_internal_get__micDif_5__8() const;

constexpr int32_t& __cordl_internal_get__micDif_5__8() ;

constexpr int32_t const& __cordl_internal_get__micTempTotal_5__7() const;

constexpr int32_t& __cordl_internal_get__micTempTotal_5__7() ;

constexpr int32_t const& __cordl_internal_get__prevPos_5__6() const;

constexpr int32_t& __cordl_internal_get__prevPos_5__6() ;

constexpr int32_t const& __cordl_internal_get__readAbsPos_5__5() const;

constexpr int32_t& __cordl_internal_get__readAbsPos_5__5() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__sample_5__3() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__sample_5__3() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__temp_5__9() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__temp_5__9() ;

constexpr int32_t const& __cordl_internal_get_sampleDurationMS() const;

constexpr int32_t& __cordl_internal_get_sampleDurationMS() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::Lib::MicBase>  value) ;

constexpr void __cordl_internal_set__loops_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__micClip_5__2(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__micDif_5__8(int32_t  value) ;

constexpr void __cordl_internal_set__micTempTotal_5__7(int32_t  value) ;

constexpr void __cordl_internal_set__prevPos_5__6(int32_t  value) ;

constexpr void __cordl_internal_set__readAbsPos_5__5(int32_t  value) ;

constexpr void __cordl_internal_set__sample_5__3(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__temp_5__9(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_sampleDurationMS(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e17dcc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicBase__ReadRawAudio_d__44() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicBase__ReadRawAudio_d__44", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MicBase__ReadRawAudio_d__44(MicBase__ReadRawAudio_d__44 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicBase__ReadRawAudio_d__44", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicBase__ReadRawAudio_d__44(MicBase__ReadRawAudio_d__44 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32772};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Lib::MicBase>  _____4__this;

/// @brief Field sampleDurationMS, offset: 0x28, size: 0x4, def value: None
 int32_t  ___sampleDurationMS;

/// @brief Field <micClip>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____micClip_5__2;

/// @brief Field <sample>5__3, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ____sample_5__3;

/// @brief Field <loops>5__4, offset: 0x40, size: 0x4, def value: None
 int32_t  ____loops_5__4;

/// @brief Field <readAbsPos>5__5, offset: 0x44, size: 0x4, def value: None
 int32_t  ____readAbsPos_5__5;

/// @brief Field <prevPos>5__6, offset: 0x48, size: 0x4, def value: None
 int32_t  ____prevPos_5__6;

/// @brief Field <micTempTotal>5__7, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____micTempTotal_5__7;

/// @brief Field <micDif>5__8, offset: 0x50, size: 0x4, def value: None
 int32_t  ____micDif_5__8;

/// @brief Field <temp>5__9, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<float_t>  ____temp_5__9;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44, ___sampleDurationMS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44, ____micClip_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44, ____sample_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44, ____loops_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44, ____readAbsPos_5__5) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44, ____prevPos_5__6) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44, ____micTempTotal_5__7) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44, ____micDif_5__8) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44, ____temp_5__9) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44) == 0x60, "Size mismatch!");

} // namespace end def Meta::WitAi::Lib

#pragma once
// IWYU pragma private; include "Meta/WitAi/Lib/Mic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Lib/zzzz__BaseAudioClipInput_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Mic)
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::WitAi::Lib {
class Mic__HandleActivation_d__20;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
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
// Forward declare root types
namespace Meta::WitAi::Lib {
class Mic;
}
namespace Meta::WitAi::Lib {
class Mic__HandleActivation_d__20;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Lib::Mic*);
MARK_REF_T(::Meta::WitAi::Lib::Mic__HandleActivation_d__20*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Lib::Mic*, "Meta.WitAi.Lib", "Mic");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Lib::Mic__HandleActivation_d__20*, "Meta.WitAi.Lib", "Mic/<HandleActivation>d__20");
// [LogCategory((Meta.Voice.Logging.LogCategory)9, (Meta.Voice.Logging.LogCategory)16)]
// Dependencies Meta.WitAi.Lib.BaseAudioClipInput
namespace Meta::WitAi::Lib {
// Is value type: false
// CS Name: Meta.WitAi.Lib.Mic
class CORDL_TYPE Mic : public ::Meta::WitAi::Lib::BaseAudioClipInput {
public:
// Declarations
using _HandleActivation_d__20 = ::Meta::WitAi::Lib::Mic__HandleActivation_d__20;

 __declspec(property(get=get_ActivateOnEnable)) bool  ActivateOnEnable;

 __declspec(property(get=get_AudioSampleRate)) int32_t  AudioSampleRate;

 __declspec(property(get=get_CanActivateAudio)) bool  CanActivateAudio;

 __declspec(property(get=get_Clip)) ::UnityW<::UnityEngine::AudioClip>  Clip;

 __declspec(property(get=get_ClipPosition)) int32_t  ClipPosition;

 __declspec(property(get=get_CurrentDeviceIndex, put=set_CurrentDeviceIndex)) int32_t  CurrentDeviceIndex;

 __declspec(property(get=get_CurrentDeviceName)) ::StringW  CurrentDeviceName;

 __declspec(property(get=get_Devices)) ::System::Collections::Generic::List_1<::StringW>*  Devices;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

/// @brief Field MicBufferLength, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_MicBufferLength, put=__cordl_internal_set_MicBufferLength)) int32_t  MicBufferLength;

/// @brief Field MicStartTimeout, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_MicStartTimeout, put=__cordl_internal_set_MicStartTimeout)) float_t  MicStartTimeout;

/// @brief Field <CurrentDeviceIndex>k__BackingField, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentDeviceIndex_k__BackingField, put=__cordl_internal_set__CurrentDeviceIndex_k__BackingField)) int32_t  _CurrentDeviceIndex_k__BackingField;

/// @brief Field <Logger>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field _activateOnEnable, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get__activateOnEnable, put=__cordl_internal_set__activateOnEnable)) bool  _activateOnEnable;

/// @brief Field _audioClip, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioClip, put=__cordl_internal_set__audioClip)) ::UnityW<::UnityEngine::AudioClip>  _audioClip;

/// @brief Field _devices, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__devices, put=__cordl_internal_set__devices)) ::System::Collections::Generic::List_1<::StringW>*  _devices;

/// @brief Field _micSampleRate, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__micSampleRate, put=__cordl_internal_set__micSampleRate)) int32_t  _micSampleRate;

/// @brief Method ChangeMicDevice, addr 0x9e19910, size 0x28, virtual false, abstract: false, final false
inline void ChangeMicDevice(int32_t  index) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.Lib.Mic::<HandleActivation>d__20))]
/// @brief Method HandleActivation, addr 0x9e19278, size 0x6c, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* HandleActivation() ;

/// @brief Method HandleDeactivation, addr 0x9e19598, size 0x4, virtual true, abstract: false, final false
inline void HandleDeactivation() ;

/// @brief Method MicrophoneEnd, addr 0x9e197c4, size 0xc, virtual false, abstract: false, final false
inline void MicrophoneEnd(::StringW  deviceName) ;

/// @brief Method MicrophoneGetDevices, addr 0x9e19908, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> MicrophoneGetDevices() ;

/// @brief Method MicrophoneGetPosition, addr 0x9e19154, size 0xc, virtual false, abstract: false, final false
inline int32_t MicrophoneGetPosition(::StringW  device) ;

/// @brief Method MicrophoneIsRecording, addr 0x9e19790, size 0x34, virtual false, abstract: false, final false
inline bool MicrophoneIsRecording(::StringW  device) ;

/// @brief Method MicrophoneStart, addr 0x9e19580, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> MicrophoneStart(::StringW  deviceName, bool  loop, int32_t  lengthSeconds, int32_t  frequency) ;

static inline ::Meta::WitAi::Lib::Mic* New_ctor() ;

/// @brief Method RefreshMicDevices, addr 0x9e19824, size 0xd4, virtual false, abstract: false, final false
inline void RefreshMicDevices() ;

/// @brief Method SetAudioSampleRate, addr 0x9e19178, size 0x100, virtual false, abstract: false, final false
inline void SetAudioSampleRate(int32_t  newSampleRate) ;

/// @brief Method StartMicrophone, addr 0x9e1930c, size 0x274, virtual false, abstract: false, final false
inline void StartMicrophone() ;

/// @brief Method StopMicrophone, addr 0x9e1959c, size 0x1f4, virtual false, abstract: false, final false
inline void StopMicrophone() ;

constexpr int32_t const& __cordl_internal_get_MicBufferLength() const;

constexpr int32_t& __cordl_internal_get_MicBufferLength() ;

constexpr float_t const& __cordl_internal_get_MicStartTimeout() const;

constexpr float_t& __cordl_internal_get_MicStartTimeout() ;

constexpr int32_t const& __cordl_internal_get__CurrentDeviceIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentDeviceIndex_k__BackingField() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr bool const& __cordl_internal_get__activateOnEnable() const;

constexpr bool& __cordl_internal_get__activateOnEnable() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__audioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__audioClip() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__devices() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__devices() ;

constexpr int32_t const& __cordl_internal_get__micSampleRate() const;

constexpr int32_t& __cordl_internal_get__micSampleRate() ;

constexpr void __cordl_internal_set_MicBufferLength(int32_t  value) ;

constexpr void __cordl_internal_set_MicStartTimeout(float_t  value) ;

constexpr void __cordl_internal_set__CurrentDeviceIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__activateOnEnable(bool  value) ;

constexpr void __cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__devices(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__micSampleRate(int32_t  value) ;

/// @brief Method .ctor, addr 0x9e19938, size 0x198, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActivateOnEnable, addr 0x9e19168, size 0x8, virtual true, abstract: false, final false
inline bool get_ActivateOnEnable() ;

/// @brief Method get_AudioSampleRate, addr 0x9e19170, size 0x8, virtual true, abstract: false, final false
inline int32_t get_AudioSampleRate() ;

/// @brief Method get_CanActivateAudio, addr 0x9e19160, size 0x8, virtual true, abstract: false, final false
inline bool get_CanActivateAudio() ;

/// @brief Method get_Clip, addr 0x9e190ac, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_Clip() ;

/// @brief Method get_ClipPosition, addr 0x9e190b4, size 0x14, virtual true, abstract: false, final false
inline int32_t get_ClipPosition() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentDeviceIndex, addr 0x9e198f8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentDeviceIndex() ;

/// @brief Method get_CurrentDeviceName, addr 0x9e190c8, size 0x8c, virtual false, abstract: false, final false
inline ::StringW get_CurrentDeviceName() ;

/// @brief Method get_Devices, addr 0x9e197d0, size 0x54, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_Devices() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x9e190a4, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// [CompilerGenerated]
/// @brief Method set_CurrentDeviceIndex, addr 0x9e19900, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentDeviceIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mic(Mic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mic(Mic const& ) = delete;

/// @brief Field MIC_CHECK offset 0xffffffff size 0x4
static constexpr float_t  MIC_CHECK{static_cast<float_t>(0.5f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32998};

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// @brief Field _audioClip, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____audioClip;

/// [SerializeField]
/// @brief Field _activateOnEnable, offset: 0xa0, size: 0x1, def value: None
 bool  ____activateOnEnable;

/// [SerializeField]
/// [Tooltip("Searches for mics for this long following an activation request.")]
/// @brief Field MicStartTimeout, offset: 0xa4, size: 0x4, def value: None
 float_t  ___MicStartTimeout;

/// [SerializeField]
/// [Tooltip("Total amount of seconds included within the mic audio clip buffer")]
/// @brief Field MicBufferLength, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___MicBufferLength;

/// [SerializeField]
/// [Tooltip("Sample rate for mic audio capture in samples per second.")]
/// [FormerlySerializedAs("_audioClipSampleRate")]
/// @brief Field _micSampleRate, offset: 0xac, size: 0x4, def value: None
 int32_t  ____micSampleRate;

/// @brief Field _devices, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____devices;

/// [CompilerGenerated]
/// @brief Field <CurrentDeviceIndex>k__BackingField, offset: 0xb8, size: 0x4, def value: None
 int32_t  ____CurrentDeviceIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Lib::Mic, ____Logger_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::Mic, ____audioClip) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::Mic, ____activateOnEnable) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::Mic, ___MicStartTimeout) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::Mic, ___MicBufferLength) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::Mic, ____micSampleRate) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::Mic, ____devices) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::Mic, ____CurrentDeviceIndex_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Lib::Mic) == 0xc0, "Size mismatch!");

} // namespace end def Meta::WitAi::Lib
// [CompilerGenerated]
// Dependencies System.DateTime, System.Object
namespace Meta::WitAi::Lib {
// Is value type: false
// CS Name: Meta.WitAi.Lib.Mic/<HandleActivation>d__20
class CORDL_TYPE Mic__HandleActivation_d__20 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::Lib::Mic>  __4__this;

/// @brief Field <lastRefresh>5__3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastRefresh_5__3, put=__cordl_internal_set__lastRefresh_5__3)) ::System::DateTime  _lastRefresh_5__3;

/// @brief Field <start>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__start_5__2, put=__cordl_internal_set__start_5__2)) ::System::DateTime  _start_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e19ad4, size 0x330, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::Lib::Mic__HandleActivation_d__20* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e19e04, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e19e0c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e19e44, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e19ad0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::Lib::Mic> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::Lib::Mic>& __cordl_internal_get___4__this() ;

constexpr ::System::DateTime const& __cordl_internal_get__lastRefresh_5__3() const;

constexpr ::System::DateTime& __cordl_internal_get__lastRefresh_5__3() ;

constexpr ::System::DateTime const& __cordl_internal_get__start_5__2() const;

constexpr ::System::DateTime& __cordl_internal_get__start_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::Lib::Mic>  value) ;

constexpr void __cordl_internal_set__lastRefresh_5__3(::System::DateTime  value) ;

constexpr void __cordl_internal_set__start_5__2(::System::DateTime  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e192e4, size 0x28, virtual false, abstract: false, final false
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
constexpr Mic__HandleActivation_d__20() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mic__HandleActivation_d__20", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mic__HandleActivation_d__20(Mic__HandleActivation_d__20 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mic__HandleActivation_d__20", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mic__HandleActivation_d__20(Mic__HandleActivation_d__20 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32997};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Lib::Mic>  _____4__this;

/// @brief Field <start>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ____start_5__2;

/// @brief Field <lastRefresh>5__3, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ____lastRefresh_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Lib::Mic__HandleActivation_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::Mic__HandleActivation_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::Mic__HandleActivation_d__20, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::Mic__HandleActivation_d__20, ____start_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::Mic__HandleActivation_d__20, ____lastRefresh_5__3) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Lib::Mic__HandleActivation_d__20) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::Lib

#pragma once
// IWYU pragma private; include "Meta/WitAi/Lib/Mic.hpp"
#include "Meta/WitAi/Lib/zzzz__BaseAudioClipInput_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Lib/zzzz__Mic_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/WitAi/Lib/zzzz__Mic_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e190a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.get_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::get_Clip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e190ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::Mic*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.get_ClipPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::get_ClipPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e190b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::Mic*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.get_CanActivateAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::get_CanActivateAudio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e19160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::Mic*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.get_ActivateOnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::get_ActivateOnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e19168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::Mic*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.get_AudioSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::get_AudioSampleRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e19170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::Mic*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.SetAudioSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::Mic::*)(int32_t)>(&::Meta::WitAi::Lib::Mic::SetAudioSampleRate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9e19178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"SetAudioSampleRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.HandleActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::HandleActivation)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e19278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::Mic*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.StartMicrophone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::StartMicrophone)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x9e1930c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"StartMicrophone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.HandleDeactivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::HandleDeactivation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e19598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::Mic*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.StopMicrophone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::StopMicrophone)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x9e1959c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"StopMicrophone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.get_Devices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::get_Devices)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e197d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"get_Devices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.get_CurrentDeviceIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::get_CurrentDeviceIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e198f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"get_CurrentDeviceIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.set_CurrentDeviceIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::Mic::*)(int32_t)>(&::Meta::WitAi::Lib::Mic::set_CurrentDeviceIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e19900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"set_CurrentDeviceIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.get_CurrentDeviceName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::get_CurrentDeviceName)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9e190c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"get_CurrentDeviceName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.RefreshMicDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::RefreshMicDevices)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9e19824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"RefreshMicDevices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.ChangeMicDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::Mic::*)(int32_t)>(&::Meta::WitAi::Lib::Mic::ChangeMicDevice)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e19910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"ChangeMicDevice", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.MicrophoneStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::Meta::WitAi::Lib::Mic::*)(::StringW, bool, int32_t, int32_t)>(&::Meta::WitAi::Lib::Mic::MicrophoneStart)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e19580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"MicrophoneStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.MicrophoneEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::Mic::*)(::StringW)>(&::Meta::WitAi::Lib::Mic::MicrophoneEnd)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e197c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"MicrophoneEnd", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.MicrophoneIsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Lib::Mic::*)(::StringW)>(&::Meta::WitAi::Lib::Mic::MicrophoneIsRecording)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e19790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"MicrophoneIsRecording", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.MicrophoneGetDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::MicrophoneGetDevices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e19908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"MicrophoneGetDevices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic.MicrophoneGetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Lib::Mic::*)(::StringW)>(&::Meta::WitAi::Lib::Mic::MicrophoneGetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e19154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"MicrophoneGetPosition", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::Mic::*)()>(&::Meta::WitAi::Lib::Mic::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9e19938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::Lib::Mic::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::Lib::Mic::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Meta::WitAi::Lib::Mic::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Meta::WitAi::Lib::Mic::__cordl_internal_get__audioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Meta::WitAi::Lib::Mic::__cordl_internal_get__audioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioClip;
}
constexpr void Meta::WitAi::Lib::Mic::__cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioClip = value;
}
constexpr bool& Meta::WitAi::Lib::Mic::__cordl_internal_get__activateOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateOnEnable;
}
constexpr bool const& Meta::WitAi::Lib::Mic::__cordl_internal_get__activateOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateOnEnable;
}
constexpr void Meta::WitAi::Lib::Mic::__cordl_internal_set__activateOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activateOnEnable = value;
}
constexpr float_t& Meta::WitAi::Lib::Mic::__cordl_internal_get_MicStartTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicStartTimeout;
}
constexpr float_t const& Meta::WitAi::Lib::Mic::__cordl_internal_get_MicStartTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicStartTimeout;
}
constexpr void Meta::WitAi::Lib::Mic::__cordl_internal_set_MicStartTimeout(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MicStartTimeout = value;
}
constexpr int32_t& Meta::WitAi::Lib::Mic::__cordl_internal_get_MicBufferLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicBufferLength;
}
constexpr int32_t const& Meta::WitAi::Lib::Mic::__cordl_internal_get_MicBufferLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicBufferLength;
}
constexpr void Meta::WitAi::Lib::Mic::__cordl_internal_set_MicBufferLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MicBufferLength = value;
}
constexpr int32_t& Meta::WitAi::Lib::Mic::__cordl_internal_get__micSampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micSampleRate;
}
constexpr int32_t const& Meta::WitAi::Lib::Mic::__cordl_internal_get__micSampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micSampleRate;
}
constexpr void Meta::WitAi::Lib::Mic::__cordl_internal_set__micSampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micSampleRate = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Meta::WitAi::Lib::Mic::__cordl_internal_get__devices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devices;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Meta::WitAi::Lib::Mic::__cordl_internal_get__devices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devices;
}
constexpr void Meta::WitAi::Lib::Mic::__cordl_internal_set__devices(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____devices = value;
}
constexpr int32_t& Meta::WitAi::Lib::Mic::__cordl_internal_get__CurrentDeviceIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentDeviceIndex_k__BackingField;
}
constexpr int32_t const& Meta::WitAi::Lib::Mic::__cordl_internal_get__CurrentDeviceIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentDeviceIndex_k__BackingField;
}
constexpr void Meta::WitAi::Lib::Mic::__cordl_internal_set__CurrentDeviceIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentDeviceIndex_k__BackingField = value;
}
inline ::Meta::Voice::Logging::IVLogger* Meta::WitAi::Lib::Mic::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> Meta::WitAi::Lib::Mic::get_Clip()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::Mic*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline int32_t Meta::WitAi::Lib::Mic::get_ClipPosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::Mic*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Meta::WitAi::Lib::Mic::get_CanActivateAudio()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::Mic*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::Lib::Mic::get_ActivateOnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::Mic*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Meta::WitAi::Lib::Mic::get_AudioSampleRate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::Mic*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::Mic::SetAudioSampleRate(int32_t  newSampleRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"SetAudioSampleRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSampleRate);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::Lib::Mic::HandleActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::Mic*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::Mic::StartMicrophone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"StartMicrophone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::Mic::HandleDeactivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::Mic*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::Mic::StopMicrophone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"StopMicrophone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* Meta::WitAi::Lib::Mic::get_Devices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"get_Devices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline int32_t Meta::WitAi::Lib::Mic::get_CurrentDeviceIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"get_CurrentDeviceIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::Mic::set_CurrentDeviceIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"set_CurrentDeviceIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::WitAi::Lib::Mic::get_CurrentDeviceName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"get_CurrentDeviceName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::Mic::RefreshMicDevices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"RefreshMicDevices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::Mic::ChangeMicDevice(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"ChangeMicDevice", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::UnityW<::UnityEngine::AudioClip> Meta::WitAi::Lib::Mic::MicrophoneStart(::StringW  deviceName, bool  loop, int32_t  lengthSeconds, int32_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"MicrophoneStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method, deviceName, loop, lengthSeconds, frequency);
}
inline void Meta::WitAi::Lib::Mic::MicrophoneEnd(::StringW  deviceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"MicrophoneEnd", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceName);
}
inline bool Meta::WitAi::Lib::Mic::MicrophoneIsRecording(::StringW  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"MicrophoneIsRecording", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device);
}
inline ::ArrayW<::StringW> Meta::WitAi::Lib::Mic::MicrophoneGetDevices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"MicrophoneGetDevices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline int32_t Meta::WitAi::Lib::Mic::MicrophoneGetPosition(::StringW  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {"MicrophoneGetPosition", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, device);
}
inline void Meta::WitAi::Lib::Mic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Lib::Mic* Meta::WitAi::Lib::Mic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Lib::Mic*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Lib::Mic::Mic()   {
}
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic__HandleActivation_d__20._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::Mic__HandleActivation_d__20::*)(int32_t)>(&::Meta::WitAi::Lib::Mic__HandleActivation_d__20::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e192e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic__HandleActivation_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic__HandleActivation_d__20.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::Mic__HandleActivation_d__20::*)()>(&::Meta::WitAi::Lib::Mic__HandleActivation_d__20::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e19ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic__HandleActivation_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic__HandleActivation_d__20.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Lib::Mic__HandleActivation_d__20::*)()>(&::Meta::WitAi::Lib::Mic__HandleActivation_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x9e19ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic__HandleActivation_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic__HandleActivation_d__20.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Lib::Mic__HandleActivation_d__20::*)()>(&::Meta::WitAi::Lib::Mic__HandleActivation_d__20::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e19e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic__HandleActivation_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic__HandleActivation_d__20.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::Mic__HandleActivation_d__20::*)()>(&::Meta::WitAi::Lib::Mic__HandleActivation_d__20::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e19e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic__HandleActivation_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::Mic__HandleActivation_d__20.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Lib::Mic__HandleActivation_d__20::*)()>(&::Meta::WitAi::Lib::Mic__HandleActivation_d__20::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e19e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic__HandleActivation_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::Lib::Mic__HandleActivation_d__20::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::Lib::Mic__HandleActivation_d__20::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::Lib::Mic__HandleActivation_d__20::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::Lib::Mic__HandleActivation_d__20::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::Lib::Mic__HandleActivation_d__20::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::Lib::Mic__HandleActivation_d__20::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::Lib::Mic>& Meta::WitAi::Lib::Mic__HandleActivation_d__20::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::Lib::Mic> const& Meta::WitAi::Lib::Mic__HandleActivation_d__20::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Lib::Mic__HandleActivation_d__20::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::Lib::Mic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::DateTime& Meta::WitAi::Lib::Mic__HandleActivation_d__20::__cordl_internal_get__start_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____start_5__2;
}
constexpr ::System::DateTime const& Meta::WitAi::Lib::Mic__HandleActivation_d__20::__cordl_internal_get__start_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____start_5__2;
}
constexpr void Meta::WitAi::Lib::Mic__HandleActivation_d__20::__cordl_internal_set__start_5__2(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____start_5__2 = value;
}
constexpr ::System::DateTime& Meta::WitAi::Lib::Mic__HandleActivation_d__20::__cordl_internal_get__lastRefresh_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRefresh_5__3;
}
constexpr ::System::DateTime const& Meta::WitAi::Lib::Mic__HandleActivation_d__20::__cordl_internal_get__lastRefresh_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRefresh_5__3;
}
constexpr void Meta::WitAi::Lib::Mic__HandleActivation_d__20::__cordl_internal_set__lastRefresh_5__3(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastRefresh_5__3 = value;
}
inline void Meta::WitAi::Lib::Mic__HandleActivation_d__20::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic__HandleActivation_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::Lib::Mic__HandleActivation_d__20::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic__HandleActivation_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::Lib::Mic__HandleActivation_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic__HandleActivation_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Lib::Mic__HandleActivation_d__20::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic__HandleActivation_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::Mic__HandleActivation_d__20::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic__HandleActivation_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Lib::Mic__HandleActivation_d__20::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::Mic__HandleActivation_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::Lib::Mic__HandleActivation_d__20* Meta::WitAi::Lib::Mic__HandleActivation_d__20::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Lib::Mic__HandleActivation_d__20*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::Lib::Mic__HandleActivation_d__20::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::Lib::Mic__HandleActivation_d__20::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::Lib::Mic__HandleActivation_d__20::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::Lib::Mic__HandleActivation_d__20::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::Lib::Mic__HandleActivation_d__20::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::Lib::Mic__HandleActivation_d__20::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Lib::Mic__HandleActivation_d__20::Mic__HandleActivation_d__20()   {
}

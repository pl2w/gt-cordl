#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/MicWrapperPusher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/zzzz__MicWrapperPusher_def.hpp"
#include "Photon/Voice/Unity/zzzz__AudioOutCapture_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "Photon/Voice/zzzz__IAudioPusher_1_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "Photon/Voice/zzzz__ObjectFactory_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapperPusher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::MicWrapperPusher::*)(::StringW, ::UnityEngine::AudioSource*, int32_t, ::Photon::Voice::ILogger*, bool)>(&::Photon::Voice::Unity::MicWrapperPusher::_ctor)> {
  constexpr static std::size_t size = 0x1340;
  constexpr static std::size_t addrs = 0xa75b4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapperPusher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::MicWrapperPusher::*)(::StringW, ::UnityEngine::GameObject*, int32_t, ::Photon::Voice::ILogger*, bool)>(&::Photon::Voice::Unity::MicWrapperPusher::_ctor)> {
  constexpr static std::size_t size = 0x174c;
  constexpr static std::size_t addrs = 0xa75c840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapperPusher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::MicWrapperPusher::*)(::StringW, ::UnityEngine::Transform*, int32_t, ::Photon::Voice::ILogger*, bool)>(&::Photon::Voice::Unity::MicWrapperPusher::_ctor)> {
  constexpr static std::size_t size = 0x11c4;
  constexpr static std::size_t addrs = 0xa75df8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapperPusher.AudioOutCaptureOnOnAudioFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::MicWrapperPusher::*)(::ArrayW<float_t>, int32_t)>(&::Photon::Voice::Unity::MicWrapperPusher::AudioOutCaptureOnOnAudioFrame)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xa75f150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {"AudioOutCaptureOnOnAudioFrame", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapperPusher.SetCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::MicWrapperPusher::*)(::System::Action_1<::ArrayW<float_t>>*, ::Photon::Voice::ObjectFactory_2<::ArrayW<float_t>,int32_t>*)>(&::Photon::Voice::Unity::MicWrapperPusher::SetCallback)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa75f3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {"SetCallback", {}, {::i2c::type_of<::System::Action_1<::ArrayW<float_t>>*>(), ::i2c::type_of<::Photon::Voice::ObjectFactory_2<::ArrayW<float_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapperPusher.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::MicWrapperPusher::*)()>(&::Photon::Voice::Unity::MicWrapperPusher::Dispose)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa75f468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapperPusher.get_SamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::MicWrapperPusher::*)()>(&::Photon::Voice::Unity::MicWrapperPusher::get_SamplingRate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa75c810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapperPusher.get_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::MicWrapperPusher::*)()>(&::Photon::Voice::Unity::MicWrapperPusher::get_Channels)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa75c828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {"get_Channels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapperPusher.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Unity::MicWrapperPusher::*)()>(&::Photon::Voice::Unity::MicWrapperPusher::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75f5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapperPusher.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::MicWrapperPusher::*)(::StringW)>(&::Photon::Voice::Unity::MicWrapperPusher::set_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75f5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_mic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mic;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_mic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mic;
}
constexpr void Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_set_mic(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mic = value;
}
constexpr ::StringW& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_device()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr ::StringW const& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_device() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr void Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_set_device(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___device = value;
}
constexpr ::Photon::Voice::ILogger*& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr ::Photon::Voice::ILogger* const& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr void Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_set_logger(::Photon::Voice::ILogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::AudioOutCapture>& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_audioOutCapture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioOutCapture;
}
constexpr ::UnityW<::Photon::Voice::Unity::AudioOutCapture> const& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_audioOutCapture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioOutCapture;
}
constexpr void Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_set_audioOutCapture(::UnityW<::Photon::Voice::Unity::AudioOutCapture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioOutCapture = value;
}
constexpr int32_t& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_sampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleRate;
}
constexpr int32_t const& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_sampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleRate;
}
constexpr void Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_set_sampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sampleRate = value;
}
constexpr int32_t& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr int32_t const& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr void Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_set_channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
constexpr bool& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_destroyGameObjectOnStop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyGameObjectOnStop;
}
constexpr bool const& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_destroyGameObjectOnStop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyGameObjectOnStop;
}
constexpr void Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_set_destroyGameObjectOnStop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyGameObjectOnStop = value;
}
constexpr ::ArrayW<float_t>& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_frame2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frame2;
}
constexpr ::ArrayW<float_t> const& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_frame2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frame2;
}
constexpr void Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_set_frame2(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frame2 = value;
}
constexpr ::System::Action_1<::ArrayW<float_t>>*& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_pushCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pushCallback;
}
constexpr ::System::Action_1<::ArrayW<float_t>>* const& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get_pushCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pushCallback;
}
constexpr void Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_set_pushCallback(::System::Action_1<::ArrayW<float_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pushCallback = value;
}
constexpr ::StringW& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr ::StringW const& Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void Photon::Voice::Unity::MicWrapperPusher::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
inline void Photon::Voice::Unity::MicWrapperPusher::_ctor(::StringW  device, ::UnityEngine::AudioSource*  aS, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  lg, bool  destroyOnStop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device, aS, suggestedFrequency, lg, destroyOnStop);
}
inline void Photon::Voice::Unity::MicWrapperPusher::_ctor(::StringW  device, ::UnityEngine::GameObject*  gO, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  lg, bool  destroyOnStop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device, gO, suggestedFrequency, lg, destroyOnStop);
}
inline void Photon::Voice::Unity::MicWrapperPusher::_ctor(::StringW  device, ::UnityEngine::Transform*  parentTransform, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  lg, bool  destroyOnStop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device, parentTransform, suggestedFrequency, lg, destroyOnStop);
}
inline void Photon::Voice::Unity::MicWrapperPusher::AudioOutCaptureOnOnAudioFrame(::ArrayW<float_t>  frame, int32_t  channelsNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {"AudioOutCaptureOnOnAudioFrame", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame, channelsNumber);
}
inline void Photon::Voice::Unity::MicWrapperPusher::SetCallback(::System::Action_1<::ArrayW<float_t>>*  callback, ::Photon::Voice::ObjectFactory_2<::ArrayW<float_t>,int32_t>*  bufferFactory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {"SetCallback", {}, {::i2c::type_of<::System::Action_1<::ArrayW<float_t>>*>(), ::i2c::type_of<::Photon::Voice::ObjectFactory_2<::ArrayW<float_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, bufferFactory);
}
inline void Photon::Voice::Unity::MicWrapperPusher::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Photon::Voice::Unity::MicWrapperPusher::get_SamplingRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Photon::Voice::Unity::MicWrapperPusher::get_Channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {"get_Channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Photon::Voice::Unity::MicWrapperPusher::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::Unity::MicWrapperPusher::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapperPusher*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Photon::Voice::Unity::MicWrapperPusher* Photon::Voice::Unity::MicWrapperPusher::New_ctor(::StringW  device, ::UnityEngine::AudioSource*  aS, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  lg, bool  destroyOnStop)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::MicWrapperPusher*>(device, aS, suggestedFrequency, lg, destroyOnStop));
}
inline ::Photon::Voice::Unity::MicWrapperPusher* Photon::Voice::Unity::MicWrapperPusher::New_ctor(::StringW  device, ::UnityEngine::GameObject*  gO, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  lg, bool  destroyOnStop)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::MicWrapperPusher*>(device, gO, suggestedFrequency, lg, destroyOnStop));
}
inline ::Photon::Voice::Unity::MicWrapperPusher* Photon::Voice::Unity::MicWrapperPusher::New_ctor(::StringW  device, ::UnityEngine::Transform*  parentTransform, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  lg, bool  destroyOnStop)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::MicWrapperPusher*>(device, parentTransform, suggestedFrequency, lg, destroyOnStop));
}
/// @brief Convert operator to "::Photon::Voice::IAudioPusher_1<float_t>"
constexpr  Photon::Voice::Unity::MicWrapperPusher::operator ::Photon::Voice::IAudioPusher_1<float_t>*() noexcept {
return static_cast<::Photon::Voice::IAudioPusher_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioPusher_1<float_t>"
constexpr ::Photon::Voice::IAudioPusher_1<float_t>* Photon::Voice::Unity::MicWrapperPusher::i___Photon__Voice__IAudioPusher_1_float_t_() noexcept {
return static_cast<::Photon::Voice::IAudioPusher_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr  Photon::Voice::Unity::MicWrapperPusher::operator ::Photon::Voice::IAudioDesc*() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* Photon::Voice::Unity::MicWrapperPusher::i___Photon__Voice__IAudioDesc() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::Unity::MicWrapperPusher::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::Unity::MicWrapperPusher::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::MicWrapperPusher::MicWrapperPusher()   {
}

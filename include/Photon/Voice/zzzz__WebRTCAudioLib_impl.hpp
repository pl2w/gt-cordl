#pragma once
// IWYU pragma private; include "Photon/Voice/WebRTCAudioLib.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__WebRTCAudioLib_def.hpp"
#include "Photon/Voice/zzzz__WebRTCAudioLib_Error_def.hpp"
#include "Photon/Voice/zzzz__WebRTCAudioLib_Param_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioLib.webrtc_audio_processor_create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::Photon::Voice::WebRTCAudioLib::webrtc_audio_processor_create)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa755998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioLib*>(),
                        {"webrtc_audio_processor_create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioLib.webrtc_audio_processor_init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Photon::Voice::WebRTCAudioLib::webrtc_audio_processor_init)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa755a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioLib*>(),
                        {"webrtc_audio_processor_init", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioLib.webrtc_audio_processor_set_param
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, int32_t)>(&::Photon::Voice::WebRTCAudioLib::webrtc_audio_processor_set_param)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa756ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioLib*>(),
                        {"webrtc_audio_processor_set_param", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioLib.webrtc_audio_processor_process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<int16_t>, int32_t, ::by_ref<bool>)>(&::Photon::Voice::WebRTCAudioLib::webrtc_audio_processor_process)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa755dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioLib*>(),
                        {"webrtc_audio_processor_process", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioLib.webrtc_audio_processor_process_reverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<int16_t>, int32_t)>(&::Photon::Voice::WebRTCAudioLib::webrtc_audio_processor_process_reverse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa756a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioLib*>(),
                        {"webrtc_audio_processor_process_reverse", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioLib.webrtc_audio_processor_destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Photon::Voice::WebRTCAudioLib::webrtc_audio_processor_destroy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa756ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioLib*>(),
                        {"webrtc_audio_processor_destroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioLib._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioLib::*)()>(&::Photon::Voice::WebRTCAudioLib::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa755990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioLib*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Photon::Voice::WebRTCAudioLib::webrtc_audio_processor_create(int32_t  samplingRate, int32_t  channels, int32_t  frameSize, int32_t  revSamplingRate, int32_t  revChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioLib*>(),
                        {"webrtc_audio_processor_create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, samplingRate, channels, frameSize, revSamplingRate, revChannels);
}
inline int32_t Photon::Voice::WebRTCAudioLib::webrtc_audio_processor_init(::System::IntPtr  proc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioLib*>(),
                        {"webrtc_audio_processor_init", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, proc);
}
inline int32_t Photon::Voice::WebRTCAudioLib::webrtc_audio_processor_set_param(::System::IntPtr  proc, int32_t  param, int32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioLib*>(),
                        {"webrtc_audio_processor_set_param", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, proc, param, v);
}
inline int32_t Photon::Voice::WebRTCAudioLib::webrtc_audio_processor_process(::System::IntPtr  proc, ::ArrayW<int16_t>  buffer, int32_t  offset, ::by_ref<bool>  voiceDetected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioLib*>(),
                        {"webrtc_audio_processor_process", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, proc, buffer, offset, voiceDetected);
}
inline int32_t Photon::Voice::WebRTCAudioLib::webrtc_audio_processor_process_reverse(::System::IntPtr  proc, ::ArrayW<int16_t>  buffer, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioLib*>(),
                        {"webrtc_audio_processor_process_reverse", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, proc, buffer, bufferSize);
}
inline void Photon::Voice::WebRTCAudioLib::webrtc_audio_processor_destroy(::System::IntPtr  proc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioLib*>(),
                        {"webrtc_audio_processor_destroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, proc);
}
inline void Photon::Voice::WebRTCAudioLib::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioLib*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::WebRTCAudioLib* Photon::Voice::WebRTCAudioLib::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::WebRTCAudioLib*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::WebRTCAudioLib::WebRTCAudioLib()   {
}

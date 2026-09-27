#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/BaseAudioClipStream.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Audio/zzzz__BaseAudioClipStream_def.hpp"
#include "Meta/Voice/Audio/zzzz__AudioClipStreamDelegate_def.hpp"
#include "Meta/Voice/Audio/zzzz__AudioClipStreamSampleDelegate_def.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioClipStream_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.get_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::get_Channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_Channels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.get_SampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::get_SampleRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_SampleRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.get_StreamReadyLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::get_StreamReadyLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_StreamReadyLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.get_IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::get_IsReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_IsReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.set_IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)(bool)>(&::Meta::Voice::Audio::BaseAudioClipStream::set_IsReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_IsReady", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.get_IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::get_IsComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_IsComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.set_IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)(bool)>(&::Meta::Voice::Audio::BaseAudioClipStream::set_IsComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_IsComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.get_AddedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::get_AddedSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_AddedSamples", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.set_AddedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)(int32_t)>(&::Meta::Voice::Audio::BaseAudioClipStream::set_AddedSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_AddedSamples", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.get_ExpectedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::get_ExpectedSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_ExpectedSamples", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.set_ExpectedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)(int32_t)>(&::Meta::Voice::Audio::BaseAudioClipStream::set_ExpectedSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_ExpectedSamples", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.get_TotalSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::get_TotalSamples)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e6c3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_TotalSamples", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::get_Length)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9e6c3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.get_OnAddSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::AudioClipStreamSampleDelegate* (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::get_OnAddSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_OnAddSamples", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.set_OnAddSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)(::Meta::Voice::Audio::AudioClipStreamSampleDelegate*)>(&::Meta::Voice::Audio::BaseAudioClipStream::set_OnAddSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_OnAddSamples", {}, {::i2c::type_of<::Meta::Voice::Audio::AudioClipStreamSampleDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.get_OnStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::AudioClipStreamDelegate* (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::get_OnStreamReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_OnStreamReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.set_OnStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)(::Meta::Voice::Audio::AudioClipStreamDelegate*)>(&::Meta::Voice::Audio::BaseAudioClipStream::set_OnStreamReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_OnStreamReady", {}, {::i2c::type_of<::Meta::Voice::Audio::AudioClipStreamDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.set_OnStreamUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)(::Meta::Voice::Audio::AudioClipStreamDelegate*)>(&::Meta::Voice::Audio::BaseAudioClipStream::set_OnStreamUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_OnStreamUpdated", {}, {::i2c::type_of<::Meta::Voice::Audio::AudioClipStreamDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.get_OnStreamComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::AudioClipStreamDelegate* (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::get_OnStreamComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_OnStreamComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.set_OnStreamComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)(::Meta::Voice::Audio::AudioClipStreamDelegate*)>(&::Meta::Voice::Audio::BaseAudioClipStream::set_OnStreamComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_OnStreamComplete", {}, {::i2c::type_of<::Meta::Voice::Audio::AudioClipStreamDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.get_OnStreamUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::AudioClipStreamDelegate* (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::get_OnStreamUnloaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_OnStreamUnloaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.set_OnStreamUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)(::Meta::Voice::Audio::AudioClipStreamDelegate*)>(&::Meta::Voice::Audio::BaseAudioClipStream::set_OnStreamUnloaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_OnStreamUnloaded", {}, {::i2c::type_of<::Meta::Voice::Audio::AudioClipStreamDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)(int32_t, int32_t, float_t)>(&::Meta::Voice::Audio::BaseAudioClipStream::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9e6c480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9e6c4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.AddSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::Meta::Voice::Audio::BaseAudioClipStream::AddSamples)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.SetExpectedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)(int32_t)>(&::Meta::Voice::Audio::BaseAudioClipStream::SetExpectedSamples)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9e6c51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::UpdateState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9e6c540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.IsEnoughBuffered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::IsEnoughBuffered)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9e6c6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.HandleStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::HandleStreamReady)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e6c5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"HandleStreamReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.RaiseStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::RaiseStreamReady)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e6c754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.HandleStreamComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::HandleStreamComplete)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e6c64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"HandleStreamComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.RaiseStreamComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::RaiseStreamComplete)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e6c774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.Unload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioClipStream::*)()>(&::Meta::Voice::Audio::BaseAudioClipStream::Unload)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9e6c794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.GetSampleLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::Voice::Audio::BaseAudioClipStream::*)(int32_t)>(&::Meta::Voice::Audio::BaseAudioClipStream::GetSampleLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e6c420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"GetSampleLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioClipStream.GetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t, int32_t, int32_t)>(&::Meta::Voice::Audio::BaseAudioClipStream::GetLength)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e6c7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"GetLength", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__Channels_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Channels_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__Channels_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Channels_k__BackingField;
}
constexpr void Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_set__Channels_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Channels_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__SampleRate_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleRate_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__SampleRate_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleRate_k__BackingField;
}
constexpr void Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_set__SampleRate_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleRate_k__BackingField = value;
}
constexpr float_t& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__StreamReadyLength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StreamReadyLength_k__BackingField;
}
constexpr float_t const& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__StreamReadyLength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StreamReadyLength_k__BackingField;
}
constexpr void Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_set__StreamReadyLength_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StreamReadyLength_k__BackingField = value;
}
constexpr bool& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__IsReady_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsReady_k__BackingField;
}
constexpr bool const& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__IsReady_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsReady_k__BackingField;
}
constexpr void Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_set__IsReady_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsReady_k__BackingField = value;
}
constexpr bool& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__IsComplete_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsComplete_k__BackingField;
}
constexpr bool const& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__IsComplete_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsComplete_k__BackingField;
}
constexpr void Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_set__IsComplete_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsComplete_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__AddedSamples_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddedSamples_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__AddedSamples_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddedSamples_k__BackingField;
}
constexpr void Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_set__AddedSamples_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AddedSamples_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__ExpectedSamples_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExpectedSamples_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__ExpectedSamples_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExpectedSamples_k__BackingField;
}
constexpr void Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_set__ExpectedSamples_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ExpectedSamples_k__BackingField = value;
}
constexpr ::Meta::Voice::Audio::AudioClipStreamSampleDelegate*& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__OnAddSamples_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnAddSamples_k__BackingField;
}
constexpr ::Meta::Voice::Audio::AudioClipStreamSampleDelegate* const& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__OnAddSamples_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnAddSamples_k__BackingField;
}
constexpr void Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_set__OnAddSamples_k__BackingField(::Meta::Voice::Audio::AudioClipStreamSampleDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnAddSamples_k__BackingField = value;
}
constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate*& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__OnStreamReady_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnStreamReady_k__BackingField;
}
constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate* const& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__OnStreamReady_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnStreamReady_k__BackingField;
}
constexpr void Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_set__OnStreamReady_k__BackingField(::Meta::Voice::Audio::AudioClipStreamDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnStreamReady_k__BackingField = value;
}
constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate*& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__OnStreamUpdated_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnStreamUpdated_k__BackingField;
}
constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate* const& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__OnStreamUpdated_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnStreamUpdated_k__BackingField;
}
constexpr void Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_set__OnStreamUpdated_k__BackingField(::Meta::Voice::Audio::AudioClipStreamDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnStreamUpdated_k__BackingField = value;
}
constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate*& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__OnStreamComplete_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnStreamComplete_k__BackingField;
}
constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate* const& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__OnStreamComplete_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnStreamComplete_k__BackingField;
}
constexpr void Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_set__OnStreamComplete_k__BackingField(::Meta::Voice::Audio::AudioClipStreamDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnStreamComplete_k__BackingField = value;
}
constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate*& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__OnStreamUnloaded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnStreamUnloaded_k__BackingField;
}
constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate* const& Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_get__OnStreamUnloaded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnStreamUnloaded_k__BackingField;
}
constexpr void Meta::Voice::Audio::BaseAudioClipStream::__cordl_internal_set__OnStreamUnloaded_k__BackingField(::Meta::Voice::Audio::AudioClipStreamDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnStreamUnloaded_k__BackingField = value;
}
inline int32_t Meta::Voice::Audio::BaseAudioClipStream::get_Channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_Channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Meta::Voice::Audio::BaseAudioClipStream::get_SampleRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_SampleRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t Meta::Voice::Audio::BaseAudioClipStream::get_StreamReadyLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_StreamReadyLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Meta::Voice::Audio::BaseAudioClipStream::get_IsReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_IsReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::set_IsReady(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_IsReady", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::Voice::Audio::BaseAudioClipStream::get_IsComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_IsComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::set_IsComplete(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_IsComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::Voice::Audio::BaseAudioClipStream::get_AddedSamples()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_AddedSamples", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::set_AddedSamples(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_AddedSamples", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::Voice::Audio::BaseAudioClipStream::get_ExpectedSamples()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_ExpectedSamples", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::set_ExpectedSamples(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_ExpectedSamples", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::Voice::Audio::BaseAudioClipStream::get_TotalSamples()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_TotalSamples", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t Meta::Voice::Audio::BaseAudioClipStream::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Meta::Voice::Audio::AudioClipStreamSampleDelegate* Meta::Voice::Audio::BaseAudioClipStream::get_OnAddSamples()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_OnAddSamples", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::AudioClipStreamSampleDelegate*>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::set_OnAddSamples(::Meta::Voice::Audio::AudioClipStreamSampleDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_OnAddSamples", {}, {::i2c::type_of<::Meta::Voice::Audio::AudioClipStreamSampleDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::Audio::AudioClipStreamDelegate* Meta::Voice::Audio::BaseAudioClipStream::get_OnStreamReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_OnStreamReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::AudioClipStreamDelegate*>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::set_OnStreamReady(::Meta::Voice::Audio::AudioClipStreamDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_OnStreamReady", {}, {::i2c::type_of<::Meta::Voice::Audio::AudioClipStreamDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::set_OnStreamUpdated(::Meta::Voice::Audio::AudioClipStreamDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_OnStreamUpdated", {}, {::i2c::type_of<::Meta::Voice::Audio::AudioClipStreamDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::Audio::AudioClipStreamDelegate* Meta::Voice::Audio::BaseAudioClipStream::get_OnStreamComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_OnStreamComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::AudioClipStreamDelegate*>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::set_OnStreamComplete(::Meta::Voice::Audio::AudioClipStreamDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_OnStreamComplete", {}, {::i2c::type_of<::Meta::Voice::Audio::AudioClipStreamDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::Audio::AudioClipStreamDelegate* Meta::Voice::Audio::BaseAudioClipStream::get_OnStreamUnloaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"get_OnStreamUnloaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::AudioClipStreamDelegate*>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::set_OnStreamUnloaded(::Meta::Voice::Audio::AudioClipStreamDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"set_OnStreamUnloaded", {}, {::i2c::type_of<::Meta::Voice::Audio::AudioClipStreamDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::_ctor(int32_t  newChannels, int32_t  newSampleRate, float_t  newStreamReadyLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newChannels, newSampleRate, newStreamReadyLength);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::AddSamples(::ArrayW<float_t>  samples, int32_t  offset, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples, offset, length);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::SetExpectedSamples(int32_t  expectedSamples)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expectedSamples);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::UpdateState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::Voice::Audio::BaseAudioClipStream::IsEnoughBuffered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::HandleStreamReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"HandleStreamReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::RaiseStreamReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::HandleStreamComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"HandleStreamComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::RaiseStreamComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioClipStream::Unload()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Meta::Voice::Audio::BaseAudioClipStream::GetSampleLength(int32_t  totalSamples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"GetSampleLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, totalSamples);
}
inline float_t Meta::Voice::Audio::BaseAudioClipStream::GetLength(int32_t  totalSamples, int32_t  channels, int32_t  samplesPerSecond)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioClipStream*>(),
                        {"GetLength", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, totalSamples, channels, samplesPerSecond);
}
inline ::Meta::Voice::Audio::BaseAudioClipStream* Meta::Voice::Audio::BaseAudioClipStream::New_ctor(int32_t  newChannels, int32_t  newSampleRate, float_t  newStreamReadyLength)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::BaseAudioClipStream*>(newChannels, newSampleRate, newStreamReadyLength));
}
/// @brief Convert operator to "::Meta::Voice::Audio::IAudioClipStream"
constexpr  Meta::Voice::Audio::BaseAudioClipStream::operator ::Meta::Voice::Audio::IAudioClipStream*() noexcept {
return static_cast<::Meta::Voice::Audio::IAudioClipStream*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Audio::IAudioClipStream"
constexpr ::Meta::Voice::Audio::IAudioClipStream* Meta::Voice::Audio::BaseAudioClipStream::i___Meta__Voice__Audio__IAudioClipStream() noexcept {
return static_cast<::Meta::Voice::Audio::IAudioClipStream*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::BaseAudioClipStream::BaseAudioClipStream()   {
}

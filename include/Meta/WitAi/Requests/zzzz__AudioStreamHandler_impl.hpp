#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/AudioStreamHandler.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerScript_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__AudioStreamHandler_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioSampleDecodeDelegate_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__IAudioDecoder_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/WitAi/Requests/zzzz__IVRequestDownloadDecoder_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestProgressDelegate_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestResponseDelegate_def.hpp"
#include "Meta/WitAi/zzzz__ArrayPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e855fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.get_IsStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::get_IsStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e85604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_IsStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.set_IsStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)(bool)>(&::Meta::WitAi::Requests::AudioStreamHandler::set_IsStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8560c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"set_IsStarted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.add_OnFirstResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)(::Meta::WitAi::Requests::VRequestResponseDelegate*)>(&::Meta::WitAi::Requests::AudioStreamHandler::add_OnFirstResponse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e85614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"add_OnFirstResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.remove_OnFirstResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)(::Meta::WitAi::Requests::VRequestResponseDelegate*)>(&::Meta::WitAi::Requests::AudioStreamHandler::remove_OnFirstResponse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e856b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"remove_OnFirstResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.add_OnResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)(::Meta::WitAi::Requests::VRequestResponseDelegate*)>(&::Meta::WitAi::Requests::AudioStreamHandler::add_OnResponse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e8574c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"add_OnResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.remove_OnResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)(::Meta::WitAi::Requests::VRequestResponseDelegate*)>(&::Meta::WitAi::Requests::AudioStreamHandler::remove_OnResponse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e857e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"remove_OnResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.get_Progress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::get_Progress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e85884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_Progress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.set_Progress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)(float_t)>(&::Meta::WitAi::Requests::AudioStreamHandler::set_Progress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8588c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"set_Progress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.add_OnProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)(::Meta::WitAi::Requests::VRequestProgressDelegate*)>(&::Meta::WitAi::Requests::AudioStreamHandler::add_OnProgress)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e85894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"add_OnProgress", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.remove_OnProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)(::Meta::WitAi::Requests::VRequestProgressDelegate*)>(&::Meta::WitAi::Requests::AudioStreamHandler::remove_OnProgress)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e85930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"remove_OnProgress", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.get_IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::get_IsComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e859cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_IsComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.set_IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)(bool)>(&::Meta::WitAi::Requests::AudioStreamHandler::set_IsComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e859d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"set_IsComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.get_Completion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskCompletionSource_1<bool>* (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::get_Completion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e859dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_Completion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.get_IsError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::get_IsError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e859e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_IsError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.set_IsError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)(bool)>(&::Meta::WitAi::Requests::AudioStreamHandler::set_IsError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e859ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"set_IsError", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.get_AudioDecoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::Decoding::IAudioDecoder* (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::get_AudioDecoder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e859f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_AudioDecoder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.get_WillDecodeInBackground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::get_WillDecodeInBackground)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9e859fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_WillDecodeInBackground", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.get_OnSamplesDecoded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate* (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::get_OnSamplesDecoded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e85a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_OnSamplesDecoded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.get__decodeComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::get__decodeComplete)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e85aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get__decodeComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Meta::WitAi::Requests::AudioStreamHandler::*)(uint64_t, uint64_t)>(&::Meta::WitAi::Requests::AudioStreamHandler::Max)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e85ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"Max", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)(::Meta::Voice::Audio::Decoding::IAudioDecoder*, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*)>(&::Meta::WitAi::Requests::AudioStreamHandler::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x9e85acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::Finalize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e85cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.ReceiveContentLengthHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)(uint64_t)>(&::Meta::WitAi::Requests::AudioStreamHandler::ReceiveContentLengthHeader)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9e85f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.ReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::AudioStreamHandler::*)(::ArrayW<uint8_t>, int32_t)>(&::Meta::WitAi::Requests::AudioStreamHandler::ReceiveData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9e85f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.EnqueueAndDecodeChunkAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::WitAi::Requests::AudioStreamHandler::EnqueueAndDecodeChunkAsync)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x9e86080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"EnqueueAndDecodeChunkAsync", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.DecodeAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::DecodeAsync)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x9e865c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"DecodeAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.DecodeChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::WitAi::Requests::AudioStreamHandler::DecodeChunk)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x9e86340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"DecodeChunk", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.GetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::GetText)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e86998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.RefreshProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::RefreshProgress)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e86924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"RefreshProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.GetProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::GetProgress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e869ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.CompleteContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::CompleteContent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e86a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.TryToFinalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::TryToFinalize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9e86588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"TryToFinalize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e86a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::AudioStreamHandler.UnloadBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::AudioStreamHandler::*)()>(&::Meta::WitAi::Requests::AudioStreamHandler::UnloadBuffers)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9e85d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"UnloadBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__IsStarted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStarted_k__BackingField;
}
constexpr bool const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__IsStarted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStarted_k__BackingField;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__IsStarted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsStarted_k__BackingField = value;
}
constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate*& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get_OnFirstResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFirstResponse;
}
constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate* const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get_OnFirstResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFirstResponse;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFirstResponse = value;
}
constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate*& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get_OnResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnResponse;
}
constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate* const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get_OnResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnResponse;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set_OnResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnResponse = value;
}
constexpr float_t& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__Progress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Progress_k__BackingField;
}
constexpr float_t const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__Progress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Progress_k__BackingField;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__Progress_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Progress_k__BackingField = value;
}
constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate*& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get_OnProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnProgress;
}
constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate* const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get_OnProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnProgress;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set_OnProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnProgress = value;
}
constexpr bool& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__IsComplete_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsComplete_k__BackingField;
}
constexpr bool const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__IsComplete_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsComplete_k__BackingField;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__IsComplete_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsComplete_k__BackingField = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__Completion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Completion_k__BackingField;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__Completion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Completion_k__BackingField;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__Completion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Completion_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__IsError_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsError_k__BackingField;
}
constexpr bool const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__IsError_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsError_k__BackingField;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__IsError_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsError_k__BackingField = value;
}
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder*& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__AudioDecoder_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioDecoder_k__BackingField;
}
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__AudioDecoder_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioDecoder_k__BackingField;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__AudioDecoder_k__BackingField(::Meta::Voice::Audio::Decoding::IAudioDecoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioDecoder_k__BackingField = value;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__OnSamplesDecoded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnSamplesDecoded_k__BackingField;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate* const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__OnSamplesDecoded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnSamplesDecoded_k__BackingField;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__OnSamplesDecoded_k__BackingField(::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnSamplesDecoded_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>*& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__buffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffers;
}
constexpr ::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>* const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__buffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffers;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__buffers(::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffers = value;
}
constexpr ::ArrayW<uint8_t>& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__inBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inBuffer;
}
constexpr ::ArrayW<uint8_t> const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__inBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inBuffer;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__inBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inBuffer = value;
}
constexpr int32_t& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__inBufferOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inBufferOffset;
}
constexpr int32_t const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__inBufferOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inBufferOffset;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__inBufferOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inBufferOffset = value;
}
constexpr ::ArrayW<uint8_t>& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__decodeBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decodeBuffer;
}
constexpr ::ArrayW<uint8_t> const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__decodeBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decodeBuffer;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__decodeBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decodeBuffer = value;
}
constexpr int32_t& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__decodeBufferOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decodeBufferOffset;
}
constexpr int32_t const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__decodeBufferOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decodeBufferOffset;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__decodeBufferOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decodeBufferOffset = value;
}
constexpr uint64_t& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__expectedBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____expectedBytes;
}
constexpr uint64_t const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__expectedBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____expectedBytes;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__expectedBytes(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____expectedBytes = value;
}
constexpr uint64_t& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__receivedBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedBytes;
}
constexpr uint64_t const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__receivedBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedBytes;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__receivedBytes(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receivedBytes = value;
}
constexpr uint64_t& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__decodedBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decodedBytes;
}
constexpr uint64_t const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__decodedBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decodedBytes;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__decodedBytes(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decodedBytes = value;
}
constexpr bool& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__requestComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestComplete;
}
constexpr bool const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__requestComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestComplete;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__requestComplete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestComplete = value;
}
constexpr ::System::Threading::Tasks::Task*& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__decoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr ::System::Threading::Tasks::Task* const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__decoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__decoder(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decoder = value;
}
constexpr bool& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__unloaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unloaded;
}
constexpr bool const& Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_get__unloaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unloaded;
}
constexpr void Meta::WitAi::Requests::AudioStreamHandler::__cordl_internal_set__unloaded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unloaded = value;
}
inline void Meta::WitAi::Requests::AudioStreamHandler::setStaticF__bufferPool(::Meta::WitAi::ArrayPool_1<uint8_t>*  value)  {
::cordl_internals::setStaticField<::Meta::WitAi::ArrayPool_1<uint8_t>*, "_bufferPool", ::Meta::WitAi::Requests::AudioStreamHandler*>(std::forward<::Meta::WitAi::ArrayPool_1<uint8_t>*>(value));
}
inline ::Meta::WitAi::ArrayPool_1<uint8_t>* Meta::WitAi::Requests::AudioStreamHandler::getStaticF__bufferPool()  {
return ::cordl_internals::getStaticField<::Meta::WitAi::ArrayPool_1<uint8_t>*, "_bufferPool", ::Meta::WitAi::Requests::AudioStreamHandler*>();
}
inline ::Meta::Voice::Logging::IVLogger* Meta::WitAi::Requests::AudioStreamHandler::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline bool Meta::WitAi::Requests::AudioStreamHandler::get_IsStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_IsStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::set_IsStarted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"set_IsStarted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::add_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"add_OnFirstResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::remove_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"remove_OnFirstResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::add_OnResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"add_OnResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::remove_OnResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"remove_OnResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Meta::WitAi::Requests::AudioStreamHandler::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_Progress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::set_Progress(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"set_Progress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::add_OnProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"add_OnProgress", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::remove_OnProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"remove_OnProgress", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Requests::AudioStreamHandler::get_IsComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_IsComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::set_IsComplete(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"set_IsComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* Meta::WitAi::Requests::AudioStreamHandler::get_Completion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_Completion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(this, ___internal_method);
}
inline bool Meta::WitAi::Requests::AudioStreamHandler::get_IsError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_IsError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::set_IsError(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"set_IsError", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::Audio::Decoding::IAudioDecoder* Meta::WitAi::Requests::AudioStreamHandler::get_AudioDecoder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_AudioDecoder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(this, ___internal_method);
}
inline bool Meta::WitAi::Requests::AudioStreamHandler::get_WillDecodeInBackground()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_WillDecodeInBackground", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate* Meta::WitAi::Requests::AudioStreamHandler::get_OnSamplesDecoded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get_OnSamplesDecoded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>(this, ___internal_method);
}
inline bool Meta::WitAi::Requests::AudioStreamHandler::get__decodeComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"get__decodeComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint64_t Meta::WitAi::Requests::AudioStreamHandler::Max(uint64_t  var1, uint64_t  var2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"Max", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, var1, var2);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::_ctor(::Meta::Voice::Audio::Decoding::IAudioDecoder*  audioDecoder, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioDecoder, onSamplesDecoded);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::ReceiveContentLengthHeader(uint64_t  contentLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentLength);
}
inline bool Meta::WitAi::Requests::AudioStreamHandler::ReceiveData(::ArrayW<uint8_t>  bufferData, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bufferData, length);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::EnqueueAndDecodeChunkAsync(::ArrayW<uint8_t>  chunk, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"EnqueueAndDecodeChunkAsync", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk, offset, length);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::DecodeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"DecodeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::DecodeChunk(::ArrayW<uint8_t>  chunk, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"DecodeChunk", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk, offset, length);
}
inline ::StringW Meta::WitAi::Requests::AudioStreamHandler::GetText()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::RefreshProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"RefreshProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Meta::WitAi::Requests::AudioStreamHandler::GetProgress()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::CompleteContent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::TryToFinalize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"TryToFinalize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::AudioStreamHandler::UnloadBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::AudioStreamHandler*>(),
                        {"UnloadBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::AudioStreamHandler* Meta::WitAi::Requests::AudioStreamHandler::New_ctor(::Meta::Voice::Audio::Decoding::IAudioDecoder*  audioDecoder, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::AudioStreamHandler*>(audioDecoder, onSamplesDecoded));
}
/// @brief Convert operator to "::Meta::WitAi::Requests::IVRequestDownloadDecoder"
constexpr  Meta::WitAi::Requests::AudioStreamHandler::operator ::Meta::WitAi::Requests::IVRequestDownloadDecoder*() noexcept {
return static_cast<::Meta::WitAi::Requests::IVRequestDownloadDecoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Requests::IVRequestDownloadDecoder"
constexpr ::Meta::WitAi::Requests::IVRequestDownloadDecoder* Meta::WitAi::Requests::AudioStreamHandler::i___Meta__WitAi__Requests__IVRequestDownloadDecoder() noexcept {
return static_cast<::Meta::WitAi::Requests::IVRequestDownloadDecoder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::AudioStreamHandler::AudioStreamHandler()   {
}

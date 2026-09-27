#pragma once
// IWYU pragma private; include "Liv/Lck/Echo/LckNativeEchoApi.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Echo/zzzz__LckNativeEchoApi_def.hpp"
#include "Liv/Lck/Echo/zzzz__LckNativeEchoApi_def.hpp"
#include "Liv/Lck/Recorder/zzzz__MuxerConfig_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi.CreateEchoMemoryBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Liv::Lck::Echo::LckNativeEchoApi::CreateEchoMemoryBuffer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d4ae3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"CreateEchoMemoryBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi.CreateEchoDiskBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::Liv::Lck::Echo::LckNativeEchoApi::CreateEchoDiskBuffer)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9d4aea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"CreateEchoDiskBuffer", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi.DestroyEchoBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Liv::Lck::Echo::LckNativeEchoApi::DestroyEchoBuffer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d4af34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"DestroyEchoBuffer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi.SetEchoBufferEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::Liv::Lck::Echo::LckNativeEchoApi::SetEchoBufferEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d4afb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"SetEchoBufferEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi.IsEchoBufferEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::Liv::Lck::Echo::LckNativeEchoApi::IsEchoBufferEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d4b034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"IsEchoBufferEnabled", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi.SetEchoMuxerConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Liv::Lck::Recorder::MuxerConfig>)>(&::Liv::Lck::Echo::LckNativeEchoApi::SetEchoMuxerConfig)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d4b0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"SetEchoMuxerConfig", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Liv::Lck::Recorder::MuxerConfig>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi.TriggerEchoSave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::StringW)>(&::Liv::Lck::Echo::LckNativeEchoApi::TriggerEchoSave)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9d4b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"TriggerEchoSave", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi.GetEchoCallbackFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Liv::Lck::Echo::LckNativeEchoApi::GetEchoCallbackFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d4b234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"GetEchoCallbackFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi.SetEchoCompletionCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*)>(&::Liv::Lck::Echo::LckNativeEchoApi::SetEchoCompletionCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9d4b298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"SetEchoCompletionCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi.GetEchoBufferDurationUs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::Liv::Lck::Echo::LckNativeEchoApi::GetEchoBufferDurationUs)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d4b324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"GetEchoBufferDurationUs", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi.GetEchoBufferDataSizeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::Liv::Lck::Echo::LckNativeEchoApi::GetEchoBufferDataSizeBytes)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d4b3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"GetEchoBufferDataSizeBytes", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi.ClearEchoBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Liv::Lck::Echo::LckNativeEchoApi::ClearEchoBuffer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d4b41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"ClearEchoBuffer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi.GetEchoBufferMaxDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::Liv::Lck::Echo::LckNativeEchoApi::GetEchoBufferMaxDuration)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d4b498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"GetEchoBufferMaxDuration", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Liv::Lck::Echo::LckNativeEchoApi::CreateEchoMemoryBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"CreateEchoMemoryBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr Liv::Lck::Echo::LckNativeEchoApi::CreateEchoDiskBuffer(::StringW  storageDir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"CreateEchoDiskBuffer", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, storageDir);
}
inline void Liv::Lck::Echo::LckNativeEchoApi::DestroyEchoBuffer(::System::IntPtr  echoBufferContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"DestroyEchoBuffer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, echoBufferContext);
}
inline void Liv::Lck::Echo::LckNativeEchoApi::SetEchoBufferEnabled(::System::IntPtr  echoBufferContext, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"SetEchoBufferEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, echoBufferContext, enabled);
}
inline bool Liv::Lck::Echo::LckNativeEchoApi::IsEchoBufferEnabled(::System::IntPtr  echoBufferContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"IsEchoBufferEnabled", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, echoBufferContext);
}
inline void Liv::Lck::Echo::LckNativeEchoApi::SetEchoMuxerConfig(::System::IntPtr  echoBufferContext, ::by_ref<::Liv::Lck::Recorder::MuxerConfig>  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"SetEchoMuxerConfig", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Liv::Lck::Recorder::MuxerConfig>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, echoBufferContext, config);
}
inline bool Liv::Lck::Echo::LckNativeEchoApi::TriggerEchoSave(::System::IntPtr  echoBufferContext, ::StringW  outputPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"TriggerEchoSave", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, echoBufferContext, outputPath);
}
inline ::System::IntPtr Liv::Lck::Echo::LckNativeEchoApi::GetEchoCallbackFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"GetEchoCallbackFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void Liv::Lck::Echo::LckNativeEchoApi::SetEchoCompletionCallback(::System::IntPtr  echoBufferContext, ::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"SetEchoCompletionCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, echoBufferContext, callback);
}
inline uint64_t Liv::Lck::Echo::LckNativeEchoApi::GetEchoBufferDurationUs(::System::IntPtr  echoBufferContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"GetEchoBufferDurationUs", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, echoBufferContext);
}
inline uint64_t Liv::Lck::Echo::LckNativeEchoApi::GetEchoBufferDataSizeBytes(::System::IntPtr  echoBufferContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"GetEchoBufferDataSizeBytes", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, echoBufferContext);
}
inline void Liv::Lck::Echo::LckNativeEchoApi::ClearEchoBuffer(::System::IntPtr  echoBufferContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"ClearEchoBuffer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, echoBufferContext);
}
inline uint64_t Liv::Lck::Echo::LckNativeEchoApi::GetEchoBufferMaxDuration(::System::IntPtr  echoBufferContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi*>(),
                        {"GetEchoBufferMaxDuration", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, echoBufferContext);
}
// Ctor Parameters []
constexpr ::Liv::Lck::Echo::LckNativeEchoApi::LckNativeEchoApi()   {
}
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback::*)(::System::Object*, ::System::IntPtr)>(&::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d4b514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback::*)(uint32_t, ::StringW)>(&::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d4b5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*>(),
                    {::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback::*)(uint32_t, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d4b5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*>(),
                    {::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback::*)(::System::IAsyncResult*)>(&::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d4b638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*>(),
                    {::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback::Invoke(uint32_t  status, ::StringW  outputPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, outputPath);
}
inline ::System::IAsyncResult* Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback::BeginInvoke(uint32_t  status, ::StringW  outputPath, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, status, outputPath, callback, object);
}
inline void Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback* Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback::LckNativeEchoApi_EchoCompletionCallback()   {
}

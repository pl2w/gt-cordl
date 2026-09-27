#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UnityWebRequest.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Networking/zzzz__CertificateHandler_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "UnityEngine/Networking/zzzz__IMultipartFormSection_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_Result_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_UnityWebRequestError_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_UnityWebRequestMethod_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/Networking/zzzz__UploadHandler_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetWebErrorString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::UnityWebRequest_UnityWebRequestError)>(&::UnityEngine::Networking::UnityWebRequest::GetWebErrorString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb928cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetWebErrorString", {}, {::i2c::type_of<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetHTTPStatusString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t)>(&::UnityEngine::Networking::UnityWebRequest::GetHTTPStatusString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb928e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetHTTPStatusString", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_disposeCertificateHandlerOnDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_disposeCertificateHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb928f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_disposeCertificateHandlerOnDispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_disposeCertificateHandlerOnDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(bool)>(&::UnityEngine::Networking::UnityWebRequest::set_disposeCertificateHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb928f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_disposeCertificateHandlerOnDispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_disposeDownloadHandlerOnDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_disposeDownloadHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb928f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_disposeDownloadHandlerOnDispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_disposeDownloadHandlerOnDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(bool)>(&::UnityEngine::Networking::UnityWebRequest::set_disposeDownloadHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb928f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_disposeDownloadHandlerOnDispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_disposeUploadHandlerOnDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_disposeUploadHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb928f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_disposeUploadHandlerOnDispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_disposeUploadHandlerOnDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(bool)>(&::UnityEngine::Networking::UnityWebRequest::set_disposeUploadHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb928f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_disposeUploadHandlerOnDispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Networking::UnityWebRequest::Create)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb928f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::Release)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb928f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::InternalDestroy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb928ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"InternalDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalSetDefaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::InternalSetDefaults)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb929070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"InternalSetDefaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb929084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb9290d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW, ::StringW)>(&::UnityEngine::Networking::UnityWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb9291c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW, ::StringW, ::UnityEngine::Networking::DownloadHandler*, ::UnityEngine::Networking::UploadHandler*)>(&::UnityEngine::Networking::UnityWebRequest::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb9293c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>(), ::i2c::type_of<::UnityEngine::Networking::UploadHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::System::Uri*, ::StringW, ::UnityEngine::Networking::DownloadHandler*, ::UnityEngine::Networking::UploadHandler*)>(&::UnityEngine::Networking::UnityWebRequest::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb9295f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>(), ::i2c::type_of<::UnityEngine::Networking::UploadHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::Finalize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb929780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                    {::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb929878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.DisposeHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::DisposeHandlers)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb92980c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"DisposeHandlers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.BeginWebRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequestAsyncOperation* (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::BeginWebRequest)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb9298f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"BeginWebRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SendWebRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequestAsyncOperation* (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::SendWebRequest)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb929998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SendWebRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::Abort)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb929020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Abort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod)>(&::UnityEngine::Networking::UnityWebRequest::SetMethod)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb929a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetMethod", {}, {::i2c::type_of<::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalSetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod)>(&::UnityEngine::Networking::UnityWebRequest::InternalSetMethod)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb929aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"InternalSetMethod", {}, {::i2c::type_of<::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetCustomMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::SetCustomMethod)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb929bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetCustomMethod", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalSetCustomMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::InternalSetCustomMethod)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb929d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"InternalSetCustomMethod", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::GetMethod)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb929e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetCustomMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::GetCustomMethod)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb929edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetCustomMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_method)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb92a020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_method", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::set_method)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb929238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_method", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::GetError)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb92a0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_error)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb92a174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_url)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb92a2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_url", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::set_url)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb929138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_url", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_uri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_uri)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb92a494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_uri", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_uri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::System::Uri*)>(&::UnityEngine::Networking::UnityWebRequest::set_uri)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb929690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_uri", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::GetUrl)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb92a2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::SetUrl)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb92a544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalSetUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::InternalSetUrl)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb92a3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"InternalSetUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_responseCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_responseCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb92a284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_responseCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_isModifiable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_isModifiable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb929b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_isModifiable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_isDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_isDone)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb92a79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_isDone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_isNetworkError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_isNetworkError)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb92a7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_isNetworkError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_isHttpError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_isHttpError)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb92a7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_isHttpError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_Result (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_result)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb92a234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_downloadedBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_downloadedBytes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb92a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_downloadedBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetRedirectLimitFromScripting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(int32_t)>(&::UnityEngine::Networking::UnityWebRequest::SetRedirectLimitFromScripting)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb92a8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetRedirectLimitFromScripting", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_redirectLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(int32_t)>(&::UnityEngine::Networking::UnityWebRequest::set_redirectLimit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb92a948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_redirectLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalSetRequestHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(::StringW, ::StringW)>(&::UnityEngine::Networking::UnityWebRequest::InternalSetRequestHeader)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xb92a94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"InternalSetRequestHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetRequestHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW, ::StringW)>(&::UnityEngine::Networking::UnityWebRequest::SetRequestHeader)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb92ac0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetRequestHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetResponseHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::GetResponseHeader)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb92ad3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetResponseHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetResponseHeaderKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::GetResponseHeaderKeys)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb92af8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetResponseHeaderKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetResponseHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::GetResponseHeaders)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb92b018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetResponseHeaders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetUploadHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(::UnityEngine::Networking::UploadHandler*)>(&::UnityEngine::Networking::UnityWebRequest::SetUploadHandler)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb92b198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetUploadHandler", {}, {::i2c::type_of<::UnityEngine::Networking::UploadHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_uploadHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UploadHandler* (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_uploadHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9298e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_uploadHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_uploadHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::UnityEngine::Networking::UploadHandler*)>(&::UnityEngine::Networking::UnityWebRequest::set_uploadHandler)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb929528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_uploadHandler", {}, {::i2c::type_of<::UnityEngine::Networking::UploadHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetDownloadHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(::UnityEngine::Networking::DownloadHandler*)>(&::UnityEngine::Networking::UnityWebRequest::SetDownloadHandler)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb92b23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetDownloadHandler", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_downloadHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::DownloadHandler* (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_downloadHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9298e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_downloadHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_downloadHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::UnityEngine::Networking::DownloadHandler*)>(&::UnityEngine::Networking::UnityWebRequest::set_downloadHandler)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb929460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_downloadHandler", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetCertificateHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(::UnityEngine::Networking::CertificateHandler*)>(&::UnityEngine::Networking::UnityWebRequest::SetCertificateHandler)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb92b2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetCertificateHandler", {}, {::i2c::type_of<::UnityEngine::Networking::CertificateHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_certificateHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::CertificateHandler* (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_certificateHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9298f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_certificateHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_certificateHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::UnityEngine::Networking::CertificateHandler*)>(&::UnityEngine::Networking::UnityWebRequest::set_certificateHandler)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb92b384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_certificateHandler", {}, {::i2c::type_of<::UnityEngine::Networking::CertificateHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetTimeoutMsec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(int32_t)>(&::UnityEngine::Networking::UnityWebRequest::SetTimeoutMsec)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb92b44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetTimeoutMsec", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_timeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(int32_t)>(&::UnityEngine::Networking::UnityWebRequest::set_timeout)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb92b4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_timeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::Get)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb92b5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Get", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Put
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::StringW, ::ArrayW<uint8_t>)>(&::UnityEngine::Networking::UnityWebRequest::Put)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb92b698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Put", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Post
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::StringW, ::StringW, ::StringW)>(&::UnityEngine::Networking::UnityWebRequest::Post)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb92b7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Post", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetupPost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Networking::UnityWebRequest*, ::StringW, ::StringW)>(&::UnityEngine::Networking::UnityWebRequest::SetupPost)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb92b894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetupPost", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Post
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*, ::ArrayW<uint8_t>)>(&::UnityEngine::Networking::UnityWebRequest::Post)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb92b9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Post", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetupPost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Networking::UnityWebRequest*, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*, ::ArrayW<uint8_t>)>(&::UnityEngine::Networking::UnityWebRequest::SetupPost)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb92ba5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetupPost", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.EscapeURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::EscapeURL)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb92c368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"EscapeURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.EscapeURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Text::Encoding*)>(&::UnityEngine::Networking::UnityWebRequest::EscapeURL)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb92c388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"EscapeURL", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.UnEscapeURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::UnEscapeURL)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb92c460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"UnEscapeURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.UnEscapeURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Text::Encoding*)>(&::UnityEngine::Networking::UnityWebRequest::UnEscapeURL)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb92c480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"UnEscapeURL", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SerializeFormSections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*, ::ArrayW<uint8_t>)>(&::UnityEngine::Networking::UnityWebRequest::SerializeFormSections)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0xb92bba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SerializeFormSections", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GenerateBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::UnityEngine::Networking::UnityWebRequest::GenerateBoundary)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb92c55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GenerateBoundary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetWebErrorString_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::UnityWebRequest_UnityWebRequestError, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Networking::UnityWebRequest::GetWebErrorString_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb928dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetWebErrorString_Injected", {}, {::i2c::type_of<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetHTTPStatusString_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Networking::UnityWebRequest::GetHTTPStatusString_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb928ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetHTTPStatusString_Injected", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Release_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::Release_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb928fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Release_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.BeginWebRequest_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::BeginWebRequest_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb92995c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"BeginWebRequest_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Abort_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::Abort_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb9299d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Abort_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetMethod_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr, ::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod)>(&::UnityEngine::Networking::UnityWebRequest::SetMethod_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb929a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetMethod_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetCustomMethod_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Networking::UnityWebRequest::SetCustomMethod_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb929d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetCustomMethod_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetMethod_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::GetMethod_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb929ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetMethod_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetCustomMethod_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Networking::UnityWebRequest::GetCustomMethod_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb929fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetCustomMethod_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetError_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::GetError_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb92a138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetError_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetUrl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Networking::UnityWebRequest::GetUrl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb92a500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetUrl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetUrl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Networking::UnityWebRequest::SetUrl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb92a6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetUrl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_responseCode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::get_responseCode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb92a724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_responseCode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_isModifiable_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::get_isModifiable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb92a760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_isModifiable_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_result_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_Result (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::get_result_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb92a7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_result_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_downloadedBytes_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::get_downloadedBytes_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb92a870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_downloadedBytes_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetRedirectLimitFromScripting_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Networking::UnityWebRequest::SetRedirectLimitFromScripting_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb92a904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetRedirectLimitFromScripting_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalSetRequestHeader_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Networking::UnityWebRequest::InternalSetRequestHeader_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb92abb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"InternalSetRequestHeader_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetResponseHeader_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Networking::UnityWebRequest::GetResponseHeader_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb92af38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetResponseHeader_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetResponseHeaderKeys_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::GetResponseHeaderKeys_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb92afdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetResponseHeaderKeys_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetUploadHandler_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::SetUploadHandler_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb92b1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetUploadHandler_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetDownloadHandler_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::SetDownloadHandler_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb92b29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetDownloadHandler_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetCertificateHandler_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::SetCertificateHandler_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb92b340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetCertificateHandler_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetTimeoutMsec_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Networking::UnityWebRequest::SetTimeoutMsec_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb92b4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetTimeoutMsec_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_Ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_Ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set_m_Ptr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Ptr = value;
}
constexpr ::UnityEngine::Networking::DownloadHandler*& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_DownloadHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DownloadHandler;
}
constexpr ::UnityEngine::Networking::DownloadHandler* const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_DownloadHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DownloadHandler;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set_m_DownloadHandler(::UnityEngine::Networking::DownloadHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DownloadHandler = value;
}
constexpr ::UnityEngine::Networking::UploadHandler*& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_UploadHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UploadHandler;
}
constexpr ::UnityEngine::Networking::UploadHandler* const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_UploadHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UploadHandler;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set_m_UploadHandler(::UnityEngine::Networking::UploadHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UploadHandler = value;
}
constexpr ::UnityEngine::Networking::CertificateHandler*& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_CertificateHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CertificateHandler;
}
constexpr ::UnityEngine::Networking::CertificateHandler* const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_CertificateHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CertificateHandler;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set_m_CertificateHandler(::UnityEngine::Networking::CertificateHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CertificateHandler = value;
}
constexpr ::System::Uri*& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_Uri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Uri;
}
constexpr ::System::Uri* const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_Uri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Uri;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set_m_Uri(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Uri = value;
}
constexpr bool& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeCertificateHandlerOnDispose_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposeCertificateHandlerOnDispose_k__BackingField;
}
constexpr bool const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeCertificateHandlerOnDispose_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposeCertificateHandlerOnDispose_k__BackingField;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set__disposeCertificateHandlerOnDispose_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposeCertificateHandlerOnDispose_k__BackingField = value;
}
constexpr bool& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeDownloadHandlerOnDispose_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposeDownloadHandlerOnDispose_k__BackingField;
}
constexpr bool const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeDownloadHandlerOnDispose_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposeDownloadHandlerOnDispose_k__BackingField;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set__disposeDownloadHandlerOnDispose_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposeDownloadHandlerOnDispose_k__BackingField = value;
}
constexpr bool& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeUploadHandlerOnDispose_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposeUploadHandlerOnDispose_k__BackingField;
}
constexpr bool const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeUploadHandlerOnDispose_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposeUploadHandlerOnDispose_k__BackingField;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set__disposeUploadHandlerOnDispose_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposeUploadHandlerOnDispose_k__BackingField = value;
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::GetWebErrorString(::GlobalNamespace::UnityWebRequest_UnityWebRequestError  err)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetWebErrorString", {}, {::i2c::type_of<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, err);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::GetHTTPStatusString(int64_t  responseCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetHTTPStatusString", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, responseCode);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_disposeCertificateHandlerOnDispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_disposeCertificateHandlerOnDispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_disposeCertificateHandlerOnDispose(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_disposeCertificateHandlerOnDispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_disposeDownloadHandlerOnDispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_disposeDownloadHandlerOnDispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_disposeDownloadHandlerOnDispose(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_disposeDownloadHandlerOnDispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_disposeUploadHandlerOnDispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_disposeUploadHandlerOnDispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_disposeUploadHandlerOnDispose(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_disposeUploadHandlerOnDispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::Networking::UnityWebRequest::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::InternalDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"InternalDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::InternalSetDefaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"InternalSetDefaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::_ctor(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url);
}
inline void UnityEngine::Networking::UnityWebRequest::_ctor(::StringW  url, ::StringW  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, method);
}
inline void UnityEngine::Networking::UnityWebRequest::_ctor(::StringW  url, ::StringW  method, ::UnityEngine::Networking::DownloadHandler*  downloadHandler, ::UnityEngine::Networking::UploadHandler*  uploadHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>(), ::i2c::type_of<::UnityEngine::Networking::UploadHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, method, downloadHandler, uploadHandler);
}
inline void UnityEngine::Networking::UnityWebRequest::_ctor(::System::Uri*  uri, ::StringW  method, ::UnityEngine::Networking::DownloadHandler*  downloadHandler, ::UnityEngine::Networking::UploadHandler*  uploadHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>(), ::i2c::type_of<::UnityEngine::Networking::UploadHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, method, downloadHandler, uploadHandler);
}
inline void UnityEngine::Networking::UnityWebRequest::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::DisposeHandlers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"DisposeHandlers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* UnityEngine::Networking::UnityWebRequest::BeginWebRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"BeginWebRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(this, ___internal_method);
}
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* UnityEngine::Networking::UnityWebRequest::SendWebRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SendWebRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::Abort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Abort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetMethod(::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod  methodType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetMethod", {}, {::i2c::type_of<::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(this, ___internal_method, methodType);
}
inline void UnityEngine::Networking::UnityWebRequest::InternalSetMethod(::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod  methodType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"InternalSetMethod", {}, {::i2c::type_of<::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodType);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetCustomMethod(::StringW  customMethodName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetCustomMethod", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(this, ___internal_method, customMethodName);
}
inline void UnityEngine::Networking::UnityWebRequest::InternalSetCustomMethod(::StringW  customMethodName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"InternalSetCustomMethod", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customMethodName);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod UnityEngine::Networking::UnityWebRequest::GetMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::GetCustomMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetCustomMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::get_method()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_method", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_method(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_method", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::GetError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::get_error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::get_url()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_url", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_url(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_url", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Uri* UnityEngine::Networking::UnityWebRequest::get_uri()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_uri", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_uri(::System::Uri*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_uri", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::GetUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetUrl(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(this, ___internal_method, url);
}
inline void UnityEngine::Networking::UnityWebRequest::InternalSetUrl(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"InternalSetUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url);
}
inline int64_t UnityEngine::Networking::UnityWebRequest::get_responseCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_responseCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_isModifiable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_isModifiable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_isDone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_isDone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_isNetworkError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_isNetworkError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_isHttpError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_isHttpError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityWebRequest_Result UnityEngine::Networking::UnityWebRequest::get_result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_Result>(this, ___internal_method);
}
inline uint64_t UnityEngine::Networking::UnityWebRequest::get_downloadedBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_downloadedBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::SetRedirectLimitFromScripting(int32_t  limit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetRedirectLimitFromScripting", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, limit);
}
inline void UnityEngine::Networking::UnityWebRequest::set_redirectLimit(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_redirectLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::InternalSetRequestHeader(::StringW  name, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"InternalSetRequestHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(this, ___internal_method, name, value);
}
inline void UnityEngine::Networking::UnityWebRequest::SetRequestHeader(::StringW  name, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetRequestHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::GetResponseHeader(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetResponseHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::ArrayW<::StringW> UnityEngine::Networking::UnityWebRequest::GetResponseHeaderKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetResponseHeaderKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* UnityEngine::Networking::UnityWebRequest::GetResponseHeaders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetResponseHeaders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetUploadHandler(::UnityEngine::Networking::UploadHandler*  uh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetUploadHandler", {}, {::i2c::type_of<::UnityEngine::Networking::UploadHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(this, ___internal_method, uh);
}
inline ::UnityEngine::Networking::UploadHandler* UnityEngine::Networking::UnityWebRequest::get_uploadHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_uploadHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UploadHandler*>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_uploadHandler(::UnityEngine::Networking::UploadHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_uploadHandler", {}, {::i2c::type_of<::UnityEngine::Networking::UploadHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetDownloadHandler(::UnityEngine::Networking::DownloadHandler*  dh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetDownloadHandler", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(this, ___internal_method, dh);
}
inline ::UnityEngine::Networking::DownloadHandler* UnityEngine::Networking::UnityWebRequest::get_downloadHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_downloadHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::DownloadHandler*>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_downloadHandler(::UnityEngine::Networking::DownloadHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_downloadHandler", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetCertificateHandler(::UnityEngine::Networking::CertificateHandler*  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetCertificateHandler", {}, {::i2c::type_of<::UnityEngine::Networking::CertificateHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(this, ___internal_method, ch);
}
inline ::UnityEngine::Networking::CertificateHandler* UnityEngine::Networking::UnityWebRequest::get_certificateHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_certificateHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::CertificateHandler*>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_certificateHandler(::UnityEngine::Networking::CertificateHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_certificateHandler", {}, {::i2c::type_of<::UnityEngine::Networking::CertificateHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetTimeoutMsec(int32_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetTimeoutMsec", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(this, ___internal_method, timeout);
}
inline void UnityEngine::Networking::UnityWebRequest::set_timeout(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"set_timeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::Get(::StringW  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Get", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(nullptr, ___internal_method, uri);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::Put(::StringW  uri, ::ArrayW<uint8_t>  bodyData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Put", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(nullptr, ___internal_method, uri, bodyData);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::Post(::StringW  uri, ::StringW  postData, ::StringW  contentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Post", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(nullptr, ___internal_method, uri, postData, contentType);
}
inline void UnityEngine::Networking::UnityWebRequest::SetupPost(::UnityEngine::Networking::UnityWebRequest*  request, ::StringW  postData, ::StringW  contentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetupPost", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, postData, contentType);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::Post(::StringW  uri, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  multipartFormSections, ::ArrayW<uint8_t>  boundary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Post", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(nullptr, ___internal_method, uri, multipartFormSections, boundary);
}
inline void UnityEngine::Networking::UnityWebRequest::SetupPost(::UnityEngine::Networking::UnityWebRequest*  request, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  multipartFormSections, ::ArrayW<uint8_t>  boundary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetupPost", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, multipartFormSections, boundary);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::EscapeURL(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"EscapeURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::EscapeURL(::StringW  s, ::System::Text::Encoding*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"EscapeURL", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, e);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::UnEscapeURL(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"UnEscapeURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::UnEscapeURL(::StringW  s, ::System::Text::Encoding*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"UnEscapeURL", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, e);
}
inline ::ArrayW<uint8_t> UnityEngine::Networking::UnityWebRequest::SerializeFormSections(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  multipartFormSections, ::ArrayW<uint8_t>  boundary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SerializeFormSections", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, multipartFormSections, boundary);
}
inline ::ArrayW<uint8_t> UnityEngine::Networking::UnityWebRequest::GenerateBoundary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GenerateBoundary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::GetWebErrorString_Injected(::GlobalNamespace::UnityWebRequest_UnityWebRequestError  err, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetWebErrorString_Injected", {}, {::i2c::type_of<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, err, ret);
}
inline void UnityEngine::Networking::UnityWebRequest::GetHTTPStatusString_Injected(int64_t  responseCode, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetHTTPStatusString_Injected", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, responseCode, ret);
}
inline void UnityEngine::Networking::UnityWebRequest::Release_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Release_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Networking::UnityWebRequest::BeginWebRequest_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"BeginWebRequest_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Networking::UnityWebRequest::Abort_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"Abort_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetMethod_Injected(::System::IntPtr  _unity_self, ::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod  methodType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetMethod_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self, methodType);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetCustomMethod_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  customMethodName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetCustomMethod_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self, customMethodName);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod UnityEngine::Networking::UnityWebRequest::GetMethod_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetMethod_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Networking::UnityWebRequest::GetCustomMethod_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetCustomMethod_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::GetError_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetError_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Networking::UnityWebRequest::GetUrl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetUrl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetUrl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetUrl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self, url);
}
inline int64_t UnityEngine::Networking::UnityWebRequest::get_responseCode_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_responseCode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_isModifiable_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_isModifiable_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::GlobalNamespace::UnityWebRequest_Result UnityEngine::Networking::UnityWebRequest::get_result_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_result_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_Result>(nullptr, ___internal_method, _unity_self);
}
inline uint64_t UnityEngine::Networking::UnityWebRequest::get_downloadedBytes_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"get_downloadedBytes_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Networking::UnityWebRequest::SetRedirectLimitFromScripting_Injected(::System::IntPtr  _unity_self, int32_t  limit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetRedirectLimitFromScripting_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, limit);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::InternalSetRequestHeader_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"InternalSetRequestHeader_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self, name, value);
}
inline void UnityEngine::Networking::UnityWebRequest::GetResponseHeader_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetResponseHeader_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, ret);
}
inline ::ArrayW<::StringW> UnityEngine::Networking::UnityWebRequest::GetResponseHeaderKeys_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"GetResponseHeaderKeys_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, _unity_self);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetUploadHandler_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  uh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetUploadHandler_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self, uh);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetDownloadHandler_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  dh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetDownloadHandler_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self, dh);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetCertificateHandler_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetCertificateHandler_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self, ch);
}
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetTimeoutMsec_Injected(::System::IntPtr  _unity_self, int32_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                        {"SetTimeoutMsec_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self, timeout);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::UnityWebRequest*>());
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::New_ctor(::StringW  url)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::UnityWebRequest*>(url));
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::New_ctor(::StringW  url, ::StringW  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::UnityWebRequest*>(url, method));
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::New_ctor(::StringW  url, ::StringW  method, ::UnityEngine::Networking::DownloadHandler*  downloadHandler, ::UnityEngine::Networking::UploadHandler*  uploadHandler)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::UnityWebRequest*>(url, method, downloadHandler, uploadHandler));
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::New_ctor(::System::Uri*  uri, ::StringW  method, ::UnityEngine::Networking::DownloadHandler*  downloadHandler, ::UnityEngine::Networking::UploadHandler*  uploadHandler)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::UnityWebRequest*>(uri, method, downloadHandler, uploadHandler));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Networking::UnityWebRequest::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Networking::UnityWebRequest::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UnityWebRequest::UnityWebRequest()   {
}
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest_BindingsMarshaller.ConvertToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::UnityWebRequest*)>(&::UnityEngine::Networking::UnityWebRequest_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb92c604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Networking::UnityWebRequest_BindingsMarshaller::ConvertToNative(::UnityEngine::Networking::UnityWebRequest*  unityWebRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, unityWebRequest);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UnityWebRequest_BindingsMarshaller::UnityWebRequest_BindingsMarshaller()   {
}

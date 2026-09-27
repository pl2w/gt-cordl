#pragma once
// IWYU pragma private; include "PlayFab/Internal/PlayFabWebRequest.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "PlayFab/Internal/zzzz__PlayFabWebRequest_def.hpp"
#include "PlayFab/Internal/zzzz__CallRequestContainer_def.hpp"
#include "PlayFab/Internal/zzzz__PlayFabWebRequest_def.hpp"
#include "PlayFab/zzzz__IPlayFabPlugin_def.hpp"
#include "PlayFab/zzzz__ITransportPlugin_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.SkipCertificateValidation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayFab::Internal::PlayFabWebRequest::SkipCertificateValidation)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa848bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"SkipCertificateValidation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.set_CustomCertValidationHook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Security::RemoteCertificateValidationCallback*)>(&::PlayFab::Internal::PlayFabWebRequest::set_CustomCertValidationHook)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa848c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"set_CustomCertValidationHook", {}, {::i2c::type_of<::System::Net::Security::RemoteCertificateValidationCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::Internal::PlayFabWebRequest::*)()>(&::PlayFab::Internal::PlayFabWebRequest::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa848d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest::*)()>(&::PlayFab::Internal::PlayFabWebRequest::Initialize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa848d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest::*)()>(&::PlayFab::Internal::PlayFabWebRequest::OnDestroy)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xa848f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.SetupCertificates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest::*)()>(&::PlayFab::Internal::PlayFabWebRequest::SetupCertificates)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa848de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"SetupCertificates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.AcceptAllCertifications
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(&::PlayFab::Internal::PlayFabWebRequest::AcceptAllCertifications)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa849224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"AcceptAllCertifications", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.SimpleGetCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest::*)(::StringW, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::StringW>*)>(&::PlayFab::Internal::PlayFabWebRequest::SimpleGetCall)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa84922c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"SimpleGetCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.SimplePutCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest::*)(::StringW, ::ArrayW<uint8_t>, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::StringW>*)>(&::PlayFab::Internal::PlayFabWebRequest::SimplePutCall)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa849370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"SimplePutCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.SimplePostCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest::*)(::StringW, ::ArrayW<uint8_t>, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::StringW>*)>(&::PlayFab::Internal::PlayFabWebRequest::SimplePostCall)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa8494c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"SimplePostCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.SimpleHttpsWorker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest::*)(::StringW, ::StringW, ::ArrayW<uint8_t>, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::StringW>*)>(&::PlayFab::Internal::PlayFabWebRequest::SimpleHttpsWorker)> {
  constexpr static std::size_t size = 0x7ec;
  constexpr static std::size_t addrs = 0xa849620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"SimpleHttpsWorker", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.MakeApiCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest::*)(::System::Object*)>(&::PlayFab::Internal::PlayFabWebRequest::MakeApiCall)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa849e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"MakeApiCall", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.ActivateThreadWorker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayFab::Internal::PlayFabWebRequest::ActivateThreadWorker)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa849fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"ActivateThreadWorker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.WorkerThreadMainLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayFab::Internal::PlayFabWebRequest::WorkerThreadMainLoop)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0xa84a194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"WorkerThreadMainLoop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.Post
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::Internal::CallRequestContainer*)>(&::PlayFab::Internal::PlayFabWebRequest::Post)> {
  constexpr static std::size_t size = 0x838;
  constexpr static std::size_t addrs = 0xa84a974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"Post", {}, {::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.ProcessHttpResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::Internal::CallRequestContainer*)>(&::PlayFab::Internal::PlayFabWebRequest::ProcessHttpResponse)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xa84b1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"ProcessHttpResponse", {}, {::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.QueueRequestError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::Internal::CallRequestContainer*)>(&::PlayFab::Internal::PlayFabWebRequest::QueueRequestError)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xa84c1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"QueueRequestError", {}, {::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.ProcessJsonResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::Internal::CallRequestContainer*)>(&::PlayFab::Internal::PlayFabWebRequest::ProcessJsonResponse)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0xa84b478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"ProcessJsonResponse", {}, {::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest::*)()>(&::PlayFab::Internal::PlayFabWebRequest::Update)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xa84c42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.ResponseToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Net::WebResponse*)>(&::PlayFab::Internal::PlayFabWebRequest::ResponseToString)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0xa84bb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"ResponseToString", {}, {::i2c::type_of<::System::Net::WebResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest.GetPendingMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::PlayFab::Internal::PlayFabWebRequest::*)()>(&::PlayFab::Internal::PlayFabWebRequest::GetPendingMessages)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xa84c670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"GetPendingMessages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest::*)()>(&::PlayFab::Internal::PlayFabWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84c890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& PlayFab::Internal::PlayFabWebRequest::__cordl_internal_get__isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized;
}
constexpr bool const& PlayFab::Internal::PlayFabWebRequest::__cordl_internal_get__isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized;
}
constexpr void PlayFab::Internal::PlayFabWebRequest::__cordl_internal_set__isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInitialized = value;
}
inline void PlayFab::Internal::PlayFabWebRequest::setStaticF_ResultQueueTransferThread(::System::Collections::Generic::Queue_1<::System::Action*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::System::Action*>*, "ResultQueueTransferThread", ::PlayFab::Internal::PlayFabWebRequest*>(std::forward<::System::Collections::Generic::Queue_1<::System::Action*>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::System::Action*>* PlayFab::Internal::PlayFabWebRequest::getStaticF_ResultQueueTransferThread()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::System::Action*>*, "ResultQueueTransferThread", ::PlayFab::Internal::PlayFabWebRequest*>();
}
inline void PlayFab::Internal::PlayFabWebRequest::setStaticF_ResultQueueMainThread(::System::Collections::Generic::Queue_1<::System::Action*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::System::Action*>*, "ResultQueueMainThread", ::PlayFab::Internal::PlayFabWebRequest*>(std::forward<::System::Collections::Generic::Queue_1<::System::Action*>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::System::Action*>* PlayFab::Internal::PlayFabWebRequest::getStaticF_ResultQueueMainThread()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::System::Action*>*, "ResultQueueMainThread", ::PlayFab::Internal::PlayFabWebRequest*>();
}
inline void PlayFab::Internal::PlayFabWebRequest::setStaticF_ActiveRequests(::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>*, "ActiveRequests", ::PlayFab::Internal::PlayFabWebRequest*>(std::forward<::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>*>(value));
}
inline ::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>* PlayFab::Internal::PlayFabWebRequest::getStaticF_ActiveRequests()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>*, "ActiveRequests", ::PlayFab::Internal::PlayFabWebRequest*>();
}
inline void PlayFab::Internal::PlayFabWebRequest::setStaticF_certValidationSet(bool  value)  {
::cordl_internals::setStaticField<bool, "certValidationSet", ::PlayFab::Internal::PlayFabWebRequest*>(std::forward<bool>(value));
}
inline bool PlayFab::Internal::PlayFabWebRequest::getStaticF_certValidationSet()  {
return ::cordl_internals::getStaticField<bool, "certValidationSet", ::PlayFab::Internal::PlayFabWebRequest*>();
}
inline void PlayFab::Internal::PlayFabWebRequest::setStaticF__requestQueueThread(::System::Threading::Thread*  value)  {
::cordl_internals::setStaticField<::System::Threading::Thread*, "_requestQueueThread", ::PlayFab::Internal::PlayFabWebRequest*>(std::forward<::System::Threading::Thread*>(value));
}
inline ::System::Threading::Thread* PlayFab::Internal::PlayFabWebRequest::getStaticF__requestQueueThread()  {
return ::cordl_internals::getStaticField<::System::Threading::Thread*, "_requestQueueThread", ::PlayFab::Internal::PlayFabWebRequest*>();
}
inline void PlayFab::Internal::PlayFabWebRequest::setStaticF__ThreadLock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "_ThreadLock", ::PlayFab::Internal::PlayFabWebRequest*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* PlayFab::Internal::PlayFabWebRequest::getStaticF__ThreadLock()  {
return ::cordl_internals::getStaticField<::System::Object*, "_ThreadLock", ::PlayFab::Internal::PlayFabWebRequest*>();
}
inline void PlayFab::Internal::PlayFabWebRequest::setStaticF_ThreadKillTimeout(::System::TimeSpan  value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "ThreadKillTimeout", ::PlayFab::Internal::PlayFabWebRequest*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan PlayFab::Internal::PlayFabWebRequest::getStaticF_ThreadKillTimeout()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "ThreadKillTimeout", ::PlayFab::Internal::PlayFabWebRequest*>();
}
inline void PlayFab::Internal::PlayFabWebRequest::setStaticF__threadKillTime(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "_threadKillTime", ::PlayFab::Internal::PlayFabWebRequest*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime PlayFab::Internal::PlayFabWebRequest::getStaticF__threadKillTime()  {
return ::cordl_internals::getStaticField<::System::DateTime, "_threadKillTime", ::PlayFab::Internal::PlayFabWebRequest*>();
}
inline void PlayFab::Internal::PlayFabWebRequest::setStaticF__isApplicationPlaying(bool  value)  {
::cordl_internals::setStaticField<bool, "_isApplicationPlaying", ::PlayFab::Internal::PlayFabWebRequest*>(std::forward<bool>(value));
}
inline bool PlayFab::Internal::PlayFabWebRequest::getStaticF__isApplicationPlaying()  {
return ::cordl_internals::getStaticField<bool, "_isApplicationPlaying", ::PlayFab::Internal::PlayFabWebRequest*>();
}
inline void PlayFab::Internal::PlayFabWebRequest::setStaticF__activeCallCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_activeCallCount", ::PlayFab::Internal::PlayFabWebRequest*>(std::forward<int32_t>(value));
}
inline int32_t PlayFab::Internal::PlayFabWebRequest::getStaticF__activeCallCount()  {
return ::cordl_internals::getStaticField<int32_t, "_activeCallCount", ::PlayFab::Internal::PlayFabWebRequest*>();
}
inline void PlayFab::Internal::PlayFabWebRequest::setStaticF__unityVersion(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_unityVersion", ::PlayFab::Internal::PlayFabWebRequest*>(std::forward<::StringW>(value));
}
inline ::StringW PlayFab::Internal::PlayFabWebRequest::getStaticF__unityVersion()  {
return ::cordl_internals::getStaticField<::StringW, "_unityVersion", ::PlayFab::Internal::PlayFabWebRequest*>();
}
inline void PlayFab::Internal::PlayFabWebRequest::SkipCertificateValidation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"SkipCertificateValidation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayFab::Internal::PlayFabWebRequest::set_CustomCertValidationHook(::System::Net::Security::RemoteCertificateValidationCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"set_CustomCertValidationHook", {}, {::i2c::type_of<::System::Net::Security::RemoteCertificateValidationCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool PlayFab::Internal::PlayFabWebRequest::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabWebRequest::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabWebRequest::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabWebRequest::SetupCertificates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"SetupCertificates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool PlayFab::Internal::PlayFabWebRequest::AcceptAllCertifications(::System::Object*  sender, ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::System::Security::Cryptography::X509Certificates::X509Chain*  chain, ::System::Net::Security::SslPolicyErrors  sslPolicyErrors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"AcceptAllCertifications", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sender, certificate, chain, sslPolicyErrors);
}
inline void PlayFab::Internal::PlayFabWebRequest::SimpleGetCall(::StringW  fullUrl, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"SimpleGetCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullUrl, successCallback, errorCallback);
}
inline void PlayFab::Internal::PlayFabWebRequest::SimplePutCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"SimplePutCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullUrl, payload, successCallback, errorCallback);
}
inline void PlayFab::Internal::PlayFabWebRequest::SimplePostCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"SimplePostCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullUrl, payload, successCallback, errorCallback);
}
inline void PlayFab::Internal::PlayFabWebRequest::SimpleHttpsWorker(::StringW  httpMethod, ::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"SimpleHttpsWorker", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, httpMethod, fullUrl, payload, successCallback, errorCallback);
}
inline void PlayFab::Internal::PlayFabWebRequest::MakeApiCall(::System::Object*  reqContainerObj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"MakeApiCall", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reqContainerObj);
}
inline void PlayFab::Internal::PlayFabWebRequest::ActivateThreadWorker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"ActivateThreadWorker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayFab::Internal::PlayFabWebRequest::WorkerThreadMainLoop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"WorkerThreadMainLoop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayFab::Internal::PlayFabWebRequest::Post(::PlayFab::Internal::CallRequestContainer*  reqContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"Post", {}, {::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reqContainer);
}
inline void PlayFab::Internal::PlayFabWebRequest::ProcessHttpResponse(::PlayFab::Internal::CallRequestContainer*  reqContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"ProcessHttpResponse", {}, {::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reqContainer);
}
inline void PlayFab::Internal::PlayFabWebRequest::QueueRequestError(::PlayFab::Internal::CallRequestContainer*  reqContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"QueueRequestError", {}, {::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reqContainer);
}
inline void PlayFab::Internal::PlayFabWebRequest::ProcessJsonResponse(::PlayFab::Internal::CallRequestContainer*  reqContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"ProcessJsonResponse", {}, {::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reqContainer);
}
inline void PlayFab::Internal::PlayFabWebRequest::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW PlayFab::Internal::PlayFabWebRequest::ResponseToString(::System::Net::WebResponse*  webResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"ResponseToString", {}, {::i2c::type_of<::System::Net::WebResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, webResponse);
}
inline int32_t PlayFab::Internal::PlayFabWebRequest::GetPendingMessages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {"GetPendingMessages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabWebRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Internal::PlayFabWebRequest* PlayFab::Internal::PlayFabWebRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::PlayFabWebRequest*>());
}
/// @brief Convert operator to "::PlayFab::ITransportPlugin"
constexpr  PlayFab::Internal::PlayFabWebRequest::operator ::PlayFab::ITransportPlugin*() noexcept {
return static_cast<::PlayFab::ITransportPlugin*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::ITransportPlugin"
constexpr ::PlayFab::ITransportPlugin* PlayFab::Internal::PlayFabWebRequest::i___PlayFab__ITransportPlugin() noexcept {
return static_cast<::PlayFab::ITransportPlugin*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::PlayFab::IPlayFabPlugin"
constexpr  PlayFab::Internal::PlayFabWebRequest::operator ::PlayFab::IPlayFabPlugin*() noexcept {
return static_cast<::PlayFab::IPlayFabPlugin*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::IPlayFabPlugin"
constexpr ::PlayFab::IPlayFabPlugin* PlayFab::Internal::PlayFabWebRequest::i___PlayFab__IPlayFabPlugin() noexcept {
return static_cast<::PlayFab::IPlayFabPlugin*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::PlayFabWebRequest::PlayFabWebRequest()   {
}
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0::*)()>(&::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84c424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0._ProcessJsonResponse_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0::*)()>(&::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0::_ProcessJsonResponse_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa84cc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0*>(),
                        {"<ProcessJsonResponse>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0._ProcessJsonResponse_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0::*)()>(&::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0::_ProcessJsonResponse_b__1)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa84cc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0*>(),
                        {"<ProcessJsonResponse>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::Internal::CallRequestContainer*& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0::__cordl_internal_get_reqContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reqContainer;
}
constexpr ::PlayFab::Internal::CallRequestContainer* const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0::__cordl_internal_get_reqContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reqContainer;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0::__cordl_internal_set_reqContainer(::PlayFab::Internal::CallRequestContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reqContainer = value;
}
inline void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0::_ProcessJsonResponse_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0*>(),
                        {"<ProcessJsonResponse>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0::_ProcessJsonResponse_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0*>(),
                        {"<ProcessJsonResponse>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0* PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0::PlayFabWebRequest___c__DisplayClass31_0()   {
}
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0::*)()>(&::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84c41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0._QueueRequestError_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0::*)()>(&::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0::_QueueRequestError_b__0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa84cba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0*>(),
                        {"<QueueRequestError>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::Internal::CallRequestContainer*& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0::__cordl_internal_get_reqContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reqContainer;
}
constexpr ::PlayFab::Internal::CallRequestContainer* const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0::__cordl_internal_get_reqContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reqContainer;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0::__cordl_internal_set_reqContainer(::PlayFab::Internal::CallRequestContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reqContainer = value;
}
inline void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0::_QueueRequestError_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0*>(),
                        {"<QueueRequestError>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0* PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0::PlayFabWebRequest___c__DisplayClass30_0()   {
}
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::*)()>(&::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa849618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0._SimplePostCall_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::*)()>(&::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::_SimplePostCall_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa84cb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0*>(),
                        {"<SimplePostCall>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::Internal::PlayFabWebRequest*& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::PlayFab::Internal::PlayFabWebRequest* const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::__cordl_internal_set___4__this(::PlayFab::Internal::PlayFabWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::__cordl_internal_get_fullUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullUrl;
}
constexpr ::StringW const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::__cordl_internal_get_fullUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullUrl;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::__cordl_internal_set_fullUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullUrl = value;
}
constexpr ::ArrayW<uint8_t>& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::__cordl_internal_get_payload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payload;
}
constexpr ::ArrayW<uint8_t> const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::__cordl_internal_get_payload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payload;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::__cordl_internal_set_payload(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___payload = value;
}
constexpr ::System::Action_1<::ArrayW<uint8_t>>*& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::__cordl_internal_get_successCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr ::System::Action_1<::ArrayW<uint8_t>>* const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::__cordl_internal_get_successCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::__cordl_internal_set_successCallback(::System::Action_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successCallback = value;
}
constexpr ::System::Action_1<::StringW>*& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::__cordl_internal_get_errorCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr ::System::Action_1<::StringW>* const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::__cordl_internal_get_errorCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::__cordl_internal_set_errorCallback(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCallback = value;
}
inline void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::_SimplePostCall_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0*>(),
                        {"<SimplePostCall>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0* PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0::PlayFabWebRequest___c__DisplayClass23_0()   {
}
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::*)()>(&::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8494c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0._SimplePutCall_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::*)()>(&::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::_SimplePutCall_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa84caf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0*>(),
                        {"<SimplePutCall>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::Internal::PlayFabWebRequest*& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::PlayFab::Internal::PlayFabWebRequest* const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::__cordl_internal_set___4__this(::PlayFab::Internal::PlayFabWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::__cordl_internal_get_fullUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullUrl;
}
constexpr ::StringW const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::__cordl_internal_get_fullUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullUrl;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::__cordl_internal_set_fullUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullUrl = value;
}
constexpr ::ArrayW<uint8_t>& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::__cordl_internal_get_payload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payload;
}
constexpr ::ArrayW<uint8_t> const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::__cordl_internal_get_payload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payload;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::__cordl_internal_set_payload(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___payload = value;
}
constexpr ::System::Action_1<::ArrayW<uint8_t>>*& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::__cordl_internal_get_successCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr ::System::Action_1<::ArrayW<uint8_t>>* const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::__cordl_internal_get_successCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::__cordl_internal_set_successCallback(::System::Action_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successCallback = value;
}
constexpr ::System::Action_1<::StringW>*& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::__cordl_internal_get_errorCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr ::System::Action_1<::StringW>* const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::__cordl_internal_get_errorCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::__cordl_internal_set_errorCallback(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCallback = value;
}
inline void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::_SimplePutCall_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0*>(),
                        {"<SimplePutCall>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0* PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0::PlayFabWebRequest___c__DisplayClass22_0()   {
}
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::*)()>(&::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa849368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0._SimpleGetCall_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::*)()>(&::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::_SimpleGetCall_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa84ca94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0*>(),
                        {"<SimpleGetCall>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::Internal::PlayFabWebRequest*& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::PlayFab::Internal::PlayFabWebRequest* const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::__cordl_internal_set___4__this(::PlayFab::Internal::PlayFabWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::__cordl_internal_get_fullUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullUrl;
}
constexpr ::StringW const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::__cordl_internal_get_fullUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullUrl;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::__cordl_internal_set_fullUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullUrl = value;
}
constexpr ::System::Action_1<::ArrayW<uint8_t>>*& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::__cordl_internal_get_successCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr ::System::Action_1<::ArrayW<uint8_t>>* const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::__cordl_internal_get_successCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::__cordl_internal_set_successCallback(::System::Action_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successCallback = value;
}
constexpr ::System::Action_1<::StringW>*& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::__cordl_internal_get_errorCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr ::System::Action_1<::StringW>* const& PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::__cordl_internal_get_errorCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::__cordl_internal_set_errorCallback(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCallback = value;
}
inline void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::_SimpleGetCall_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0*>(),
                        {"<SimpleGetCall>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0* PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0::PlayFabWebRequest___c__DisplayClass21_0()   {
}

#pragma once
// IWYU pragma private; include "System/Net/WebRequest.hpp"
#include "System/Net/Security/zzzz__AuthenticationLevel_impl.hpp"
#include "System/Net/zzzz__WebRequest_impl.hpp"
#include "System/Security/Principal/zzzz__TokenImpersonationLevel_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheBinding_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheProtocol_def.hpp"
#include "System/Net/Security/zzzz__AuthenticationLevel_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__IAutoWebProxy_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__IWebRequestCreate_def.hpp"
#include "System/Net/zzzz__ProxyChain_def.hpp"
#include "System/Net/zzzz__TimerThread_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__WebProxy_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Principal/zzzz__TokenImpersonationLevel_def.hpp"
#include "System/Security/Principal/zzzz__WindowsIdentity_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::WebRequest.get_CreatorInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebRequestCreate* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_CreatorInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xac6a314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.RegisterPortableWebRequestCreator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::IWebRequestCreate*)>(&::System::Net::WebRequest::RegisterPortableWebRequestCreator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac6a36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"RegisterPortableWebRequestCreator", {}, {::i2c::type_of<::System::Net::IWebRequestCreate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_InternalSyncObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)()>(&::System::Net::WebRequest::get_InternalSyncObject)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xac6a370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_InternalSyncObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_DefaultTimerQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::TimerThread_Queue* (*)()>(&::System::Net::WebRequest::get_DefaultTimerQueue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xac6a43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_DefaultTimerQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebRequest* (*)(::System::Uri*, bool)>(&::System::Net::WebRequest::Create)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xac6a494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"Create", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebRequest* (*)(::StringW)>(&::System::Net::WebRequest::Create)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xac6a8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebRequest* (*)(::System::Uri*)>(&::System::Net::WebRequest::Create)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xac6a99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"Create", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.CreateDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebRequest* (*)(::System::Uri*)>(&::System::Net::WebRequest::CreateDefault)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xac6aa74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"CreateDefault", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.CreateHttp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpWebRequest* (*)(::StringW)>(&::System::Net::WebRequest::CreateHttp)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xac6ab4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"CreateHttp", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.CreateHttp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpWebRequest* (*)(::System::Uri*)>(&::System::Net::WebRequest::CreateHttp)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xac6ac18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"CreateHttp", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.RegisterPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Net::IWebRequestCreate*)>(&::System::Net::WebRequest::RegisterPrefix)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0xac6ae10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"RegisterPrefix", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::IWebRequestCreate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_PrefixList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (*)()>(&::System::Net::WebRequest::get_PrefixList)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xac6a72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_PrefixList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_PrefixList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::ArrayList*)>(&::System::Net::WebRequest::set_PrefixList)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xac6b280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"set_PrefixList", {}, {::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.PopulatePrefixList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (*)()>(&::System::Net::WebRequest::PopulatePrefixList)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xac6b2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"PopulatePrefixList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xac6b50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6b530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebRequest::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac6b538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebRequest::GetObjectData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac6b544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_DefaultCachePolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Cache::RequestCachePolicy* (*)()>(&::System::Net::WebRequest::get_DefaultCachePolicy)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xac6b548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_DefaultCachePolicy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_DefaultCachePolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Cache::RequestCachePolicy*)>(&::System::Net::WebRequest::set_DefaultCachePolicy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xac6b5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"set_DefaultCachePolicy", {}, {::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_CachePolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Cache::RequestCachePolicy* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_CachePolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6b690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_CachePolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(::System::Net::Cache::RequestCachePolicy*)>(&::System::Net::WebRequest::set_CachePolicy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac6b698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.InternalSetCachePolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(::System::Net::Cache::RequestCachePolicy*)>(&::System::Net::WebRequest::InternalSetCachePolicy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xac6b69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"InternalSetCachePolicy", {}, {::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_Method)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(::StringW)>(&::System::Net::WebRequest::set_Method)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_RequestUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_RequestUri)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_ConnectionGroupName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_ConnectionGroupName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_ConnectionGroupName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(::StringW)>(&::System::Net::WebRequest::set_ConnectionGroupName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_Headers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_Headers)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_Headers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(::System::Net::WebHeaderCollection*)>(&::System::Net::WebRequest::set_Headers)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_ContentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_ContentLength)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_ContentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(int64_t)>(&::System::Net::WebRequest::set_ContentLength)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_ContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_ContentType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_ContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(::StringW)>(&::System::Net::WebRequest::set_ContentType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICredentials* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_Credentials)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(::System::Net::ICredentials*)>(&::System::Net::WebRequest::set_Credentials)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_UseDefaultCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_UseDefaultCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(bool)>(&::System::Net::WebRequest::set_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_Proxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebProxy* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_Proxy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_Proxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(::System::Net::IWebProxy*)>(&::System::Net::WebRequest::set_Proxy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6b9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_PreAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_PreAuthenticate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6ba14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_PreAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(bool)>(&::System::Net::WebRequest::set_PreAuthenticate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6ba3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_Timeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_Timeout)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6ba64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_Timeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(int32_t)>(&::System::Net::WebRequest::set_Timeout)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6ba8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.GetRequestStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::GetRequestStream)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6bab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.GetResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebResponse* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::GetResponse)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6badc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.BeginGetResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::WebRequest::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::Net::WebRequest::BeginGetResponse)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6bb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.EndGetResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebResponse* (::System::Net::WebRequest::*)(::System::IAsyncResult*)>(&::System::Net::WebRequest::EndGetResponse)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6bb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.BeginGetRequestStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::WebRequest::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::Net::WebRequest::BeginGetRequestStream)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6bb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.EndGetRequestStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::WebRequest::*)(::System::IAsyncResult*)>(&::System::Net::WebRequest::EndGetRequestStream)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6bb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.GetRequestStreamAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::GetRequestStreamAsync)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xac6bba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.GetResponseAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::GetResponseAsync)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xac6be98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.SafeCaptureIdenity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Principal::WindowsIdentity* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::SafeCaptureIdenity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xac6be48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"SafeCaptureIdenity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::Abort)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6c13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequest*>(),
                    {::i2c::class_of<::System::Net::WebRequest*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_CacheProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Cache::RequestCacheProtocol* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_CacheProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6c164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_CacheProtocol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_CacheProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(::System::Net::Cache::RequestCacheProtocol*)>(&::System::Net::WebRequest::set_CacheProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6c16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"set_CacheProtocol", {}, {::i2c::type_of<::System::Net::Cache::RequestCacheProtocol*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_AuthenticationLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::AuthenticationLevel (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_AuthenticationLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6c174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_AuthenticationLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_AuthenticationLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(::System::Net::Security::AuthenticationLevel)>(&::System::Net::WebRequest::set_AuthenticationLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6c17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"set_AuthenticationLevel", {}, {::i2c::type_of<::System::Net::Security::AuthenticationLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_ImpersonationLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Principal::TokenImpersonationLevel (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_ImpersonationLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6c184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_ImpersonationLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_ImpersonationLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(::System::Security::Principal::TokenImpersonationLevel)>(&::System::Net::WebRequest::set_ImpersonationLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6c18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"set_ImpersonationLevel", {}, {::i2c::type_of<::System::Security::Principal::TokenImpersonationLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_InternalDefaultWebProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebProxy* (*)()>(&::System::Net::WebRequest::get_InternalDefaultWebProxy)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xac6c194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_InternalDefaultWebProxy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_InternalDefaultWebProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::IWebProxy*)>(&::System::Net::WebRequest::set_InternalDefaultWebProxy)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xac6c368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"set_InternalDefaultWebProxy", {}, {::i2c::type_of<::System::Net::IWebProxy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_DefaultWebProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebProxy* (*)()>(&::System::Net::WebRequest::get_DefaultWebProxy)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xac6c4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_DefaultWebProxy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_DefaultWebProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::IWebProxy*)>(&::System::Net::WebRequest::set_DefaultWebProxy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xac6c548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"set_DefaultWebProxy", {}, {::i2c::type_of<::System::Net::IWebProxy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.GetSystemWebProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebProxy* (*)()>(&::System::Net::WebRequest::GetSystemWebProxy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xac6c59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"GetSystemWebProxy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.InternalGetSystemWebProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebProxy* (*)()>(&::System::Net::WebRequest::InternalGetSystemWebProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6c5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"InternalGetSystemWebProxy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.SetupCacheProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest::*)(::System::Uri*)>(&::System::Net::WebRequest::SetupCacheProtocol)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xac6c5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"SetupCacheProtocol", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest._GetRequestStreamAsync_b__78_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::_GetRequestStreamAsync_b__78_0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xac6c9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"<GetRequestStreamAsync>b__78_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest._GetResponseAsync_b__79_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::_GetResponseAsync_b__79_0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xac6cac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"<GetResponseAsync>b__79_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Security::AuthenticationLevel& System::Net::WebRequest::__cordl_internal_get_m_AuthenticationLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AuthenticationLevel;
}
constexpr ::System::Net::Security::AuthenticationLevel const& System::Net::WebRequest::__cordl_internal_get_m_AuthenticationLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AuthenticationLevel;
}
constexpr void System::Net::WebRequest::__cordl_internal_set_m_AuthenticationLevel(::System::Net::Security::AuthenticationLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AuthenticationLevel = value;
}
constexpr ::System::Security::Principal::TokenImpersonationLevel& System::Net::WebRequest::__cordl_internal_get_m_ImpersonationLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ImpersonationLevel;
}
constexpr ::System::Security::Principal::TokenImpersonationLevel const& System::Net::WebRequest::__cordl_internal_get_m_ImpersonationLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ImpersonationLevel;
}
constexpr void System::Net::WebRequest::__cordl_internal_set_m_ImpersonationLevel(::System::Security::Principal::TokenImpersonationLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ImpersonationLevel = value;
}
constexpr ::System::Net::Cache::RequestCachePolicy*& System::Net::WebRequest::__cordl_internal_get_m_CachePolicy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachePolicy;
}
constexpr ::System::Net::Cache::RequestCachePolicy* const& System::Net::WebRequest::__cordl_internal_get_m_CachePolicy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachePolicy;
}
constexpr void System::Net::WebRequest::__cordl_internal_set_m_CachePolicy(::System::Net::Cache::RequestCachePolicy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachePolicy = value;
}
constexpr ::System::Net::Cache::RequestCacheProtocol*& System::Net::WebRequest::__cordl_internal_get_m_CacheProtocol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CacheProtocol;
}
constexpr ::System::Net::Cache::RequestCacheProtocol* const& System::Net::WebRequest::__cordl_internal_get_m_CacheProtocol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CacheProtocol;
}
constexpr void System::Net::WebRequest::__cordl_internal_set_m_CacheProtocol(::System::Net::Cache::RequestCacheProtocol*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CacheProtocol = value;
}
constexpr ::System::Net::Cache::RequestCacheBinding*& System::Net::WebRequest::__cordl_internal_get_m_CacheBinding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CacheBinding;
}
constexpr ::System::Net::Cache::RequestCacheBinding* const& System::Net::WebRequest::__cordl_internal_get_m_CacheBinding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CacheBinding;
}
constexpr void System::Net::WebRequest::__cordl_internal_set_m_CacheBinding(::System::Net::Cache::RequestCacheBinding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CacheBinding = value;
}
inline void System::Net::WebRequest::setStaticF_s_PrefixList(::System::Collections::ArrayList*  value)  {
::cordl_internals::setStaticField<::System::Collections::ArrayList*, "s_PrefixList", ::System::Net::WebRequest*>(std::forward<::System::Collections::ArrayList*>(value));
}
inline ::System::Collections::ArrayList* System::Net::WebRequest::getStaticF_s_PrefixList()  {
return ::cordl_internals::getStaticField<::System::Collections::ArrayList*, "s_PrefixList", ::System::Net::WebRequest*>();
}
inline void System::Net::WebRequest::setStaticF_s_InternalSyncObject(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "s_InternalSyncObject", ::System::Net::WebRequest*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Net::WebRequest::getStaticF_s_InternalSyncObject()  {
return ::cordl_internals::getStaticField<::System::Object*, "s_InternalSyncObject", ::System::Net::WebRequest*>();
}
inline void System::Net::WebRequest::setStaticF_s_DefaultTimerQueue(::System::Net::TimerThread_Queue*  value)  {
::cordl_internals::setStaticField<::System::Net::TimerThread_Queue*, "s_DefaultTimerQueue", ::System::Net::WebRequest*>(std::forward<::System::Net::TimerThread_Queue*>(value));
}
inline ::System::Net::TimerThread_Queue* System::Net::WebRequest::getStaticF_s_DefaultTimerQueue()  {
return ::cordl_internals::getStaticField<::System::Net::TimerThread_Queue*, "s_DefaultTimerQueue", ::System::Net::WebRequest*>();
}
inline void System::Net::WebRequest::setStaticF_webRequestCreate(::System::Net::WebRequest_DesignerWebRequestCreate*  value)  {
::cordl_internals::setStaticField<::System::Net::WebRequest_DesignerWebRequestCreate*, "webRequestCreate", ::System::Net::WebRequest*>(std::forward<::System::Net::WebRequest_DesignerWebRequestCreate*>(value));
}
inline ::System::Net::WebRequest_DesignerWebRequestCreate* System::Net::WebRequest::getStaticF_webRequestCreate()  {
return ::cordl_internals::getStaticField<::System::Net::WebRequest_DesignerWebRequestCreate*, "webRequestCreate", ::System::Net::WebRequest*>();
}
inline void System::Net::WebRequest::setStaticF_s_DefaultWebProxy(::System::Net::IWebProxy*  value)  {
::cordl_internals::setStaticField<::System::Net::IWebProxy*, "s_DefaultWebProxy", ::System::Net::WebRequest*>(std::forward<::System::Net::IWebProxy*>(value));
}
inline ::System::Net::IWebProxy* System::Net::WebRequest::getStaticF_s_DefaultWebProxy()  {
return ::cordl_internals::getStaticField<::System::Net::IWebProxy*, "s_DefaultWebProxy", ::System::Net::WebRequest*>();
}
inline void System::Net::WebRequest::setStaticF_s_DefaultWebProxyInitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "s_DefaultWebProxyInitialized", ::System::Net::WebRequest*>(std::forward<bool>(value));
}
inline bool System::Net::WebRequest::getStaticF_s_DefaultWebProxyInitialized()  {
return ::cordl_internals::getStaticField<bool, "s_DefaultWebProxyInitialized", ::System::Net::WebRequest*>();
}
inline ::System::Net::IWebRequestCreate* System::Net::WebRequest::get_CreatorInstance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebRequestCreate*>(this, ___internal_method);
}
inline void System::Net::WebRequest::RegisterPortableWebRequestCreator(::System::Net::IWebRequestCreate*  creator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"RegisterPortableWebRequestCreator", {}, {::i2c::type_of<::System::Net::IWebRequestCreate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, creator);
}
inline ::System::Object* System::Net::WebRequest::get_InternalSyncObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_InternalSyncObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method);
}
inline ::System::Net::TimerThread_Queue* System::Net::WebRequest::get_DefaultTimerQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_DefaultTimerQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::TimerThread_Queue*>(nullptr, ___internal_method);
}
inline ::System::Net::WebRequest* System::Net::WebRequest::Create(::System::Uri*  requestUri, bool  useUriBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"Create", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest*>(nullptr, ___internal_method, requestUri, useUriBase);
}
inline ::System::Net::WebRequest* System::Net::WebRequest::Create(::StringW  requestUriString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest*>(nullptr, ___internal_method, requestUriString);
}
inline ::System::Net::WebRequest* System::Net::WebRequest::Create(::System::Uri*  requestUri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"Create", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest*>(nullptr, ___internal_method, requestUri);
}
inline ::System::Net::WebRequest* System::Net::WebRequest::CreateDefault(::System::Uri*  requestUri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"CreateDefault", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest*>(nullptr, ___internal_method, requestUri);
}
inline ::System::Net::HttpWebRequest* System::Net::WebRequest::CreateHttp(::StringW  requestUriString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"CreateHttp", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpWebRequest*>(nullptr, ___internal_method, requestUriString);
}
inline ::System::Net::HttpWebRequest* System::Net::WebRequest::CreateHttp(::System::Uri*  requestUri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"CreateHttp", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpWebRequest*>(nullptr, ___internal_method, requestUri);
}
inline bool System::Net::WebRequest::RegisterPrefix(::StringW  prefix, ::System::Net::IWebRequestCreate*  creator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"RegisterPrefix", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::IWebRequestCreate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, prefix, creator);
}
inline ::System::Collections::ArrayList* System::Net::WebRequest::get_PrefixList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_PrefixList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(nullptr, ___internal_method);
}
inline void System::Net::WebRequest::set_PrefixList(::System::Collections::ArrayList*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"set_PrefixList", {}, {::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::ArrayList* System::Net::WebRequest::PopulatePrefixList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"PopulatePrefixList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(nullptr, ___internal_method);
}
inline void System::Net::WebRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebRequest::_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebRequest::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebRequest::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::System::Net::Cache::RequestCachePolicy* System::Net::WebRequest::get_DefaultCachePolicy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_DefaultCachePolicy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCachePolicy*>(nullptr, ___internal_method);
}
inline void System::Net::WebRequest::set_DefaultCachePolicy(::System::Net::Cache::RequestCachePolicy*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"set_DefaultCachePolicy", {}, {::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Net::Cache::RequestCachePolicy* System::Net::WebRequest::get_CachePolicy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCachePolicy*>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_CachePolicy(::System::Net::Cache::RequestCachePolicy*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebRequest::InternalSetCachePolicy(::System::Net::Cache::RequestCachePolicy*  policy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"InternalSetCachePolicy", {}, {::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, policy);
}
inline ::StringW System::Net::WebRequest::get_Method()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_Method(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::WebRequest::get_RequestUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::StringW System::Net::WebRequest::get_ConnectionGroupName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_ConnectionGroupName(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::WebHeaderCollection* System::Net::WebRequest::get_Headers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_Headers(::System::Net::WebHeaderCollection*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Net::WebRequest::get_ContentLength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_ContentLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::WebRequest::get_ContentType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_ContentType(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::ICredentials* System::Net::WebRequest::get_Credentials()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_Credentials(::System::Net::ICredentials*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::WebRequest::get_UseDefaultCredentials()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_UseDefaultCredentials(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::IWebProxy* System::Net::WebRequest::get_Proxy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_Proxy(::System::Net::IWebProxy*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::WebRequest::get_PreAuthenticate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_PreAuthenticate(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::WebRequest::get_Timeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_Timeout(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IO::Stream* System::Net::WebRequest::GetRequestStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::Net::WebResponse* System::Net::WebRequest::GetResponse()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::WebRequest::BeginGetResponse(::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, state);
}
inline ::System::Net::WebResponse* System::Net::WebRequest::EndGetResponse(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*>(this, ___internal_method, asyncResult);
}
inline ::System::IAsyncResult* System::Net::WebRequest::BeginGetRequestStream(::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, state);
}
inline ::System::IO::Stream* System::Net::WebRequest::EndGetRequestStream(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::WebRequest::GetRequestStreamAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* System::Net::WebRequest::GetResponseAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>*>(this, ___internal_method);
}
inline ::System::Security::Principal::WindowsIdentity* System::Net::WebRequest::SafeCaptureIdenity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"SafeCaptureIdenity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::WindowsIdentity*>(this, ___internal_method);
}
inline void System::Net::WebRequest::Abort()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequest*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Cache::RequestCacheProtocol* System::Net::WebRequest::get_CacheProtocol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_CacheProtocol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCacheProtocol*>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_CacheProtocol(::System::Net::Cache::RequestCacheProtocol*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"set_CacheProtocol", {}, {::i2c::type_of<::System::Net::Cache::RequestCacheProtocol*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Security::AuthenticationLevel System::Net::WebRequest::get_AuthenticationLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_AuthenticationLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Security::AuthenticationLevel>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_AuthenticationLevel(::System::Net::Security::AuthenticationLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"set_AuthenticationLevel", {}, {::i2c::type_of<::System::Net::Security::AuthenticationLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Principal::TokenImpersonationLevel System::Net::WebRequest::get_ImpersonationLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_ImpersonationLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::TokenImpersonationLevel>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_ImpersonationLevel(::System::Security::Principal::TokenImpersonationLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"set_ImpersonationLevel", {}, {::i2c::type_of<::System::Security::Principal::TokenImpersonationLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::IWebProxy* System::Net::WebRequest::get_InternalDefaultWebProxy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_InternalDefaultWebProxy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*>(nullptr, ___internal_method);
}
inline void System::Net::WebRequest::set_InternalDefaultWebProxy(::System::Net::IWebProxy*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"set_InternalDefaultWebProxy", {}, {::i2c::type_of<::System::Net::IWebProxy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Net::IWebProxy* System::Net::WebRequest::get_DefaultWebProxy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"get_DefaultWebProxy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*>(nullptr, ___internal_method);
}
inline void System::Net::WebRequest::set_DefaultWebProxy(::System::Net::IWebProxy*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"set_DefaultWebProxy", {}, {::i2c::type_of<::System::Net::IWebProxy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Net::IWebProxy* System::Net::WebRequest::GetSystemWebProxy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"GetSystemWebProxy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*>(nullptr, ___internal_method);
}
inline ::System::Net::IWebProxy* System::Net::WebRequest::InternalGetSystemWebProxy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"InternalGetSystemWebProxy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*>(nullptr, ___internal_method);
}
inline void System::Net::WebRequest::SetupCacheProtocol(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"SetupCacheProtocol", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::WebRequest::_GetRequestStreamAsync_b__78_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"<GetRequestStreamAsync>b__78_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* System::Net::WebRequest::_GetResponseAsync_b__79_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest*>(),
                        {"<GetResponseAsync>b__79_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>*>(this, ___internal_method);
}
inline ::System::Net::WebRequest* System::Net::WebRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebRequest*>());
}
inline ::System::Net::WebRequest* System::Net::WebRequest::New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebRequest*>(serializationInfo, streamingContext));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Net::WebRequest::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Net::WebRequest::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::WebRequest::WebRequest()   {
}
//  Writing Method size for method: ::System::Net::WebRequest___c__DisplayClass79_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest___c__DisplayClass79_0::*)()>(&::System::Net::WebRequest___c__DisplayClass79_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6c134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest___c__DisplayClass79_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest___c__DisplayClass79_0._GetResponseAsync_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* (::System::Net::WebRequest___c__DisplayClass79_0::*)()>(&::System::Net::WebRequest___c__DisplayClass79_0::_GetResponseAsync_b__1)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xac6d068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest___c__DisplayClass79_0*>(),
                        {"<GetResponseAsync>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Security::Principal::WindowsIdentity*& System::Net::WebRequest___c__DisplayClass79_0::__cordl_internal_get_currentUser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentUser;
}
constexpr ::System::Security::Principal::WindowsIdentity* const& System::Net::WebRequest___c__DisplayClass79_0::__cordl_internal_get_currentUser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentUser;
}
constexpr void System::Net::WebRequest___c__DisplayClass79_0::__cordl_internal_set_currentUser(::System::Security::Principal::WindowsIdentity*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentUser = value;
}
constexpr ::System::Net::WebRequest*& System::Net::WebRequest___c__DisplayClass79_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebRequest* const& System::Net::WebRequest___c__DisplayClass79_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebRequest___c__DisplayClass79_0::__cordl_internal_set___4__this(::System::Net::WebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void System::Net::WebRequest___c__DisplayClass79_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest___c__DisplayClass79_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* System::Net::WebRequest___c__DisplayClass79_0::_GetResponseAsync_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest___c__DisplayClass79_0*>(),
                        {"<GetResponseAsync>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>*>(this, ___internal_method);
}
inline ::System::Net::WebRequest___c__DisplayClass79_0* System::Net::WebRequest___c__DisplayClass79_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebRequest___c__DisplayClass79_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebRequest___c__DisplayClass79_0::WebRequest___c__DisplayClass79_0()   {
}
//  Writing Method size for method: ::System::Net::WebRequest___c__DisplayClass78_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest___c__DisplayClass78_0::*)()>(&::System::Net::WebRequest___c__DisplayClass78_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6be40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest___c__DisplayClass78_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest___c__DisplayClass78_0._GetRequestStreamAsync_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::WebRequest___c__DisplayClass78_0::*)()>(&::System::Net::WebRequest___c__DisplayClass78_0::_GetRequestStreamAsync_b__1)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xac6cd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest___c__DisplayClass78_0*>(),
                        {"<GetRequestStreamAsync>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Security::Principal::WindowsIdentity*& System::Net::WebRequest___c__DisplayClass78_0::__cordl_internal_get_currentUser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentUser;
}
constexpr ::System::Security::Principal::WindowsIdentity* const& System::Net::WebRequest___c__DisplayClass78_0::__cordl_internal_get_currentUser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentUser;
}
constexpr void System::Net::WebRequest___c__DisplayClass78_0::__cordl_internal_set_currentUser(::System::Security::Principal::WindowsIdentity*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentUser = value;
}
constexpr ::System::Net::WebRequest*& System::Net::WebRequest___c__DisplayClass78_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebRequest* const& System::Net::WebRequest___c__DisplayClass78_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebRequest___c__DisplayClass78_0::__cordl_internal_set___4__this(::System::Net::WebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void System::Net::WebRequest___c__DisplayClass78_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest___c__DisplayClass78_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::WebRequest___c__DisplayClass78_0::_GetRequestStreamAsync_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest___c__DisplayClass78_0*>(),
                        {"<GetRequestStreamAsync>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method);
}
inline ::System::Net::WebRequest___c__DisplayClass78_0* System::Net::WebRequest___c__DisplayClass78_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebRequest___c__DisplayClass78_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebRequest___c__DisplayClass78_0::WebRequest___c__DisplayClass78_0()   {
}
//  Writing Method size for method: ::System::Net::WebRequest_WebProxyWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest_WebProxyWrapper::*)(::System::Net::WebProxy*)>(&::System::Net::WebRequest_WebProxyWrapper::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac6cd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebProxy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest_WebProxyWrapper.get_WebProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebProxy* (::System::Net::WebRequest_WebProxyWrapper::*)()>(&::System::Net::WebRequest_WebProxyWrapper::get_WebProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6cd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapper*>(),
                        {"get_WebProxy", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::WebRequest_WebProxyWrapper::_ctor(::System::Net::WebProxy*  webProxy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebProxy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, webProxy);
}
inline ::System::Net::WebProxy* System::Net::WebRequest_WebProxyWrapper::get_WebProxy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapper*>(),
                        {"get_WebProxy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebProxy*>(this, ___internal_method);
}
inline ::System::Net::WebRequest_WebProxyWrapper* System::Net::WebRequest_WebProxyWrapper::New_ctor(::System::Net::WebProxy*  webProxy)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebRequest_WebProxyWrapper*>(webProxy));
}
// Ctor Parameters []
constexpr ::System::Net::WebRequest_WebProxyWrapper::WebRequest_WebProxyWrapper()   {
}
//  Writing Method size for method: ::System::Net::WebRequest_WebProxyWrapperOpaque._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest_WebProxyWrapperOpaque::*)(::System::Net::WebProxy*)>(&::System::Net::WebRequest_WebProxyWrapperOpaque::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac6cc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapperOpaque*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebProxy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest_WebProxyWrapperOpaque.GetProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::WebRequest_WebProxyWrapperOpaque::*)(::System::Uri*)>(&::System::Net::WebRequest_WebProxyWrapperOpaque::GetProxy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac6cc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapperOpaque*>(),
                        {"GetProxy", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest_WebProxyWrapperOpaque.IsBypassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebRequest_WebProxyWrapperOpaque::*)(::System::Uri*)>(&::System::Net::WebRequest_WebProxyWrapperOpaque::IsBypassed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac6cc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapperOpaque*>(),
                        {"IsBypassed", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest_WebProxyWrapperOpaque.get_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICredentials* (::System::Net::WebRequest_WebProxyWrapperOpaque::*)()>(&::System::Net::WebRequest_WebProxyWrapperOpaque::get_Credentials)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac6cc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapperOpaque*>(),
                        {"get_Credentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest_WebProxyWrapperOpaque.set_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest_WebProxyWrapperOpaque::*)(::System::Net::ICredentials*)>(&::System::Net::WebRequest_WebProxyWrapperOpaque::set_Credentials)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac6cc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapperOpaque*>(),
                        {"set_Credentials", {}, {::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest_WebProxyWrapperOpaque.GetProxies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ProxyChain* (::System::Net::WebRequest_WebProxyWrapperOpaque::*)(::System::Uri*)>(&::System::Net::WebRequest_WebProxyWrapperOpaque::GetProxies)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xac6cca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapperOpaque*>(),
                        {"GetProxies", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebProxy*& System::Net::WebRequest_WebProxyWrapperOpaque::__cordl_internal_get_webProxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webProxy;
}
constexpr ::System::Net::WebProxy* const& System::Net::WebRequest_WebProxyWrapperOpaque::__cordl_internal_get_webProxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webProxy;
}
constexpr void System::Net::WebRequest_WebProxyWrapperOpaque::__cordl_internal_set_webProxy(::System::Net::WebProxy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webProxy = value;
}
inline void System::Net::WebRequest_WebProxyWrapperOpaque::_ctor(::System::Net::WebProxy*  webProxy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapperOpaque*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebProxy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, webProxy);
}
inline ::System::Uri* System::Net::WebRequest_WebProxyWrapperOpaque::GetProxy(::System::Uri*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapperOpaque*>(),
                        {"GetProxy", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, destination);
}
inline bool System::Net::WebRequest_WebProxyWrapperOpaque::IsBypassed(::System::Uri*  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapperOpaque*>(),
                        {"IsBypassed", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host);
}
inline ::System::Net::ICredentials* System::Net::WebRequest_WebProxyWrapperOpaque::get_Credentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapperOpaque*>(),
                        {"get_Credentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*>(this, ___internal_method);
}
inline void System::Net::WebRequest_WebProxyWrapperOpaque::set_Credentials(::System::Net::ICredentials*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapperOpaque*>(),
                        {"set_Credentials", {}, {::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::ProxyChain* System::Net::WebRequest_WebProxyWrapperOpaque::GetProxies(::System::Uri*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_WebProxyWrapperOpaque*>(),
                        {"GetProxies", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ProxyChain*>(this, ___internal_method, destination);
}
inline ::System::Net::WebRequest_WebProxyWrapperOpaque* System::Net::WebRequest_WebProxyWrapperOpaque::New_ctor(::System::Net::WebProxy*  webProxy)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebRequest_WebProxyWrapperOpaque*>(webProxy));
}
/// @brief Convert operator to "::System::Net::IAutoWebProxy"
constexpr  System::Net::WebRequest_WebProxyWrapperOpaque::operator ::System::Net::IAutoWebProxy*() noexcept {
return static_cast<::System::Net::IAutoWebProxy*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IAutoWebProxy"
constexpr ::System::Net::IAutoWebProxy* System::Net::WebRequest_WebProxyWrapperOpaque::i___System__Net__IAutoWebProxy() noexcept {
return static_cast<::System::Net::IAutoWebProxy*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Net::IWebProxy"
constexpr  System::Net::WebRequest_WebProxyWrapperOpaque::operator ::System::Net::IWebProxy*() noexcept {
return static_cast<::System::Net::IWebProxy*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IWebProxy"
constexpr ::System::Net::IWebProxy* System::Net::WebRequest_WebProxyWrapperOpaque::i___System__Net__IWebProxy() noexcept {
return static_cast<::System::Net::IWebProxy*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::WebRequest_WebProxyWrapperOpaque::WebRequest_WebProxyWrapperOpaque()   {
}
//  Writing Method size for method: ::System::Net::WebRequest_DesignerWebRequestCreate.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebRequest* (::System::Net::WebRequest_DesignerWebRequestCreate::*)(::System::Uri*)>(&::System::Net::WebRequest_DesignerWebRequestCreate::Create)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xac6cbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_DesignerWebRequestCreate*>(),
                        {"Create", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest_DesignerWebRequestCreate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequest_DesignerWebRequestCreate::*)()>(&::System::Net::WebRequest_DesignerWebRequestCreate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6c9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_DesignerWebRequestCreate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Net::WebRequest* System::Net::WebRequest_DesignerWebRequestCreate::Create(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_DesignerWebRequestCreate*>(),
                        {"Create", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest*>(this, ___internal_method, uri);
}
inline void System::Net::WebRequest_DesignerWebRequestCreate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequest_DesignerWebRequestCreate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::WebRequest_DesignerWebRequestCreate* System::Net::WebRequest_DesignerWebRequestCreate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebRequest_DesignerWebRequestCreate*>());
}
/// @brief Convert operator to "::System::Net::IWebRequestCreate"
constexpr  System::Net::WebRequest_DesignerWebRequestCreate::operator ::System::Net::IWebRequestCreate*() noexcept {
return static_cast<::System::Net::IWebRequestCreate*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IWebRequestCreate"
constexpr ::System::Net::IWebRequestCreate* System::Net::WebRequest_DesignerWebRequestCreate::i___System__Net__IWebRequestCreate() noexcept {
return static_cast<::System::Net::IWebRequestCreate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::WebRequest_DesignerWebRequestCreate::WebRequest_DesignerWebRequestCreate()   {
}

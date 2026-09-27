#pragma once
// IWYU pragma private; include "System/Net/WebConnectionTunnel.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_NtlmAuthState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_NtlmAuthState_def.hpp"
#include "System/Net/zzzz__WebConnectionTunnel__Initialize_d__42_def.hpp"
#include "System/Net/zzzz__WebConnectionTunnel__ReadHeaders_d__43_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_Request
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpWebRequest* (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_Request", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_ConnectUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_ConnectUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_ConnectUri", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::System::Net::HttpWebRequest*, ::System::Uri*)>(&::System::Net::WebConnectionTunnel::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xacba4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::HttpWebRequest*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_Success
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_Success)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_Success", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_Success
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(bool)>(&::System::Net::WebConnectionTunnel::set_Success)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_Success", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_CloseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_CloseConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_CloseConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_CloseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(bool)>(&::System::Net::WebConnectionTunnel::set_CloseConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_CloseConnection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_StatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_StatusCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_StatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(int32_t)>(&::System::Net::WebConnectionTunnel::set_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_StatusCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_StatusDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_StatusDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_StatusDescription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_StatusDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::StringW)>(&::System::Net::WebConnectionTunnel::set_StatusDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_StatusDescription", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_Challenge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_Challenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_Challenge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_Challenge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::ArrayW<::StringW>)>(&::System::Net::WebConnectionTunnel::set_Challenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_Challenge", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_Headers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_Headers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_Headers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::System::Net::WebHeaderCollection*)>(&::System::Net::WebConnectionTunnel::set_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_Headers", {}, {::i2c::type_of<::System::Net::WebHeaderCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_ProxyVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_ProxyVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_ProxyVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_ProxyVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::System::Version*)>(&::System::Net::WebConnectionTunnel::set_ProxyVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbf9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_ProxyVersion", {}, {::i2c::type_of<::System::Version*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::ArrayW<uint8_t>)>(&::System::Net::WebConnectionTunnel::set_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbbfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_Data", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebConnectionTunnel::*)(::System::IO::Stream*, ::System::Threading::CancellationToken)>(&::System::Net::WebConnectionTunnel::Initialize)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xacba514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"Initialize", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.ReadHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*,::ArrayW<uint8_t>,int32_t>>* (::System::Net::WebConnectionTunnel::*)(::System::IO::Stream*, ::System::Threading::CancellationToken)>(&::System::Net::WebConnectionTunnel::ReadHeaders)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xacbbfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"ReadHeaders", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.FlushContents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::System::IO::Stream*, int32_t)>(&::System::Net::WebConnectionTunnel::FlushContents)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xacbc104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"FlushContents", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::HttpWebRequest*& System::Net::WebConnectionTunnel::__cordl_internal_get__Request_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Request_k__BackingField;
}
constexpr ::System::Net::HttpWebRequest* const& System::Net::WebConnectionTunnel::__cordl_internal_get__Request_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Request_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__Request_k__BackingField(::System::Net::HttpWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Request_k__BackingField = value;
}
constexpr ::System::Uri*& System::Net::WebConnectionTunnel::__cordl_internal_get__ConnectUri_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectUri_k__BackingField;
}
constexpr ::System::Uri* const& System::Net::WebConnectionTunnel::__cordl_internal_get__ConnectUri_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectUri_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__ConnectUri_k__BackingField(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ConnectUri_k__BackingField = value;
}
constexpr ::System::Net::HttpWebRequest*& System::Net::WebConnectionTunnel::__cordl_internal_get_connectRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectRequest;
}
constexpr ::System::Net::HttpWebRequest* const& System::Net::WebConnectionTunnel::__cordl_internal_get_connectRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectRequest;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set_connectRequest(::System::Net::HttpWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectRequest = value;
}
constexpr ::GlobalNamespace::WebConnectionTunnel_NtlmAuthState& System::Net::WebConnectionTunnel::__cordl_internal_get_ntlmAuthState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ntlmAuthState;
}
constexpr ::GlobalNamespace::WebConnectionTunnel_NtlmAuthState const& System::Net::WebConnectionTunnel::__cordl_internal_get_ntlmAuthState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ntlmAuthState;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set_ntlmAuthState(::GlobalNamespace::WebConnectionTunnel_NtlmAuthState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ntlmAuthState = value;
}
constexpr bool& System::Net::WebConnectionTunnel::__cordl_internal_get__Success_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Success_k__BackingField;
}
constexpr bool const& System::Net::WebConnectionTunnel::__cordl_internal_get__Success_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Success_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__Success_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Success_k__BackingField = value;
}
constexpr bool& System::Net::WebConnectionTunnel::__cordl_internal_get__CloseConnection_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloseConnection_k__BackingField;
}
constexpr bool const& System::Net::WebConnectionTunnel::__cordl_internal_get__CloseConnection_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloseConnection_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__CloseConnection_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CloseConnection_k__BackingField = value;
}
constexpr int32_t& System::Net::WebConnectionTunnel::__cordl_internal_get__StatusCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StatusCode_k__BackingField;
}
constexpr int32_t const& System::Net::WebConnectionTunnel::__cordl_internal_get__StatusCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StatusCode_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__StatusCode_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StatusCode_k__BackingField = value;
}
constexpr ::StringW& System::Net::WebConnectionTunnel::__cordl_internal_get__StatusDescription_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StatusDescription_k__BackingField;
}
constexpr ::StringW const& System::Net::WebConnectionTunnel::__cordl_internal_get__StatusDescription_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StatusDescription_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__StatusDescription_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StatusDescription_k__BackingField = value;
}
constexpr ::ArrayW<::StringW>& System::Net::WebConnectionTunnel::__cordl_internal_get__Challenge_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Challenge_k__BackingField;
}
constexpr ::ArrayW<::StringW> const& System::Net::WebConnectionTunnel::__cordl_internal_get__Challenge_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Challenge_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__Challenge_k__BackingField(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Challenge_k__BackingField = value;
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::WebConnectionTunnel::__cordl_internal_get__Headers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Headers_k__BackingField;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::WebConnectionTunnel::__cordl_internal_get__Headers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Headers_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__Headers_k__BackingField(::System::Net::WebHeaderCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Headers_k__BackingField = value;
}
constexpr ::System::Version*& System::Net::WebConnectionTunnel::__cordl_internal_get__ProxyVersion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProxyVersion_k__BackingField;
}
constexpr ::System::Version* const& System::Net::WebConnectionTunnel::__cordl_internal_get__ProxyVersion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProxyVersion_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__ProxyVersion_k__BackingField(::System::Version*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ProxyVersion_k__BackingField = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::WebConnectionTunnel::__cordl_internal_get__Data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr ::ArrayW<uint8_t> const& System::Net::WebConnectionTunnel::__cordl_internal_get__Data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__Data_k__BackingField(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data_k__BackingField = value;
}
inline ::System::Net::HttpWebRequest* System::Net::WebConnectionTunnel::get_Request()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_Request", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpWebRequest*>(this, ___internal_method);
}
inline ::System::Uri* System::Net::WebConnectionTunnel::get_ConnectUri()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_ConnectUri", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::_ctor(::System::Net::HttpWebRequest*  request, ::System::Uri*  connectUri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::HttpWebRequest*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, connectUri);
}
inline bool System::Net::WebConnectionTunnel::get_Success()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_Success", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_Success(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_Success", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::WebConnectionTunnel::get_CloseConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_CloseConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_CloseConnection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_CloseConnection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::WebConnectionTunnel::get_StatusCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_StatusCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_StatusCode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_StatusCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::WebConnectionTunnel::get_StatusDescription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_StatusDescription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_StatusDescription(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_StatusDescription", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> System::Net::WebConnectionTunnel::get_Challenge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_Challenge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_Challenge(::ArrayW<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_Challenge", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::WebHeaderCollection* System::Net::WebConnectionTunnel::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_Headers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_Headers(::System::Net::WebHeaderCollection*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_Headers", {}, {::i2c::type_of<::System::Net::WebHeaderCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Version* System::Net::WebConnectionTunnel::get_ProxyVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_ProxyVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_ProxyVersion(::System::Version*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_ProxyVersion", {}, {::i2c::type_of<::System::Version*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::Net::WebConnectionTunnel::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_Data(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"set_Data", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::Net::WebConnectionTunnel::Initialize(::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"Initialize", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, stream, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*,::ArrayW<uint8_t>,int32_t>>* System::Net::WebConnectionTunnel::ReadHeaders(::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"ReadHeaders", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*,::ArrayW<uint8_t>,int32_t>>*>(this, ___internal_method, stream, cancellationToken);
}
inline void System::Net::WebConnectionTunnel::FlushContents(::System::IO::Stream*  stream, int32_t  contentLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                        {"FlushContents", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, contentLength);
}
inline ::System::Net::WebConnectionTunnel* System::Net::WebConnectionTunnel::New_ctor(::System::Net::HttpWebRequest*  request, ::System::Uri*  connectUri)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebConnectionTunnel*>(request, connectUri));
}
// Ctor Parameters []
constexpr ::System::Net::WebConnectionTunnel::WebConnectionTunnel()   {
}

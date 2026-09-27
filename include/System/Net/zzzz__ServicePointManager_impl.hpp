#pragma once
// IWYU pragma private; include "System/Net/ServicePointManager.hpp"
#include "System/Net/zzzz__SecurityProtocolType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ServicePointManager_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Net/zzzz__CipherSuitesCallback_def.hpp"
#include "System/Net/zzzz__ICertificatePolicy_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__SecurityProtocolType_def.hpp"
#include "System/Net/zzzz__ServerCertValidationCallback_def.hpp"
#include "System/Net/zzzz__ServicePointManager_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::ServicePointManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePointManager::*)()>(&::System::Net::ServicePointManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacafd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_CertificatePolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICertificatePolicy* (*)()>(&::System::Net::ServicePointManager::get_CertificatePolicy)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xacafd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_CertificatePolicy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_CertificatePolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::ICertificatePolicy*)>(&::System::Net::ServicePointManager::set_CertificatePolicy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xacafe04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_CertificatePolicy", {}, {::i2c::type_of<::System::Net::ICertificatePolicy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.GetLegacyCertificatePolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICertificatePolicy* (*)()>(&::System::Net::ServicePointManager::GetLegacyCertificatePolicy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacafe64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"GetLegacyCertificatePolicy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_CheckCertificateRevocationList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::ServicePointManager::get_CheckCertificateRevocationList)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacafebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_CheckCertificateRevocationList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_CheckCertificateRevocationList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::System::Net::ServicePointManager::set_CheckCertificateRevocationList)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacaff14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_CheckCertificateRevocationList", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_DefaultConnectionLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Net::ServicePointManager::get_DefaultConnectionLimit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacaff6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_DefaultConnectionLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_DefaultConnectionLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::Net::ServicePointManager::set_DefaultConnectionLimit)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xacaffc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_DefaultConnectionLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.GetMustImplement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Net::ServicePointManager::GetMustImplement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xacb0070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"GetMustImplement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_DnsRefreshTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Net::ServicePointManager::get_DnsRefreshTimeout)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacb00c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_DnsRefreshTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_DnsRefreshTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::Net::ServicePointManager::set_DnsRefreshTimeout)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xacb011c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_DnsRefreshTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_EnableDnsRoundRobin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::ServicePointManager::get_EnableDnsRoundRobin)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xacb01b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_EnableDnsRoundRobin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_EnableDnsRoundRobin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::System::Net::ServicePointManager::set_EnableDnsRoundRobin)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xacb01e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_EnableDnsRoundRobin", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_MaxServicePointIdleTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Net::ServicePointManager::get_MaxServicePointIdleTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacb021c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_MaxServicePointIdleTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_MaxServicePointIdleTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::Net::ServicePointManager::set_MaxServicePointIdleTime)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xacb0274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_MaxServicePointIdleTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_MaxServicePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Net::ServicePointManager::get_MaxServicePoints)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacb0320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_MaxServicePoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_MaxServicePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::Net::ServicePointManager::set_MaxServicePoints)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xacb0378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_MaxServicePoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_ReusePort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::ServicePointManager::get_ReusePort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb0420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_ReusePort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_ReusePort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::System::Net::ServicePointManager::set_ReusePort)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacb0428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_ReusePort", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_SecurityProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::SecurityProtocolType (*)()>(&::System::Net::ServicePointManager::get_SecurityProtocol)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacb0460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_SecurityProtocol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_SecurityProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::SecurityProtocolType)>(&::System::Net::ServicePointManager::set_SecurityProtocol)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xacb04b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_SecurityProtocol", {}, {::i2c::type_of<::System::Net::SecurityProtocolType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_ServerCertValidationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServerCertValidationCallback* (*)()>(&::System::Net::ServicePointManager::get_ServerCertValidationCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacb0514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_ServerCertValidationCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_ServerCertificateValidationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::RemoteCertificateValidationCallback* (*)()>(&::System::Net::ServicePointManager::get_ServerCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xacb056c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_ServerCertificateValidationCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_ServerCertificateValidationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Security::RemoteCertificateValidationCallback*)>(&::System::Net::ServicePointManager::set_ServerCertificateValidationCallback)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xacb05f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_ServerCertificateValidationCallback", {}, {::i2c::type_of<::System::Net::Security::RemoteCertificateValidationCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_EncryptionPolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::EncryptionPolicy (*)()>(&::System::Net::ServicePointManager::get_EncryptionPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb06a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_EncryptionPolicy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_Expect100Continue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::ServicePointManager::get_Expect100Continue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacb06b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_Expect100Continue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_Expect100Continue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::System::Net::ServicePointManager::set_Expect100Continue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xacb0708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_Expect100Continue", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_UseNagleAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::ServicePointManager::get_UseNagleAlgorithm)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacb0768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_UseNagleAlgorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_UseNagleAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::System::Net::ServicePointManager::set_UseNagleAlgorithm)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xacb07c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_UseNagleAlgorithm", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_DisableStrongCrypto
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::ServicePointManager::get_DisableStrongCrypto)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb0820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_DisableStrongCrypto", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_DisableSendAuxRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::ServicePointManager::get_DisableSendAuxRecord)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb0828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_DisableSendAuxRecord", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.SetTcpKeepAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, int32_t, int32_t)>(&::System::Net::ServicePointManager::SetTcpKeepAlive)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xacb0830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"SetTcpKeepAlive", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.FindServicePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServicePoint* (*)(::System::Uri*)>(&::System::Net::ServicePointManager::FindServicePoint)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacb0934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"FindServicePoint", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.FindServicePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServicePoint* (*)(::StringW, ::System::Net::IWebProxy*)>(&::System::Net::ServicePointManager::FindServicePoint)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xacb0fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"FindServicePoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::IWebProxy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.FindServicePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServicePoint* (*)(::System::Uri*, ::System::Net::IWebProxy*)>(&::System::Net::ServicePointManager::FindServicePoint)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0xacb098c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"FindServicePoint", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::IWebProxy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.CloseConnectionGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Net::ServicePointManager::CloseConnectionGroup)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0xacb10d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"CloseConnectionGroup", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.RemoveServicePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::ServicePoint*)>(&::System::Net::ServicePointManager::RemoveServicePoint)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xacb148c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"RemoveServicePoint", {}, {::i2c::type_of<::System::Net::ServicePoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_ClientCipherSuitesCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CipherSuitesCallback* (*)()>(&::System::Net::ServicePointManager::get_ClientCipherSuitesCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacb1524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_ClientCipherSuitesCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_ClientCipherSuitesCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::CipherSuitesCallback*)>(&::System::Net::ServicePointManager::set_ClientCipherSuitesCallback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xacb157c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_ClientCipherSuitesCallback", {}, {::i2c::type_of<::System::Net::CipherSuitesCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.get_ServerCipherSuitesCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CipherSuitesCallback* (*)()>(&::System::Net::ServicePointManager::get_ServerCipherSuitesCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacb15dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_ServerCipherSuitesCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager.set_ServerCipherSuitesCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::CipherSuitesCallback*)>(&::System::Net::ServicePointManager::set_ServerCipherSuitesCallback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xacb1634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_ServerCipherSuitesCallback", {}, {::i2c::type_of<::System::Net::CipherSuitesCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::ServicePointManager::setStaticF_servicePoints(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::ServicePointManager_SPKey*,::System::Net::ServicePoint*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::ServicePointManager_SPKey*,::System::Net::ServicePoint*>*, "servicePoints", ::System::Net::ServicePointManager*>(std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::ServicePointManager_SPKey*,::System::Net::ServicePoint*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::ServicePointManager_SPKey*,::System::Net::ServicePoint*>* System::Net::ServicePointManager::getStaticF_servicePoints()  {
return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::ServicePointManager_SPKey*,::System::Net::ServicePoint*>*, "servicePoints", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_policy(::System::Net::ICertificatePolicy*  value)  {
::cordl_internals::setStaticField<::System::Net::ICertificatePolicy*, "policy", ::System::Net::ServicePointManager*>(std::forward<::System::Net::ICertificatePolicy*>(value));
}
inline ::System::Net::ICertificatePolicy* System::Net::ServicePointManager::getStaticF_policy()  {
return ::cordl_internals::getStaticField<::System::Net::ICertificatePolicy*, "policy", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_defaultConnectionLimit(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "defaultConnectionLimit", ::System::Net::ServicePointManager*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_defaultConnectionLimit()  {
return ::cordl_internals::getStaticField<int32_t, "defaultConnectionLimit", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_maxServicePointIdleTime(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "maxServicePointIdleTime", ::System::Net::ServicePointManager*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_maxServicePointIdleTime()  {
return ::cordl_internals::getStaticField<int32_t, "maxServicePointIdleTime", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_maxServicePoints(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "maxServicePoints", ::System::Net::ServicePointManager*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_maxServicePoints()  {
return ::cordl_internals::getStaticField<int32_t, "maxServicePoints", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_dnsRefreshTimeout(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "dnsRefreshTimeout", ::System::Net::ServicePointManager*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_dnsRefreshTimeout()  {
return ::cordl_internals::getStaticField<int32_t, "dnsRefreshTimeout", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF__checkCRL(bool  value)  {
::cordl_internals::setStaticField<bool, "_checkCRL", ::System::Net::ServicePointManager*>(std::forward<bool>(value));
}
inline bool System::Net::ServicePointManager::getStaticF__checkCRL()  {
return ::cordl_internals::getStaticField<bool, "_checkCRL", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF__securityProtocol(::System::Net::SecurityProtocolType  value)  {
::cordl_internals::setStaticField<::System::Net::SecurityProtocolType, "_securityProtocol", ::System::Net::ServicePointManager*>(std::forward<::System::Net::SecurityProtocolType>(value));
}
inline ::System::Net::SecurityProtocolType System::Net::ServicePointManager::getStaticF__securityProtocol()  {
return ::cordl_internals::getStaticField<::System::Net::SecurityProtocolType, "_securityProtocol", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_expectContinue(bool  value)  {
::cordl_internals::setStaticField<bool, "expectContinue", ::System::Net::ServicePointManager*>(std::forward<bool>(value));
}
inline bool System::Net::ServicePointManager::getStaticF_expectContinue()  {
return ::cordl_internals::getStaticField<bool, "expectContinue", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_useNagle(bool  value)  {
::cordl_internals::setStaticField<bool, "useNagle", ::System::Net::ServicePointManager*>(std::forward<bool>(value));
}
inline bool System::Net::ServicePointManager::getStaticF_useNagle()  {
return ::cordl_internals::getStaticField<bool, "useNagle", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_server_cert_cb(::System::Net::ServerCertValidationCallback*  value)  {
::cordl_internals::setStaticField<::System::Net::ServerCertValidationCallback*, "server_cert_cb", ::System::Net::ServicePointManager*>(std::forward<::System::Net::ServerCertValidationCallback*>(value));
}
inline ::System::Net::ServerCertValidationCallback* System::Net::ServicePointManager::getStaticF_server_cert_cb()  {
return ::cordl_internals::getStaticField<::System::Net::ServerCertValidationCallback*, "server_cert_cb", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_tcp_keepalive(bool  value)  {
::cordl_internals::setStaticField<bool, "tcp_keepalive", ::System::Net::ServicePointManager*>(std::forward<bool>(value));
}
inline bool System::Net::ServicePointManager::getStaticF_tcp_keepalive()  {
return ::cordl_internals::getStaticField<bool, "tcp_keepalive", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_tcp_keepalive_time(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "tcp_keepalive_time", ::System::Net::ServicePointManager*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_tcp_keepalive_time()  {
return ::cordl_internals::getStaticField<int32_t, "tcp_keepalive_time", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF_tcp_keepalive_interval(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "tcp_keepalive_interval", ::System::Net::ServicePointManager*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointManager::getStaticF_tcp_keepalive_interval()  {
return ::cordl_internals::getStaticField<int32_t, "tcp_keepalive_interval", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF__ClientCipherSuitesCallback_k__BackingField(::System::Net::CipherSuitesCallback*  value)  {
::cordl_internals::setStaticField<::System::Net::CipherSuitesCallback*, "<ClientCipherSuitesCallback>k__BackingField", ::System::Net::ServicePointManager*>(std::forward<::System::Net::CipherSuitesCallback*>(value));
}
inline ::System::Net::CipherSuitesCallback* System::Net::ServicePointManager::getStaticF__ClientCipherSuitesCallback_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Net::CipherSuitesCallback*, "<ClientCipherSuitesCallback>k__BackingField", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::setStaticF__ServerCipherSuitesCallback_k__BackingField(::System::Net::CipherSuitesCallback*  value)  {
::cordl_internals::setStaticField<::System::Net::CipherSuitesCallback*, "<ServerCipherSuitesCallback>k__BackingField", ::System::Net::ServicePointManager*>(std::forward<::System::Net::CipherSuitesCallback*>(value));
}
inline ::System::Net::CipherSuitesCallback* System::Net::ServicePointManager::getStaticF__ServerCipherSuitesCallback_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Net::CipherSuitesCallback*, "<ServerCipherSuitesCallback>k__BackingField", ::System::Net::ServicePointManager*>();
}
inline void System::Net::ServicePointManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::ICertificatePolicy* System::Net::ServicePointManager::get_CertificatePolicy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_CertificatePolicy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ICertificatePolicy*>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_CertificatePolicy(::System::Net::ICertificatePolicy*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_CertificatePolicy", {}, {::i2c::type_of<::System::Net::ICertificatePolicy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Net::ICertificatePolicy* System::Net::ServicePointManager::GetLegacyCertificatePolicy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"GetLegacyCertificatePolicy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ICertificatePolicy*>(nullptr, ___internal_method);
}
inline bool System::Net::ServicePointManager::get_CheckCertificateRevocationList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_CheckCertificateRevocationList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_CheckCertificateRevocationList(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_CheckCertificateRevocationList", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t System::Net::ServicePointManager::get_DefaultConnectionLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_DefaultConnectionLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_DefaultConnectionLimit(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_DefaultConnectionLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Exception* System::Net::ServicePointManager::GetMustImplement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"GetMustImplement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline int32_t System::Net::ServicePointManager::get_DnsRefreshTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_DnsRefreshTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_DnsRefreshTimeout(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_DnsRefreshTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool System::Net::ServicePointManager::get_EnableDnsRoundRobin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_EnableDnsRoundRobin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_EnableDnsRoundRobin(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_EnableDnsRoundRobin", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t System::Net::ServicePointManager::get_MaxServicePointIdleTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_MaxServicePointIdleTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_MaxServicePointIdleTime(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_MaxServicePointIdleTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t System::Net::ServicePointManager::get_MaxServicePoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_MaxServicePoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_MaxServicePoints(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_MaxServicePoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool System::Net::ServicePointManager::get_ReusePort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_ReusePort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_ReusePort(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_ReusePort", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Net::SecurityProtocolType System::Net::ServicePointManager::get_SecurityProtocol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_SecurityProtocol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::SecurityProtocolType>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_SecurityProtocol(::System::Net::SecurityProtocolType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_SecurityProtocol", {}, {::i2c::type_of<::System::Net::SecurityProtocolType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Net::ServerCertValidationCallback* System::Net::ServicePointManager::get_ServerCertValidationCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_ServerCertValidationCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServerCertValidationCallback*>(nullptr, ___internal_method);
}
inline ::System::Net::Security::RemoteCertificateValidationCallback* System::Net::ServicePointManager::get_ServerCertificateValidationCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_ServerCertificateValidationCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Security::RemoteCertificateValidationCallback*>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_ServerCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_ServerCertificateValidationCallback", {}, {::i2c::type_of<::System::Net::Security::RemoteCertificateValidationCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Net::Security::EncryptionPolicy System::Net::ServicePointManager::get_EncryptionPolicy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_EncryptionPolicy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Security::EncryptionPolicy>(nullptr, ___internal_method);
}
inline bool System::Net::ServicePointManager::get_Expect100Continue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_Expect100Continue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_Expect100Continue(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_Expect100Continue", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool System::Net::ServicePointManager::get_UseNagleAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_UseNagleAlgorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_UseNagleAlgorithm(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_UseNagleAlgorithm", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool System::Net::ServicePointManager::get_DisableStrongCrypto()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_DisableStrongCrypto", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::Net::ServicePointManager::get_DisableSendAuxRecord()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_DisableSendAuxRecord", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::SetTcpKeepAlive(bool  enabled, int32_t  keepAliveTime, int32_t  keepAliveInterval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"SetTcpKeepAlive", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled, keepAliveTime, keepAliveInterval);
}
inline ::System::Net::ServicePoint* System::Net::ServicePointManager::FindServicePoint(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"FindServicePoint", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*>(nullptr, ___internal_method, address);
}
inline ::System::Net::ServicePoint* System::Net::ServicePointManager::FindServicePoint(::StringW  uriString, ::System::Net::IWebProxy*  proxy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"FindServicePoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::IWebProxy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*>(nullptr, ___internal_method, uriString, proxy);
}
inline ::System::Net::ServicePoint* System::Net::ServicePointManager::FindServicePoint(::System::Uri*  address, ::System::Net::IWebProxy*  proxy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"FindServicePoint", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::IWebProxy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*>(nullptr, ___internal_method, address, proxy);
}
inline void System::Net::ServicePointManager::CloseConnectionGroup(::StringW  connectionGroupName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"CloseConnectionGroup", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, connectionGroupName);
}
inline void System::Net::ServicePointManager::RemoveServicePoint(::System::Net::ServicePoint*  sp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"RemoveServicePoint", {}, {::i2c::type_of<::System::Net::ServicePoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sp);
}
inline ::System::Net::CipherSuitesCallback* System::Net::ServicePointManager::get_ClientCipherSuitesCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_ClientCipherSuitesCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::CipherSuitesCallback*>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_ClientCipherSuitesCallback(::System::Net::CipherSuitesCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_ClientCipherSuitesCallback", {}, {::i2c::type_of<::System::Net::CipherSuitesCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Net::CipherSuitesCallback* System::Net::ServicePointManager::get_ServerCipherSuitesCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"get_ServerCipherSuitesCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::CipherSuitesCallback*>(nullptr, ___internal_method);
}
inline void System::Net::ServicePointManager::set_ServerCipherSuitesCallback(::System::Net::CipherSuitesCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager*>(),
                        {"set_ServerCipherSuitesCallback", {}, {::i2c::type_of<::System::Net::CipherSuitesCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Net::ServicePointManager* System::Net::ServicePointManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ServicePointManager*>());
}
// Ctor Parameters []
constexpr ::System::Net::ServicePointManager::ServicePointManager()   {
}
//  Writing Method size for method: ::System::Net::ServicePointManager_SPKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServicePointManager_SPKey::*)(::System::Uri*, ::System::Uri*, bool)>(&::System::Net::ServicePointManager_SPKey::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacb1078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager_SPKey.get_Uri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::ServicePointManager_SPKey::*)()>(&::System::Net::ServicePointManager_SPKey::get_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb1694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(),
                        {"get_Uri", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager_SPKey.get_UseConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServicePointManager_SPKey::*)()>(&::System::Net::ServicePointManager_SPKey::get_UseConnect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb169c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(),
                        {"get_UseConnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager_SPKey.get_UsesProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServicePointManager_SPKey::*)()>(&::System::Net::ServicePointManager_SPKey::get_UsesProxy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xacb16a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(),
                        {"get_UsesProxy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager_SPKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::ServicePointManager_SPKey::*)()>(&::System::Net::ServicePointManager_SPKey::GetHashCode)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xacb1704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(),
                    {::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointManager_SPKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServicePointManager_SPKey::*)(::System::Object*)>(&::System::Net::ServicePointManager_SPKey::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xacb17cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(),
                    {::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(), 0}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::ServicePointManager_SPKey::__cordl_internal_get_uri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uri;
}
constexpr ::System::Uri* const& System::Net::ServicePointManager_SPKey::__cordl_internal_get_uri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uri;
}
constexpr void System::Net::ServicePointManager_SPKey::__cordl_internal_set_uri(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uri = value;
}
constexpr ::System::Uri*& System::Net::ServicePointManager_SPKey::__cordl_internal_get_proxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proxy;
}
constexpr ::System::Uri* const& System::Net::ServicePointManager_SPKey::__cordl_internal_get_proxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proxy;
}
constexpr void System::Net::ServicePointManager_SPKey::__cordl_internal_set_proxy(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proxy = value;
}
constexpr bool& System::Net::ServicePointManager_SPKey::__cordl_internal_get_use_connect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___use_connect;
}
constexpr bool const& System::Net::ServicePointManager_SPKey::__cordl_internal_get_use_connect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___use_connect;
}
constexpr void System::Net::ServicePointManager_SPKey::__cordl_internal_set_use_connect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___use_connect = value;
}
inline void System::Net::ServicePointManager_SPKey::_ctor(::System::Uri*  uri, ::System::Uri*  proxy, bool  use_connect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, proxy, use_connect);
}
inline ::System::Uri* System::Net::ServicePointManager_SPKey::get_Uri()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(),
                        {"get_Uri", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline bool System::Net::ServicePointManager_SPKey::get_UseConnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(),
                        {"get_UseConnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::ServicePointManager_SPKey::get_UsesProxy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(),
                        {"get_UsesProxy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Net::ServicePointManager_SPKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::ServicePointManager_SPKey::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::ServicePointManager_SPKey*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::System::Net::ServicePointManager_SPKey* System::Net::ServicePointManager_SPKey::New_ctor(::System::Uri*  uri, ::System::Uri*  proxy, bool  use_connect)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ServicePointManager_SPKey*>(uri, proxy, use_connect));
}
// Ctor Parameters []
constexpr ::System::Net::ServicePointManager_SPKey::ServicePointManager_SPKey()   {
}

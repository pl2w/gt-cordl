#pragma once
// IWYU pragma private; include "System/Net/NclUtilities.hpp"
#include "System/Net/zzzz__IPAddress_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__NclUtilities_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPHostEntry_def.hpp"
#include "System/Net/zzzz__SecurityStatus_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::NclUtilities.IsThreadPoolLow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::NclUtilities::IsThreadPoolLow)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac59778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"IsThreadPoolLow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.get_HasShutdownStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::NclUtilities::get_HasShutdownStarted)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac597a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"get_HasShutdownStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.IsCredentialFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::SecurityStatus)>(&::System::Net::NclUtilities::IsCredentialFailure)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xac597d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"IsCredentialFailure", {}, {::i2c::type_of<::System::Net::SecurityStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.IsClientFault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::SecurityStatus)>(&::System::Net::NclUtilities::IsClientFault)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac59804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"IsClientFault", {}, {::i2c::type_of<::System::Net::SecurityStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.get_ContextRelativeDemandCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ContextCallback* (*)()>(&::System::Net::NclUtilities::get_ContextRelativeDemandCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xac59834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"get_ContextRelativeDemandCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.DemandCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Net::NclUtilities::DemandCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac598fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"DemandCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.GuessWhetherHostIsLoopback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::NclUtilities::GuessWhetherHostIsLoopback)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xac59900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"GuessWhetherHostIsLoopback", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.IsFatal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Exception*)>(&::System::Net::NclUtilities::IsFatal)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xac59998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"IsFatal", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.IsAddressLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::IPAddress*)>(&::System::Net::NclUtilities::IsAddressLocal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac59a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"IsAddressLocal", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.GetLocalHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)()>(&::System::Net::NclUtilities::GetLocalHost)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xac59fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"GetLocalHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.get_LocalAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::IPAddress*> (*)()>(&::System::Net::NclUtilities::get_LocalAddresses)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0xac59af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"get_LocalAddresses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.get_LocalAddressesLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)()>(&::System::Net::NclUtilities::get_LocalAddressesLock)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac5a028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"get_LocalAddressesLock", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::NclUtilities::setStaticF_s_ContextRelativeDemandCallback(::System::Threading::ContextCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "s_ContextRelativeDemandCallback", ::System::Net::NclUtilities*>(std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Net::NclUtilities::getStaticF_s_ContextRelativeDemandCallback()  {
return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "s_ContextRelativeDemandCallback", ::System::Net::NclUtilities*>();
}
inline void System::Net::NclUtilities::setStaticF__LocalAddresses(::ArrayW<::System::Net::IPAddress*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Net::IPAddress*>, "_LocalAddresses", ::System::Net::NclUtilities*>(std::forward<::ArrayW<::System::Net::IPAddress*>>(value));
}
inline ::ArrayW<::System::Net::IPAddress*> System::Net::NclUtilities::getStaticF__LocalAddresses()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Net::IPAddress*>, "_LocalAddresses", ::System::Net::NclUtilities*>();
}
inline void System::Net::NclUtilities::setStaticF__LocalAddressesLock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "_LocalAddressesLock", ::System::Net::NclUtilities*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Net::NclUtilities::getStaticF__LocalAddressesLock()  {
return ::cordl_internals::getStaticField<::System::Object*, "_LocalAddressesLock", ::System::Net::NclUtilities*>();
}
inline void System::Net::NclUtilities::setStaticF__LocalDomainName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_LocalDomainName", ::System::Net::NclUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW System::Net::NclUtilities::getStaticF__LocalDomainName()  {
return ::cordl_internals::getStaticField<::StringW, "_LocalDomainName", ::System::Net::NclUtilities*>();
}
inline bool System::Net::NclUtilities::IsThreadPoolLow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"IsThreadPoolLow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::Net::NclUtilities::get_HasShutdownStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"get_HasShutdownStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::Net::NclUtilities::IsCredentialFailure(::System::Net::SecurityStatus  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"IsCredentialFailure", {}, {::i2c::type_of<::System::Net::SecurityStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, error);
}
inline bool System::Net::NclUtilities::IsClientFault(::System::Net::SecurityStatus  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"IsClientFault", {}, {::i2c::type_of<::System::Net::SecurityStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, error);
}
inline ::System::Threading::ContextCallback* System::Net::NclUtilities::get_ContextRelativeDemandCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"get_ContextRelativeDemandCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::ContextCallback*>(nullptr, ___internal_method);
}
inline void System::Net::NclUtilities::DemandCallback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"DemandCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline bool System::Net::NclUtilities::GuessWhetherHostIsLoopback(::StringW  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"GuessWhetherHostIsLoopback", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, host);
}
inline bool System::Net::NclUtilities::IsFatal(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"IsFatal", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exception);
}
inline bool System::Net::NclUtilities::IsAddressLocal(::System::Net::IPAddress*  ipAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"IsAddressLocal", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ipAddress);
}
inline ::System::Net::IPHostEntry* System::Net::NclUtilities::GetLocalHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"GetLocalHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method);
}
inline ::ArrayW<::System::Net::IPAddress*> System::Net::NclUtilities::get_LocalAddresses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"get_LocalAddresses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*>>(nullptr, ___internal_method);
}
inline ::System::Object* System::Net::NclUtilities::get_LocalAddressesLock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NclUtilities*>(),
                        {"get_LocalAddressesLock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NclUtilities::NclUtilities()   {
}

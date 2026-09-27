#pragma once
// IWYU pragma private; include "System/Net/Dns.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__Dns_def.hpp"
#include "System/Net/zzzz__Dns_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPHostEntry_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Dns.BeginGetHostByName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Dns::BeginGetHostByName)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xac8f368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"BeginGetHostByName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.BeginResolve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Dns::BeginResolve)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xac8f528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"BeginResolve", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.BeginGetHostAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Dns::BeginGetHostAddresses)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xac8f6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"BeginGetHostAddresses", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.BeginGetHostEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Dns::BeginGetHostEntry)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xac8f940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"BeginGetHostEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.BeginGetHostEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (*)(::System::Net::IPAddress*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Dns::BeginGetHostEntry)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xac8fb98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"BeginGetHostEntry", {}, {::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.EndGetHostByName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::System::IAsyncResult*)>(&::System::Net::Dns::EndGetHostByName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xac8fdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"EndGetHostByName", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.EndResolve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::System::IAsyncResult*)>(&::System::Net::Dns::EndResolve)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xac8fec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"EndResolve", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.EndGetHostAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::IPAddress*> (*)(::System::IAsyncResult*)>(&::System::Net::Dns::EndGetHostAddresses)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xac8ffd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"EndGetHostAddresses", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.EndGetHostEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::System::IAsyncResult*)>(&::System::Net::Dns::EndGetHostEntry)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xac900ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"EndGetHostEntry", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostByName_icall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::ArrayW<::StringW>>, ::by_ref<::ArrayW<::StringW>>, int32_t)>(&::System::Net::Dns::GetHostByName_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac90268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostByName_icall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostByAddr_icall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::ArrayW<::StringW>>, ::by_ref<::ArrayW<::StringW>>, int32_t)>(&::System::Net::Dns::GetHostByAddr_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac9026c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostByAddr_icall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostName_icall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::StringW>)>(&::System::Net::Dns::GetHostName_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac90270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostName_icall", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.Error_11001
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Net::Dns::Error_11001)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xac90274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"Error_11001", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.hostent_to_IPHostEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::StringW, ::StringW, ::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&::System::Net::Dns::hostent_to_IPHostEntry)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0xac902d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"hostent_to_IPHostEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostByAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::System::Net::IPAddress*)>(&::System::Net::Dns::GetHostByAddress)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xac9063c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostByAddress", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostByAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::StringW)>(&::System::Net::Dns::GetHostByAddress)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xac9087c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostByAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostByAddressFromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::StringW, bool)>(&::System::Net::Dns::GetHostByAddressFromString)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xac906f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostByAddressFromString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::StringW)>(&::System::Net::Dns::GetHostEntry)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xac90920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::System::Net::IPAddress*)>(&::System::Net::Dns::GetHostEntry)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xac90ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostEntry", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::IPAddress*> (*)(::StringW)>(&::System::Net::Dns::GetHostAddresses)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xac90cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostAddresses", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostByName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::StringW)>(&::System::Net::Dns::GetHostByName)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xac90b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostByName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Net::Dns::GetHostName)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xac90ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.Resolve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (*)(::StringW)>(&::System::Net::Dns::Resolve)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xac90f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"Resolve", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostAddressesAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*>>* (*)(::StringW)>(&::System::Net::Dns::GetHostAddressesAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xac9108c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostAddressesAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostEntryAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::IPHostEntry*>* (*)(::System::Net::IPAddress*)>(&::System::Net::Dns::GetHostEntryAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xac911a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostEntryAsync", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns.GetHostEntryAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::IPHostEntry*>* (*)(::StringW)>(&::System::Net::Dns::GetHostEntryAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xac912c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostEntryAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IAsyncResult* System::Net::Dns::BeginGetHostByName(::StringW  hostName, ::System::AsyncCallback*  requestCallback, ::System::Object*  stateObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"BeginGetHostByName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(nullptr, ___internal_method, hostName, requestCallback, stateObject);
}
inline ::System::IAsyncResult* System::Net::Dns::BeginResolve(::StringW  hostName, ::System::AsyncCallback*  requestCallback, ::System::Object*  stateObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"BeginResolve", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(nullptr, ___internal_method, hostName, requestCallback, stateObject);
}
inline ::System::IAsyncResult* System::Net::Dns::BeginGetHostAddresses(::StringW  hostNameOrAddress, ::System::AsyncCallback*  requestCallback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"BeginGetHostAddresses", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(nullptr, ___internal_method, hostNameOrAddress, requestCallback, state);
}
inline ::System::IAsyncResult* System::Net::Dns::BeginGetHostEntry(::StringW  hostNameOrAddress, ::System::AsyncCallback*  requestCallback, ::System::Object*  stateObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"BeginGetHostEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(nullptr, ___internal_method, hostNameOrAddress, requestCallback, stateObject);
}
inline ::System::IAsyncResult* System::Net::Dns::BeginGetHostEntry(::System::Net::IPAddress*  address, ::System::AsyncCallback*  requestCallback, ::System::Object*  stateObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"BeginGetHostEntry", {}, {::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(nullptr, ___internal_method, address, requestCallback, stateObject);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::EndGetHostByName(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"EndGetHostByName", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, asyncResult);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::EndResolve(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"EndResolve", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, asyncResult);
}
inline ::ArrayW<::System::Net::IPAddress*> System::Net::Dns::EndGetHostAddresses(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"EndGetHostAddresses", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*>>(nullptr, ___internal_method, asyncResult);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::EndGetHostEntry(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"EndGetHostEntry", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, asyncResult);
}
inline bool System::Net::Dns::GetHostByName_icall(::StringW  host, ::by_ref<::StringW>  h_name, ::by_ref<::ArrayW<::StringW>>  h_aliases, ::by_ref<::ArrayW<::StringW>>  h_addr_list, int32_t  hint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostByName_icall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, host, h_name, h_aliases, h_addr_list, hint);
}
inline bool System::Net::Dns::GetHostByAddr_icall(::StringW  addr, ::by_ref<::StringW>  h_name, ::by_ref<::ArrayW<::StringW>>  h_aliases, ::by_ref<::ArrayW<::StringW>>  h_addr_list, int32_t  hint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostByAddr_icall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, addr, h_name, h_aliases, h_addr_list, hint);
}
inline bool System::Net::Dns::GetHostName_icall(::by_ref<::StringW>  h_name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostName_icall", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, h_name);
}
inline void System::Net::Dns::Error_11001(::StringW  hostName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"Error_11001", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hostName);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::hostent_to_IPHostEntry(::StringW  originalHostName, ::StringW  h_name, ::ArrayW<::StringW>  h_aliases, ::ArrayW<::StringW>  h_addrlist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"hostent_to_IPHostEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, originalHostName, h_name, h_aliases, h_addrlist);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::GetHostByAddress(::System::Net::IPAddress*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostByAddress", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, address);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::GetHostByAddress(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostByAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, address);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::GetHostByAddressFromString(::StringW  address, bool  parse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostByAddressFromString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, address, parse);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::GetHostEntry(::StringW  hostNameOrAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, hostNameOrAddress);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::GetHostEntry(::System::Net::IPAddress*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostEntry", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, address);
}
inline ::ArrayW<::System::Net::IPAddress*> System::Net::Dns::GetHostAddresses(::StringW  hostNameOrAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostAddresses", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*>>(nullptr, ___internal_method, hostNameOrAddress);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::GetHostByName(::StringW  hostName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostByName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, hostName);
}
inline ::StringW System::Net::Dns::GetHostName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::System::Net::IPHostEntry* System::Net::Dns::Resolve(::StringW  hostName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"Resolve", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(nullptr, ___internal_method, hostName);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*>>* System::Net::Dns::GetHostAddressesAsync(::StringW  hostNameOrAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostAddressesAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*>>*>(nullptr, ___internal_method, hostNameOrAddress);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::IPHostEntry*>* System::Net::Dns::GetHostEntryAsync(::System::Net::IPAddress*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostEntryAsync", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::IPHostEntry*>*>(nullptr, ___internal_method, address);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::IPHostEntry*>* System::Net::Dns::GetHostEntryAsync(::StringW  hostNameOrAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns*>(),
                        {"GetHostEntryAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::IPHostEntry*>*>(nullptr, ___internal_method, hostNameOrAddress);
}
// Ctor Parameters []
constexpr ::System::Net::Dns::Dns()   {
}
//  Writing Method size for method: ::System::Net::Dns_GetHostAddressesCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Dns_GetHostAddressesCallback::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::Dns_GetHostAddressesCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac8f870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostAddressesCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::IPAddress*> (::System::Net::Dns_GetHostAddressesCallback::*)(::StringW)>(&::System::Net::Dns_GetHostAddressesCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac91430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(),
                    {::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostAddressesCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Dns_GetHostAddressesCallback::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Dns_GetHostAddressesCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac8f920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(),
                    {::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostAddressesCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::IPAddress*> (::System::Net::Dns_GetHostAddressesCallback::*)(::System::IAsyncResult*)>(&::System::Net::Dns_GetHostAddressesCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac900e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(),
                    {::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Dns_GetHostAddressesCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::ArrayW<::System::Net::IPAddress*> System::Net::Dns_GetHostAddressesCallback::Invoke(::StringW  hostName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*>>(this, ___internal_method, hostName);
}
inline ::System::IAsyncResult* System::Net::Dns_GetHostAddressesCallback::BeginInvoke(::StringW  hostName, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hostName, callback, object);
}
inline ::ArrayW<::System::Net::IPAddress*> System::Net::Dns_GetHostAddressesCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Dns_GetHostAddressesCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*>>(this, ___internal_method, result);
}
inline ::System::Net::Dns_GetHostAddressesCallback* System::Net::Dns_GetHostAddressesCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Dns_GetHostAddressesCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::Dns_GetHostAddressesCallback::Dns_GetHostAddressesCallback()   {
}
//  Writing Method size for method: ::System::Net::Dns_GetHostEntryIPCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Dns_GetHostEntryIPCallback::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::Dns_GetHostEntryIPCallback::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xac8fc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns_GetHostEntryIPCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostEntryIPCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (::System::Net::Dns_GetHostEntryIPCallback::*)(::System::Net::IPAddress*)>(&::System::Net::Dns_GetHostEntryIPCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac9141c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Dns_GetHostEntryIPCallback*>(),
                    {::i2c::class_of<::System::Net::Dns_GetHostEntryIPCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostEntryIPCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Dns_GetHostEntryIPCallback::*)(::System::Net::IPAddress*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Dns_GetHostEntryIPCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac8fd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Dns_GetHostEntryIPCallback*>(),
                    {::i2c::class_of<::System::Net::Dns_GetHostEntryIPCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostEntryIPCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (::System::Net::Dns_GetHostEntryIPCallback::*)(::System::IAsyncResult*)>(&::System::Net::Dns_GetHostEntryIPCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac90250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Dns_GetHostEntryIPCallback*>(),
                    {::i2c::class_of<::System::Net::Dns_GetHostEntryIPCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Dns_GetHostEntryIPCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns_GetHostEntryIPCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Net::IPHostEntry* System::Net::Dns_GetHostEntryIPCallback::Invoke(::System::Net::IPAddress*  hostAddress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Dns_GetHostEntryIPCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(this, ___internal_method, hostAddress);
}
inline ::System::IAsyncResult* System::Net::Dns_GetHostEntryIPCallback::BeginInvoke(::System::Net::IPAddress*  hostAddress, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Dns_GetHostEntryIPCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hostAddress, callback, object);
}
inline ::System::Net::IPHostEntry* System::Net::Dns_GetHostEntryIPCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Dns_GetHostEntryIPCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(this, ___internal_method, result);
}
inline ::System::Net::Dns_GetHostEntryIPCallback* System::Net::Dns_GetHostEntryIPCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Dns_GetHostEntryIPCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::Dns_GetHostEntryIPCallback::Dns_GetHostEntryIPCallback()   {
}
//  Writing Method size for method: ::System::Net::Dns_GetHostEntryNameCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Dns_GetHostEntryNameCallback::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::Dns_GetHostEntryNameCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac8fac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns_GetHostEntryNameCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostEntryNameCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (::System::Net::Dns_GetHostEntryNameCallback::*)(::StringW)>(&::System::Net::Dns_GetHostEntryNameCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac91408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Dns_GetHostEntryNameCallback*>(),
                    {::i2c::class_of<::System::Net::Dns_GetHostEntryNameCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostEntryNameCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Dns_GetHostEntryNameCallback::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Dns_GetHostEntryNameCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac8fb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Dns_GetHostEntryNameCallback*>(),
                    {::i2c::class_of<::System::Net::Dns_GetHostEntryNameCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostEntryNameCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (::System::Net::Dns_GetHostEntryNameCallback::*)(::System::IAsyncResult*)>(&::System::Net::Dns_GetHostEntryNameCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac9025c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Dns_GetHostEntryNameCallback*>(),
                    {::i2c::class_of<::System::Net::Dns_GetHostEntryNameCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Dns_GetHostEntryNameCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns_GetHostEntryNameCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Net::IPHostEntry* System::Net::Dns_GetHostEntryNameCallback::Invoke(::StringW  hostName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Dns_GetHostEntryNameCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(this, ___internal_method, hostName);
}
inline ::System::IAsyncResult* System::Net::Dns_GetHostEntryNameCallback::BeginInvoke(::StringW  hostName, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Dns_GetHostEntryNameCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hostName, callback, object);
}
inline ::System::Net::IPHostEntry* System::Net::Dns_GetHostEntryNameCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Dns_GetHostEntryNameCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(this, ___internal_method, result);
}
inline ::System::Net::Dns_GetHostEntryNameCallback* System::Net::Dns_GetHostEntryNameCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Dns_GetHostEntryNameCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::Dns_GetHostEntryNameCallback::Dns_GetHostEntryNameCallback()   {
}
//  Writing Method size for method: ::System::Net::Dns_ResolveCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Dns_ResolveCallback::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::Dns_ResolveCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac8f618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns_ResolveCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_ResolveCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (::System::Net::Dns_ResolveCallback::*)(::StringW)>(&::System::Net::Dns_ResolveCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac913f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Dns_ResolveCallback*>(),
                    {::i2c::class_of<::System::Net::Dns_ResolveCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_ResolveCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Dns_ResolveCallback::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Dns_ResolveCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac8f6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Dns_ResolveCallback*>(),
                    {::i2c::class_of<::System::Net::Dns_ResolveCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_ResolveCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (::System::Net::Dns_ResolveCallback::*)(::System::IAsyncResult*)>(&::System::Net::Dns_ResolveCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac8ffcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Dns_ResolveCallback*>(),
                    {::i2c::class_of<::System::Net::Dns_ResolveCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Dns_ResolveCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns_ResolveCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Net::IPHostEntry* System::Net::Dns_ResolveCallback::Invoke(::StringW  hostName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Dns_ResolveCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(this, ___internal_method, hostName);
}
inline ::System::IAsyncResult* System::Net::Dns_ResolveCallback::BeginInvoke(::StringW  hostName, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Dns_ResolveCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hostName, callback, object);
}
inline ::System::Net::IPHostEntry* System::Net::Dns_ResolveCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Dns_ResolveCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(this, ___internal_method, result);
}
inline ::System::Net::Dns_ResolveCallback* System::Net::Dns_ResolveCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Dns_ResolveCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::Dns_ResolveCallback::Dns_ResolveCallback()   {
}
//  Writing Method size for method: ::System::Net::Dns_GetHostByNameCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Dns_GetHostByNameCallback::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::Dns_GetHostByNameCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac8f458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns_GetHostByNameCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostByNameCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (::System::Net::Dns_GetHostByNameCallback::*)(::StringW)>(&::System::Net::Dns_GetHostByNameCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac913e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Dns_GetHostByNameCallback*>(),
                    {::i2c::class_of<::System::Net::Dns_GetHostByNameCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostByNameCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Dns_GetHostByNameCallback::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Dns_GetHostByNameCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac8f508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Dns_GetHostByNameCallback*>(),
                    {::i2c::class_of<::System::Net::Dns_GetHostByNameCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Dns_GetHostByNameCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPHostEntry* (::System::Net::Dns_GetHostByNameCallback::*)(::System::IAsyncResult*)>(&::System::Net::Dns_GetHostByNameCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac8feb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Dns_GetHostByNameCallback*>(),
                    {::i2c::class_of<::System::Net::Dns_GetHostByNameCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Dns_GetHostByNameCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Dns_GetHostByNameCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Net::IPHostEntry* System::Net::Dns_GetHostByNameCallback::Invoke(::StringW  hostName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Dns_GetHostByNameCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(this, ___internal_method, hostName);
}
inline ::System::IAsyncResult* System::Net::Dns_GetHostByNameCallback::BeginInvoke(::StringW  hostName, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Dns_GetHostByNameCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hostName, callback, object);
}
inline ::System::Net::IPHostEntry* System::Net::Dns_GetHostByNameCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Dns_GetHostByNameCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*>(this, ___internal_method, result);
}
inline ::System::Net::Dns_GetHostByNameCallback* System::Net::Dns_GetHostByNameCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Dns_GetHostByNameCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::Dns_GetHostByNameCallback::Dns_GetHostByNameCallback()   {
}

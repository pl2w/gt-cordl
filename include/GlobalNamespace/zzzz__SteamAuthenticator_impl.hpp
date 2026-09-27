#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamAuthenticator.hpp"
#include "Steamworks/zzzz__HAuthTicket_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SteamAuthenticator_def.hpp"
#include "GlobalNamespace/zzzz__SteamAuthenticator_def.hpp"
#include "Steamworks/zzzz__Callback_1_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__GetAuthSessionTicketResponse_t_def.hpp"
#include "Steamworks/zzzz__GetTicketForWebApiResponse_t_def.hpp"
#include "Steamworks/zzzz__HAuthTicket_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SteamAuthenticator.GetAuthTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HAuthTicket (::GlobalNamespace::SteamAuthenticator::*)(::System::Action_1<::StringW>*, ::System::Action_1<::Steamworks::EResult>*)>(&::GlobalNamespace::SteamAuthenticator::GetAuthTicket)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5ab281c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthenticator*>(),
                        {"GetAuthTicket", {}, {::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::Steamworks::EResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamAuthenticator.GetAuthTicketForWebApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HAuthTicket (::GlobalNamespace::SteamAuthenticator::*)(::StringW, ::System::Action_1<::StringW>*, ::System::Action_1<::Steamworks::EResult>*)>(&::GlobalNamespace::SteamAuthenticator::GetAuthTicketForWebApi)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5ab2a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthenticator*>(),
                        {"GetAuthTicketForWebApi", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::Steamworks::EResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamAuthenticator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamAuthenticator::*)()>(&::GlobalNamespace::SteamAuthenticator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab2bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::HAuthTicket GlobalNamespace::SteamAuthenticator::GetAuthTicket(::System::Action_1<::StringW>*  successCallback, ::System::Action_1<::Steamworks::EResult>*  failureCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthenticator*>(),
                        {"GetAuthTicket", {}, {::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::Steamworks::EResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HAuthTicket>(this, ___internal_method, successCallback, failureCallback);
}
inline ::Steamworks::HAuthTicket GlobalNamespace::SteamAuthenticator::GetAuthTicketForWebApi(::StringW  authenticatorId, ::System::Action_1<::StringW>*  successCallback, ::System::Action_1<::Steamworks::EResult>*  failureCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthenticator*>(),
                        {"GetAuthTicketForWebApi", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::Steamworks::EResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HAuthTicket>(this, ___internal_method, authenticatorId, successCallback, failureCallback);
}
inline void GlobalNamespace::SteamAuthenticator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SteamAuthenticator* GlobalNamespace::SteamAuthenticator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteamAuthenticator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamAuthenticator::SteamAuthenticator()   {
}
//  Writing Method size for method: ::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::*)()>(&::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab2be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0._GetAuthTicketForWebApi_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::*)(::Steamworks::GetTicketForWebApiResponse_t)>(&::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::_GetAuthTicketForWebApi_b__0)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5ab2dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0*>(),
                        {"<GetAuthTicketForWebApi>b__0", {}, {::i2c::type_of<::Steamworks::GetTicketForWebApiResponse_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Steamworks::HAuthTicket& GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::__cordl_internal_get_ticketHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticketHandle;
}
constexpr ::Steamworks::HAuthTicket const& GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::__cordl_internal_get_ticketHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticketHandle;
}
constexpr void GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::__cordl_internal_set_ticketHandle(::Steamworks::HAuthTicket  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ticketHandle = value;
}
constexpr ::Steamworks::Callback_1<::Steamworks::GetTicketForWebApiResponse_t>*& GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::__cordl_internal_get_ticketCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticketCallback;
}
constexpr ::Steamworks::Callback_1<::Steamworks::GetTicketForWebApiResponse_t>* const& GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::__cordl_internal_get_ticketCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticketCallback;
}
constexpr void GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::__cordl_internal_set_ticketCallback(::Steamworks::Callback_1<::Steamworks::GetTicketForWebApiResponse_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ticketCallback = value;
}
constexpr ::System::Action_1<::Steamworks::EResult>*& GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::__cordl_internal_get_failureCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureCallback;
}
constexpr ::System::Action_1<::Steamworks::EResult>* const& GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::__cordl_internal_get_failureCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureCallback;
}
constexpr void GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::__cordl_internal_set_failureCallback(::System::Action_1<::Steamworks::EResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failureCallback = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::__cordl_internal_get_successCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::__cordl_internal_get_successCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr void GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::__cordl_internal_set_successCallback(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successCallback = value;
}
inline void GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::_GetAuthTicketForWebApi_b__0(::Steamworks::GetTicketForWebApiResponse_t  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0*>(),
                        {"<GetAuthTicketForWebApi>b__0", {}, {::i2c::type_of<::Steamworks::GetTicketForWebApiResponse_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline ::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0* GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0::SteamAuthenticator___c__DisplayClass1_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::*)()>(&::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab2a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0._GetAuthTicket_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::*)(::Steamworks::GetAuthSessionTicketResponse_t)>(&::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::_GetAuthTicket_b__0)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5ab2bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0*>(),
                        {"<GetAuthTicket>b__0", {}, {::i2c::type_of<::Steamworks::GetAuthSessionTicketResponse_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Steamworks::HAuthTicket& GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_get_ticketHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticketHandle;
}
constexpr ::Steamworks::HAuthTicket const& GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_get_ticketHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticketHandle;
}
constexpr void GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_set_ticketHandle(::Steamworks::HAuthTicket  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ticketHandle = value;
}
constexpr ::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>*& GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_get_ticketCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticketCallback;
}
constexpr ::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>* const& GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_get_ticketCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticketCallback;
}
constexpr void GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_set_ticketCallback(::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ticketCallback = value;
}
constexpr ::System::Action_1<::Steamworks::EResult>*& GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_get_failureCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureCallback;
}
constexpr ::System::Action_1<::Steamworks::EResult>* const& GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_get_failureCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureCallback;
}
constexpr void GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_set_failureCallback(::System::Action_1<::Steamworks::EResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failureCallback = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_get_ticketBlob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticketBlob;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_get_ticketBlob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticketBlob;
}
constexpr void GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_set_ticketBlob(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ticketBlob = value;
}
constexpr uint32_t& GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_get_ticketSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticketSize;
}
constexpr uint32_t const& GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_get_ticketSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ticketSize;
}
constexpr void GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_set_ticketSize(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ticketSize = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_get_successCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_get_successCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr void GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::__cordl_internal_set_successCallback(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successCallback = value;
}
inline void GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::_GetAuthTicket_b__0(::Steamworks::GetAuthSessionTicketResponse_t  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0*>(),
                        {"<GetAuthTicket>b__0", {}, {::i2c::type_of<::Steamworks::GetAuthSessionTicketResponse_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline ::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0* GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0::SteamAuthenticator___c__DisplayClass0_0()   {
}

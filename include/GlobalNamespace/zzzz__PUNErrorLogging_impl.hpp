#pragma once
// IWYU pragma private; include "GlobalNamespace/PUNErrorLogging.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PUNErrorLogging_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "GlobalNamespace/zzzz__PUNErrorLogging_LogFlags_def.hpp"
#include "GlobalNamespace/zzzz__PUNErrorLogging_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PUNErrorLogging.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNErrorLogging::*)()>(&::GlobalNamespace::PUNErrorLogging::Start)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5ac2054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNErrorLogging*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNErrorLogging.PUNError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNErrorLogging::*)(::ExitGames::Client::Photon::EventData*, ::System::Exception*)>(&::GlobalNamespace::PUNErrorLogging::PUNError)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5ac22d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNErrorLogging*>(),
                        {"PUNError", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNErrorLogging.PrintException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNErrorLogging::*)(::System::Exception*, bool)>(&::GlobalNamespace::PUNErrorLogging::PrintException)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ac2420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNErrorLogging*>(),
                        {"PrintException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNErrorLogging._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNErrorLogging::*)()>(&::GlobalNamespace::PUNErrorLogging::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ac248c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNErrorLogging*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNErrorLogging._Start_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNErrorLogging::*)(::StringW)>(&::GlobalNamespace::PUNErrorLogging::_Start_b__9_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ac249c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNErrorLogging*>(),
                        {"<Start>b__9_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logSerializeView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logSerializeView;
}
constexpr bool const& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logSerializeView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logSerializeView;
}
constexpr void GlobalNamespace::PUNErrorLogging::__cordl_internal_set_m_logSerializeView(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_logSerializeView = value;
}
constexpr bool& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logOwnershipTransfer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logOwnershipTransfer;
}
constexpr bool const& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logOwnershipTransfer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logOwnershipTransfer;
}
constexpr void GlobalNamespace::PUNErrorLogging::__cordl_internal_set_m_logOwnershipTransfer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_logOwnershipTransfer = value;
}
constexpr bool& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logOwnershipRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logOwnershipRequest;
}
constexpr bool const& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logOwnershipRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logOwnershipRequest;
}
constexpr void GlobalNamespace::PUNErrorLogging::__cordl_internal_set_m_logOwnershipRequest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_logOwnershipRequest = value;
}
constexpr bool& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logOwnershipUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logOwnershipUpdate;
}
constexpr bool const& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logOwnershipUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logOwnershipUpdate;
}
constexpr void GlobalNamespace::PUNErrorLogging::__cordl_internal_set_m_logOwnershipUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_logOwnershipUpdate = value;
}
constexpr bool& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logRPC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logRPC;
}
constexpr bool const& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logRPC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logRPC;
}
constexpr void GlobalNamespace::PUNErrorLogging::__cordl_internal_set_m_logRPC(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_logRPC = value;
}
constexpr bool& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logInstantiate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logInstantiate;
}
constexpr bool const& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logInstantiate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logInstantiate;
}
constexpr void GlobalNamespace::PUNErrorLogging::__cordl_internal_set_m_logInstantiate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_logInstantiate = value;
}
constexpr bool& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logDestroy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logDestroy;
}
constexpr bool const& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logDestroy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logDestroy;
}
constexpr void GlobalNamespace::PUNErrorLogging::__cordl_internal_set_m_logDestroy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_logDestroy = value;
}
constexpr bool& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logDestroyPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logDestroyPlayer;
}
constexpr bool const& GlobalNamespace::PUNErrorLogging::__cordl_internal_get_m_logDestroyPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_logDestroyPlayer;
}
constexpr void GlobalNamespace::PUNErrorLogging::__cordl_internal_set_m_logDestroyPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_logDestroyPlayer = value;
}
inline void GlobalNamespace::PUNErrorLogging::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNErrorLogging*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PUNErrorLogging::PUNError(::ExitGames::Client::Photon::EventData*  data, ::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNErrorLogging*>(),
                        {"PUNError", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, exception);
}
inline void GlobalNamespace::PUNErrorLogging::PrintException(::System::Exception*  e, bool  print)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNErrorLogging*>(),
                        {"PrintException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, print);
}
inline void GlobalNamespace::PUNErrorLogging::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNErrorLogging*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PUNErrorLogging::_Start_b__9_0(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNErrorLogging*>(),
                        {"<Start>b__9_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::PUNErrorLogging* GlobalNamespace::PUNErrorLogging::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PUNErrorLogging*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PUNErrorLogging::PUNErrorLogging()   {
}
//  Writing Method size for method: ::GlobalNamespace::PUNErrorLogging___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNErrorLogging___c::*)()>(&::GlobalNamespace::PUNErrorLogging___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac257c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNErrorLogging___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNErrorLogging___c._Start_b__9_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNErrorLogging___c::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::PUNErrorLogging___c::_Start_b__9_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ac2584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNErrorLogging___c*>(),
                        {"<Start>b__9_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PUNErrorLogging___c::setStaticF___9(::GlobalNamespace::PUNErrorLogging___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PUNErrorLogging___c*, "<>9", ::GlobalNamespace::PUNErrorLogging___c*>(std::forward<::GlobalNamespace::PUNErrorLogging___c*>(value));
}
inline ::GlobalNamespace::PUNErrorLogging___c* GlobalNamespace::PUNErrorLogging___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PUNErrorLogging___c*, "<>9", ::GlobalNamespace::PUNErrorLogging___c*>();
}
inline void GlobalNamespace::PUNErrorLogging___c::setStaticF___9__9_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__9_1", ::GlobalNamespace::PUNErrorLogging___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GlobalNamespace::PUNErrorLogging___c::getStaticF___9__9_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__9_1", ::GlobalNamespace::PUNErrorLogging___c*>();
}
inline void GlobalNamespace::PUNErrorLogging___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNErrorLogging___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PUNErrorLogging___c::_Start_b__9_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNErrorLogging___c*>(),
                        {"<Start>b__9_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GlobalNamespace::PUNErrorLogging___c* GlobalNamespace::PUNErrorLogging___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PUNErrorLogging___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PUNErrorLogging___c::PUNErrorLogging___c()   {
}

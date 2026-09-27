#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PlayerNumbering.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "Photon/Realtime/zzzz__Player_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PlayerNumbering_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PlayerNumbering_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering.add_OnPlayerNumberingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*)>(&::Photon::Pun::UtilityScripts::PlayerNumbering::add_OnPlayerNumberingChanged)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa7371c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(),
                        {"add_OnPlayerNumberingChanged", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering.remove_OnPlayerNumberingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*)>(&::Photon::Pun::UtilityScripts::PlayerNumbering::remove_OnPlayerNumberingChanged)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa737280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(),
                        {"remove_OnPlayerNumberingChanged", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PlayerNumbering::*)()>(&::Photon::Pun::UtilityScripts::PlayerNumbering::Awake)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa73733c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PlayerNumbering::*)()>(&::Photon::Pun::UtilityScripts::PlayerNumbering::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa737c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PlayerNumbering::*)()>(&::Photon::Pun::UtilityScripts::PlayerNumbering::OnLeftRoom)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa737c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PlayerNumbering::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::PlayerNumbering::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa737cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PlayerNumbering::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::PlayerNumbering::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa737ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering.OnPlayerPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PlayerNumbering::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Pun::UtilityScripts::PlayerNumbering::OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa737cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering.RefreshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PlayerNumbering::*)()>(&::Photon::Pun::UtilityScripts::PlayerNumbering::RefreshData)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0xa7374d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(),
                        {"RefreshData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PlayerNumbering::*)()>(&::Photon::Pun::UtilityScripts::PlayerNumbering::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7381bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Photon::Pun::UtilityScripts::PlayerNumbering::__cordl_internal_get_dontDestroyOnLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontDestroyOnLoad;
}
constexpr bool const& Photon::Pun::UtilityScripts::PlayerNumbering::__cordl_internal_get_dontDestroyOnLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontDestroyOnLoad;
}
constexpr void Photon::Pun::UtilityScripts::PlayerNumbering::__cordl_internal_set_dontDestroyOnLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dontDestroyOnLoad = value;
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering::setStaticF_instance(::UnityW<::Photon::Pun::UtilityScripts::PlayerNumbering>  value)  {
::cordl_internals::setStaticField<::UnityW<::Photon::Pun::UtilityScripts::PlayerNumbering>, "instance", ::Photon::Pun::UtilityScripts::PlayerNumbering*>(std::forward<::UnityW<::Photon::Pun::UtilityScripts::PlayerNumbering>>(value));
}
inline ::UnityW<::Photon::Pun::UtilityScripts::PlayerNumbering> Photon::Pun::UtilityScripts::PlayerNumbering::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Photon::Pun::UtilityScripts::PlayerNumbering>, "instance", ::Photon::Pun::UtilityScripts::PlayerNumbering*>();
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering::setStaticF_SortedPlayers(::ArrayW<::Photon::Realtime::Player*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Photon::Realtime::Player*>, "SortedPlayers", ::Photon::Pun::UtilityScripts::PlayerNumbering*>(std::forward<::ArrayW<::Photon::Realtime::Player*>>(value));
}
inline ::ArrayW<::Photon::Realtime::Player*> Photon::Pun::UtilityScripts::PlayerNumbering::getStaticF_SortedPlayers()  {
return ::cordl_internals::getStaticField<::ArrayW<::Photon::Realtime::Player*>, "SortedPlayers", ::Photon::Pun::UtilityScripts::PlayerNumbering*>();
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering::setStaticF_OnPlayerNumberingChanged(::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*  value)  {
::cordl_internals::setStaticField<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*, "OnPlayerNumberingChanged", ::Photon::Pun::UtilityScripts::PlayerNumbering*>(std::forward<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>(value));
}
inline ::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged* Photon::Pun::UtilityScripts::PlayerNumbering::getStaticF_OnPlayerNumberingChanged()  {
return ::cordl_internals::getStaticField<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*, "OnPlayerNumberingChanged", ::Photon::Pun::UtilityScripts::PlayerNumbering*>();
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering::add_OnPlayerNumberingChanged(::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(),
                        {"add_OnPlayerNumberingChanged", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering::remove_OnPlayerNumberingChanged(::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(),
                        {"remove_OnPlayerNumberingChanged", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering::OnJoinedRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering::OnLeftRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering::OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering::OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering::OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, changedProps);
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering::RefreshData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(),
                        {"RefreshData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::PlayerNumbering* Photon::Pun::UtilityScripts::PlayerNumbering::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::PlayerNumbering*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::PlayerNumbering::PlayerNumbering()   {
}
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PlayerNumbering___c::*)()>(&::Photon::Pun::UtilityScripts::PlayerNumbering___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa738304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering___c._RefreshData_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::UtilityScripts::PlayerNumbering___c::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::PlayerNumbering___c::_RefreshData_b__14_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73830c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering___c*>(),
                        {"<RefreshData>b__14_0", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering___c._RefreshData_b__14_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::UtilityScripts::PlayerNumbering___c::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::PlayerNumbering___c::_RefreshData_b__14_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa738314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering___c*>(),
                        {"<RefreshData>b__14_1", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering___c._RefreshData_b__14_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::UtilityScripts::PlayerNumbering___c::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::PlayerNumbering___c::_RefreshData_b__14_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa738328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering___c*>(),
                        {"<RefreshData>b__14_2", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::UtilityScripts::PlayerNumbering___c::setStaticF___9(::Photon::Pun::UtilityScripts::PlayerNumbering___c*  value)  {
::cordl_internals::setStaticField<::Photon::Pun::UtilityScripts::PlayerNumbering___c*, "<>9", ::Photon::Pun::UtilityScripts::PlayerNumbering___c*>(std::forward<::Photon::Pun::UtilityScripts::PlayerNumbering___c*>(value));
}
inline ::Photon::Pun::UtilityScripts::PlayerNumbering___c* Photon::Pun::UtilityScripts::PlayerNumbering___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Photon::Pun::UtilityScripts::PlayerNumbering___c*, "<>9", ::Photon::Pun::UtilityScripts::PlayerNumbering___c*>();
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering___c::setStaticF___9__14_0(::System::Func_2<::Photon::Realtime::Player*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Photon::Realtime::Player*,int32_t>*, "<>9__14_0", ::Photon::Pun::UtilityScripts::PlayerNumbering___c*>(std::forward<::System::Func_2<::Photon::Realtime::Player*,int32_t>*>(value));
}
inline ::System::Func_2<::Photon::Realtime::Player*,int32_t>* Photon::Pun::UtilityScripts::PlayerNumbering___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Photon::Realtime::Player*,int32_t>*, "<>9__14_0", ::Photon::Pun::UtilityScripts::PlayerNumbering___c*>();
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering___c::setStaticF___9__14_1(::System::Func_2<::Photon::Realtime::Player*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Photon::Realtime::Player*,int32_t>*, "<>9__14_1", ::Photon::Pun::UtilityScripts::PlayerNumbering___c*>(std::forward<::System::Func_2<::Photon::Realtime::Player*,int32_t>*>(value));
}
inline ::System::Func_2<::Photon::Realtime::Player*,int32_t>* Photon::Pun::UtilityScripts::PlayerNumbering___c::getStaticF___9__14_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Photon::Realtime::Player*,int32_t>*, "<>9__14_1", ::Photon::Pun::UtilityScripts::PlayerNumbering___c*>();
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering___c::setStaticF___9__14_2(::System::Func_2<::Photon::Realtime::Player*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Photon::Realtime::Player*,int32_t>*, "<>9__14_2", ::Photon::Pun::UtilityScripts::PlayerNumbering___c*>(std::forward<::System::Func_2<::Photon::Realtime::Player*,int32_t>*>(value));
}
inline ::System::Func_2<::Photon::Realtime::Player*,int32_t>* Photon::Pun::UtilityScripts::PlayerNumbering___c::getStaticF___9__14_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Photon::Realtime::Player*,int32_t>*, "<>9__14_2", ::Photon::Pun::UtilityScripts::PlayerNumbering___c*>();
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Photon::Pun::UtilityScripts::PlayerNumbering___c::_RefreshData_b__14_0(::Photon::Realtime::Player*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering___c*>(),
                        {"<RefreshData>b__14_0", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline int32_t Photon::Pun::UtilityScripts::PlayerNumbering___c::_RefreshData_b__14_1(::Photon::Realtime::Player*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering___c*>(),
                        {"<RefreshData>b__14_1", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline int32_t Photon::Pun::UtilityScripts::PlayerNumbering___c::_RefreshData_b__14_2(::Photon::Realtime::Player*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering___c*>(),
                        {"<RefreshData>b__14_2", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline ::Photon::Pun::UtilityScripts::PlayerNumbering___c* Photon::Pun::UtilityScripts::PlayerNumbering___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::PlayerNumbering___c*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::PlayerNumbering___c::PlayerNumbering___c()   {
}
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged::*)(::System::Object*, ::System::IntPtr)>(&::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa7381c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged::*)()>(&::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa738260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged::*)(::System::AsyncCallback*, ::System::Object*)>(&::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa738274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged::*)(::System::IAsyncResult*)>(&::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa738290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged* Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*>(object, method));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged::PlayerNumbering_PlayerNumberingChanged()   {
}

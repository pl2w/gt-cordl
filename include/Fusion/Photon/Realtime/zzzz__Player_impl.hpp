#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Player.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__Player_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__Room_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__WebFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.get_RoomReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::Room* (::Fusion::Photon::Realtime::Player::*)()>(&::Fusion::Photon::Realtime::Player::get_RoomReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_RoomReference", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.set_RoomReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Player::*)(::Fusion::Photon::Realtime::Room*)>(&::Fusion::Photon::Realtime::Player::set_RoomReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"set_RoomReference", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Room*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.get_ActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::Player::*)()>(&::Fusion::Photon::Realtime::Player::get_ActorNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_ActorNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.get_HasRejoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Player::*)()>(&::Fusion::Photon::Realtime::Player::get_HasRejoined)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_HasRejoined", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.set_HasRejoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Player::*)(bool)>(&::Fusion::Photon::Realtime::Player::set_HasRejoined)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"set_HasRejoined", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.get_NickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::Player::*)()>(&::Fusion::Photon::Realtime::Player::get_NickName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_NickName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.set_NickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Player::*)(::StringW)>(&::Fusion::Photon::Realtime::Player::set_NickName)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f5f05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"set_NickName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::Player::*)()>(&::Fusion::Photon::Realtime::Player::get_UserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.set_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Player::*)(::StringW)>(&::Fusion::Photon::Realtime::Player::set_UserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"set_UserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.get_IsMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Player::*)()>(&::Fusion::Photon::Realtime::Player::get_IsMasterClient)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f5f194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_IsMasterClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.get_IsInactive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Player::*)()>(&::Fusion::Photon::Realtime::Player::get_IsInactive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_IsInactive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.set_IsInactive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Player::*)(bool)>(&::Fusion::Photon::Realtime::Player::set_IsInactive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"set_IsInactive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.get_CustomProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::Hashtable* (::Fusion::Photon::Realtime::Player::*)()>(&::Fusion::Photon::Realtime::Player::get_CustomProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_CustomProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.set_CustomProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Player::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Fusion::Photon::Realtime::Player::set_CustomProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"set_CustomProperties", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Player::*)(::StringW, int32_t, bool)>(&::Fusion::Photon::Realtime::Player::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Player::*)(::StringW, int32_t, bool, ::ExitGames::Client::Photon::Hashtable*)>(&::Fusion::Photon::Realtime::Player::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f5f1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::Player* (::Fusion::Photon::Realtime::Player::*)(int32_t)>(&::Fusion::Photon::Realtime::Player::Get)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f5f2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.GetNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::Player* (::Fusion::Photon::Realtime::Player::*)()>(&::Fusion::Photon::Realtime::Player::GetNext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"GetNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.GetNextFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::Player* (::Fusion::Photon::Realtime::Player::*)(::Fusion::Photon::Realtime::Player*)>(&::Fusion::Photon::Realtime::Player::GetNextFor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f5f4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"GetNextFor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.GetNextFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::Player* (::Fusion::Photon::Realtime::Player::*)(int32_t)>(&::Fusion::Photon::Realtime::Player::GetNextFor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5f5f2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"GetNextFor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.InternalCacheProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Player::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Fusion::Photon::Realtime::Player::InternalCacheProperties)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5f5f4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::Player*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::Player::*)()>(&::Fusion::Photon::Realtime::Player::ToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f5f6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::Player*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.ToStringFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::Player::*)()>(&::Fusion::Photon::Realtime::Player::ToStringFull)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5f5f734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"ToStringFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Player::*)(::System::Object*)>(&::Fusion::Photon::Realtime::Player::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f5f934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::Player*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::Player::*)()>(&::Fusion::Photon::Realtime::Player::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::Player*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.ChangeLocalID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Player::*)(int32_t)>(&::Fusion::Photon::Realtime::Player::ChangeLocalID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f5f9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"ChangeLocalID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.SetCustomProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Player::*)(::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Fusion::Photon::Realtime::WebFlags*)>(&::Fusion::Photon::Realtime::Player::SetCustomProperties)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5f5f9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"SetCustomProperties", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Fusion::Photon::Realtime::WebFlags*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.UpdateNickNameOnJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Player::*)()>(&::Fusion::Photon::Realtime::Player::UpdateNickNameOnJoined)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f5fbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"UpdateNickNameOnJoined", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Player.SetPlayerNameProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Player::*)()>(&::Fusion::Photon::Realtime::Player::SetPlayerNameProperty)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f5f0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"SetPlayerNameProperty", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::Room*& Fusion::Photon::Realtime::Player::__cordl_internal_get__RoomReference_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomReference_k__BackingField;
}
constexpr ::Fusion::Photon::Realtime::Room* const& Fusion::Photon::Realtime::Player::__cordl_internal_get__RoomReference_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomReference_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::Player::__cordl_internal_set__RoomReference_k__BackingField(::Fusion::Photon::Realtime::Room*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RoomReference_k__BackingField = value;
}
constexpr int32_t& Fusion::Photon::Realtime::Player::__cordl_internal_get_actorNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorNumber;
}
constexpr int32_t const& Fusion::Photon::Realtime::Player::__cordl_internal_get_actorNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorNumber;
}
constexpr void Fusion::Photon::Realtime::Player::__cordl_internal_set_actorNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorNumber = value;
}
constexpr bool& Fusion::Photon::Realtime::Player::__cordl_internal_get_IsLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsLocal;
}
constexpr bool const& Fusion::Photon::Realtime::Player::__cordl_internal_get_IsLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsLocal;
}
constexpr void Fusion::Photon::Realtime::Player::__cordl_internal_set_IsLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsLocal = value;
}
constexpr bool& Fusion::Photon::Realtime::Player::__cordl_internal_get__HasRejoined_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasRejoined_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::Player::__cordl_internal_get__HasRejoined_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasRejoined_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::Player::__cordl_internal_set__HasRejoined_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasRejoined_k__BackingField = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::Player::__cordl_internal_get_nickName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nickName;
}
constexpr ::StringW const& Fusion::Photon::Realtime::Player::__cordl_internal_get_nickName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nickName;
}
constexpr void Fusion::Photon::Realtime::Player::__cordl_internal_set_nickName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nickName = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::Player::__cordl_internal_get__UserId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserId_k__BackingField;
}
constexpr ::StringW const& Fusion::Photon::Realtime::Player::__cordl_internal_get__UserId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserId_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::Player::__cordl_internal_set__UserId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UserId_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::Player::__cordl_internal_get__IsInactive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInactive_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::Player::__cordl_internal_get__IsInactive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInactive_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::Player::__cordl_internal_set__IsInactive_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsInactive_k__BackingField = value;
}
constexpr ::ExitGames::Client::Photon::Hashtable*& Fusion::Photon::Realtime::Player::__cordl_internal_get__CustomProperties_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CustomProperties_k__BackingField;
}
constexpr ::ExitGames::Client::Photon::Hashtable* const& Fusion::Photon::Realtime::Player::__cordl_internal_get__CustomProperties_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CustomProperties_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::Player::__cordl_internal_set__CustomProperties_k__BackingField(::ExitGames::Client::Photon::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CustomProperties_k__BackingField = value;
}
constexpr ::System::Object*& Fusion::Photon::Realtime::Player::__cordl_internal_get_TagObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TagObject;
}
constexpr ::System::Object* const& Fusion::Photon::Realtime::Player::__cordl_internal_get_TagObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TagObject;
}
constexpr void Fusion::Photon::Realtime::Player::__cordl_internal_set_TagObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TagObject = value;
}
inline ::Fusion::Photon::Realtime::Room* Fusion::Photon::Realtime::Player::get_RoomReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_RoomReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::Room*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Player::set_RoomReference(::Fusion::Photon::Realtime::Room*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"set_RoomReference", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Room*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Photon::Realtime::Player::get_ActorNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_ActorNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::Player::get_HasRejoined()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_HasRejoined", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Player::set_HasRejoined(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"set_HasRejoined", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::Photon::Realtime::Player::get_NickName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_NickName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Player::set_NickName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"set_NickName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::Photon::Realtime::Player::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Player::set_UserId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"set_UserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::Player::get_IsMasterClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_IsMasterClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::Player::get_IsInactive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_IsInactive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Player::set_IsInactive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"set_IsInactive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::Hashtable* Fusion::Photon::Realtime::Player::get_CustomProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"get_CustomProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::Hashtable*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Player::set_CustomProperties(::ExitGames::Client::Photon::Hashtable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"set_CustomProperties", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::Player::_ctor(::StringW  nickName, int32_t  actorNumber, bool  isLocal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nickName, actorNumber, isLocal);
}
inline void Fusion::Photon::Realtime::Player::_ctor(::StringW  nickName, int32_t  actorNumber, bool  isLocal, ::ExitGames::Client::Photon::Hashtable*  playerProperties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nickName, actorNumber, isLocal, playerProperties);
}
inline ::Fusion::Photon::Realtime::Player* Fusion::Photon::Realtime::Player::Get(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::Player*>(this, ___internal_method, id);
}
inline ::Fusion::Photon::Realtime::Player* Fusion::Photon::Realtime::Player::GetNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"GetNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::Player*>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::Player* Fusion::Photon::Realtime::Player::GetNextFor(::Fusion::Photon::Realtime::Player*  currentPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"GetNextFor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::Player*>(this, ___internal_method, currentPlayer);
}
inline ::Fusion::Photon::Realtime::Player* Fusion::Photon::Realtime::Player::GetNextFor(int32_t  currentPlayerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"GetNextFor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::Player*>(this, ___internal_method, currentPlayerId);
}
inline void Fusion::Photon::Realtime::Player::InternalCacheProperties(::ExitGames::Client::Photon::Hashtable*  properties)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::Player*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties);
}
inline ::StringW Fusion::Photon::Realtime::Player::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::Player*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Fusion::Photon::Realtime::Player::ToStringFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"ToStringFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::Player::Equals(::System::Object*  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::Player*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline int32_t Fusion::Photon::Realtime::Player::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::Player*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Player::ChangeLocalID(int32_t  newID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"ChangeLocalID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newID);
}
inline bool Fusion::Photon::Realtime::Player::SetCustomProperties(::ExitGames::Client::Photon::Hashtable*  propertiesToSet, ::ExitGames::Client::Photon::Hashtable*  expectedValues, ::Fusion::Photon::Realtime::WebFlags*  webFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"SetCustomProperties", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Fusion::Photon::Realtime::WebFlags*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, propertiesToSet, expectedValues, webFlags);
}
inline bool Fusion::Photon::Realtime::Player::UpdateNickNameOnJoined()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"UpdateNickNameOnJoined", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::Player::SetPlayerNameProperty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Player*>(),
                        {"SetPlayerNameProperty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::Player* Fusion::Photon::Realtime::Player::New_ctor(::StringW  nickName, int32_t  actorNumber, bool  isLocal)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Player*>(nickName, actorNumber, isLocal));
}
inline ::Fusion::Photon::Realtime::Player* Fusion::Photon::Realtime::Player::New_ctor(::StringW  nickName, int32_t  actorNumber, bool  isLocal, ::ExitGames::Client::Photon::Hashtable*  playerProperties)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Player*>(nickName, actorNumber, isLocal, playerProperties));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Player::Player()   {
}

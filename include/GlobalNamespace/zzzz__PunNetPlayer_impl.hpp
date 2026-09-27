#pragma once
// IWYU pragma private; include "GlobalNamespace/PunNetPlayer.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_impl.hpp"
#include "GlobalNamespace/zzzz__PunNetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer.get_PlayerRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::Player* (::GlobalNamespace::PunNetPlayer::*)()>(&::GlobalNamespace::PunNetPlayer::get_PlayerRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570d6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                        {"get_PlayerRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer.set_PlayerRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PunNetPlayer::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::PunNetPlayer::set_PlayerRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570d6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                        {"set_PlayerRef", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PunNetPlayer::*)()>(&::GlobalNamespace::PunNetPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570d6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer.InitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PunNetPlayer::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::PunNetPlayer::InitPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570d6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                        {"InitPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PunNetPlayer::*)()>(&::GlobalNamespace::PunNetPlayer::get_IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x570d6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer.get_ActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PunNetPlayer::*)()>(&::GlobalNamespace::PunNetPlayer::get_ActorNumber)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PunNetPlayer::*)()>(&::GlobalNamespace::PunNetPlayer::get_UserId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer.get_IsMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PunNetPlayer::*)()>(&::GlobalNamespace::PunNetPlayer::get_IsMasterClient)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer.get_IsLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PunNetPlayer::*)()>(&::GlobalNamespace::PunNetPlayer::get_IsLocal)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x570d730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer.get_IsNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PunNetPlayer::*)()>(&::GlobalNamespace::PunNetPlayer::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x570d794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer.get_NickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PunNetPlayer::*)()>(&::GlobalNamespace::PunNetPlayer::get_NickName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer.get_DefaultName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PunNetPlayer::*)()>(&::GlobalNamespace::PunNetPlayer::get_DefaultName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer.get_InRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PunNetPlayer::*)()>(&::GlobalNamespace::PunNetPlayer::get_InRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x570d7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PunNetPlayer::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::PunNetPlayer::Equals)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x570d864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer.OnReturned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PunNetPlayer::*)()>(&::GlobalNamespace::PunNetPlayer::OnReturned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570d938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunNetPlayer.OnTaken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PunNetPlayer::*)()>(&::GlobalNamespace::PunNetPlayer::OnTaken)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x570d940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 21}
                ));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::Player*& GlobalNamespace::PunNetPlayer::__cordl_internal_get__PlayerRef_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerRef_k__BackingField;
}
constexpr ::Photon::Realtime::Player* const& GlobalNamespace::PunNetPlayer::__cordl_internal_get__PlayerRef_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerRef_k__BackingField;
}
constexpr void GlobalNamespace::PunNetPlayer::__cordl_internal_set__PlayerRef_k__BackingField(::Photon::Realtime::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayerRef_k__BackingField = value;
}
inline ::Photon::Realtime::Player* GlobalNamespace::PunNetPlayer::get_PlayerRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                        {"get_PlayerRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*>(this, ___internal_method);
}
inline void GlobalNamespace::PunNetPlayer::set_PlayerRef(::Photon::Realtime::Player*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                        {"set_PlayerRef", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PunNetPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PunNetPlayer::InitPlayer(::Photon::Realtime::Player*  playerRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(),
                        {"InitPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerRef);
}
inline bool GlobalNamespace::PunNetPlayer::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PunNetPlayer::get_ActorNumber()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PunNetPlayer::get_UserId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::PunNetPlayer::get_IsMasterClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PunNetPlayer::get_IsLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PunNetPlayer::get_IsNull()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PunNetPlayer::get_NickName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PunNetPlayer::get_DefaultName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::PunNetPlayer::get_InRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PunNetPlayer::Equals(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myPlayer, other);
}
inline void GlobalNamespace::PunNetPlayer::OnReturned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PunNetPlayer::OnTaken()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PunNetPlayer*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PunNetPlayer* GlobalNamespace::PunNetPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PunNetPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PunNetPlayer::PunNetPlayer()   {
}

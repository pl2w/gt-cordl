#pragma once
// IWYU pragma private; include "GlobalNamespace/FusionNetPlayer.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_impl.hpp"
#include "GlobalNamespace/zzzz__FusionNetPlayer_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.get_PlayerRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::GlobalNamespace::FusionNetPlayer::*)()>(&::GlobalNamespace::FusionNetPlayer::get_PlayerRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d6b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                        {"get_PlayerRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.set_PlayerRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionNetPlayer::*)(::Fusion::PlayerRef)>(&::GlobalNamespace::FusionNetPlayer::set_PlayerRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d6b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                        {"set_PlayerRef", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionNetPlayer::*)()>(&::GlobalNamespace::FusionNetPlayer::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56d6b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionNetPlayer::*)(::Fusion::PlayerRef)>(&::GlobalNamespace::FusionNetPlayer::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56d6be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.get_runner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkRunner> (::GlobalNamespace::FusionNetPlayer::*)()>(&::GlobalNamespace::FusionNetPlayer::get_runner)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x56d6c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                        {"get_runner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FusionNetPlayer::*)()>(&::GlobalNamespace::FusionNetPlayer::get_IsValid)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56d6cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.get_ActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FusionNetPlayer::*)()>(&::GlobalNamespace::FusionNetPlayer::get_ActorNumber)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56d6d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FusionNetPlayer::*)()>(&::GlobalNamespace::FusionNetPlayer::get_UserId)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x56d6d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.get_IsMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FusionNetPlayer::*)()>(&::GlobalNamespace::FusionNetPlayer::get_IsMasterClient)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x56d6e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.get_IsLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FusionNetPlayer::*)()>(&::GlobalNamespace::FusionNetPlayer::get_IsLocal)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56d6f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.get_IsNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FusionNetPlayer::*)()>(&::GlobalNamespace::FusionNetPlayer::get_IsNull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d702c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.get_NickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FusionNetPlayer::*)()>(&::GlobalNamespace::FusionNetPlayer::get_NickName)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x56d7034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.get_DefaultName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FusionNetPlayer::*)()>(&::GlobalNamespace::FusionNetPlayer::get_DefaultName)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56d70a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.get_InRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FusionNetPlayer::*)()>(&::GlobalNamespace::FusionNetPlayer::get_InRoom)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x56d715c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FusionNetPlayer::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::FusionNetPlayer::Equals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x56d7458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.InitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionNetPlayer::*)(::Fusion::PlayerRef)>(&::GlobalNamespace::FusionNetPlayer::InitPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56d7558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                        {"InitPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.OnReturned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionNetPlayer::*)()>(&::GlobalNamespace::FusionNetPlayer::OnReturned)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x56d7568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionNetPlayer.OnTaken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionNetPlayer::*)()>(&::GlobalNamespace::FusionNetPlayer::OnTaken)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d76ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 21}
                ));
    return ___internal_method;
  }
};
constexpr ::Fusion::PlayerRef& GlobalNamespace::FusionNetPlayer::__cordl_internal_get__PlayerRef_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerRef_k__BackingField;
}
constexpr ::Fusion::PlayerRef const& GlobalNamespace::FusionNetPlayer::__cordl_internal_get__PlayerRef_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerRef_k__BackingField;
}
constexpr void GlobalNamespace::FusionNetPlayer::__cordl_internal_set__PlayerRef_k__BackingField(::Fusion::PlayerRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayerRef_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FusionNetPlayer::__cordl_internal_get__defaultName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultName;
}
constexpr ::StringW const& GlobalNamespace::FusionNetPlayer::__cordl_internal_get__defaultName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultName;
}
constexpr void GlobalNamespace::FusionNetPlayer::__cordl_internal_set__defaultName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultName = value;
}
constexpr bool& GlobalNamespace::FusionNetPlayer::__cordl_internal_get_validPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validPlayer;
}
constexpr bool const& GlobalNamespace::FusionNetPlayer::__cordl_internal_get_validPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validPlayer;
}
constexpr void GlobalNamespace::FusionNetPlayer::__cordl_internal_set_validPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validPlayer = value;
}
inline ::Fusion::PlayerRef GlobalNamespace::FusionNetPlayer::get_PlayerRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                        {"get_PlayerRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method);
}
inline void GlobalNamespace::FusionNetPlayer::set_PlayerRef(::Fusion::PlayerRef  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                        {"set_PlayerRef", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FusionNetPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FusionNetPlayer::_ctor(::Fusion::PlayerRef  playerRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerRef);
}
inline ::UnityW<::Fusion::NetworkRunner> GlobalNamespace::FusionNetPlayer::get_runner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                        {"get_runner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkRunner>>(this, ___internal_method);
}
inline bool GlobalNamespace::FusionNetPlayer::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::FusionNetPlayer::get_ActorNumber()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FusionNetPlayer::get_UserId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::FusionNetPlayer::get_IsMasterClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::FusionNetPlayer::get_IsLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::FusionNetPlayer::get_IsNull()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FusionNetPlayer::get_NickName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FusionNetPlayer::get_DefaultName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::FusionNetPlayer::get_InRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::FusionNetPlayer::Equals(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myPlayer, other);
}
inline void GlobalNamespace::FusionNetPlayer::InitPlayer(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(),
                        {"InitPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::FusionNetPlayer::OnReturned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FusionNetPlayer::OnTaken()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionNetPlayer*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FusionNetPlayer* GlobalNamespace::FusionNetPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FusionNetPlayer*>());
}
inline ::GlobalNamespace::FusionNetPlayer* GlobalNamespace::FusionNetPlayer::New_ctor(::Fusion::PlayerRef  playerRef)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FusionNetPlayer*>(playerRef));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionNetPlayer::FusionNetPlayer()   {
}

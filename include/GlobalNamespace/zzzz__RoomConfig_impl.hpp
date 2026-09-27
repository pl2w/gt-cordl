#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RoomConfig_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Photon/Realtime/zzzz__RoomOptions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomConfig.get_EffectiveSearchFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::Hashtable* (::GlobalNamespace::RoomConfig::*)()>(&::GlobalNamespace::RoomConfig::get_EffectiveSearchFilter)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56ec420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"get_EffectiveSearchFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomConfig.get_IsJoiningWithFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RoomConfig::*)()>(&::GlobalNamespace::RoomConfig::get_IsJoiningWithFriends)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56ec438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"get_IsJoiningWithFriends", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomConfig.SetFriendIDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomConfig::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::RoomConfig::SetFriendIDs)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x56ec458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"SetFriendIDs", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomConfig.ClearExpectedUsers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomConfig::*)()>(&::GlobalNamespace::RoomConfig::ClearExpectedUsers)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x56ec604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"ClearExpectedUsers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomConfig.ToPUNOpts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::RoomOptions* (::GlobalNamespace::RoomConfig::*)()>(&::GlobalNamespace::RoomConfig::ToPUNOpts)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56ec678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"ToPUNOpts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomConfig.SetFusionOpts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomConfig::*)(::Fusion::NetworkRunner*)>(&::GlobalNamespace::RoomConfig::SetFusionOpts)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56e3c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"SetFusionOpts", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomConfig.SPConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RoomConfig* (*)()>(&::GlobalNamespace::RoomConfig::SPConfig)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x56e6f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"SPConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomConfig.AnyPublicConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RoomConfig* (*)()>(&::GlobalNamespace::RoomConfig::AnyPublicConfig)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56ec8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"AnyPublicConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomConfig.AutoCustomLobbyProps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::RoomConfig::*)()>(&::GlobalNamespace::RoomConfig::AutoCustomLobbyProps)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x56ec718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"AutoCustomLobbyProps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomConfig::*)()>(&::GlobalNamespace::RoomConfig::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56e589c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RoomConfig::__cordl_internal_get_isPublic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPublic;
}
constexpr bool const& GlobalNamespace::RoomConfig::__cordl_internal_get_isPublic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPublic;
}
constexpr void GlobalNamespace::RoomConfig::__cordl_internal_set_isPublic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPublic = value;
}
constexpr bool& GlobalNamespace::RoomConfig::__cordl_internal_get_isJoinable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isJoinable;
}
constexpr bool const& GlobalNamespace::RoomConfig::__cordl_internal_get_isJoinable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isJoinable;
}
constexpr void GlobalNamespace::RoomConfig::__cordl_internal_set_isJoinable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isJoinable = value;
}
constexpr uint8_t& GlobalNamespace::RoomConfig::__cordl_internal_get_MaxPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxPlayers;
}
constexpr uint8_t const& GlobalNamespace::RoomConfig::__cordl_internal_get_MaxPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxPlayers;
}
constexpr void GlobalNamespace::RoomConfig::__cordl_internal_set_MaxPlayers(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxPlayers = value;
}
constexpr ::ExitGames::Client::Photon::Hashtable*& GlobalNamespace::RoomConfig::__cordl_internal_get_CustomProps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomProps;
}
constexpr ::ExitGames::Client::Photon::Hashtable* const& GlobalNamespace::RoomConfig::__cordl_internal_get_CustomProps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomProps;
}
constexpr void GlobalNamespace::RoomConfig::__cordl_internal_set_CustomProps(::ExitGames::Client::Photon::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomProps = value;
}
constexpr ::ExitGames::Client::Photon::Hashtable*& GlobalNamespace::RoomConfig::__cordl_internal_get_SearchFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SearchFilter;
}
constexpr ::ExitGames::Client::Photon::Hashtable* const& GlobalNamespace::RoomConfig::__cordl_internal_get_SearchFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SearchFilter;
}
constexpr void GlobalNamespace::RoomConfig::__cordl_internal_set_SearchFilter(::ExitGames::Client::Photon::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SearchFilter = value;
}
constexpr bool& GlobalNamespace::RoomConfig::__cordl_internal_get_createIfMissing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createIfMissing;
}
constexpr bool const& GlobalNamespace::RoomConfig::__cordl_internal_get_createIfMissing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createIfMissing;
}
constexpr void GlobalNamespace::RoomConfig::__cordl_internal_set_createIfMissing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___createIfMissing = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::RoomConfig::__cordl_internal_get_joinFriendIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinFriendIDs;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::RoomConfig::__cordl_internal_get_joinFriendIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinFriendIDs;
}
constexpr void GlobalNamespace::RoomConfig::__cordl_internal_set_joinFriendIDs(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinFriendIDs = value;
}
inline ::ExitGames::Client::Photon::Hashtable* GlobalNamespace::RoomConfig::get_EffectiveSearchFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"get_EffectiveSearchFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::Hashtable*>(this, ___internal_method);
}
inline bool GlobalNamespace::RoomConfig::get_IsJoiningWithFriends()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"get_IsJoiningWithFriends", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RoomConfig::SetFriendIDs(::System::Collections::Generic::List_1<::StringW>*  friendIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"SetFriendIDs", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, friendIDs);
}
inline void GlobalNamespace::RoomConfig::ClearExpectedUsers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"ClearExpectedUsers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Realtime::RoomOptions* GlobalNamespace::RoomConfig::ToPUNOpts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"ToPUNOpts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::RoomOptions*>(this, ___internal_method);
}
inline void GlobalNamespace::RoomConfig::SetFusionOpts(::Fusion::NetworkRunner*  runnerInst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"SetFusionOpts", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runnerInst);
}
inline ::GlobalNamespace::RoomConfig* GlobalNamespace::RoomConfig::SPConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"SPConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RoomConfig*>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::RoomConfig* GlobalNamespace::RoomConfig::AnyPublicConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"AnyPublicConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RoomConfig*>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> GlobalNamespace::RoomConfig::AutoCustomLobbyProps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {"AutoCustomLobbyProps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void GlobalNamespace::RoomConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomConfig* GlobalNamespace::RoomConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoomConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomConfig::RoomConfig()   {
}

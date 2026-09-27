#pragma once
// IWYU pragma private; include "Photon/Realtime/RoomInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::RoomInfo.get_CustomProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::Hashtable* (::Photon::Realtime::RoomInfo::*)()>(&::Photon::Realtime::RoomInfo::get_CustomProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70e73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"get_CustomProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RoomInfo.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::RoomInfo::*)()>(&::Photon::Realtime::RoomInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70e744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RoomInfo.get_PlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Realtime::RoomInfo::*)()>(&::Photon::Realtime::RoomInfo::get_PlayerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70e74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"get_PlayerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RoomInfo.set_PlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RoomInfo::*)(int32_t)>(&::Photon::Realtime::RoomInfo::set_PlayerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70e754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"set_PlayerCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RoomInfo.get_MaxPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Realtime::RoomInfo::*)()>(&::Photon::Realtime::RoomInfo::get_MaxPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70e75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"get_MaxPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RoomInfo.get_IsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::RoomInfo::*)()>(&::Photon::Realtime::RoomInfo::get_IsOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70e764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"get_IsOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RoomInfo.get_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::RoomInfo::*)()>(&::Photon::Realtime::RoomInfo::get_IsVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70e76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"get_IsVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RoomInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RoomInfo::*)(::StringW, ::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Realtime::RoomInfo::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa70d55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RoomInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::RoomInfo::*)(::System::Object*)>(&::Photon::Realtime::RoomInfo::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa70e774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                    {::i2c::class_of<::Photon::Realtime::RoomInfo*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RoomInfo.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Realtime::RoomInfo::*)()>(&::Photon::Realtime::RoomInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa70e80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                    {::i2c::class_of<::Photon::Realtime::RoomInfo*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RoomInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::RoomInfo::*)()>(&::Photon::Realtime::RoomInfo::ToString)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa70e828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                    {::i2c::class_of<::Photon::Realtime::RoomInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RoomInfo.ToStringFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::RoomInfo::*)()>(&::Photon::Realtime::RoomInfo::ToStringFull)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xa70ea74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"ToStringFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RoomInfo.InternalCacheProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RoomInfo::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Realtime::RoomInfo::InternalCacheProperties)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0xa70d6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                    {::i2c::class_of<::Photon::Realtime::RoomInfo*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr bool& Photon::Realtime::RoomInfo::__cordl_internal_get_RemovedFromList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemovedFromList;
}
constexpr bool const& Photon::Realtime::RoomInfo::__cordl_internal_get_RemovedFromList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemovedFromList;
}
constexpr void Photon::Realtime::RoomInfo::__cordl_internal_set_RemovedFromList(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RemovedFromList = value;
}
constexpr ::ExitGames::Client::Photon::Hashtable*& Photon::Realtime::RoomInfo::__cordl_internal_get_customProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customProperties;
}
constexpr ::ExitGames::Client::Photon::Hashtable* const& Photon::Realtime::RoomInfo::__cordl_internal_get_customProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customProperties;
}
constexpr void Photon::Realtime::RoomInfo::__cordl_internal_set_customProperties(::ExitGames::Client::Photon::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customProperties = value;
}
constexpr uint8_t& Photon::Realtime::RoomInfo::__cordl_internal_get_maxPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPlayers;
}
constexpr uint8_t const& Photon::Realtime::RoomInfo::__cordl_internal_get_maxPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPlayers;
}
constexpr void Photon::Realtime::RoomInfo::__cordl_internal_set_maxPlayers(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxPlayers = value;
}
constexpr int32_t& Photon::Realtime::RoomInfo::__cordl_internal_get_emptyRoomTtl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyRoomTtl;
}
constexpr int32_t const& Photon::Realtime::RoomInfo::__cordl_internal_get_emptyRoomTtl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyRoomTtl;
}
constexpr void Photon::Realtime::RoomInfo::__cordl_internal_set_emptyRoomTtl(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyRoomTtl = value;
}
constexpr int32_t& Photon::Realtime::RoomInfo::__cordl_internal_get_playerTtl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTtl;
}
constexpr int32_t const& Photon::Realtime::RoomInfo::__cordl_internal_get_playerTtl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTtl;
}
constexpr void Photon::Realtime::RoomInfo::__cordl_internal_set_playerTtl(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerTtl = value;
}
constexpr ::ArrayW<::StringW>& Photon::Realtime::RoomInfo::__cordl_internal_get_expectedUsers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expectedUsers;
}
constexpr ::ArrayW<::StringW> const& Photon::Realtime::RoomInfo::__cordl_internal_get_expectedUsers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expectedUsers;
}
constexpr void Photon::Realtime::RoomInfo::__cordl_internal_set_expectedUsers(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___expectedUsers = value;
}
constexpr bool& Photon::Realtime::RoomInfo::__cordl_internal_get_isOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOpen;
}
constexpr bool const& Photon::Realtime::RoomInfo::__cordl_internal_get_isOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOpen;
}
constexpr void Photon::Realtime::RoomInfo::__cordl_internal_set_isOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOpen = value;
}
constexpr bool& Photon::Realtime::RoomInfo::__cordl_internal_get_isVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isVisible;
}
constexpr bool const& Photon::Realtime::RoomInfo::__cordl_internal_get_isVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isVisible;
}
constexpr void Photon::Realtime::RoomInfo::__cordl_internal_set_isVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isVisible = value;
}
constexpr bool& Photon::Realtime::RoomInfo::__cordl_internal_get_autoCleanUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoCleanUp;
}
constexpr bool const& Photon::Realtime::RoomInfo::__cordl_internal_get_autoCleanUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoCleanUp;
}
constexpr void Photon::Realtime::RoomInfo::__cordl_internal_set_autoCleanUp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoCleanUp = value;
}
constexpr ::StringW& Photon::Realtime::RoomInfo::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Photon::Realtime::RoomInfo::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Photon::Realtime::RoomInfo::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr int32_t& Photon::Realtime::RoomInfo::__cordl_internal_get_masterClientId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masterClientId;
}
constexpr int32_t const& Photon::Realtime::RoomInfo::__cordl_internal_get_masterClientId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masterClientId;
}
constexpr void Photon::Realtime::RoomInfo::__cordl_internal_set_masterClientId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___masterClientId = value;
}
constexpr ::ArrayW<::StringW>& Photon::Realtime::RoomInfo::__cordl_internal_get_propertiesListedInLobby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertiesListedInLobby;
}
constexpr ::ArrayW<::StringW> const& Photon::Realtime::RoomInfo::__cordl_internal_get_propertiesListedInLobby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertiesListedInLobby;
}
constexpr void Photon::Realtime::RoomInfo::__cordl_internal_set_propertiesListedInLobby(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertiesListedInLobby = value;
}
constexpr int32_t& Photon::Realtime::RoomInfo::__cordl_internal_get__PlayerCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerCount_k__BackingField;
}
constexpr int32_t const& Photon::Realtime::RoomInfo::__cordl_internal_get__PlayerCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerCount_k__BackingField;
}
constexpr void Photon::Realtime::RoomInfo::__cordl_internal_set__PlayerCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayerCount_k__BackingField = value;
}
inline ::ExitGames::Client::Photon::Hashtable* Photon::Realtime::RoomInfo::get_CustomProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"get_CustomProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::Hashtable*>(this, ___internal_method);
}
inline ::StringW Photon::Realtime::RoomInfo::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Photon::Realtime::RoomInfo::get_PlayerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"get_PlayerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Realtime::RoomInfo::set_PlayerCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"set_PlayerCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t Photon::Realtime::RoomInfo::get_MaxPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"get_MaxPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline bool Photon::Realtime::RoomInfo::get_IsOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"get_IsOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Realtime::RoomInfo::get_IsVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"get_IsVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::RoomInfo::_ctor(::StringW  roomName, ::ExitGames::Client::Photon::Hashtable*  roomProperties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomName, roomProperties);
}
inline bool Photon::Realtime::RoomInfo::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::RoomInfo*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t Photon::Realtime::RoomInfo::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::RoomInfo*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Photon::Realtime::RoomInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::RoomInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Photon::Realtime::RoomInfo::ToStringFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RoomInfo*>(),
                        {"ToStringFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Realtime::RoomInfo::InternalCacheProperties(::ExitGames::Client::Photon::Hashtable*  propertiesToCache)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::RoomInfo*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesToCache);
}
inline ::Photon::Realtime::RoomInfo* Photon::Realtime::RoomInfo::New_ctor(::StringW  roomName, ::ExitGames::Client::Photon::Hashtable*  roomProperties)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::RoomInfo*>(roomName, roomProperties));
}
// Ctor Parameters []
constexpr ::Photon::Realtime::RoomInfo::RoomInfo()   {
}

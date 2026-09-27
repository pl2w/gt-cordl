#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/RoomOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__RoomOptions_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.get_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RoomOptions::*)()>(&::Fusion::Photon::Realtime::RoomOptions::get_IsVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5add8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_IsVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.set_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RoomOptions::*)(bool)>(&::Fusion::Photon::Realtime::RoomOptions::set_IsVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5dc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_IsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.get_IsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RoomOptions::*)()>(&::Fusion::Photon::Realtime::RoomOptions::get_IsOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5add0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_IsOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.set_IsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RoomOptions::*)(bool)>(&::Fusion::Photon::Realtime::RoomOptions::set_IsOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5dc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_IsOpen", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.get_CleanupCacheOnLeave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RoomOptions::*)()>(&::Fusion::Photon::Realtime::RoomOptions::get_CleanupCacheOnLeave)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5ade0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_CleanupCacheOnLeave", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.set_CleanupCacheOnLeave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RoomOptions::*)(bool)>(&::Fusion::Photon::Realtime::RoomOptions::set_CleanupCacheOnLeave)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5dc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_CleanupCacheOnLeave", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.get_SuppressRoomEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RoomOptions::*)()>(&::Fusion::Photon::Realtime::RoomOptions::get_SuppressRoomEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5dc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_SuppressRoomEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.set_SuppressRoomEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RoomOptions::*)(bool)>(&::Fusion::Photon::Realtime::RoomOptions::set_SuppressRoomEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5dc2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_SuppressRoomEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.get_SuppressPlayerInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RoomOptions::*)()>(&::Fusion::Photon::Realtime::RoomOptions::get_SuppressPlayerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5dc34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_SuppressPlayerInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.set_SuppressPlayerInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RoomOptions::*)(bool)>(&::Fusion::Photon::Realtime::RoomOptions::set_SuppressPlayerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5dc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_SuppressPlayerInfo", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.get_PublishUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RoomOptions::*)()>(&::Fusion::Photon::Realtime::RoomOptions::get_PublishUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5dc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_PublishUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.set_PublishUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RoomOptions::*)(bool)>(&::Fusion::Photon::Realtime::RoomOptions::set_PublishUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5dc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_PublishUserId", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.get_DeleteNullProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RoomOptions::*)()>(&::Fusion::Photon::Realtime::RoomOptions::get_DeleteNullProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5dc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_DeleteNullProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.set_DeleteNullProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RoomOptions::*)(bool)>(&::Fusion::Photon::Realtime::RoomOptions::set_DeleteNullProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5dc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_DeleteNullProperties", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.get_BroadcastPropsChangeToAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RoomOptions::*)()>(&::Fusion::Photon::Realtime::RoomOptions::get_BroadcastPropsChangeToAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5ade8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_BroadcastPropsChangeToAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions.set_BroadcastPropsChangeToAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RoomOptions::*)(bool)>(&::Fusion::Photon::Realtime::RoomOptions::set_BroadcastPropsChangeToAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5dc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_BroadcastPropsChangeToAll", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RoomOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RoomOptions::*)()>(&::Fusion::Photon::Realtime::RoomOptions::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f5ad58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_isVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isVisible;
}
constexpr bool const& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_isVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isVisible;
}
constexpr void Fusion::Photon::Realtime::RoomOptions::__cordl_internal_set_isVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isVisible = value;
}
constexpr bool& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_isOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOpen;
}
constexpr bool const& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_isOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOpen;
}
constexpr void Fusion::Photon::Realtime::RoomOptions::__cordl_internal_set_isOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOpen = value;
}
constexpr int32_t& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_MaxPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxPlayers;
}
constexpr int32_t const& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_MaxPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxPlayers;
}
constexpr void Fusion::Photon::Realtime::RoomOptions::__cordl_internal_set_MaxPlayers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxPlayers = value;
}
constexpr int32_t& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_PlayerTtl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerTtl;
}
constexpr int32_t const& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_PlayerTtl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerTtl;
}
constexpr void Fusion::Photon::Realtime::RoomOptions::__cordl_internal_set_PlayerTtl(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerTtl = value;
}
constexpr int32_t& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_EmptyRoomTtl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmptyRoomTtl;
}
constexpr int32_t const& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_EmptyRoomTtl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmptyRoomTtl;
}
constexpr void Fusion::Photon::Realtime::RoomOptions::__cordl_internal_set_EmptyRoomTtl(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EmptyRoomTtl = value;
}
constexpr bool& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_cleanupCacheOnLeave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cleanupCacheOnLeave;
}
constexpr bool const& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_cleanupCacheOnLeave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cleanupCacheOnLeave;
}
constexpr void Fusion::Photon::Realtime::RoomOptions::__cordl_internal_set_cleanupCacheOnLeave(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cleanupCacheOnLeave = value;
}
constexpr ::ExitGames::Client::Photon::Hashtable*& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_CustomRoomProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomRoomProperties;
}
constexpr ::ExitGames::Client::Photon::Hashtable* const& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_CustomRoomProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomRoomProperties;
}
constexpr void Fusion::Photon::Realtime::RoomOptions::__cordl_internal_set_CustomRoomProperties(::ExitGames::Client::Photon::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomRoomProperties = value;
}
constexpr ::ArrayW<::StringW>& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_CustomRoomPropertiesForLobby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomRoomPropertiesForLobby;
}
constexpr ::ArrayW<::StringW> const& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_CustomRoomPropertiesForLobby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomRoomPropertiesForLobby;
}
constexpr void Fusion::Photon::Realtime::RoomOptions::__cordl_internal_set_CustomRoomPropertiesForLobby(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomRoomPropertiesForLobby = value;
}
constexpr ::ArrayW<::StringW>& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_Plugins()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Plugins;
}
constexpr ::ArrayW<::StringW> const& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_Plugins() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Plugins;
}
constexpr void Fusion::Photon::Realtime::RoomOptions::__cordl_internal_set_Plugins(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Plugins = value;
}
constexpr bool& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get__SuppressRoomEvents_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SuppressRoomEvents_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get__SuppressRoomEvents_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SuppressRoomEvents_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::RoomOptions::__cordl_internal_set__SuppressRoomEvents_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SuppressRoomEvents_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get__SuppressPlayerInfo_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SuppressPlayerInfo_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get__SuppressPlayerInfo_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SuppressPlayerInfo_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::RoomOptions::__cordl_internal_set__SuppressPlayerInfo_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SuppressPlayerInfo_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get__PublishUserId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PublishUserId_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get__PublishUserId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PublishUserId_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::RoomOptions::__cordl_internal_set__PublishUserId_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PublishUserId_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get__DeleteNullProperties_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeleteNullProperties_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get__DeleteNullProperties_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeleteNullProperties_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::RoomOptions::__cordl_internal_set__DeleteNullProperties_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DeleteNullProperties_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_broadcastPropsChangeToAll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastPropsChangeToAll;
}
constexpr bool const& Fusion::Photon::Realtime::RoomOptions::__cordl_internal_get_broadcastPropsChangeToAll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastPropsChangeToAll;
}
constexpr void Fusion::Photon::Realtime::RoomOptions::__cordl_internal_set_broadcastPropsChangeToAll(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___broadcastPropsChangeToAll = value;
}
inline bool Fusion::Photon::Realtime::RoomOptions::get_IsVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_IsVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RoomOptions::set_IsVisible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_IsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::RoomOptions::get_IsOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_IsOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RoomOptions::set_IsOpen(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_IsOpen", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::RoomOptions::get_CleanupCacheOnLeave()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_CleanupCacheOnLeave", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RoomOptions::set_CleanupCacheOnLeave(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_CleanupCacheOnLeave", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::RoomOptions::get_SuppressRoomEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_SuppressRoomEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RoomOptions::set_SuppressRoomEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_SuppressRoomEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::RoomOptions::get_SuppressPlayerInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_SuppressPlayerInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RoomOptions::set_SuppressPlayerInfo(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_SuppressPlayerInfo", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::RoomOptions::get_PublishUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_PublishUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RoomOptions::set_PublishUserId(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_PublishUserId", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::RoomOptions::get_DeleteNullProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_DeleteNullProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RoomOptions::set_DeleteNullProperties(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_DeleteNullProperties", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::RoomOptions::get_BroadcastPropsChangeToAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"get_BroadcastPropsChangeToAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RoomOptions::set_BroadcastPropsChangeToAll(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {"set_BroadcastPropsChangeToAll", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::RoomOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RoomOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::RoomOptions* Fusion::Photon::Realtime::RoomOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::RoomOptions*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::RoomOptions::RoomOptions()   {
}

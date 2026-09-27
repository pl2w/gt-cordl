#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomStateVisibility.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RoomStateVisibility_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomStateVisibility.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomStateVisibility::*)()>(&::GlobalNamespace::RoomStateVisibility::Start)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x56ad3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomStateVisibility*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomStateVisibility.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomStateVisibility::*)()>(&::GlobalNamespace::RoomStateVisibility::OnDestroy)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x56ad5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomStateVisibility*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomStateVisibility.OnRoomChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomStateVisibility::*)()>(&::GlobalNamespace::RoomStateVisibility::OnRoomChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x56ad508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomStateVisibility*>(),
                        {"OnRoomChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomStateVisibility._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomStateVisibility::*)()>(&::GlobalNamespace::RoomStateVisibility::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56ad730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomStateVisibility*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RoomStateVisibility::__cordl_internal_get_enableOutOfRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableOutOfRoom;
}
constexpr bool const& GlobalNamespace::RoomStateVisibility::__cordl_internal_get_enableOutOfRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableOutOfRoom;
}
constexpr void GlobalNamespace::RoomStateVisibility::__cordl_internal_set_enableOutOfRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableOutOfRoom = value;
}
constexpr bool& GlobalNamespace::RoomStateVisibility::__cordl_internal_get_enableInRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableInRoom;
}
constexpr bool const& GlobalNamespace::RoomStateVisibility::__cordl_internal_get_enableInRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableInRoom;
}
constexpr void GlobalNamespace::RoomStateVisibility::__cordl_internal_set_enableInRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableInRoom = value;
}
constexpr bool& GlobalNamespace::RoomStateVisibility::__cordl_internal_get_enableInPrivateRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableInPrivateRoom;
}
constexpr bool const& GlobalNamespace::RoomStateVisibility::__cordl_internal_get_enableInPrivateRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableInPrivateRoom;
}
constexpr void GlobalNamespace::RoomStateVisibility::__cordl_internal_set_enableInPrivateRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableInPrivateRoom = value;
}
inline void GlobalNamespace::RoomStateVisibility::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomStateVisibility*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomStateVisibility::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomStateVisibility*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomStateVisibility::OnRoomChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomStateVisibility*>(),
                        {"OnRoomChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomStateVisibility::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomStateVisibility*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomStateVisibility* GlobalNamespace::RoomStateVisibility::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoomStateVisibility*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomStateVisibility::RoomStateVisibility()   {
}

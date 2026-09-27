#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomMuteEnforcer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RoomMuteEnforcer_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomMuteEnforcer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMuteEnforcer::*)()>(&::GlobalNamespace::RoomMuteEnforcer::OnEnable)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5adb28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMuteEnforcer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMuteEnforcer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMuteEnforcer::*)()>(&::GlobalNamespace::RoomMuteEnforcer::OnDisable)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5adb484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMuteEnforcer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMuteEnforcer.SetRoomMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMuteEnforcer::*)(::StringW, bool)>(&::GlobalNamespace::RoomMuteEnforcer::SetRoomMute)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5adb67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMuteEnforcer*>(),
                        {"SetRoomMute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMuteEnforcer.SyncRoomMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMuteEnforcer::*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::RoomMuteEnforcer::SyncRoomMute)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5adb9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMuteEnforcer*>(),
                        {"SyncRoomMute", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMuteEnforcer.SyncAllRoomMutes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMuteEnforcer::*)()>(&::GlobalNamespace::RoomMuteEnforcer::SyncAllRoomMutes)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5adbb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMuteEnforcer*>(),
                        {"SyncAllRoomMutes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMuteEnforcer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMuteEnforcer::*)()>(&::GlobalNamespace::RoomMuteEnforcer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adbe1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMuteEnforcer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RoomMuteEnforcer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMuteEnforcer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMuteEnforcer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMuteEnforcer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMuteEnforcer::SetRoomMute(::StringW  userId, bool  muted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMuteEnforcer*>(),
                        {"SetRoomMute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, muted);
}
inline void GlobalNamespace::RoomMuteEnforcer::SyncRoomMute(::GlobalNamespace::RigContainer*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMuteEnforcer*>(),
                        {"SyncRoomMute", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::RoomMuteEnforcer::SyncAllRoomMutes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMuteEnforcer*>(),
                        {"SyncAllRoomMutes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMuteEnforcer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMuteEnforcer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomMuteEnforcer* GlobalNamespace::RoomMuteEnforcer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoomMuteEnforcer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomMuteEnforcer::RoomMuteEnforcer()   {
}

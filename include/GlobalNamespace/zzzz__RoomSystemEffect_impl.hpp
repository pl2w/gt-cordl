#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystemEffect.hpp"
#include "GorillaTag/zzzz__StaticHashWrapper_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RoomSystemEffect_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GorillaTag/zzzz__StaticHashWrapper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomSystemEffect.get_Registered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RoomSystemEffect::*)()>(&::GlobalNamespace::RoomSystemEffect::get_Registered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adbe24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"get_Registered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemEffect.set_Registered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystemEffect::*)(bool)>(&::GlobalNamespace::RoomSystemEffect::set_Registered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adbe2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"set_Registered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemEffect.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::StaticHashWrapper (::GlobalNamespace::RoomSystemEffect::*)()>(&::GlobalNamespace::RoomSystemEffect::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adbe34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"get_ID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemEffect.PlayNetworkedEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystemEffect::*)(::GlobalNamespace::RigContainer*, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::RoomSystemEffect::PlayNetworkedEffect)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ad4f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"PlayNetworkedEffect", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemEffect.PlayEffectNetworked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystemEffect::*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::RoomSystemEffect::PlayEffectNetworked)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5adbe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"PlayEffectNetworked", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemEffect.PlayEffectLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystemEffect::*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::RoomSystemEffect::PlayEffectLocal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5adbe3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"PlayEffectLocal", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemEffect.EnableNetworking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystemEffect::*)()>(&::GlobalNamespace::RoomSystemEffect::EnableNetworking)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5adbec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"EnableNetworking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemEffect.DisableNetworking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystemEffect::*)()>(&::GlobalNamespace::RoomSystemEffect::DisableNetworking)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5adbf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"DisableNetworking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomSystemEffect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystemEffect::*)()>(&::GlobalNamespace::RoomSystemEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adbf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RoomSystemEffect::__cordl_internal_get__Registered_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Registered_k__BackingField;
}
constexpr bool const& GlobalNamespace::RoomSystemEffect::__cordl_internal_get__Registered_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Registered_k__BackingField;
}
constexpr void GlobalNamespace::RoomSystemEffect::__cordl_internal_set__Registered_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Registered_k__BackingField = value;
}
constexpr ::GorillaTag::StaticHashWrapper& GlobalNamespace::RoomSystemEffect::__cordl_internal_get_m_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Id;
}
constexpr ::GorillaTag::StaticHashWrapper const& GlobalNamespace::RoomSystemEffect::__cordl_internal_get_m_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Id;
}
constexpr void GlobalNamespace::RoomSystemEffect::__cordl_internal_set_m_Id(::GorillaTag::StaticHashWrapper  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Id = value;
}
inline bool GlobalNamespace::RoomSystemEffect::get_Registered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"get_Registered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RoomSystemEffect::set_Registered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"set_Registered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::StaticHashWrapper GlobalNamespace::RoomSystemEffect::get_ID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"get_ID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::StaticHashWrapper>(this, ___internal_method);
}
inline void GlobalNamespace::RoomSystemEffect::PlayNetworkedEffect(::GlobalNamespace::RigContainer*  target, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"PlayNetworkedEffect", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, info);
}
inline void GlobalNamespace::RoomSystemEffect::PlayEffectNetworked(::GlobalNamespace::RigContainer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"PlayEffectNetworked", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::RoomSystemEffect::PlayEffectLocal(::GlobalNamespace::RigContainer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"PlayEffectLocal", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::RoomSystemEffect::EnableNetworking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"EnableNetworking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomSystemEffect::DisableNetworking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {"DisableNetworking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomSystemEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystemEffect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomSystemEffect* GlobalNamespace::RoomSystemEffect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoomSystemEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomSystemEffect::RoomSystemEffect()   {
}

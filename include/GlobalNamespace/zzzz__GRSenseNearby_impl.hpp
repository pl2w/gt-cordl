#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSenseNearby.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRSenseNearby_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRSenseNearby.get_BossEntityPresent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRSenseNearby::*)()>(&::GlobalNamespace::GRSenseNearby::get_BossEntityPresent)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58afd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"get_BossEntityPresent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSenseNearby.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSenseNearby::*)(::UnityEngine::Transform*, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GRSenseNearby::Setup)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58afdb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSenseNearby.OnHitByPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSenseNearby::*)(int32_t)>(&::GlobalNamespace::GRSenseNearby::OnHitByPlayer)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x58afe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"OnHitByPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSenseNearby.UpdateNearby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSenseNearby::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRSenseNearby::UpdateNearby)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x58affd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"UpdateNearby", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(), ::i2c::type_of<::GlobalNamespace::GRSenseLineOfSight*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSenseNearby.IsAnyoneNearby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRSenseNearby::*)()>(&::GlobalNamespace::GRSenseNearby::IsAnyoneNearby)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58b07b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"IsAnyoneNearby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSenseNearby.IsAnyoneNearby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRSenseNearby::*)(float_t, bool)>(&::GlobalNamespace::GRSenseNearby::IsAnyoneNearby)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x58b083c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"IsAnyoneNearby", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSenseNearby.GetRigTestLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GRSenseNearby::GetRigTestLocation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58b09c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"GetRigTestLocation", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSenseNearby.AddNearby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSenseNearby::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*)>(&::GlobalNamespace::GRSenseNearby::AddNearby)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x58b02a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"AddNearby", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSenseNearby.RemoveNotNearby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSenseNearby::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GRSenseNearby::RemoveNotNearby)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x58b0104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"RemoveNotNearby", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSenseNearby.RemoveNoLineOfSight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSenseNearby::*)(::UnityEngine::Vector3, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRSenseNearby::RemoveNoLineOfSight)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x58b06ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"RemoveNoLineOfSight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GRSenseLineOfSight*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSenseNearby.PickClosest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::GRSenseNearby::*)(::by_ref<float_t>)>(&::GlobalNamespace::GRSenseNearby::PickClosest)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x58b0ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"PickClosest", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSenseNearby._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSenseNearby::*)()>(&::GlobalNamespace::GRSenseNearby::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b0bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRSenseNearby::__cordl_internal_get_range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr float_t const& GlobalNamespace::GRSenseNearby::__cordl_internal_get_range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr void GlobalNamespace::GRSenseNearby::__cordl_internal_set_range(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___range = value;
}
constexpr float_t& GlobalNamespace::GRSenseNearby::__cordl_internal_get_hearingRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRange;
}
constexpr float_t const& GlobalNamespace::GRSenseNearby::__cordl_internal_get_hearingRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRange;
}
constexpr void GlobalNamespace::GRSenseNearby::__cordl_internal_set_hearingRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hearingRange = value;
}
constexpr float_t& GlobalNamespace::GRSenseNearby::__cordl_internal_get_exitRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitRange;
}
constexpr float_t const& GlobalNamespace::GRSenseNearby::__cordl_internal_get_exitRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitRange;
}
constexpr void GlobalNamespace::GRSenseNearby::__cordl_internal_set_exitRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitRange = value;
}
constexpr float_t& GlobalNamespace::GRSenseNearby::__cordl_internal_get_fov()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fov;
}
constexpr float_t const& GlobalNamespace::GRSenseNearby::__cordl_internal_get_fov() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fov;
}
constexpr void GlobalNamespace::GRSenseNearby::__cordl_internal_set_fov(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fov = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::GRSenseNearby::__cordl_internal_get_rigsNearby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigsNearby;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::GRSenseNearby::__cordl_internal_get_rigsNearby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigsNearby;
}
constexpr void GlobalNamespace::GRSenseNearby::__cordl_internal_set_rigsNearby(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigsNearby = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRSenseNearby::__cordl_internal_get_headTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRSenseNearby::__cordl_internal_get_headTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr void GlobalNamespace::GRSenseNearby::__cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRSenseNearby::__cordl_internal_get__entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRSenseNearby::__cordl_internal_get__entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entity;
}
constexpr void GlobalNamespace::GRSenseNearby::__cordl_internal_set__entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entity = value;
}
inline bool GlobalNamespace::GRSenseNearby::get_BossEntityPresent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"get_BossEntityPresent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRSenseNearby::Setup(::UnityEngine::Transform*  headTransform, ::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headTransform, entity);
}
inline void GlobalNamespace::GRSenseNearby::OnHitByPlayer(int32_t  hitByActorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"OnHitByPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitByActorId);
}
inline void GlobalNamespace::GRSenseNearby::UpdateNearby(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  allRigs, ::GlobalNamespace::GRSenseLineOfSight*  senseLineOfSight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"UpdateNearby", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(), ::i2c::type_of<::GlobalNamespace::GRSenseLineOfSight*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allRigs, senseLineOfSight);
}
inline bool GlobalNamespace::GRSenseNearby::IsAnyoneNearby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"IsAnyoneNearby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRSenseNearby::IsAnyoneNearby(float_t  range, bool  ignoreBossEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"IsAnyoneNearby", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, range, ignoreBossEntity);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GRSenseNearby::GetRigTestLocation(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"GetRigTestLocation", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, rig);
}
inline void GlobalNamespace::GRSenseNearby::AddNearby(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  forward, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  allRigs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"AddNearby", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, forward, allRigs);
}
inline void GlobalNamespace::GRSenseNearby::RemoveNotNearby(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"RemoveNotNearby", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void GlobalNamespace::GRSenseNearby::RemoveNoLineOfSight(::UnityEngine::Vector3  headPos, ::GlobalNamespace::GRSenseLineOfSight*  senseLineOfSight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"RemoveNoLineOfSight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GRSenseLineOfSight*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headPos, senseLineOfSight);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::GRSenseNearby::PickClosest(::by_ref<float_t>  outDistanceSq)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {"PickClosest", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method, outDistanceSq);
}
inline void GlobalNamespace::GRSenseNearby::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseNearby*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRSenseNearby* GlobalNamespace::GRSenseNearby::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRSenseNearby*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSenseNearby::GRSenseNearby()   {
}

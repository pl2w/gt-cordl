#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveForcedLeaveRoomVolume.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveForcedLeaveRoomVolume_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveManager_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::*)()>(&::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::Start)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5925804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::*)()>(&::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::OnDestroy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5925a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume.ContainsPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::ContainsPoint)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5925b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>(),
                        {"ContainsPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::*)()>(&::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5925cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>& GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::__cordl_internal_get_CompetitiveManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompetitiveManager;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager> const& GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::__cordl_internal_get_CompetitiveManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompetitiveManager;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::__cordl_internal_set_CompetitiveManager(::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CompetitiveManager = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::__cordl_internal_get_VolumeCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumeCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::__cordl_internal_get_VolumeCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumeCollider;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::__cordl_internal_set_VolumeCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VolumeCollider = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::ContainsPoint(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>(),
                        {"ContainsPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position);
}
inline void GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume* GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume::GorillaTagCompetitiveForcedLeaveRoomVolume()   {
}

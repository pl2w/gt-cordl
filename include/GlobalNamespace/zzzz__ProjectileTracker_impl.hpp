#pragma once
// IWYU pragma private; include "GlobalNamespace/ProjectileTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ProjectileTracker_def.hpp"
#include "GlobalNamespace/zzzz__LoopingArray_1_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ProjectileTracker_ProjectileInfo_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProjectileTracker.RemovePlayerProjectiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::ProjectileTracker::RemovePlayerProjectiles)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ad8c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker*>(),
                        {"RemovePlayerProjectiles", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileTracker.ClearProjectiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ProjectileTracker::ClearProjectiles)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5ad8efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker*>(),
                        {"ClearProjectiles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileTracker.ResetPlayerProjectiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*)>(&::GlobalNamespace::ProjectileTracker::ResetPlayerProjectiles)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5ad8db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker*>(),
                        {"ResetPlayerProjectiles", {}, {::i2c::type_of<::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileTracker.AddAndIncrementLocalProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::ProjectileTracker::AddAndIncrementLocalProjectile)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5ad90f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker*>(),
                        {"AddAndIncrementLocalProjectile", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileTracker.AddRemotePlayerProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::SlingshotProjectile*, int32_t, double_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::ProjectileTracker::AddRemotePlayerProjectile)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5ad8680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker*>(),
                        {"AddRemotePlayerProjectile", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileTracker.GetLocalProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProjectileTracker_ProjectileInfo (*)(int32_t)>(&::GlobalNamespace::ProjectileTracker::GetLocalProjectile)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ad7c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker*>(),
                        {"GetLocalProjectile", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileTracker.GetAndRemoveRemotePlayerProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<bool,::GlobalNamespace::ProjectileTracker_ProjectileInfo> (*)(::GlobalNamespace::NetPlayer*, int32_t)>(&::GlobalNamespace::ProjectileTracker::GetAndRemoveRemotePlayerProjectile)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5ad7cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker*>(),
                        {"GetAndRemoveRemotePlayerProjectile", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProjectileTracker::setStaticF_m_projectileInfoPool(::GlobalNamespace::LoopingArray_1_Pool<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::LoopingArray_1_Pool<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*, "m_projectileInfoPool", ::GlobalNamespace::ProjectileTracker*>(std::forward<::GlobalNamespace::LoopingArray_1_Pool<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*>(value));
}
inline ::GlobalNamespace::LoopingArray_1_Pool<::GlobalNamespace::ProjectileTracker_ProjectileInfo>* GlobalNamespace::ProjectileTracker::getStaticF_m_projectileInfoPool()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::LoopingArray_1_Pool<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*, "m_projectileInfoPool", ::GlobalNamespace::ProjectileTracker*>();
}
inline void GlobalNamespace::ProjectileTracker::setStaticF_m_localProjectiles(::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*, "m_localProjectiles", ::GlobalNamespace::ProjectileTracker*>(std::forward<::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*>(value));
}
inline ::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>* GlobalNamespace::ProjectileTracker::getStaticF_m_localProjectiles()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*, "m_localProjectiles", ::GlobalNamespace::ProjectileTracker*>();
}
inline void GlobalNamespace::ProjectileTracker::setStaticF_m_playerProjectiles(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*>*, "m_playerProjectiles", ::GlobalNamespace::ProjectileTracker*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*>* GlobalNamespace::ProjectileTracker::getStaticF_m_playerProjectiles()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*>*, "m_playerProjectiles", ::GlobalNamespace::ProjectileTracker*>();
}
inline void GlobalNamespace::ProjectileTracker::RemovePlayerProjectiles(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker*>(),
                        {"RemovePlayerProjectiles", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player);
}
inline void GlobalNamespace::ProjectileTracker::ClearProjectiles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker*>(),
                        {"ClearProjectiles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ProjectileTracker::ResetPlayerProjectiles(::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*  projectiles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker*>(),
                        {"ResetPlayerProjectiles", {}, {::i2c::type_of<::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, projectiles);
}
inline int32_t GlobalNamespace::ProjectileTracker::AddAndIncrementLocalProjectile(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Vector3  intialVelocity, ::UnityEngine::Vector3  initialPosition, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker*>(),
                        {"AddAndIncrementLocalProjectile", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, projectile, intialVelocity, initialPosition, scale);
}
inline void GlobalNamespace::ProjectileTracker::AddRemotePlayerProjectile(::GlobalNamespace::NetPlayer*  player, ::GlobalNamespace::SlingshotProjectile*  projectile, int32_t  projectileIndex, double_t  timeShot, ::UnityEngine::Vector3  intialVelocity, ::UnityEngine::Vector3  initialPosition, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker*>(),
                        {"AddRemotePlayerProjectile", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, projectile, projectileIndex, timeShot, intialVelocity, initialPosition, scale);
}
inline ::GlobalNamespace::ProjectileTracker_ProjectileInfo GlobalNamespace::ProjectileTracker::GetLocalProjectile(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker*>(),
                        {"GetLocalProjectile", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProjectileTracker_ProjectileInfo>(nullptr, ___internal_method, index);
}
inline ::System::ValueTuple_2<bool,::GlobalNamespace::ProjectileTracker_ProjectileInfo> GlobalNamespace::ProjectileTracker::GetAndRemoveRemotePlayerProjectile(::GlobalNamespace::NetPlayer*  player, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProjectileTracker*>(),
                        {"GetAndRemoveRemotePlayerProjectile", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool,::GlobalNamespace::ProjectileTracker_ProjectileInfo>>(nullptr, ___internal_method, player, index);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProjectileTracker::ProjectileTracker()   {
}

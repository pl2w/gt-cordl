#pragma once
// IWYU pragma private; include "GlobalNamespace/JamUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__JamUtil_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JamUtil.get_IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::JamUtil::get_IsPlaying)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d16c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JamUtil*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JamUtil.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::GlobalNamespace::JamUtil::Destroy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d16cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JamUtil*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JamUtil.ToRaycastHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit (*)(::UnityEngine::Collision*)>(&::GlobalNamespace::JamUtil::ToRaycastHit)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d16d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JamUtil*>(),
                        {"ToRaycastHit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JamUtil.ConvertToRaycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collision*, ::by_ref<::UnityEngine::RaycastHit>)>(&::GlobalNamespace::JamUtil::ConvertToRaycast)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5d16e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JamUtil*>(),
                        {"ConvertToRaycast", {}, {::i2c::type_of<::UnityEngine::Collision*>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::JamUtil::get_IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JamUtil*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::JamUtil::Destroy(::UnityEngine::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JamUtil*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline ::UnityEngine::RaycastHit GlobalNamespace::JamUtil::ToRaycastHit(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JamUtil*>(),
                        {"ToRaycastHit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit>(nullptr, ___internal_method, collision);
}
inline bool GlobalNamespace::JamUtil::ConvertToRaycast(::UnityEngine::Collision*  collision, ::by_ref<::UnityEngine::RaycastHit>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JamUtil*>(),
                        {"ConvertToRaycast", {}, {::i2c::type_of<::UnityEngine::Collision*>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, collision, hit);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JamUtil::JamUtil()   {
}

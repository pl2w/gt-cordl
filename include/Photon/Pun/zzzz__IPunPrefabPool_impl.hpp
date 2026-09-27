#pragma once
// IWYU pragma private; include "Photon/Pun/IPunPrefabPool.hpp"
#include "Photon/Pun/zzzz__IPunPrefabPool_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::IPunPrefabPool.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Photon::Pun::IPunPrefabPool::*)(::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Photon::Pun::IPunPrefabPool::Instantiate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::IPunPrefabPool*>(),
                    {::i2c::class_of<::Photon::Pun::IPunPrefabPool*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::IPunPrefabPool.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::IPunPrefabPool::*)(::UnityEngine::GameObject*)>(&::Photon::Pun::IPunPrefabPool::Destroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::IPunPrefabPool*>(),
                    {::i2c::class_of<::Photon::Pun::IPunPrefabPool*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::GameObject> Photon::Pun::IPunPrefabPool::Instantiate(::StringW  prefabId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::IPunPrefabPool*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefabId, position, rotation);
}
inline void Photon::Pun::IPunPrefabPool::Destroy(::UnityEngine::GameObject*  gameObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::IPunPrefabPool*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObject);
}

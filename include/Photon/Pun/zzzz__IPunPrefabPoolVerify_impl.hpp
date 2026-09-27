#pragma once
// IWYU pragma private; include "Photon/Pun/IPunPrefabPoolVerify.hpp"
#include "Photon/Pun/zzzz__IPunPrefabPoolVerify_def.hpp"
#include "Photon/Pun/zzzz__IPunPrefabPool_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::IPunPrefabPoolVerify.VerifyInstantiation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::IPunPrefabPoolVerify::*)(::Photon::Realtime::Player*, ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::ArrayW<int32_t>, ::by_ref<::UnityEngine::GameObject*>)>(&::Photon::Pun::IPunPrefabPoolVerify::VerifyInstantiation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::IPunPrefabPoolVerify*>(),
                    {::i2c::class_of<::Photon::Pun::IPunPrefabPoolVerify*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::IPunPrefabPoolVerify.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Photon::Pun::IPunPrefabPoolVerify::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Photon::Pun::IPunPrefabPoolVerify::Instantiate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::IPunPrefabPoolVerify*>(),
                    {::i2c::class_of<::Photon::Pun::IPunPrefabPoolVerify*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool Photon::Pun::IPunPrefabPoolVerify::VerifyInstantiation(::Photon::Realtime::Player*  sender, ::StringW  prefabId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::ArrayW<int32_t>  viewIds, ::by_ref<::UnityEngine::GameObject*>  prefab)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::IPunPrefabPoolVerify*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, prefabId, position, rotation, viewIds, prefab);
}
inline ::UnityW<::UnityEngine::GameObject> Photon::Pun::IPunPrefabPoolVerify::Instantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::IPunPrefabPoolVerify*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, position, rotation);
}
/// @brief Convert operator to "::Photon::Pun::IPunPrefabPool"
constexpr  Photon::Pun::IPunPrefabPoolVerify::operator ::Photon::Pun::IPunPrefabPool*() noexcept {
return static_cast<::Photon::Pun::IPunPrefabPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunPrefabPool"
constexpr ::Photon::Pun::IPunPrefabPool* Photon::Pun::IPunPrefabPoolVerify::i___Photon__Pun__IPunPrefabPool() noexcept {
return static_cast<::Photon::Pun::IPunPrefabPool*>(static_cast<void*>(this));
}

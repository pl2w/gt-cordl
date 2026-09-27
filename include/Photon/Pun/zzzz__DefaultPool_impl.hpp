#pragma once
// IWYU pragma private; include "Photon/Pun/DefaultPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/zzzz__DefaultPool_def.hpp"
#include "Photon/Pun/zzzz__IPunPrefabPool_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::DefaultPool.Photon_Pun_IPunPrefabPool_Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Photon::Pun::DefaultPool::*)(::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Photon::Pun::DefaultPool::Photon_Pun_IPunPrefabPool_Instantiate)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xa72c878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::DefaultPool*>(),
                        {"Photon.Pun.IPunPrefabPool.Instantiate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::DefaultPool.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::DefaultPool::*)(::UnityEngine::GameObject*)>(&::Photon::Pun::DefaultPool::Destroy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa72cad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::DefaultPool*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::DefaultPool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::DefaultPool::*)()>(&::Photon::Pun::DefaultPool::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa7190b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::DefaultPool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::GameObject>>*& Photon::Pun::DefaultPool::__cordl_internal_get_ResourceCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResourceCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::GameObject>>* const& Photon::Pun::DefaultPool::__cordl_internal_get_ResourceCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResourceCache;
}
constexpr void Photon::Pun::DefaultPool::__cordl_internal_set_ResourceCache(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ResourceCache = value;
}
inline ::UnityW<::UnityEngine::GameObject> Photon::Pun::DefaultPool::Photon_Pun_IPunPrefabPool_Instantiate(::StringW  prefabId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::DefaultPool*>(),
                        {"Photon.Pun.IPunPrefabPool.Instantiate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefabId, position, rotation);
}
inline void Photon::Pun::DefaultPool::Destroy(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::DefaultPool*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObject);
}
inline void Photon::Pun::DefaultPool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::DefaultPool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::DefaultPool* Photon::Pun::DefaultPool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::DefaultPool*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunPrefabPool"
constexpr  Photon::Pun::DefaultPool::operator ::Photon::Pun::IPunPrefabPool*() noexcept {
return static_cast<::Photon::Pun::IPunPrefabPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunPrefabPool"
constexpr ::Photon::Pun::IPunPrefabPool* Photon::Pun::DefaultPool::i___Photon__Pun__IPunPrefabPool() noexcept {
return static_cast<::Photon::Pun::IPunPrefabPool*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::DefaultPool::DefaultPool()   {
}

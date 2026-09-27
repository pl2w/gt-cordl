#pragma once
// IWYU pragma private; include "UnityEngine/ParticlePhysicsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ParticlePhysicsExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleCollisionEvent_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::ParticlePhysicsExtensions.GetCollisionEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::ParticleSystem*, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*)>(&::UnityEngine::ParticlePhysicsExtensions::GetCollisionEvents)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb671f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticlePhysicsExtensions*>(),
                        {"GetCollisionEvents", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::ParticlePhysicsExtensions::GetCollisionEvents(::UnityEngine::ParticleSystem*  ps, ::UnityEngine::GameObject*  go, ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*  collisionEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticlePhysicsExtensions*>(),
                        {"GetCollisionEvents", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ps, go, collisionEvents);
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticlePhysicsExtensions::ParticlePhysicsExtensions()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemExtensionsImpl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystemExtensionsImpl_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableListWrapper_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleCollisionEvent_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::ParticleSystemExtensionsImpl.GetCollisionEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::ParticleSystem*, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*)>(&::UnityEngine::ParticleSystemExtensionsImpl::GetCollisionEvents)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xb671f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystemExtensionsImpl*>(),
                        {"GetCollisionEvents", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystemExtensionsImpl.GetCollisionEvents_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(&::UnityEngine::ParticleSystemExtensionsImpl::GetCollisionEvents_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb67709c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystemExtensionsImpl*>(),
                        {"GetCollisionEvents_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::ParticleSystemExtensionsImpl::GetCollisionEvents(/* [NotNull] */ ::UnityEngine::ParticleSystem*  ps, /* [NotNull] */ ::UnityEngine::GameObject*  go, /* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*  collisionEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystemExtensionsImpl*>(),
                        {"GetCollisionEvents", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ps, go, collisionEvents);
}
inline int32_t UnityEngine::ParticleSystemExtensionsImpl::GetCollisionEvents_Injected(::System::IntPtr  ps, ::System::IntPtr  go, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  collisionEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleSystemExtensionsImpl*>(),
                        {"GetCollisionEvents_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ps, go, collisionEvents);
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemExtensionsImpl::ParticleSystemExtensionsImpl()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/HitChecker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HitChecker_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerColliderHandIndicator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HitChecker.CheckHandHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, ::UnityEngine::LayerMask, float_t, ::by_ref<::UnityEngine::RaycastHit>, ::by_ref<::ArrayW<::UnityEngine::RaycastHit>>, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>)>(&::GlobalNamespace::HitChecker::CheckHandHit)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x5759680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitChecker*>(),
                        {"CheckHandHit", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::RaycastHit>>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitChecker.CheckHandIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<bool>, ::by_ref<::ArrayW<::UnityEngine::Collider*>>, float_t, int32_t, ::by_ref<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>)>(&::GlobalNamespace::HitChecker::CheckHandIn)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5759b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitChecker*>(),
                        {"CheckHandIn", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Collider*>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitChecker.RayCastHitCompare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(&::GlobalNamespace::HitChecker::RayCastHitCompare)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5759cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitChecker*>(),
                        {"RayCastHitCompare", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HitChecker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitChecker::*)()>(&::GlobalNamespace::HitChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5759d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitChecker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HitChecker::CheckHandHit(::by_ref<int32_t>  collidersHitCount, ::UnityEngine::LayerMask  layerMask, float_t  sphereRadius, ::by_ref<::UnityEngine::RaycastHit>  nullHit, ::by_ref<::ArrayW<::UnityEngine::RaycastHit>>  raycastHits, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*>  raycastHitList, ::by_ref<::UnityEngine::Vector3>  spherecastSweep, ::by_ref<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>  handIndicator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitChecker*>(),
                        {"CheckHandHit", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::RaycastHit>>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, collidersHitCount, layerMask, sphereRadius, nullHit, raycastHits, raycastHitList, spherecastSweep, handIndicator);
}
inline bool GlobalNamespace::HitChecker::CheckHandIn(::by_ref<bool>  anyHit, ::by_ref<::ArrayW<::UnityEngine::Collider*>>  colliderHit, float_t  sphereRadius, int32_t  layerMask, ::by_ref<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>  handIndicator, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>  collidersToBeIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitChecker*>(),
                        {"CheckHandIn", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Collider*>>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, anyHit, colliderHit, sphereRadius, layerMask, handIndicator, collidersToBeIn);
}
inline int32_t GlobalNamespace::HitChecker::RayCastHitCompare(::UnityEngine::RaycastHit  a, ::UnityEngine::RaycastHit  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitChecker*>(),
                        {"RayCastHitCompare", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline void GlobalNamespace::HitChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitChecker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HitChecker* GlobalNamespace::HitChecker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HitChecker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HitChecker::HitChecker()   {
}

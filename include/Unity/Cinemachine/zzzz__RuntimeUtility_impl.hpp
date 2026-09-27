#pragma once
// IWYU pragma private; include "Unity/Cinemachine/RuntimeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "Unity/Cinemachine/zzzz__RuntimeUtility_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::RuntimeUtility.DestroyObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::Unity::Cinemachine::RuntimeUtility::DestroyObject)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaeb9cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RuntimeUtility*>(),
                        {"DestroyObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::RuntimeUtility.IsPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::Unity::Cinemachine::RuntimeUtility::IsPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb9d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RuntimeUtility*>(),
                        {"IsPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::RuntimeUtility.RaycastIgnoreTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t, ::by_ref<::StringW>)>(&::Unity::Cinemachine::RuntimeUtility::RaycastIgnoreTag)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xaeb9d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RuntimeUtility*>(),
                        {"RaycastIgnoreTag", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::RuntimeUtility.SphereCastIgnoreTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t, ::by_ref<::StringW>)>(&::Unity::Cinemachine::RuntimeUtility::SphereCastIgnoreTag)> {
  constexpr static std::size_t size = 0x88c;
  constexpr static std::size_t addrs = 0xaeba098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RuntimeUtility*>(),
                        {"SphereCastIgnoreTag", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::RuntimeUtility.GetScratchCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::SphereCollider> (*)()>(&::Unity::Cinemachine::RuntimeUtility::GetScratchCollider)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xaeba924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RuntimeUtility*>(),
                        {"GetScratchCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::RuntimeUtility.DestroyScratchCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Cinemachine::RuntimeUtility::DestroyScratchCollider)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xaebab94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RuntimeUtility*>(),
                        {"DestroyScratchCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::RuntimeUtility.NormalizeCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (*)(::UnityEngine::AnimationCurve*, bool, bool)>(&::Unity::Cinemachine::RuntimeUtility::NormalizeCurve)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xaebaca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RuntimeUtility*>(),
                        {"NormalizeCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::RuntimeUtility::setStaticF_s_HitBuffer(::ArrayW<::UnityEngine::RaycastHit>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::RaycastHit>, "s_HitBuffer", ::Unity::Cinemachine::RuntimeUtility*>(std::forward<::ArrayW<::UnityEngine::RaycastHit>>(value));
}
inline ::ArrayW<::UnityEngine::RaycastHit> Unity::Cinemachine::RuntimeUtility::getStaticF_s_HitBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::RaycastHit>, "s_HitBuffer", ::Unity::Cinemachine::RuntimeUtility*>();
}
inline void Unity::Cinemachine::RuntimeUtility::setStaticF_s_PenetrationIndexBuffer(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_PenetrationIndexBuffer", ::Unity::Cinemachine::RuntimeUtility*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Unity::Cinemachine::RuntimeUtility::getStaticF_s_PenetrationIndexBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_PenetrationIndexBuffer", ::Unity::Cinemachine::RuntimeUtility*>();
}
inline void Unity::Cinemachine::RuntimeUtility::setStaticF_s_ScratchCollider(::UnityW<::UnityEngine::SphereCollider>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::SphereCollider>, "s_ScratchCollider", ::Unity::Cinemachine::RuntimeUtility*>(std::forward<::UnityW<::UnityEngine::SphereCollider>>(value));
}
inline ::UnityW<::UnityEngine::SphereCollider> Unity::Cinemachine::RuntimeUtility::getStaticF_s_ScratchCollider()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::SphereCollider>, "s_ScratchCollider", ::Unity::Cinemachine::RuntimeUtility*>();
}
inline void Unity::Cinemachine::RuntimeUtility::setStaticF_s_ScratchColliderGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::GameObject>, "s_ScratchColliderGameObject", ::Unity::Cinemachine::RuntimeUtility*>(std::forward<::UnityW<::UnityEngine::GameObject>>(value));
}
inline ::UnityW<::UnityEngine::GameObject> Unity::Cinemachine::RuntimeUtility::getStaticF_s_ScratchColliderGameObject()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GameObject>, "s_ScratchColliderGameObject", ::Unity::Cinemachine::RuntimeUtility*>();
}
inline void Unity::Cinemachine::RuntimeUtility::setStaticF_s_ScratchColliderRefCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ScratchColliderRefCount", ::Unity::Cinemachine::RuntimeUtility*>(std::forward<int32_t>(value));
}
inline int32_t Unity::Cinemachine::RuntimeUtility::getStaticF_s_ScratchColliderRefCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_ScratchColliderRefCount", ::Unity::Cinemachine::RuntimeUtility*>();
}
inline void Unity::Cinemachine::RuntimeUtility::DestroyObject(::UnityEngine::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RuntimeUtility*>(),
                        {"DestroyObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline bool Unity::Cinemachine::RuntimeUtility::IsPrefab(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RuntimeUtility*>(),
                        {"IsPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gameObject);
}
inline bool Unity::Cinemachine::RuntimeUtility::RaycastIgnoreTag(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  rayLength, int32_t  layerMask, /* [IsReadOnly] */ ::by_ref<::StringW>  ignoreTag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RuntimeUtility*>(),
                        {"RaycastIgnoreTag", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, hitInfo, rayLength, layerMask, ignoreTag);
}
inline bool Unity::Cinemachine::RuntimeUtility::SphereCastIgnoreTag(::UnityEngine::Ray  ray, float_t  radius, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  rayLength, int32_t  layerMask, /* [IsReadOnly] */ ::by_ref<::StringW>  ignoreTag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RuntimeUtility*>(),
                        {"SphereCastIgnoreTag", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, radius, hitInfo, rayLength, layerMask, ignoreTag);
}
inline ::UnityW<::UnityEngine::SphereCollider> Unity::Cinemachine::RuntimeUtility::GetScratchCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RuntimeUtility*>(),
                        {"GetScratchCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::SphereCollider>>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::RuntimeUtility::DestroyScratchCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RuntimeUtility*>(),
                        {"DestroyScratchCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* Unity::Cinemachine::RuntimeUtility::NormalizeCurve(::UnityEngine::AnimationCurve*  curve, bool  normalizeX, bool  normalizeY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RuntimeUtility*>(),
                        {"NormalizeCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(nullptr, ___internal_method, curve, normalizeX, normalizeY);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::RuntimeUtility::RuntimeUtility()   {
}

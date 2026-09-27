#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSceneTransform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaSceneTransform_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaSceneTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSceneTransform::*)()>(&::GlobalNamespace::GorillaSceneTransform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579de84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSceneTransform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaSceneTransform::__cordl_internal_get_scenePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaSceneTransform::__cordl_internal_get_scenePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePosition;
}
constexpr void GlobalNamespace::GorillaSceneTransform::__cordl_internal_set_scenePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenePosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaSceneTransform::__cordl_internal_get_sceneRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaSceneTransform::__cordl_internal_get_sceneRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRotation;
}
constexpr void GlobalNamespace::GorillaSceneTransform::__cordl_internal_set_sceneRotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneRotation = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GorillaSceneTransform::__cordl_internal_get_sceneCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GorillaSceneTransform::__cordl_internal_get_sceneCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneCollider;
}
constexpr void GlobalNamespace::GorillaSceneTransform::__cordl_internal_set_sceneCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneCollider = value;
}
inline void GlobalNamespace::GorillaSceneTransform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSceneTransform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaSceneTransform* GlobalNamespace::GorillaSceneTransform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaSceneTransform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaSceneTransform::GorillaSceneTransform()   {
}

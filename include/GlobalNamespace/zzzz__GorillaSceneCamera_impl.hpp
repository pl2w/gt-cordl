#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSceneCamera.hpp"
#include "GlobalNamespace/zzzz__GorillaSceneTransform_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaSceneCamera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaSceneCamera.SetSceneCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSceneCamera::*)(int32_t)>(&::GlobalNamespace::GorillaSceneCamera::SetSceneCamera)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x579d6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSceneCamera*>(),
                        {"SetSceneCamera", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSceneCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSceneCamera::*)()>(&::GlobalNamespace::GorillaSceneCamera::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579de8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSceneCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::GorillaSceneTransform*>& GlobalNamespace::GorillaSceneCamera::__cordl_internal_get_sceneTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneTransforms;
}
constexpr ::ArrayW<::GlobalNamespace::GorillaSceneTransform*> const& GlobalNamespace::GorillaSceneCamera::__cordl_internal_get_sceneTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneTransforms;
}
constexpr void GlobalNamespace::GorillaSceneCamera::__cordl_internal_set_sceneTransforms(::ArrayW<::GlobalNamespace::GorillaSceneTransform*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneTransforms = value;
}
inline void GlobalNamespace::GorillaSceneCamera::SetSceneCamera(int32_t  sceneIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSceneCamera*>(),
                        {"SetSceneCamera", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneIndex);
}
inline void GlobalNamespace::GorillaSceneCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSceneCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaSceneCamera* GlobalNamespace::GorillaSceneCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaSceneCamera*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaSceneCamera::GorillaSceneCamera()   {
}

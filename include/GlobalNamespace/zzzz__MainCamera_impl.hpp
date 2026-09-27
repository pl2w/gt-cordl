#pragma once
// IWYU pragma private; include "GlobalNamespace/MainCamera.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourStatic_1_impl.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainCamera.op_Implicit___UnityW___UnityEngine__Camera_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (*)(::GlobalNamespace::MainCamera*)>(&::GlobalNamespace::MainCamera::op_Implicit___UnityW___UnityEngine__Camera_)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a1dc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainCamera*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::MainCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainCamera::*)()>(&::GlobalNamespace::MainCamera::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a1dc34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::MainCamera::__cordl_internal_get_camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::MainCamera::__cordl_internal_get_camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camera;
}
constexpr void GlobalNamespace::MainCamera::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___camera = value;
}
inline ::UnityW<::UnityEngine::Camera> GlobalNamespace::MainCamera::op_Implicit___UnityW___UnityEngine__Camera_(::GlobalNamespace::MainCamera*  mc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainCamera*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::MainCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(nullptr, ___internal_method, mc);
}
inline void GlobalNamespace::MainCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainCamera* GlobalNamespace::MainCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainCamera*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainCamera::MainCamera()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/LivCameraDockPreviewSync.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LivCameraDockPreviewSync_def.hpp"
#include "Docking/zzzz__LivCameraDock_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LivCameraDockPreviewSync._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LivCameraDockPreviewSync::*)()>(&::GlobalNamespace::LivCameraDockPreviewSync::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56d1ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LivCameraDockPreviewSync*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Docking::LivCameraDock>& GlobalNamespace::LivCameraDockPreviewSync::__cordl_internal_get_dock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dock;
}
constexpr ::UnityW<::Docking::LivCameraDock> const& GlobalNamespace::LivCameraDockPreviewSync::__cordl_internal_get_dock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dock;
}
constexpr void GlobalNamespace::LivCameraDockPreviewSync::__cordl_internal_set_dock(::UnityW<::Docking::LivCameraDock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dock = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::LivCameraDockPreviewSync::__cordl_internal_get_parentCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::LivCameraDockPreviewSync::__cordl_internal_get_parentCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentCamera;
}
constexpr void GlobalNamespace::LivCameraDockPreviewSync::__cordl_internal_set_parentCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentCamera = value;
}
constexpr float_t& GlobalNamespace::LivCameraDockPreviewSync::__cordl_internal_get__lastCameraFOV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastCameraFOV;
}
constexpr float_t const& GlobalNamespace::LivCameraDockPreviewSync::__cordl_internal_get__lastCameraFOV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastCameraFOV;
}
constexpr void GlobalNamespace::LivCameraDockPreviewSync::__cordl_internal_set__lastCameraFOV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastCameraFOV = value;
}
constexpr float_t& GlobalNamespace::LivCameraDockPreviewSync::__cordl_internal_get__lastDockFOV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDockFOV;
}
constexpr float_t const& GlobalNamespace::LivCameraDockPreviewSync::__cordl_internal_get__lastDockFOV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDockFOV;
}
constexpr void GlobalNamespace::LivCameraDockPreviewSync::__cordl_internal_set__lastDockFOV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastDockFOV = value;
}
inline void GlobalNamespace::LivCameraDockPreviewSync::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LivCameraDockPreviewSync*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LivCameraDockPreviewSync* GlobalNamespace::LivCameraDockPreviewSync::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LivCameraDockPreviewSync*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LivCameraDockPreviewSync::LivCameraDockPreviewSync()   {
}

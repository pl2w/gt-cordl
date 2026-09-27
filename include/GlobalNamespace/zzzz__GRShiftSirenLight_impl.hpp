#pragma once
// IWYU pragma private; include "GlobalNamespace/GRShiftSirenLight.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__GRShiftSirenLight_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorShiftManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRShiftSirenLight.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShiftSirenLight::*)()>(&::GlobalNamespace::GRShiftSirenLight::Tick)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x58b3d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRShiftSirenLight*>(),
                    {::i2c::class_of<::GlobalNamespace::GRShiftSirenLight*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShiftSirenLight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShiftSirenLight::*)()>(&::GlobalNamespace::GRShiftSirenLight::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58b3ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftSirenLight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_rotationRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationRate;
}
constexpr float_t const& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_rotationRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationRate;
}
constexpr void GlobalNamespace::GRShiftSirenLight::__cordl_internal_set_rotationRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationRate = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_greenLightParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenLightParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_greenLightParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenLightParent;
}
constexpr void GlobalNamespace::GRShiftSirenLight::__cordl_internal_set_greenLightParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greenLightParent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_redLightParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redLightParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_redLightParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redLightParent;
}
constexpr void GlobalNamespace::GRShiftSirenLight::__cordl_internal_set_redLightParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redLightParent = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_redLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redLight;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_redLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redLight;
}
constexpr void GlobalNamespace::GRShiftSirenLight::__cordl_internal_set_redLight(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redLight = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_greenLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenLight;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_greenLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenLight;
}
constexpr void GlobalNamespace::GRShiftSirenLight::__cordl_internal_set_greenLight(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greenLight = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorShiftManager>& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_shiftManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftManager;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorShiftManager> const& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_shiftManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftManager;
}
constexpr void GlobalNamespace::GRShiftSirenLight::__cordl_internal_set_shiftManager(::UnityW<::GlobalNamespace::GhostReactorShiftManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftManager = value;
}
constexpr float_t& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_dimLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dimLight;
}
constexpr float_t const& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_dimLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dimLight;
}
constexpr void GlobalNamespace::GRShiftSirenLight::__cordl_internal_set_dimLight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dimLight = value;
}
constexpr float_t& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_brightLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brightLight;
}
constexpr float_t const& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_brightLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brightLight;
}
constexpr void GlobalNamespace::GRShiftSirenLight::__cordl_internal_set_brightLight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___brightLight = value;
}
constexpr ::UnityW<::UnityEngine::Light>& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_readyRoomLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyRoomLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& GlobalNamespace::GRShiftSirenLight::__cordl_internal_get_readyRoomLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyRoomLight;
}
constexpr void GlobalNamespace::GRShiftSirenLight::__cordl_internal_set_readyRoomLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readyRoomLight = value;
}
inline void GlobalNamespace::GRShiftSirenLight::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRShiftSirenLight*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShiftSirenLight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftSirenLight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRShiftSirenLight* GlobalNamespace::GRShiftSirenLight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRShiftSirenLight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRShiftSirenLight::GRShiftSirenLight()   {
}

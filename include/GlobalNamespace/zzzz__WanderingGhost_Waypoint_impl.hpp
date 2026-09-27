#pragma once
// IWYU pragma private; include "GlobalNamespace/WanderingGhost_Waypoint.hpp"
#include "GlobalNamespace/zzzz__WanderingGhost_Waypoint_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WanderingGhost_Waypoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WanderingGhost_Waypoint::*)(bool, ::UnityEngine::Transform*)>(&::GlobalNamespace::WanderingGhost_Waypoint::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a121f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost_Waypoint>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WanderingGhost_Waypoint::_ctor(bool  visible, ::UnityEngine::Transform*  tr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WanderingGhost_Waypoint>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, visible, tr);
}
// Ctor Parameters [CppParam { name: "_visible", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WanderingGhost_Waypoint::WanderingGhost_Waypoint(bool  _visible, ::UnityW<::UnityEngine::Transform>  _transform) noexcept  {
this->_visible = _visible;
this->_transform = _transform;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WanderingGhost_Waypoint::WanderingGhost_Waypoint()   {
}

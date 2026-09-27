#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/TrackedDeviceRaycaster_RaycastHitData.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__TrackedDeviceRaycaster_RaycastHitData_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::*)(::UnityEngine::UI::Graphic*, ::UnityEngine::Vector3, ::UnityEngine::Vector2, float_t)>(&::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xafda61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UI::Graphic*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData.get_graphic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Graphic> (::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::*)()>(&::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::get_graphic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafda790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData>(),
                        {"get_graphic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData.get_worldHitPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::*)()>(&::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::get_worldHitPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafda798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData>(),
                        {"get_worldHitPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData.get_screenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::*)()>(&::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::get_screenPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafda7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData>(),
                        {"get_screenPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData.get_distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::*)()>(&::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::get_distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafda7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData>(),
                        {"get_distance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::_ctor(::UnityEngine::UI::Graphic*  graphic, ::UnityEngine::Vector3  worldHitPosition, ::UnityEngine::Vector2  screenPosition, float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UI::Graphic*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, graphic, worldHitPosition, screenPosition, distance);
}
inline ::UnityW<::UnityEngine::UI::Graphic> GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::get_graphic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData>(),
                        {"get_graphic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Graphic>>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::get_worldHitPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData>(),
                        {"get_worldHitPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::get_screenPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData>(),
                        {"get_screenPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline float_t GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::get_distance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData>(),
                        {"get_distance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_graphic_k__BackingField", ty: "::UnityW<::UnityEngine::UI::Graphic>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_worldHitPosition_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_screenPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::TrackedDeviceRaycaster_RaycastHitData(::UnityW<::UnityEngine::UI::Graphic>  _graphic_k__BackingField, ::UnityEngine::Vector3  _worldHitPosition_k__BackingField, ::UnityEngine::Vector2  _screenPosition_k__BackingField, float_t  _distance_k__BackingField) noexcept  {
this->_graphic_k__BackingField = _graphic_k__BackingField;
this->_worldHitPosition_k__BackingField = _worldHitPosition_k__BackingField;
this->_screenPosition_k__BackingField = _screenPosition_k__BackingField;
this->_distance_k__BackingField = _distance_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData::TrackedDeviceRaycaster_RaycastHitData()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/PointerModel.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__PointerModel_ButtonState_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__PointerModel_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__ExtendedPointerEventData_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__PointerModel_ButtonState_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_pointerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::UI::UIPointerType (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_pointerType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xafd35a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_pointerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_screenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_screenPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafd9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_screenPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_screenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(::UnityEngine::Vector2)>(&::UnityEngine::InputSystem::UI::PointerModel::set_screenPosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xafd7e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_screenPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_worldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_worldPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xafd985c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_worldPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_worldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(::UnityEngine::Vector3)>(&::UnityEngine::InputSystem::UI::PointerModel::set_worldPosition)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xafd8bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_worldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_worldOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_worldOrientation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xafd986c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_worldOrientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_worldOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(::UnityEngine::Quaternion)>(&::UnityEngine::InputSystem::UI::PointerModel::set_worldOrientation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xafd8a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_worldOrientation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_scrollDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_scrollDelta)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafd9880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_scrollDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_scrollDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(::UnityEngine::Vector2)>(&::UnityEngine::InputSystem::UI::PointerModel::set_scrollDelta)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xafd8894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_scrollDelta", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_pressure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_pressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafd988c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_pressure", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_pressure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(float_t)>(&::UnityEngine::InputSystem::UI::PointerModel::set_pressure)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xafd9894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_pressure", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_azimuthAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_azimuthAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafd98b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_azimuthAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_azimuthAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(float_t)>(&::UnityEngine::InputSystem::UI::PointerModel::set_azimuthAngle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xafd98bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_azimuthAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_altitudeAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_altitudeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafd98dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_altitudeAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_altitudeAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(float_t)>(&::UnityEngine::InputSystem::UI::PointerModel::set_altitudeAngle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xafd98e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_altitudeAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_twist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_twist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafd9904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_twist", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_twist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(float_t)>(&::UnityEngine::InputSystem::UI::PointerModel::set_twist)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xafd990c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_twist", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.get_radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::get_radius)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafd992c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.set_radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(::UnityEngine::Vector2)>(&::UnityEngine::InputSystem::UI::PointerModel::set_radius)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xafd9938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_radius", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*)>(&::UnityEngine::InputSystem::UI::PointerModel::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xafd7e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.OnFrameFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)()>(&::UnityEngine::InputSystem::UI::PointerModel::OnFrameFinished)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xafd9028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"OnFrameFinished", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::PointerModel.CopyTouchOrPenStateFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::PointerModel::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::InputSystem::UI::PointerModel::CopyTouchOrPenStateFrom)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xafd8dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"CopyTouchOrPenStateFrom", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::UI::UIPointerType UnityEngine::InputSystem::UI::PointerModel::get_pointerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_pointerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::UI::UIPointerType>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::UI::PointerModel::get_screenPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_screenPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_screenPosition(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_screenPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::UI::PointerModel::get_worldPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_worldPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_worldPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_worldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::InputSystem::UI::PointerModel::get_worldOrientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_worldOrientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_worldOrientation(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_worldOrientation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::UI::PointerModel::get_scrollDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_scrollDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_scrollDelta(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_scrollDelta", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::PointerModel::get_pressure()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_pressure", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_pressure(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_pressure", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::PointerModel::get_azimuthAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_azimuthAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_azimuthAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_azimuthAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::PointerModel::get_altitudeAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_altitudeAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_altitudeAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_altitudeAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::PointerModel::get_twist()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_twist", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_twist(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_twist", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::UI::PointerModel::get_radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"get_radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::set_radius(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"set_radius", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::PointerModel::_ctor(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
inline void UnityEngine::InputSystem::UI::PointerModel::OnFrameFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"OnFrameFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::PointerModel::CopyTouchOrPenStateFrom(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::UI::PointerModel>(),
                        {"CopyTouchOrPenStateFrom", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
// Ctor Parameters [CppParam { name: "changedThisFrame", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftButton", ty: "::GlobalNamespace::PointerModel_ButtonState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightButton", ty: "::GlobalNamespace::PointerModel_ButtonState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "middleButton", ty: "::GlobalNamespace::PointerModel_ButtonState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "eventData", ty: "::UnityEngine::InputSystem::UI::ExtendedPointerEventData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ScreenPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ScrollDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_WorldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_WorldOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Pressure", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AzimuthAngle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AltitudeAngle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Twist", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Radius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::InputSystem::UI::PointerModel::PointerModel(bool  changedThisFrame, ::GlobalNamespace::PointerModel_ButtonState  leftButton, ::GlobalNamespace::PointerModel_ButtonState  rightButton, ::GlobalNamespace::PointerModel_ButtonState  middleButton, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*  eventData, ::UnityEngine::Vector2  m_ScreenPosition, ::UnityEngine::Vector2  m_ScrollDelta, ::UnityEngine::Vector3  m_WorldPosition, ::UnityEngine::Quaternion  m_WorldOrientation, float_t  m_Pressure, float_t  m_AzimuthAngle, float_t  m_AltitudeAngle, float_t  m_Twist, ::UnityEngine::Vector2  m_Radius) noexcept  {
this->changedThisFrame = changedThisFrame;
this->leftButton = leftButton;
this->rightButton = rightButton;
this->middleButton = middleButton;
this->eventData = eventData;
this->m_ScreenPosition = m_ScreenPosition;
this->m_ScrollDelta = m_ScrollDelta;
this->m_WorldPosition = m_WorldPosition;
this->m_WorldOrientation = m_WorldOrientation;
this->m_Pressure = m_Pressure;
this->m_AzimuthAngle = m_AzimuthAngle;
this->m_AltitudeAngle = m_AltitudeAngle;
this->m_Twist = m_Twist;
this->m_Radius = m_Radius;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::PointerModel::PointerModel()   {
}

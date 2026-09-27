#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointableDebugGizmos.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/zzzz__PointableDebugGizmos_def.hpp"
#include "Oculus/Interaction/zzzz__IPointable_def.hpp"
#include "Oculus/Interaction/zzzz__PointableDebugGizmos_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.get_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PointableDebugGizmos::*)()>(&::Oculus::Interaction::PointableDebugGizmos::get_Radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46b0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"get_Radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.set_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos::*)(float_t)>(&::Oculus::Interaction::PointableDebugGizmos::set_Radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46b0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"set_Radius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.get_HoverColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::PointableDebugGizmos::*)()>(&::Oculus::Interaction::PointableDebugGizmos::get_HoverColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa46b0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"get_HoverColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.set_HoverColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos::*)(::UnityEngine::Color)>(&::Oculus::Interaction::PointableDebugGizmos::set_HoverColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa46b0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"set_HoverColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.get_SelectColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::PointableDebugGizmos::*)()>(&::Oculus::Interaction::PointableDebugGizmos::get_SelectColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa46b0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"get_SelectColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.set_SelectColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos::*)(::UnityEngine::Color)>(&::Oculus::Interaction::PointableDebugGizmos::set_SelectColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa46b0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"set_SelectColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.get_DrawAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PointableDebugGizmos::*)()>(&::Oculus::Interaction::PointableDebugGizmos::get_DrawAxes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46b0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"get_DrawAxes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.set_DrawAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos::*)(bool)>(&::Oculus::Interaction::PointableDebugGizmos::set_DrawAxes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46b0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"set_DrawAxes", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos::*)()>(&::Oculus::Interaction::PointableDebugGizmos::Reset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa46b0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos::*)()>(&::Oculus::Interaction::PointableDebugGizmos::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa46b154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos::*)()>(&::Oculus::Interaction::PointableDebugGizmos::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa46b1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos::*)()>(&::Oculus::Interaction::PointableDebugGizmos::OnEnable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa46b25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos::*)()>(&::Oculus::Interaction::PointableDebugGizmos::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa46b358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.HandlePointerEventRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::PointableDebugGizmos::HandlePointerEventRaised)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa46b458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"HandlePointerEventRaised", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos::*)()>(&::Oculus::Interaction::PointableDebugGizmos::LateUpdate)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xa46b654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.InjectAllPointableDebugGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos::*)(::Oculus::Interaction::IPointable*)>(&::Oculus::Interaction::PointableDebugGizmos::InjectAllPointableDebugGizmos)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa46b150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"InjectAllPointableDebugGizmos", {}, {::i2c::type_of<::Oculus::Interaction::IPointable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos.InjectPointable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos::*)(::Oculus::Interaction::IPointable*)>(&::Oculus::Interaction::PointableDebugGizmos::InjectPointable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa46b8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"InjectPointable", {}, {::i2c::type_of<::Oculus::Interaction::IPointable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos::*)()>(&::Oculus::Interaction::PointableDebugGizmos::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa46b980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get__pointable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointable;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get__pointable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointable;
}
constexpr void Oculus::Interaction::PointableDebugGizmos::__cordl_internal_set__pointable(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointable = value;
}
constexpr float_t& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get__radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr float_t const& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get__radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr void Oculus::Interaction::PointableDebugGizmos::__cordl_internal_set__radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____radius = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get__hoverColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get__hoverColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverColor;
}
constexpr void Oculus::Interaction::PointableDebugGizmos::__cordl_internal_set__hoverColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoverColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get__selectColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get__selectColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectColor;
}
constexpr void Oculus::Interaction::PointableDebugGizmos::__cordl_internal_set__selectColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectColor = value;
}
constexpr bool& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get__drawAxes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drawAxes;
}
constexpr bool const& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get__drawAxes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drawAxes;
}
constexpr void Oculus::Interaction::PointableDebugGizmos::__cordl_internal_set__drawAxes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____drawAxes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableDebugGizmos_PointData*>*& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get__points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableDebugGizmos_PointData*>* const& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get__points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr void Oculus::Interaction::PointableDebugGizmos::__cordl_internal_set__points(::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableDebugGizmos_PointData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____points = value;
}
constexpr ::Oculus::Interaction::IPointable*& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get_Pointable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pointable;
}
constexpr ::Oculus::Interaction::IPointable* const& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get_Pointable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pointable;
}
constexpr void Oculus::Interaction::PointableDebugGizmos::__cordl_internal_set_Pointable(::Oculus::Interaction::IPointable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pointable = value;
}
constexpr bool& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::PointableDebugGizmos::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::PointableDebugGizmos::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline float_t Oculus::Interaction::PointableDebugGizmos::get_Radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"get_Radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableDebugGizmos::set_Radius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"set_Radius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::PointableDebugGizmos::get_HoverColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"get_HoverColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableDebugGizmos::set_HoverColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"set_HoverColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::PointableDebugGizmos::get_SelectColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"get_SelectColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableDebugGizmos::set_SelectColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"set_SelectColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::PointableDebugGizmos::get_DrawAxes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"get_DrawAxes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableDebugGizmos::set_DrawAxes(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"set_DrawAxes", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PointableDebugGizmos::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableDebugGizmos::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableDebugGizmos::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableDebugGizmos::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableDebugGizmos::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableDebugGizmos::HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"HandlePointerEventRaised", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::PointableDebugGizmos::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableDebugGizmos::InjectAllPointableDebugGizmos(::Oculus::Interaction::IPointable*  pointable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"InjectAllPointableDebugGizmos", {}, {::i2c::type_of<::Oculus::Interaction::IPointable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointable);
}
inline void Oculus::Interaction::PointableDebugGizmos::InjectPointable(::Oculus::Interaction::IPointable*  pointable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {"InjectPointable", {}, {::i2c::type_of<::Oculus::Interaction::IPointable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointable);
}
inline void Oculus::Interaction::PointableDebugGizmos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PointableDebugGizmos* Oculus::Interaction::PointableDebugGizmos::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PointableDebugGizmos*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PointableDebugGizmos::PointableDebugGizmos()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos_PointData.get_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::PointableDebugGizmos_PointData::*)()>(&::Oculus::Interaction::PointableDebugGizmos_PointData::get_Pose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa46b9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos_PointData*>(),
                        {"get_Pose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos_PointData.set_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos_PointData::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::PointableDebugGizmos_PointData::set_Pose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa46b9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos_PointData*>(),
                        {"set_Pose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos_PointData.get_Selecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PointableDebugGizmos_PointData::*)()>(&::Oculus::Interaction::PointableDebugGizmos_PointData::get_Selecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46b9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos_PointData*>(),
                        {"get_Selecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos_PointData.set_Selecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos_PointData::*)(bool)>(&::Oculus::Interaction::PointableDebugGizmos_PointData::set_Selecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46b9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos_PointData*>(),
                        {"set_Selecting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableDebugGizmos_PointData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableDebugGizmos_PointData::*)()>(&::Oculus::Interaction::PointableDebugGizmos_PointData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46b64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos_PointData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Pose& Oculus::Interaction::PointableDebugGizmos_PointData::__cordl_internal_get__Pose_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pose_k__BackingField;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::PointableDebugGizmos_PointData::__cordl_internal_get__Pose_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pose_k__BackingField;
}
constexpr void Oculus::Interaction::PointableDebugGizmos_PointData::__cordl_internal_set__Pose_k__BackingField(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Pose_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::PointableDebugGizmos_PointData::__cordl_internal_get__Selecting_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Selecting_k__BackingField;
}
constexpr bool const& Oculus::Interaction::PointableDebugGizmos_PointData::__cordl_internal_get__Selecting_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Selecting_k__BackingField;
}
constexpr void Oculus::Interaction::PointableDebugGizmos_PointData::__cordl_internal_set__Selecting_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Selecting_k__BackingField = value;
}
inline ::UnityEngine::Pose Oculus::Interaction::PointableDebugGizmos_PointData::get_Pose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos_PointData*>(),
                        {"get_Pose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableDebugGizmos_PointData::set_Pose(::UnityEngine::Pose  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos_PointData*>(),
                        {"set_Pose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::PointableDebugGizmos_PointData::get_Selecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos_PointData*>(),
                        {"get_Selecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableDebugGizmos_PointData::set_Selecting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos_PointData*>(),
                        {"set_Selecting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PointableDebugGizmos_PointData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableDebugGizmos_PointData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PointableDebugGizmos_PointData* Oculus::Interaction::PointableDebugGizmos_PointData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PointableDebugGizmos_PointData*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PointableDebugGizmos_PointData::PointableDebugGizmos_PointData()   {
}

#pragma once
// IWYU pragma private; include "Pathfinding/Util/Draw.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "Pathfinding/Util/zzzz__Draw_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Util::Draw.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::Draw::*)(::UnityEngine::Color)>(&::Pathfinding::Util::Draw::SetColor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ed541c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Draw.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::Draw::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Color, bool)>(&::Pathfinding::Util::Draw::Polyline)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5ed54b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Draw.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::Draw::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::Pathfinding::Util::Draw::Line)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5ed562c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Draw.CircleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::Draw::*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Color, float_t, float_t)>(&::Pathfinding::Util::Draw::CircleXZ)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5ed5784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {"CircleXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Draw.Cylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::Draw::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, ::UnityEngine::Color)>(&::Pathfinding::Util::Draw::Cylinder)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5ed58d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {"Cylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Draw.CrossXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::Draw::*)(::UnityEngine::Vector3, ::UnityEngine::Color, float_t)>(&::Pathfinding::Util::Draw::CrossXZ)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5ed5c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {"CrossXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Draw.Bezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::Draw::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::Pathfinding::Util::Draw::Bezier)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5ed5d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {"Bezier", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Draw._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::Draw::*)()>(&::Pathfinding::Util::Draw::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ed60bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::Util::Draw::__cordl_internal_get_gizmos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmos;
}
constexpr bool const& Pathfinding::Util::Draw::__cordl_internal_get_gizmos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmos;
}
constexpr void Pathfinding::Util::Draw::__cordl_internal_set_gizmos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmos = value;
}
constexpr ::UnityEngine::Matrix4x4& Pathfinding::Util::Draw::__cordl_internal_get_matrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrix;
}
constexpr ::UnityEngine::Matrix4x4 const& Pathfinding::Util::Draw::__cordl_internal_get_matrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrix;
}
constexpr void Pathfinding::Util::Draw::__cordl_internal_set_matrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matrix = value;
}
inline void Pathfinding::Util::Draw::setStaticF_Debug(::Pathfinding::Util::Draw*  value)  {
::cordl_internals::setStaticField<::Pathfinding::Util::Draw*, "Debug", ::Pathfinding::Util::Draw*>(std::forward<::Pathfinding::Util::Draw*>(value));
}
inline ::Pathfinding::Util::Draw* Pathfinding::Util::Draw::getStaticF_Debug()  {
return ::cordl_internals::getStaticField<::Pathfinding::Util::Draw*, "Debug", ::Pathfinding::Util::Draw*>();
}
inline void Pathfinding::Util::Draw::setStaticF_Gizmos(::Pathfinding::Util::Draw*  value)  {
::cordl_internals::setStaticField<::Pathfinding::Util::Draw*, "Gizmos", ::Pathfinding::Util::Draw*>(std::forward<::Pathfinding::Util::Draw*>(value));
}
inline ::Pathfinding::Util::Draw* Pathfinding::Util::Draw::getStaticF_Gizmos()  {
return ::cordl_internals::getStaticField<::Pathfinding::Util::Draw*, "Gizmos", ::Pathfinding::Util::Draw*>();
}
inline void Pathfinding::Util::Draw::SetColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void Pathfinding::Util::Draw::Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::UnityEngine::Color  color, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points, color, cycle);
}
inline void Pathfinding::Util::Draw::Line(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, color);
}
inline void Pathfinding::Util::Draw::CircleXZ(::UnityEngine::Vector3  center, float_t  radius, ::UnityEngine::Color  color, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {"CircleXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, center, radius, color, startAngle, endAngle);
}
inline void Pathfinding::Util::Draw::Cylinder(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, float_t  height, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {"Cylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, up, height, radius, color);
}
inline void Pathfinding::Util::Draw::CrossXZ(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {"CrossXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, color, size);
}
inline void Pathfinding::Util::Draw::Bezier(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {"Bezier", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, color);
}
inline void Pathfinding::Util::Draw::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Draw*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Util::Draw* Pathfinding::Util::Draw::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::Draw*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::Draw::Draw()   {
}

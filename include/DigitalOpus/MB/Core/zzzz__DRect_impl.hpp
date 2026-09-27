#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/DRect.hpp"
#include "DigitalOpus/MB/Core/zzzz__DRect_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__DVector2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::DRect::*)(::UnityEngine::Rect)>(&::DigitalOpus::MB::Core::DRect::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9dbc900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::DRect::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::DigitalOpus::MB::Core::DRect::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9dbc91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::DRect::*)(::DigitalOpus::MB::Core::DRect)>(&::DigitalOpus::MB::Core::DRect::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9dbc938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::DRect::*)(float_t, float_t, float_t, float_t)>(&::DigitalOpus::MB::Core::DRect::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9dbc944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::DRect::*)(double_t, double_t, double_t, double_t)>(&::DigitalOpus::MB::Core::DRect::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9dbc960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect.GetRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::DigitalOpus::MB::Core::DRect::*)()>(&::DigitalOpus::MB::Core::DRect::GetRect)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9dbc96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"GetRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect.get_minD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::DVector2 (::DigitalOpus::MB::Core::DRect::*)()>(&::DigitalOpus::MB::Core::DRect::get_minD)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dbc988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"get_minD", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect.get_maxD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::DVector2 (::DigitalOpus::MB::Core::DRect::*)()>(&::DigitalOpus::MB::Core::DRect::get_maxD)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9dbc990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"get_maxD", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect.get_min
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::DigitalOpus::MB::Core::DRect::*)()>(&::DigitalOpus::MB::Core::DRect::get_min)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9dbc9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"get_min", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect.get_max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::DigitalOpus::MB::Core::DRect::*)()>(&::DigitalOpus::MB::Core::DRect::get_max)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9dbc9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"get_max", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect.get_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::DigitalOpus::MB::Core::DRect::*)()>(&::DigitalOpus::MB::Core::DRect::get_size)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9dbc9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"get_size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect.get_center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::DVector2 (::DigitalOpus::MB::Core::DRect::*)()>(&::DigitalOpus::MB::Core::DRect::get_center)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9dbc9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"get_center", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::DRect::*)(::System::Object*)>(&::DigitalOpus::MB::Core::DRect::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9dbc9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::DRect>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::DigitalOpus::MB::Core::DRect, ::DigitalOpus::MB::Core::DRect)>(&::DigitalOpus::MB::Core::DRect::op_Equality)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9dbcaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"op_Equality", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>(), ::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::DigitalOpus::MB::Core::DRect, ::DigitalOpus::MB::Core::DRect)>(&::DigitalOpus::MB::Core::DRect::op_Inequality)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9dbcb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"op_Inequality", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>(), ::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::DRect::*)()>(&::DigitalOpus::MB::Core::DRect::ToString)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x9dbcbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::DRect>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect.Expand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::DRect::*)(float_t)>(&::DigitalOpus::MB::Core::DRect::Expand)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dbcd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"Expand", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect.Encloses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::DRect::*)(::DigitalOpus::MB::Core::DRect)>(&::DigitalOpus::MB::Core::DRect::Encloses)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9dbcdb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"Encloses", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DRect.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::DRect::*)()>(&::DigitalOpus::MB::Core::DRect::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9dbce08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::DRect>(), 2}
                ));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::DRect::_ctor(::UnityEngine::Rect  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, r);
}
inline void DigitalOpus::MB::Core::DRect::_ctor(::UnityEngine::Vector2  o, ::UnityEngine::Vector2  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, o, s);
}
inline void DigitalOpus::MB::Core::DRect::_ctor(::DigitalOpus::MB::Core::DRect  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, r);
}
inline void DigitalOpus::MB::Core::DRect::_ctor(float_t  xx, float_t  yy, float_t  w, float_t  h)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xx, yy, w, h);
}
inline void DigitalOpus::MB::Core::DRect::_ctor(double_t  xx, double_t  yy, double_t  w, double_t  h)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xx, yy, w, h);
}
inline ::UnityEngine::Rect DigitalOpus::MB::Core::DRect::GetRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"GetRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(*this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::DVector2 DigitalOpus::MB::Core::DRect::get_minD()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"get_minD", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::DVector2>(*this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::DVector2 DigitalOpus::MB::Core::DRect::get_maxD()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"get_maxD", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::DVector2>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 DigitalOpus::MB::Core::DRect::get_min()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"get_min", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 DigitalOpus::MB::Core::DRect::get_max()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"get_max", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 DigitalOpus::MB::Core::DRect::get_size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"get_size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::DVector2 DigitalOpus::MB::Core::DRect::get_center()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"get_center", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::DVector2>(*this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::DRect::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::DRect>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool DigitalOpus::MB::Core::DRect::op_Equality(::DigitalOpus::MB::Core::DRect  a, ::DigitalOpus::MB::Core::DRect  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"op_Equality", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>(), ::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool DigitalOpus::MB::Core::DRect::op_Inequality(::DigitalOpus::MB::Core::DRect  a, ::DigitalOpus::MB::Core::DRect  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"op_Inequality", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>(), ::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::StringW DigitalOpus::MB::Core::DRect::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::DRect>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void DigitalOpus::MB::Core::DRect::Expand(float_t  amt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"Expand", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, amt);
}
inline bool DigitalOpus::MB::Core::DRect::Encloses(::DigitalOpus::MB::Core::DRect  smallToTestIfFits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DRect>(),
                        {"Encloses", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, smallToTestIfFits);
}
inline int32_t DigitalOpus::MB::Core::DRect::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::DRect>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "width", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "height", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::DigitalOpus::MB::Core::DRect::DRect(double_t  x, double_t  y, double_t  width, double_t  height) noexcept  {
this->x = x;
this->y = y;
this->width = width;
this->height = height;
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::DRect::DRect()   {
}

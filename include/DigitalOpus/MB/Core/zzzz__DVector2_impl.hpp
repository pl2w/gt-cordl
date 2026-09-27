#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/DVector2.hpp"
#include "DigitalOpus/MB/Core/zzzz__DVector2_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__DRect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::DVector2.Subtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::DVector2 (*)(::DigitalOpus::MB::Core::DVector2, ::DigitalOpus::MB::Core::DVector2)>(&::DigitalOpus::MB::Core::DVector2::Subtract)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9dbc578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {"Subtract", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DVector2>(), ::i2c::type_of<::DigitalOpus::MB::Core::DVector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DVector2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::DVector2::*)(double_t, double_t)>(&::DigitalOpus::MB::Core::DVector2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dbc584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DVector2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::DVector2::*)(::DigitalOpus::MB::Core::DVector2)>(&::DigitalOpus::MB::Core::DVector2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dbc58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DVector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DVector2.GetVector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::DigitalOpus::MB::Core::DVector2::*)()>(&::DigitalOpus::MB::Core::DVector2::GetVector2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9dbc594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {"GetVector2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DVector2.IsContainedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::DVector2::*)(::DigitalOpus::MB::Core::DRect)>(&::DigitalOpus::MB::Core::DVector2::IsContainedIn)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9dbc5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {"IsContainedIn", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DVector2.IsContainedInWithMargin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::DVector2::*)(::DigitalOpus::MB::Core::DRect)>(&::DigitalOpus::MB::Core::DVector2::IsContainedInWithMargin)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9dbc5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {"IsContainedInWithMargin", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DVector2.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::DVector2::*)()>(&::DigitalOpus::MB::Core::DVector2::ToString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9dbc704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DVector2.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::DVector2::*)(::StringW)>(&::DigitalOpus::MB::Core::DVector2::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9dbc7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::DVector2.Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::DigitalOpus::MB::Core::DVector2, ::DigitalOpus::MB::Core::DVector2)>(&::DigitalOpus::MB::Core::DVector2::Distance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9dbc824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {"Distance", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DVector2>(), ::i2c::type_of<::DigitalOpus::MB::Core::DVector2>()}}
                    )));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::DVector2::setStaticF_epsilon(double_t  value)  {
::cordl_internals::setStaticField<double_t, "epsilon", ::DigitalOpus::MB::Core::DVector2>(std::forward<double_t>(value));
}
inline double_t DigitalOpus::MB::Core::DVector2::getStaticF_epsilon()  {
return ::cordl_internals::getStaticField<double_t, "epsilon", ::DigitalOpus::MB::Core::DVector2>();
}
inline ::DigitalOpus::MB::Core::DVector2 DigitalOpus::MB::Core::DVector2::Subtract(::DigitalOpus::MB::Core::DVector2  a, ::DigitalOpus::MB::Core::DVector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {"Subtract", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DVector2>(), ::i2c::type_of<::DigitalOpus::MB::Core::DVector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::DVector2>(nullptr, ___internal_method, a, b);
}
inline void DigitalOpus::MB::Core::DVector2::_ctor(double_t  xx, double_t  yy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xx, yy);
}
inline void DigitalOpus::MB::Core::DVector2::_ctor(::DigitalOpus::MB::Core::DVector2  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DVector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, r);
}
inline ::UnityEngine::Vector2 DigitalOpus::MB::Core::DVector2::GetVector2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {"GetVector2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::DVector2::IsContainedIn(::DigitalOpus::MB::Core::DRect  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {"IsContainedIn", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, r);
}
inline bool DigitalOpus::MB::Core::DVector2::IsContainedInWithMargin(::DigitalOpus::MB::Core::DRect  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {"IsContainedInWithMargin", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, r);
}
inline ::StringW DigitalOpus::MB::Core::DVector2::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW DigitalOpus::MB::Core::DVector2::ToString(::StringW  formatS)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, formatS);
}
inline double_t DigitalOpus::MB::Core::DVector2::Distance(::DigitalOpus::MB::Core::DVector2  a, ::DigitalOpus::MB::Core::DVector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::DVector2>(),
                        {"Distance", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DVector2>(), ::i2c::type_of<::DigitalOpus::MB::Core::DVector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::DigitalOpus::MB::Core::DVector2::DVector2(double_t  x, double_t  y) noexcept  {
this->x = x;
this->y = y;
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::DVector2::DVector2()   {
}

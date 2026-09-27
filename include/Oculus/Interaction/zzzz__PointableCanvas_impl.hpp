#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointableCanvas.hpp"
#include "Oculus/Interaction/zzzz__PointableElement_impl.hpp"
#include "Oculus/Interaction/zzzz__PointableCanvas_def.hpp"
#include "Oculus/Interaction/zzzz__IPointableCanvas_def.hpp"
#include "Oculus/Interaction/zzzz__IPointableElement_def.hpp"
#include "Oculus/Interaction/zzzz__IPointable_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvas.get_Canvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Canvas> (::Oculus::Interaction::PointableCanvas::*)()>(&::Oculus::Interaction::PointableCanvas::get_Canvas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa484ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                        {"get_Canvas", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvas.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvas::*)()>(&::Oculus::Interaction::PointableCanvas::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa484ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvas.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvas::*)()>(&::Oculus::Interaction::PointableCanvas::Register)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa484f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                        {"Register", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvas.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvas::*)()>(&::Oculus::Interaction::PointableCanvas::Unregister)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa484fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                        {"Unregister", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvas.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvas::*)()>(&::Oculus::Interaction::PointableCanvas::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa485034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvas.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvas::*)()>(&::Oculus::Interaction::PointableCanvas::OnDisable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa485064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvas.InjectAllPointableCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvas::*)(::UnityEngine::Canvas*)>(&::Oculus::Interaction::PointableCanvas::InjectAllPointableCanvas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa485098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                        {"InjectAllPointableCanvas", {}, {::i2c::type_of<::UnityEngine::Canvas*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvas.InjectCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvas::*)(::UnityEngine::Canvas*)>(&::Oculus::Interaction::PointableCanvas::InjectCanvas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4850a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                        {"InjectCanvas", {}, {::i2c::type_of<::UnityEngine::Canvas*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvas._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvas::*)()>(&::Oculus::Interaction::PointableCanvas::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4850a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvas._Start_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvas::*)()>(&::Oculus::Interaction::PointableCanvas::_Start_b__4_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4850b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                        {"<Start>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Canvas>& Oculus::Interaction::PointableCanvas::__cordl_internal_get__canvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& Oculus::Interaction::PointableCanvas::__cordl_internal_get__canvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvas;
}
constexpr void Oculus::Interaction::PointableCanvas::__cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canvas = value;
}
constexpr bool& Oculus::Interaction::PointableCanvas::__cordl_internal_get__registered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registered;
}
constexpr bool const& Oculus::Interaction::PointableCanvas::__cordl_internal_get__registered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registered;
}
constexpr void Oculus::Interaction::PointableCanvas::__cordl_internal_set__registered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____registered = value;
}
inline ::UnityW<::UnityEngine::Canvas> Oculus::Interaction::PointableCanvas::get_Canvas()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                        {"get_Canvas", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Canvas>>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvas::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvas::Register()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                        {"Register", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvas::Unregister()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                        {"Unregister", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvas::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvas::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvas::InjectAllPointableCanvas(::UnityEngine::Canvas*  canvas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                        {"InjectAllPointableCanvas", {}, {::i2c::type_of<::UnityEngine::Canvas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canvas);
}
inline void Oculus::Interaction::PointableCanvas::InjectCanvas(::UnityEngine::Canvas*  canvas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                        {"InjectCanvas", {}, {::i2c::type_of<::UnityEngine::Canvas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canvas);
}
inline void Oculus::Interaction::PointableCanvas::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvas::_Start_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvas*>(),
                        {"<Start>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PointableCanvas* Oculus::Interaction::PointableCanvas::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PointableCanvas*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IPointableCanvas"
constexpr  Oculus::Interaction::PointableCanvas::operator ::Oculus::Interaction::IPointableCanvas*() noexcept {
return static_cast<::Oculus::Interaction::IPointableCanvas*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IPointableCanvas"
constexpr ::Oculus::Interaction::IPointableCanvas* Oculus::Interaction::PointableCanvas::i___Oculus__Interaction__IPointableCanvas() noexcept {
return static_cast<::Oculus::Interaction::IPointableCanvas*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IPointableElement"
constexpr  Oculus::Interaction::PointableCanvas::operator ::Oculus::Interaction::IPointableElement*() noexcept {
return static_cast<::Oculus::Interaction::IPointableElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IPointableElement"
constexpr ::Oculus::Interaction::IPointableElement* Oculus::Interaction::PointableCanvas::i___Oculus__Interaction__IPointableElement() noexcept {
return static_cast<::Oculus::Interaction::IPointableElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IPointable"
constexpr  Oculus::Interaction::PointableCanvas::operator ::Oculus::Interaction::IPointable*() noexcept {
return static_cast<::Oculus::Interaction::IPointable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IPointable"
constexpr ::Oculus::Interaction::IPointable* Oculus::Interaction::PointableCanvas::i___Oculus__Interaction__IPointable() noexcept {
return static_cast<::Oculus::Interaction::IPointable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PointableCanvas::PointableCanvas()   {
}

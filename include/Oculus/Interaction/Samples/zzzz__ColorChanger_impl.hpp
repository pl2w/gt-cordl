#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ColorChanger.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__ColorChanger_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::ColorChanger.NextColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ColorChanger::*)()>(&::Oculus::Interaction::Samples::ColorChanger::NextColor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa436b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ColorChanger*>(),
                        {"NextColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ColorChanger.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ColorChanger::*)()>(&::Oculus::Interaction::Samples::ColorChanger::Save)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa436b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ColorChanger*>(),
                        {"Save", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ColorChanger.Revert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ColorChanger::*)()>(&::Oculus::Interaction::Samples::ColorChanger::Revert)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa436bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ColorChanger*>(),
                        {"Revert", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ColorChanger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ColorChanger::*)()>(&::Oculus::Interaction::Samples::ColorChanger::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa436bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::ColorChanger*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::ColorChanger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ColorChanger.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ColorChanger::*)()>(&::Oculus::Interaction::Samples::ColorChanger::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa436c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ColorChanger*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ColorChanger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ColorChanger::*)()>(&::Oculus::Interaction::Samples::ColorChanger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa436c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ColorChanger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& Oculus::Interaction::Samples::ColorChanger::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Oculus::Interaction::Samples::ColorChanger::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Oculus::Interaction::Samples::ColorChanger::__cordl_internal_set__target(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Oculus::Interaction::Samples::ColorChanger::__cordl_internal_get__targetMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Oculus::Interaction::Samples::ColorChanger::__cordl_internal_get__targetMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetMaterial;
}
constexpr void Oculus::Interaction::Samples::ColorChanger::__cordl_internal_set__targetMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetMaterial = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::Samples::ColorChanger::__cordl_internal_get__savedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____savedColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::Samples::ColorChanger::__cordl_internal_get__savedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____savedColor;
}
constexpr void Oculus::Interaction::Samples::ColorChanger::__cordl_internal_set__savedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____savedColor = value;
}
constexpr float_t& Oculus::Interaction::Samples::ColorChanger::__cordl_internal_get__lastHue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHue;
}
constexpr float_t const& Oculus::Interaction::Samples::ColorChanger::__cordl_internal_get__lastHue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHue;
}
constexpr void Oculus::Interaction::Samples::ColorChanger::__cordl_internal_set__lastHue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastHue = value;
}
inline void Oculus::Interaction::Samples::ColorChanger::NextColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ColorChanger*>(),
                        {"NextColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::ColorChanger::Save()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ColorChanger*>(),
                        {"Save", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::ColorChanger::Revert()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ColorChanger*>(),
                        {"Revert", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::ColorChanger::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::ColorChanger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::ColorChanger::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ColorChanger*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::ColorChanger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ColorChanger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::ColorChanger* Oculus::Interaction::Samples::ColorChanger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::ColorChanger*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::ColorChanger::ColorChanger()   {
}

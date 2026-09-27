#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/FadeTextAfterActive.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__FadeTextAfterActive_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::FadeTextAfterActive.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::FadeTextAfterActive::*)()>(&::Oculus::Interaction::Samples::FadeTextAfterActive::OnEnable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa43750c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::FadeTextAfterActive*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::FadeTextAfterActive*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::FadeTextAfterActive.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::FadeTextAfterActive::*)()>(&::Oculus::Interaction::Samples::FadeTextAfterActive::Update)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa4375bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::FadeTextAfterActive*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::FadeTextAfterActive*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::FadeTextAfterActive._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::FadeTextAfterActive::*)()>(&::Oculus::Interaction::Samples::FadeTextAfterActive::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4376d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::FadeTextAfterActive*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::Samples::FadeTextAfterActive::__cordl_internal_get__fadeOutTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOutTime;
}
constexpr float_t const& Oculus::Interaction::Samples::FadeTextAfterActive::__cordl_internal_get__fadeOutTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOutTime;
}
constexpr void Oculus::Interaction::Samples::FadeTextAfterActive::__cordl_internal_set__fadeOutTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeOutTime = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& Oculus::Interaction::Samples::FadeTextAfterActive::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& Oculus::Interaction::Samples::FadeTextAfterActive::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void Oculus::Interaction::Samples::FadeTextAfterActive::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____text = value;
}
constexpr float_t& Oculus::Interaction::Samples::FadeTextAfterActive::__cordl_internal_get__timeLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeLeft;
}
constexpr float_t const& Oculus::Interaction::Samples::FadeTextAfterActive::__cordl_internal_get__timeLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeLeft;
}
constexpr void Oculus::Interaction::Samples::FadeTextAfterActive::__cordl_internal_set__timeLeft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeLeft = value;
}
inline void Oculus::Interaction::Samples::FadeTextAfterActive::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::FadeTextAfterActive*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::FadeTextAfterActive::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::FadeTextAfterActive*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::FadeTextAfterActive::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::FadeTextAfterActive*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::FadeTextAfterActive* Oculus::Interaction::Samples::FadeTextAfterActive::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::FadeTextAfterActive*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::FadeTextAfterActive::FadeTextAfterActive()   {
}

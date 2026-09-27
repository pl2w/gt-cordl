#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/SetDisplayRefresh.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__SetDisplayRefresh_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::SetDisplayRefresh.SetDesiredDisplayFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SetDisplayRefresh::*)(float_t)>(&::Oculus::Interaction::Input::SetDisplayRefresh::SetDesiredDisplayFrequency)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa42134c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SetDisplayRefresh*>(),
                        {"SetDesiredDisplayFrequency", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SetDisplayRefresh.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SetDisplayRefresh::*)()>(&::Oculus::Interaction::Input::SetDisplayRefresh::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa421474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::SetDisplayRefresh*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::SetDisplayRefresh*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SetDisplayRefresh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SetDisplayRefresh::*)()>(&::Oculus::Interaction::Input::SetDisplayRefresh::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa421478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SetDisplayRefresh*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::Input::SetDisplayRefresh::__cordl_internal_get__desiredDisplayFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____desiredDisplayFrequency;
}
constexpr float_t const& Oculus::Interaction::Input::SetDisplayRefresh::__cordl_internal_get__desiredDisplayFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____desiredDisplayFrequency;
}
constexpr void Oculus::Interaction::Input::SetDisplayRefresh::__cordl_internal_set__desiredDisplayFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____desiredDisplayFrequency = value;
}
inline void Oculus::Interaction::Input::SetDisplayRefresh::SetDesiredDisplayFrequency(float_t  desiredDisplayFrequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SetDisplayRefresh*>(),
                        {"SetDesiredDisplayFrequency", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desiredDisplayFrequency);
}
inline void Oculus::Interaction::Input::SetDisplayRefresh::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::SetDisplayRefresh*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::SetDisplayRefresh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SetDisplayRefresh*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::SetDisplayRefresh* Oculus::Interaction::Input::SetDisplayRefresh::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::SetDisplayRefresh*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::SetDisplayRefresh::SetDisplayRefresh()   {
}

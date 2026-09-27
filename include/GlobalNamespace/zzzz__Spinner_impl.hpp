#pragma once
// IWYU pragma private; include "GlobalNamespace/Spinner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Spinner_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Spinner.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Spinner::*)()>(&::GlobalNamespace::Spinner::OnEnable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x55eb6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Spinner*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Spinner.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Spinner::*)()>(&::GlobalNamespace::Spinner::Update)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x55eb708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Spinner*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Spinner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Spinner::*)()>(&::GlobalNamespace::Spinner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55eb784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Spinner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::Spinner::__cordl_internal_get_Speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Speed;
}
constexpr float_t const& GlobalNamespace::Spinner::__cordl_internal_get_Speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Speed;
}
constexpr void GlobalNamespace::Spinner::__cordl_internal_set_Speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Speed = value;
}
constexpr float_t& GlobalNamespace::Spinner::__cordl_internal_get_m_angle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_angle;
}
constexpr float_t const& GlobalNamespace::Spinner::__cordl_internal_get_m_angle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_angle;
}
constexpr void GlobalNamespace::Spinner::__cordl_internal_set_m_angle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_angle = value;
}
inline void GlobalNamespace::Spinner::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Spinner*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Spinner::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Spinner*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Spinner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Spinner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Spinner* GlobalNamespace::Spinner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Spinner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Spinner::Spinner()   {
}

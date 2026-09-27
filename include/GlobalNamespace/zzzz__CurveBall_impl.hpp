#pragma once
// IWYU pragma private; include "GlobalNamespace/CurveBall.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CurveBall_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CurveBall.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CurveBall::*)()>(&::GlobalNamespace::CurveBall::Reset)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x55e9b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CurveBall*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurveBall.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CurveBall::*)()>(&::GlobalNamespace::CurveBall::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e9c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CurveBall*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurveBall.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CurveBall::*)()>(&::GlobalNamespace::CurveBall::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55e9c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CurveBall*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurveBall._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CurveBall::*)()>(&::GlobalNamespace::CurveBall::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55e9d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CurveBall*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CurveBall::__cordl_internal_get_Interval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interval;
}
constexpr float_t const& GlobalNamespace::CurveBall::__cordl_internal_get_Interval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interval;
}
constexpr void GlobalNamespace::CurveBall::__cordl_internal_set_Interval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Interval = value;
}
constexpr float_t& GlobalNamespace::CurveBall::__cordl_internal_get_m_speedX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_speedX;
}
constexpr float_t const& GlobalNamespace::CurveBall::__cordl_internal_get_m_speedX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_speedX;
}
constexpr void GlobalNamespace::CurveBall::__cordl_internal_set_m_speedX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_speedX = value;
}
constexpr float_t& GlobalNamespace::CurveBall::__cordl_internal_get_m_speedZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_speedZ;
}
constexpr float_t const& GlobalNamespace::CurveBall::__cordl_internal_get_m_speedZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_speedZ;
}
constexpr void GlobalNamespace::CurveBall::__cordl_internal_set_m_speedZ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_speedZ = value;
}
constexpr float_t& GlobalNamespace::CurveBall::__cordl_internal_get_m_timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_timer;
}
constexpr float_t const& GlobalNamespace::CurveBall::__cordl_internal_get_m_timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_timer;
}
constexpr void GlobalNamespace::CurveBall::__cordl_internal_set_m_timer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_timer = value;
}
inline void GlobalNamespace::CurveBall::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CurveBall*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CurveBall::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CurveBall*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CurveBall::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CurveBall*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CurveBall::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CurveBall*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CurveBall* GlobalNamespace::CurveBall::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CurveBall*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CurveBall::CurveBall()   {
}

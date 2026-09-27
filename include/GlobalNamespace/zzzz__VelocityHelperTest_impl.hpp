#pragma once
// IWYU pragma private; include "GlobalNamespace/VelocityHelperTest.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VelocityHelperTest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VelocityHelperTest.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VelocityHelperTest::*)()>(&::GlobalNamespace::VelocityHelperTest::Setup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5a2259c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelperTest*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VelocityHelperTest.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VelocityHelperTest::*)()>(&::GlobalNamespace::VelocityHelperTest::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a2262c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelperTest*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VelocityHelperTest.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VelocityHelperTest::*)()>(&::GlobalNamespace::VelocityHelperTest::FixedUpdate)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5a22630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelperTest*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VelocityHelperTest.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VelocityHelperTest::*)()>(&::GlobalNamespace::VelocityHelperTest::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a22788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelperTest*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VelocityHelperTest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VelocityHelperTest::*)()>(&::GlobalNamespace::VelocityHelperTest::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a2278c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelperTest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::VelocityHelperTest::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VelocityHelperTest::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GlobalNamespace::VelocityHelperTest::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr float_t& GlobalNamespace::VelocityHelperTest::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& GlobalNamespace::VelocityHelperTest::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::VelocityHelperTest::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VelocityHelperTest::__cordl_internal_get_lastVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VelocityHelperTest::__cordl_internal_get_lastVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVelocity;
}
constexpr void GlobalNamespace::VelocityHelperTest::__cordl_internal_set_lastVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VelocityHelperTest::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VelocityHelperTest::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void GlobalNamespace::VelocityHelperTest::__cordl_internal_set_lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::VelocityHelperTest::__cordl_internal_get__deltaTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltaTimes;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::VelocityHelperTest::__cordl_internal_get__deltaTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltaTimes;
}
constexpr void GlobalNamespace::VelocityHelperTest::__cordl_internal_set__deltaTimes(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deltaTimes = value;
}
inline void GlobalNamespace::VelocityHelperTest::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelperTest*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VelocityHelperTest::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelperTest*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VelocityHelperTest::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelperTest*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VelocityHelperTest::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelperTest*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VelocityHelperTest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelperTest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VelocityHelperTest* GlobalNamespace::VelocityHelperTest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VelocityHelperTest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VelocityHelperTest::VelocityHelperTest()   {
}

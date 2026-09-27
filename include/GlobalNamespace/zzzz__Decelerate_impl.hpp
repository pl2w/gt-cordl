#pragma once
// IWYU pragma private; include "GlobalNamespace/Decelerate.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Decelerate_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Decelerate.Restart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Decelerate::*)()>(&::GlobalNamespace::Decelerate::Restart)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5802bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decelerate*>(),
                        {"Restart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decelerate.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Decelerate::*)()>(&::GlobalNamespace::Decelerate::Update)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5802bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decelerate*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decelerate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Decelerate::*)()>(&::GlobalNamespace::Decelerate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5802e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decelerate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::Decelerate::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::Decelerate::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void GlobalNamespace::Decelerate::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr float_t& GlobalNamespace::Decelerate::__cordl_internal_get__friction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____friction;
}
constexpr float_t const& GlobalNamespace::Decelerate::__cordl_internal_get__friction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____friction;
}
constexpr void GlobalNamespace::Decelerate::__cordl_internal_set__friction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____friction = value;
}
constexpr bool& GlobalNamespace::Decelerate::__cordl_internal_get__resetOrientationOnRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetOrientationOnRelease;
}
constexpr bool const& GlobalNamespace::Decelerate::__cordl_internal_get__resetOrientationOnRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetOrientationOnRelease;
}
constexpr void GlobalNamespace::Decelerate::__cordl_internal_set__resetOrientationOnRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetOrientationOnRelease = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::Decelerate::__cordl_internal_get_onStop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStop;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::Decelerate::__cordl_internal_get_onStop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStop;
}
constexpr void GlobalNamespace::Decelerate::__cordl_internal_set_onStop(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStop = value;
}
inline void GlobalNamespace::Decelerate::Restart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decelerate*>(),
                        {"Restart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Decelerate::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decelerate*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Decelerate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decelerate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Decelerate* GlobalNamespace::Decelerate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Decelerate*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Decelerate::Decelerate()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/UIMatchRotation.hpp"
#include "GlobalNamespace/zzzz__UIMatchRotation_State_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__UIMatchRotation_def.hpp"
#include "GlobalNamespace/zzzz__UIMatchRotation_State_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UIMatchRotation.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIMatchRotation::*)()>(&::GlobalNamespace::UIMatchRotation::Start)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b1ae5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UIMatchRotation*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIMatchRotation.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIMatchRotation::*)()>(&::GlobalNamespace::UIMatchRotation::Update)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5b1af94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UIMatchRotation*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIMatchRotation.x0z
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::UIMatchRotation::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::UIMatchRotation::x0z)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b1aed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UIMatchRotation*>(),
                        {"x0z", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIMatchRotation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIMatchRotation::*)()>(&::GlobalNamespace::UIMatchRotation::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b1b120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UIMatchRotation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::UIMatchRotation::__cordl_internal_get_referenceTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::UIMatchRotation::__cordl_internal_get_referenceTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceTransform;
}
constexpr void GlobalNamespace::UIMatchRotation::__cordl_internal_set_referenceTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___referenceTransform = value;
}
constexpr float_t& GlobalNamespace::UIMatchRotation::__cordl_internal_get_threshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threshold;
}
constexpr float_t const& GlobalNamespace::UIMatchRotation::__cordl_internal_get_threshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threshold;
}
constexpr void GlobalNamespace::UIMatchRotation::__cordl_internal_set_threshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___threshold = value;
}
constexpr float_t& GlobalNamespace::UIMatchRotation::__cordl_internal_get_lerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpSpeed;
}
constexpr float_t const& GlobalNamespace::UIMatchRotation::__cordl_internal_get_lerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpSpeed;
}
constexpr void GlobalNamespace::UIMatchRotation::__cordl_internal_set_lerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpSpeed = value;
}
constexpr ::GlobalNamespace::UIMatchRotation_State& GlobalNamespace::UIMatchRotation::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::UIMatchRotation_State const& GlobalNamespace::UIMatchRotation::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::UIMatchRotation::__cordl_internal_set_state(::GlobalNamespace::UIMatchRotation_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
inline void GlobalNamespace::UIMatchRotation::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UIMatchRotation*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UIMatchRotation::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UIMatchRotation*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::UIMatchRotation::x0z(::UnityEngine::Vector3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UIMatchRotation*>(),
                        {"x0z", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, vector);
}
inline void GlobalNamespace::UIMatchRotation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UIMatchRotation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UIMatchRotation* GlobalNamespace::UIMatchRotation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UIMatchRotation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UIMatchRotation::UIMatchRotation()   {
}

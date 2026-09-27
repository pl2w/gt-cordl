#pragma once
// IWYU pragma private; include "GlobalNamespace/ColliderSpinner.hpp"
#include "BoingKit/zzzz__Vector3Spring_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ColliderSpinner_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColliderSpinner.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderSpinner::*)()>(&::GlobalNamespace::ColliderSpinner::Start)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x55e7640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderSpinner*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderSpinner.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderSpinner::*)()>(&::GlobalNamespace::ColliderSpinner::FixedUpdate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x55e779c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderSpinner*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderSpinner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderSpinner::*)()>(&::GlobalNamespace::ColliderSpinner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e7870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderSpinner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ColliderSpinner::__cordl_internal_get_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ColliderSpinner::__cordl_internal_get_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr void GlobalNamespace::ColliderSpinner::__cordl_internal_set_Target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Target = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ColliderSpinner::__cordl_internal_get_m_targetOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_targetOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ColliderSpinner::__cordl_internal_get_m_targetOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_targetOffset;
}
constexpr void GlobalNamespace::ColliderSpinner::__cordl_internal_set_m_targetOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_targetOffset = value;
}
constexpr ::BoingKit::Vector3Spring& GlobalNamespace::ColliderSpinner::__cordl_internal_get_m_spring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spring;
}
constexpr ::BoingKit::Vector3Spring const& GlobalNamespace::ColliderSpinner::__cordl_internal_get_m_spring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spring;
}
constexpr void GlobalNamespace::ColliderSpinner::__cordl_internal_set_m_spring(::BoingKit::Vector3Spring  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_spring = value;
}
inline void GlobalNamespace::ColliderSpinner::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderSpinner*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderSpinner::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderSpinner*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderSpinner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderSpinner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColliderSpinner* GlobalNamespace::ColliderSpinner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColliderSpinner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColliderSpinner::ColliderSpinner()   {
}

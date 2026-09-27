#pragma once
// IWYU pragma private; include "GlobalNamespace/PredicatableRandomRotation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PredicatableRandomRotation_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PredicatableRandomRotation.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PredicatableRandomRotation::*)()>(&::GlobalNamespace::PredicatableRandomRotation::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b0e894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PredicatableRandomRotation*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PredicatableRandomRotation.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PredicatableRandomRotation::*)()>(&::GlobalNamespace::PredicatableRandomRotation::Update)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b0e924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PredicatableRandomRotation*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PredicatableRandomRotation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PredicatableRandomRotation::*)()>(&::GlobalNamespace::PredicatableRandomRotation::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b0ea20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PredicatableRandomRotation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::PredicatableRandomRotation::__cordl_internal_get_rot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rot;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PredicatableRandomRotation::__cordl_internal_get_rot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rot;
}
constexpr void GlobalNamespace::PredicatableRandomRotation::__cordl_internal_set_rot(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rot = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PredicatableRandomRotation::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PredicatableRandomRotation::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void GlobalNamespace::PredicatableRandomRotation::__cordl_internal_set_source(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
inline void GlobalNamespace::PredicatableRandomRotation::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PredicatableRandomRotation*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PredicatableRandomRotation::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PredicatableRandomRotation*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PredicatableRandomRotation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PredicatableRandomRotation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PredicatableRandomRotation* GlobalNamespace::PredicatableRandomRotation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PredicatableRandomRotation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PredicatableRandomRotation::PredicatableRandomRotation()   {
}

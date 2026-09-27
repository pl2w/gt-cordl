#pragma once
// IWYU pragma private; include "GlobalNamespace/DistanceMeasure.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DistanceMeasure_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DistanceMeasure.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DistanceMeasure::*)()>(&::GlobalNamespace::DistanceMeasure::Awake)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5a1aa84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DistanceMeasure*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DistanceMeasure._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DistanceMeasure::*)()>(&::GlobalNamespace::DistanceMeasure::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1ab68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DistanceMeasure*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::DistanceMeasure::__cordl_internal_get_from()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___from;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::DistanceMeasure::__cordl_internal_get_from() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___from;
}
constexpr void GlobalNamespace::DistanceMeasure::__cordl_internal_set_from(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___from = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::DistanceMeasure::__cordl_internal_get_to()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___to;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::DistanceMeasure::__cordl_internal_get_to() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___to;
}
constexpr void GlobalNamespace::DistanceMeasure::__cordl_internal_set_to(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___to = value;
}
inline void GlobalNamespace::DistanceMeasure::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DistanceMeasure*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DistanceMeasure::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DistanceMeasure*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DistanceMeasure* GlobalNamespace::DistanceMeasure::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DistanceMeasure*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DistanceMeasure::DistanceMeasure()   {
}

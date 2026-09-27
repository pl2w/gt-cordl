#pragma once
// IWYU pragma private; include "GlobalNamespace/ObservableBehaviorRule.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__ObservableBehaviorRule_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObservableBehaviorRule.get_ObservableDistanceRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::ObservableBehaviorRule::*)()>(&::GlobalNamespace::ObservableBehaviorRule::get_ObservableDistanceRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0da18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObservableBehaviorRule*>(),
                        {"get_ObservableDistanceRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObservableBehaviorRule.get_ObservableDotRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::ObservableBehaviorRule::*)()>(&::GlobalNamespace::ObservableBehaviorRule::get_ObservableDotRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0da20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObservableBehaviorRule*>(),
                        {"get_ObservableDotRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObservableBehaviorRule.get_InverseObservable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ObservableBehaviorRule::*)()>(&::GlobalNamespace::ObservableBehaviorRule::get_InverseObservable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0da28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObservableBehaviorRule*>(),
                        {"get_InverseObservable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObservableBehaviorRule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObservableBehaviorRule::*)()>(&::GlobalNamespace::ObservableBehaviorRule::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b0da30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObservableBehaviorRule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& GlobalNamespace::ObservableBehaviorRule::__cordl_internal_get_observableDistanceRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observableDistanceRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::ObservableBehaviorRule::__cordl_internal_get_observableDistanceRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observableDistanceRange;
}
constexpr void GlobalNamespace::ObservableBehaviorRule::__cordl_internal_set_observableDistanceRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___observableDistanceRange = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::ObservableBehaviorRule::__cordl_internal_get_observableDotRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observableDotRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::ObservableBehaviorRule::__cordl_internal_get_observableDotRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observableDotRange;
}
constexpr void GlobalNamespace::ObservableBehaviorRule::__cordl_internal_set_observableDotRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___observableDotRange = value;
}
constexpr bool& GlobalNamespace::ObservableBehaviorRule::__cordl_internal_get_inverseObservable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseObservable;
}
constexpr bool const& GlobalNamespace::ObservableBehaviorRule::__cordl_internal_get_inverseObservable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseObservable;
}
constexpr void GlobalNamespace::ObservableBehaviorRule::__cordl_internal_set_inverseObservable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inverseObservable = value;
}
inline ::UnityEngine::Vector2 GlobalNamespace::ObservableBehaviorRule::get_ObservableDistanceRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObservableBehaviorRule*>(),
                        {"get_ObservableDistanceRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::ObservableBehaviorRule::get_ObservableDotRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObservableBehaviorRule*>(),
                        {"get_ObservableDotRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline bool GlobalNamespace::ObservableBehaviorRule::get_InverseObservable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObservableBehaviorRule*>(),
                        {"get_InverseObservable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ObservableBehaviorRule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObservableBehaviorRule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ObservableBehaviorRule* GlobalNamespace::ObservableBehaviorRule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObservableBehaviorRule*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObservableBehaviorRule::ObservableBehaviorRule()   {
}

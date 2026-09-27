#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatorReset.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AnimatorReset_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimatorReset.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatorReset::*)()>(&::GlobalNamespace::AnimatorReset::Reset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x579fc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorReset*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatorReset.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatorReset::*)()>(&::GlobalNamespace::AnimatorReset::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x579fce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorReset*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatorReset.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatorReset::*)()>(&::GlobalNamespace::AnimatorReset::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x579fcf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorReset*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatorReset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatorReset::*)()>(&::GlobalNamespace::AnimatorReset::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x579fd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorReset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::AnimatorReset::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::AnimatorReset::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::AnimatorReset::__cordl_internal_set_target(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr bool& GlobalNamespace::AnimatorReset::__cordl_internal_get_onEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnable;
}
constexpr bool const& GlobalNamespace::AnimatorReset::__cordl_internal_get_onEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnable;
}
constexpr void GlobalNamespace::AnimatorReset::__cordl_internal_set_onEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEnable = value;
}
constexpr bool& GlobalNamespace::AnimatorReset::__cordl_internal_get_onDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDisable;
}
constexpr bool const& GlobalNamespace::AnimatorReset::__cordl_internal_get_onDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDisable;
}
constexpr void GlobalNamespace::AnimatorReset::__cordl_internal_set_onDisable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDisable = value;
}
inline void GlobalNamespace::AnimatorReset::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorReset*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimatorReset::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorReset*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimatorReset::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorReset*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimatorReset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorReset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnimatorReset* GlobalNamespace::AnimatorReset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnimatorReset*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimatorReset::AnimatorReset()   {
}

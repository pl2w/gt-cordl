#pragma once
// IWYU pragma private; include "GlobalNamespace/PuppetFollow.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PuppetFollow_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PuppetFollow.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PuppetFollow::*)()>(&::GlobalNamespace::PuppetFollow::FixedUpdate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5745bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PuppetFollow*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PuppetFollow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PuppetFollow::*)()>(&::GlobalNamespace::PuppetFollow::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5745cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PuppetFollow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PuppetFollow::__cordl_internal_get_sourceTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PuppetFollow::__cordl_internal_get_sourceTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTarget;
}
constexpr void GlobalNamespace::PuppetFollow::__cordl_internal_set_sourceTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceTarget = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PuppetFollow::__cordl_internal_get_sourceBase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceBase;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PuppetFollow::__cordl_internal_get_sourceBase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceBase;
}
constexpr void GlobalNamespace::PuppetFollow::__cordl_internal_set_sourceBase(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceBase = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PuppetFollow::__cordl_internal_get_puppetBase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___puppetBase;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PuppetFollow::__cordl_internal_get_puppetBase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___puppetBase;
}
constexpr void GlobalNamespace::PuppetFollow::__cordl_internal_set_puppetBase(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___puppetBase = value;
}
inline void GlobalNamespace::PuppetFollow::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PuppetFollow*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PuppetFollow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PuppetFollow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PuppetFollow* GlobalNamespace::PuppetFollow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PuppetFollow*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PuppetFollow::PuppetFollow()   {
}

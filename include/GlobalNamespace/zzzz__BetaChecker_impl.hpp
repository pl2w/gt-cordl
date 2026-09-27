#pragma once
// IWYU pragma private; include "GlobalNamespace/BetaChecker.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BetaChecker_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BetaChecker.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetaChecker::*)()>(&::GlobalNamespace::BetaChecker::Start)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x574a6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetaChecker*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetaChecker.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetaChecker::*)()>(&::GlobalNamespace::BetaChecker::Update)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x574a774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetaChecker*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetaChecker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetaChecker::*)()>(&::GlobalNamespace::BetaChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574a8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetaChecker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::BetaChecker::__cordl_internal_get_objectsToEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToEnable;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::BetaChecker::__cordl_internal_get_objectsToEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToEnable;
}
constexpr void GlobalNamespace::BetaChecker::__cordl_internal_set_objectsToEnable(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsToEnable = value;
}
constexpr bool& GlobalNamespace::BetaChecker::__cordl_internal_get_doNotEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doNotEnable;
}
constexpr bool const& GlobalNamespace::BetaChecker::__cordl_internal_get_doNotEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doNotEnable;
}
constexpr void GlobalNamespace::BetaChecker::__cordl_internal_set_doNotEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doNotEnable = value;
}
inline void GlobalNamespace::BetaChecker::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetaChecker*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BetaChecker::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetaChecker*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BetaChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetaChecker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BetaChecker* GlobalNamespace::BetaChecker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BetaChecker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BetaChecker::BetaChecker()   {
}

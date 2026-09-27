#pragma once
// IWYU pragma private; include "GlobalNamespace/DestroyIfNotBeta.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DestroyIfNotBeta_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DestroyIfNotBeta.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DestroyIfNotBeta::*)()>(&::GlobalNamespace::DestroyIfNotBeta::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5799210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DestroyIfNotBeta*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DestroyIfNotBeta._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DestroyIfNotBeta::*)()>(&::GlobalNamespace::DestroyIfNotBeta::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x579927c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DestroyIfNotBeta*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::DestroyIfNotBeta::__cordl_internal_get_m_shouldKeepIfBeta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shouldKeepIfBeta;
}
constexpr bool const& GlobalNamespace::DestroyIfNotBeta::__cordl_internal_get_m_shouldKeepIfBeta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shouldKeepIfBeta;
}
constexpr void GlobalNamespace::DestroyIfNotBeta::__cordl_internal_set_m_shouldKeepIfBeta(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_shouldKeepIfBeta = value;
}
constexpr bool& GlobalNamespace::DestroyIfNotBeta::__cordl_internal_get_m_shouldKeepIfCreatorBuild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shouldKeepIfCreatorBuild;
}
constexpr bool const& GlobalNamespace::DestroyIfNotBeta::__cordl_internal_get_m_shouldKeepIfCreatorBuild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shouldKeepIfCreatorBuild;
}
constexpr void GlobalNamespace::DestroyIfNotBeta::__cordl_internal_set_m_shouldKeepIfCreatorBuild(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_shouldKeepIfCreatorBuild = value;
}
inline void GlobalNamespace::DestroyIfNotBeta::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DestroyIfNotBeta*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DestroyIfNotBeta::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DestroyIfNotBeta*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DestroyIfNotBeta* GlobalNamespace::DestroyIfNotBeta::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DestroyIfNotBeta*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DestroyIfNotBeta::DestroyIfNotBeta()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersCageSettings.hpp"
#include "GlobalNamespace/zzzz__CrittersActorSettings_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersCageSettings_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersCageSettings.UpdateActorSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCageSettings::*)()>(&::GlobalNamespace::CrittersCageSettings::UpdateActorSettings)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x55fe294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersCageSettings*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersCageSettings*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCageSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCageSettings::*)()>(&::GlobalNamespace::CrittersCageSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55fe338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersCageSettings::__cordl_internal_get_cagePoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cagePoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersCageSettings::__cordl_internal_get_cagePoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cagePoint;
}
constexpr void GlobalNamespace::CrittersCageSettings::__cordl_internal_set_cagePoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cagePoint = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersCageSettings::__cordl_internal_get_grabPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersCageSettings::__cordl_internal_get_grabPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPoint;
}
constexpr void GlobalNamespace::CrittersCageSettings::__cordl_internal_set_grabPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabPoint = value;
}
inline void GlobalNamespace::CrittersCageSettings::UpdateActorSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersCageSettings*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersCageSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersCageSettings* GlobalNamespace::CrittersCageSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersCageSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersCageSettings::CrittersCageSettings()   {
}

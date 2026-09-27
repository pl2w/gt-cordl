#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersGrabberSettings.hpp"
#include "GlobalNamespace/zzzz__CrittersActorSettings_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersGrabberSettings_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersGrabberSettings.UpdateActorSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersGrabberSettings::*)()>(&::GlobalNamespace::CrittersGrabberSettings::UpdateActorSettings)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x55ff350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersGrabberSettings*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersGrabberSettings*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersGrabberSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersGrabberSettings::*)()>(&::GlobalNamespace::CrittersGrabberSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ff3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersGrabberSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersGrabberSettings::__cordl_internal_get__grabPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersGrabberSettings::__cordl_internal_get__grabPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabPosition;
}
constexpr void GlobalNamespace::CrittersGrabberSettings::__cordl_internal_set__grabPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabPosition = value;
}
constexpr float_t& GlobalNamespace::CrittersGrabberSettings::__cordl_internal_get__grabDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabDistance;
}
constexpr float_t const& GlobalNamespace::CrittersGrabberSettings::__cordl_internal_get__grabDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabDistance;
}
constexpr void GlobalNamespace::CrittersGrabberSettings::__cordl_internal_set__grabDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabDistance = value;
}
inline void GlobalNamespace::CrittersGrabberSettings::UpdateActorSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersGrabberSettings*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersGrabberSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersGrabberSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersGrabberSettings* GlobalNamespace::CrittersGrabberSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersGrabberSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersGrabberSettings::CrittersGrabberSettings()   {
}

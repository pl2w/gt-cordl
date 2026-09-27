#pragma once
// IWYU pragma private; include "GlobalNamespace/PositionVolumeModifier.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PositionVolumeModifier_def.hpp"
#include "GlobalNamespace/zzzz__TimeOfDayDependentAudio_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PositionVolumeModifier.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PositionVolumeModifier::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PositionVolumeModifier::OnTriggerStay)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x568e478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PositionVolumeModifier*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PositionVolumeModifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PositionVolumeModifier::*)()>(&::GlobalNamespace::PositionVolumeModifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x568e494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PositionVolumeModifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TimeOfDayDependentAudio>& GlobalNamespace::PositionVolumeModifier::__cordl_internal_get_audioToMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioToMod;
}
constexpr ::UnityW<::GlobalNamespace::TimeOfDayDependentAudio> const& GlobalNamespace::PositionVolumeModifier::__cordl_internal_get_audioToMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioToMod;
}
constexpr void GlobalNamespace::PositionVolumeModifier::__cordl_internal_set_audioToMod(::UnityW<::GlobalNamespace::TimeOfDayDependentAudio>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioToMod = value;
}
inline void GlobalNamespace::PositionVolumeModifier::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PositionVolumeModifier*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::PositionVolumeModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PositionVolumeModifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PositionVolumeModifier* GlobalNamespace::PositionVolumeModifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PositionVolumeModifier*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PositionVolumeModifier::PositionVolumeModifier()   {
}

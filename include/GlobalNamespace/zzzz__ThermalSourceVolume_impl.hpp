#pragma once
// IWYU pragma private; include "GlobalNamespace/ThermalSourceVolume.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ThermalSourceVolume_def.hpp"
#include "GlobalNamespace/zzzz__ThermalReceiver_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ThermalSourceVolume.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThermalSourceVolume::*)()>(&::GlobalNamespace::ThermalSourceVolume::OnEnable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56b08dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalSourceVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThermalSourceVolume.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThermalSourceVolume::*)()>(&::GlobalNamespace::ThermalSourceVolume::OnDisable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56b0930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalSourceVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThermalSourceVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThermalSourceVolume::*)()>(&::GlobalNamespace::ThermalSourceVolume::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56b0984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalSourceVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ThermalSourceVolume::__cordl_internal_get_celsius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___celsius;
}
constexpr float_t const& GlobalNamespace::ThermalSourceVolume::__cordl_internal_get_celsius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___celsius;
}
constexpr void GlobalNamespace::ThermalSourceVolume::__cordl_internal_set_celsius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___celsius = value;
}
constexpr float_t& GlobalNamespace::ThermalSourceVolume::__cordl_internal_get_innerRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerRadius;
}
constexpr float_t const& GlobalNamespace::ThermalSourceVolume::__cordl_internal_get_innerRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerRadius;
}
constexpr void GlobalNamespace::ThermalSourceVolume::__cordl_internal_set_innerRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___innerRadius = value;
}
constexpr float_t& GlobalNamespace::ThermalSourceVolume::__cordl_internal_get_outerRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outerRadius;
}
constexpr float_t const& GlobalNamespace::ThermalSourceVolume::__cordl_internal_get_outerRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outerRadius;
}
constexpr void GlobalNamespace::ThermalSourceVolume::__cordl_internal_set_outerRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outerRadius = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>*& GlobalNamespace::ThermalSourceVolume::__cordl_internal_get_exclusionReceivers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exclusionReceivers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>* const& GlobalNamespace::ThermalSourceVolume::__cordl_internal_get_exclusionReceivers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exclusionReceivers;
}
constexpr void GlobalNamespace::ThermalSourceVolume::__cordl_internal_set_exclusionReceivers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exclusionReceivers = value;
}
inline void GlobalNamespace::ThermalSourceVolume::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalSourceVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThermalSourceVolume::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalSourceVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThermalSourceVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalSourceVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ThermalSourceVolume* GlobalNamespace::ThermalSourceVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ThermalSourceVolume*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ThermalSourceVolume::ThermalSourceVolume()   {
}

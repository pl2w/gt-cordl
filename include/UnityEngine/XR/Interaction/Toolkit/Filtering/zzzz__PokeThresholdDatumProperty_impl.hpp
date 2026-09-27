#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/PokeThresholdDatumProperty.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeThresholdDatumProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeThresholdData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeThresholdDatum_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty::*)(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4a59c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty::*)(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4a5a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty::_ctor(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty::_ctor(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum*  datum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, datum);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty::New_ctor(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty::New_ctor(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum*  datum)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*>(datum));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty::PokeThresholdDatumProperty()   {
}

#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/ValveOpenXRLeptonValidationFeature.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "Valve/OpenXR/Utils/zzzz__ValveOpenXRLeptonValidationFeature_def.hpp"
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature::*)()>(&::Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb9416a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*>& Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature::__cordl_internal_get_incompatibleFeatureTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incompatibleFeatureTypes;
}
constexpr ::ArrayW<::System::Type*> const& Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature::__cordl_internal_get_incompatibleFeatureTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incompatibleFeatureTypes;
}
constexpr void Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature::__cordl_internal_set_incompatibleFeatureTypes(::ArrayW<::System::Type*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incompatibleFeatureTypes = value;
}
inline void Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature* Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature*>());
}
// Ctor Parameters []
constexpr ::Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature::ValveOpenXRLeptonValidationFeature()   {
}

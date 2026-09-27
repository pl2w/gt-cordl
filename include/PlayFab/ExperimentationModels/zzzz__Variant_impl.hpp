#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/Variant.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ExperimentationModels/zzzz__Variant_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__Variable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ExperimentationModels::Variant._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ExperimentationModels::Variant::*)()>(&::PlayFab::ExperimentationModels::Variant::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::Variant*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ExperimentationModels::Variant::__cordl_internal_get_Description()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Description;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::Variant::__cordl_internal_get_Description() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Description;
}
constexpr void PlayFab::ExperimentationModels::Variant::__cordl_internal_set_Description(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Description = value;
}
constexpr ::StringW& PlayFab::ExperimentationModels::Variant::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::Variant::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void PlayFab::ExperimentationModels::Variant::__cordl_internal_set_Id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Id = value;
}
constexpr bool& PlayFab::ExperimentationModels::Variant::__cordl_internal_get_IsControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsControl;
}
constexpr bool const& PlayFab::ExperimentationModels::Variant::__cordl_internal_get_IsControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsControl;
}
constexpr void PlayFab::ExperimentationModels::Variant::__cordl_internal_set_IsControl(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsControl = value;
}
constexpr ::StringW& PlayFab::ExperimentationModels::Variant::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::Variant::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::ExperimentationModels::Variant::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::StringW& PlayFab::ExperimentationModels::Variant::__cordl_internal_get_TitleDataOverrideId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleDataOverrideId;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::Variant::__cordl_internal_get_TitleDataOverrideId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleDataOverrideId;
}
constexpr void PlayFab::ExperimentationModels::Variant::__cordl_internal_set_TitleDataOverrideId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleDataOverrideId = value;
}
constexpr uint32_t& PlayFab::ExperimentationModels::Variant::__cordl_internal_get_TrafficPercentage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrafficPercentage;
}
constexpr uint32_t const& PlayFab::ExperimentationModels::Variant::__cordl_internal_get_TrafficPercentage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrafficPercentage;
}
constexpr void PlayFab::ExperimentationModels::Variant::__cordl_internal_set_TrafficPercentage(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrafficPercentage = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>*& PlayFab::ExperimentationModels::Variant::__cordl_internal_get_Variables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variables;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>* const& PlayFab::ExperimentationModels::Variant::__cordl_internal_get_Variables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variables;
}
constexpr void PlayFab::ExperimentationModels::Variant::__cordl_internal_set_Variables(::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Variables = value;
}
inline void PlayFab::ExperimentationModels::Variant::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::Variant*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ExperimentationModels::Variant* PlayFab::ExperimentationModels::Variant::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ExperimentationModels::Variant*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::Variant::Variant()   {
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FeatureStateDescription.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateDescription_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FeatureStateDescription._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FeatureStateDescription::*)(::StringW, ::StringW)>(&::Oculus::Interaction::PoseDetection::FeatureStateDescription::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa49ae90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FeatureStateDescription.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::PoseDetection::FeatureStateDescription::*)()>(&::Oculus::Interaction::PoseDetection::FeatureStateDescription::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49aed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FeatureStateDescription.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::PoseDetection::FeatureStateDescription::*)()>(&::Oculus::Interaction::PoseDetection::FeatureStateDescription::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49aedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Interaction::PoseDetection::FeatureStateDescription::__cordl_internal_get__Id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr ::StringW const& Oculus::Interaction::PoseDetection::FeatureStateDescription::__cordl_internal_get__Id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::FeatureStateDescription::__cordl_internal_set__Id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Id_k__BackingField = value;
}
constexpr ::StringW& Oculus::Interaction::PoseDetection::FeatureStateDescription::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& Oculus::Interaction::PoseDetection::FeatureStateDescription::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::FeatureStateDescription::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
inline void Oculus::Interaction::PoseDetection::FeatureStateDescription::_ctor(::StringW  id, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, name);
}
inline ::StringW Oculus::Interaction::PoseDetection::FeatureStateDescription::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Oculus::Interaction::PoseDetection::FeatureStateDescription::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::FeatureStateDescription* Oculus::Interaction::PoseDetection::FeatureStateDescription::New_ctor(::StringW  id, ::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>(id, name));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::FeatureStateDescription::FeatureStateDescription()   {
}

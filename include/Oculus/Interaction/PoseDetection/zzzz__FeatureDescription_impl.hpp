#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FeatureDescription.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateDescription_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureDescription_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateDescription_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FeatureDescription._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FeatureDescription::*)(::StringW, ::StringW, float_t, float_t, ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>)>(&::Oculus::Interaction::PoseDetection::FeatureDescription::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa49aee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureDescription*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FeatureDescription.get_ShortDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::PoseDetection::FeatureDescription::*)()>(&::Oculus::Interaction::PoseDetection::FeatureDescription::get_ShortDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49af58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureDescription*>(),
                        {"get_ShortDescription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FeatureDescription.get_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::PoseDetection::FeatureDescription::*)()>(&::Oculus::Interaction::PoseDetection::FeatureDescription::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49af60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureDescription*>(),
                        {"get_Description", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FeatureDescription.get_MinValueHint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::FeatureDescription::*)()>(&::Oculus::Interaction::PoseDetection::FeatureDescription::get_MinValueHint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49af68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureDescription*>(),
                        {"get_MinValueHint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FeatureDescription.get_MaxValueHint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::FeatureDescription::*)()>(&::Oculus::Interaction::PoseDetection::FeatureDescription::get_MaxValueHint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49af70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureDescription*>(),
                        {"get_MaxValueHint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FeatureDescription.get_FeatureStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*> (::Oculus::Interaction::PoseDetection::FeatureDescription::*)()>(&::Oculus::Interaction::PoseDetection::FeatureDescription::get_FeatureStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49af78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureDescription*>(),
                        {"get_FeatureStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Interaction::PoseDetection::FeatureDescription::__cordl_internal_get__ShortDescription_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShortDescription_k__BackingField;
}
constexpr ::StringW const& Oculus::Interaction::PoseDetection::FeatureDescription::__cordl_internal_get__ShortDescription_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShortDescription_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::FeatureDescription::__cordl_internal_set__ShortDescription_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShortDescription_k__BackingField = value;
}
constexpr ::StringW& Oculus::Interaction::PoseDetection::FeatureDescription::__cordl_internal_get__Description_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Description_k__BackingField;
}
constexpr ::StringW const& Oculus::Interaction::PoseDetection::FeatureDescription::__cordl_internal_get__Description_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Description_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::FeatureDescription::__cordl_internal_set__Description_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Description_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::FeatureDescription::__cordl_internal_get__MinValueHint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinValueHint_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::FeatureDescription::__cordl_internal_get__MinValueHint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinValueHint_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::FeatureDescription::__cordl_internal_set__MinValueHint_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MinValueHint_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::FeatureDescription::__cordl_internal_get__MaxValueHint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxValueHint_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::FeatureDescription::__cordl_internal_get__MaxValueHint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxValueHint_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::FeatureDescription::__cordl_internal_set__MaxValueHint_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaxValueHint_k__BackingField = value;
}
constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>& Oculus::Interaction::PoseDetection::FeatureDescription::__cordl_internal_get__FeatureStates_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FeatureStates_k__BackingField;
}
constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*> const& Oculus::Interaction::PoseDetection::FeatureDescription::__cordl_internal_get__FeatureStates_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FeatureStates_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::FeatureDescription::__cordl_internal_set__FeatureStates_k__BackingField(::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FeatureStates_k__BackingField = value;
}
inline void Oculus::Interaction::PoseDetection::FeatureDescription::_ctor(::StringW  shortDescription, ::StringW  description, float_t  minValueHint, float_t  maxValueHint, ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  featureStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureDescription*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shortDescription, description, minValueHint, maxValueHint, featureStates);
}
inline ::StringW Oculus::Interaction::PoseDetection::FeatureDescription::get_ShortDescription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureDescription*>(),
                        {"get_ShortDescription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Oculus::Interaction::PoseDetection::FeatureDescription::get_Description()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureDescription*>(),
                        {"get_Description", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t Oculus::Interaction::PoseDetection::FeatureDescription::get_MinValueHint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureDescription*>(),
                        {"get_MinValueHint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::PoseDetection::FeatureDescription::get_MaxValueHint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureDescription*>(),
                        {"get_MaxValueHint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*> Oculus::Interaction::PoseDetection::FeatureDescription::get_FeatureStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FeatureDescription*>(),
                        {"get_FeatureStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::FeatureDescription* Oculus::Interaction::PoseDetection::FeatureDescription::New_ctor(::StringW  shortDescription, ::StringW  description, float_t  minValueHint, float_t  maxValueHint, ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  featureStates)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::FeatureDescription*>(shortDescription, description, minValueHint, maxValueHint, featureStates));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::FeatureDescription::FeatureDescription()   {
}

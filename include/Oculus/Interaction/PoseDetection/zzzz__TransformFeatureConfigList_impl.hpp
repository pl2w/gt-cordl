#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureConfigList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureConfigList_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList.get_Values
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>* (::Oculus::Interaction::PoseDetection::TransformFeatureConfigList::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureConfigList::get_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a96f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*>(),
                        {"get_Values", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseDetection::TransformFeatureConfigList* (*)(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureConfigList::Create)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4a96fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*>(),
                        {"Create", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureConfigList::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureConfigList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a976c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*& Oculus::Interaction::PoseDetection::TransformFeatureConfigList::__cordl_internal_get__values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>* const& Oculus::Interaction::PoseDetection::TransformFeatureConfigList::__cordl_internal_get__values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureConfigList::__cordl_internal_set__values(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____values = value;
}
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>* Oculus::Interaction::PoseDetection::TransformFeatureConfigList::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList* Oculus::Interaction::PoseDetection::TransformFeatureConfigList::Create(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*>(),
                        {"Create", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*>(nullptr, ___internal_method, values);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureConfigList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList* Oculus::Interaction::PoseDetection::TransformFeatureConfigList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList::TransformFeatureConfigList()   {
}

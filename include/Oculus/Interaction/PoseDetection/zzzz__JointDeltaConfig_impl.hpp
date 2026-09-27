#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointDeltaConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointDeltaConfig_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointDeltaConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointDeltaConfig::*)(int32_t, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*)>(&::Oculus::Interaction::PoseDetection::JointDeltaConfig::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa49e9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaConfig*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::PoseDetection::JointDeltaConfig::__cordl_internal_get_InstanceID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstanceID;
}
constexpr int32_t const& Oculus::Interaction::PoseDetection::JointDeltaConfig::__cordl_internal_get_InstanceID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstanceID;
}
constexpr void Oculus::Interaction::PoseDetection::JointDeltaConfig::__cordl_internal_set_InstanceID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InstanceID = value;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*& Oculus::Interaction::PoseDetection::JointDeltaConfig::__cordl_internal_get_JointIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JointIDs;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>* const& Oculus::Interaction::PoseDetection::JointDeltaConfig::__cordl_internal_get_JointIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JointIDs;
}
constexpr void Oculus::Interaction::PoseDetection::JointDeltaConfig::__cordl_internal_set_JointIDs(::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JointIDs = value;
}
inline void Oculus::Interaction::PoseDetection::JointDeltaConfig::_ctor(int32_t  instanceID, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*  jointIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaConfig*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceID, jointIDs);
}
inline ::Oculus::Interaction::PoseDetection::JointDeltaConfig* Oculus::Interaction::PoseDetection::JointDeltaConfig::New_ctor(int32_t  instanceID, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*  jointIDs)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::JointDeltaConfig*>(instanceID, jointIDs));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::JointDeltaConfig::JointDeltaConfig()   {
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/BodySkeletonMapping`1_JointInfo.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodySkeletonMapping`1_JointInfo_def.hpp"
template<typename TSourceJointId>
inline void GlobalNamespace::BodySkeletonMapping_1_JointInfo<TSourceJointId>::_ctor(TSourceJointId  sourceJointId, TSourceJointId  parentJointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodySkeletonMapping_1_JointInfo<TSourceJointId>>(),
                        {".ctor", {}, {::i2c::type_of<TSourceJointId>(), ::i2c::type_of<TSourceJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceJointId, parentJointId);
}
// Ctor Parameters [CppParam { name: "SourceJointId", ty: "TSourceJointId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ParentJointId", ty: "TSourceJointId", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TSourceJointId>
constexpr ::GlobalNamespace::BodySkeletonMapping_1_JointInfo<TSourceJointId>::BodySkeletonMapping_1_JointInfo(TSourceJointId  SourceJointId, TSourceJointId  ParentJointId) noexcept  {
this->SourceJointId = SourceJointId;
this->ParentJointId = ParentJointId;
}
// Ctor Parameters []
template<typename TSourceJointId>
constexpr ::GlobalNamespace::BodySkeletonMapping_1_JointInfo<TSourceJointId>::BodySkeletonMapping_1_JointInfo()   {
}

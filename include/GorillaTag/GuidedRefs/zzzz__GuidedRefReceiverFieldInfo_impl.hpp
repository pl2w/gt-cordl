#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefReceiverFieldInfo.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GRef_EResolveModes_impl.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefReceiverFieldInfo_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefHubIdSO_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefTargetIdSO_def.hpp"
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo::*)(bool)>(&::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d34878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo::_ctor(bool  useRecommendedDefaults)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, useRecommendedDefaults);
}
// Ctor Parameters [CppParam { name: "resolveModes", ty: "::GlobalNamespace::GRef_EResolveModes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "targetId", ty: "::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hubId", ty: "::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fieldId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo::GuidedRefReceiverFieldInfo(::GlobalNamespace::GRef_EResolveModes  resolveModes, ::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>  targetId, ::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>  hubId, int32_t  fieldId) noexcept  {
this->resolveModes = resolveModes;
this->targetId = targetId;
this->hubId = hubId;
this->fieldId = fieldId;
}
// Ctor Parameters []
constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo::GuidedRefReceiverFieldInfo()   {
}

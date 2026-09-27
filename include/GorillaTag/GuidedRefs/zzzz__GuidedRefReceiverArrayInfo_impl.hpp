#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefReceiverArrayInfo.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GRef_EResolveModes_impl.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefTargetIdSO_impl.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefReceiverArrayInfo_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefHubIdSO_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefTargetIdSO_def.hpp"
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo::*)(bool)>(&::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5d459a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo::_ctor(bool  useRecommendedDefaults)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, useRecommendedDefaults);
}
// Ctor Parameters [CppParam { name: "resolveModes", ty: "::GlobalNamespace::GRef_EResolveModes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hubId", ty: "::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "targets", ty: "::ArrayW<::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fieldId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resolveCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo::GuidedRefReceiverArrayInfo(::GlobalNamespace::GRef_EResolveModes  resolveModes, ::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>  hubId, ::ArrayW<::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>>  targets, int32_t  fieldId, int32_t  resolveCount) noexcept  {
this->resolveModes = resolveModes;
this->hubId = hubId;
this->targets = targets;
this->fieldId = fieldId;
this->resolveCount = resolveCount;
}
// Ctor Parameters []
constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo::GuidedRefReceiverArrayInfo()   {
}

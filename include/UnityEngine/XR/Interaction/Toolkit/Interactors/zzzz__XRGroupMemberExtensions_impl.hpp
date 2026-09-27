#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRGroupMemberExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRGroupMemberExtensions_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRGroupMember_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractionGroup_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGroupMemberExtensions.GetTopLevelContainingGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGroupMemberExtensions::GetTopLevelContainingGroup)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb4607b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGroupMemberExtensions*>(),
                        {"GetTopLevelContainingGroup", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* UnityEngine::XR::Interaction::Toolkit::Interactors::XRGroupMemberExtensions::GetTopLevelContainingGroup(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGroupMemberExtensions*>(),
                        {"GetTopLevelContainingGroup", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>(nullptr, ___internal_method, groupMember);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGroupMemberExtensions::XRGroupMemberExtensions()   {
}

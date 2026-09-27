#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FaceExpressionStatusInternal.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FaceExpressionStatusInternal_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FaceExpressionStatus_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal.ToFaceExpressionStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_FaceExpressionStatus (::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal::*)()>(&::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal::ToFaceExpressionStatus)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa60f6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal>(),
                        {"ToFaceExpressionStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRPlugin_FaceExpressionStatus GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal::ToFaceExpressionStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal>(),
                        {"ToFaceExpressionStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_FaceExpressionStatus>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "IsValid", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsEyeFollowingBlendshapesValid", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal::OVRPlugin_FaceExpressionStatusInternal(::GlobalNamespace::OVRPlugin_Bool  IsValid, ::GlobalNamespace::OVRPlugin_Bool  IsEyeFollowingBlendshapesValid) noexcept  {
this->IsValid = IsValid;
this->IsEyeFollowingBlendshapesValid = IsEyeFollowingBlendshapesValid;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal::OVRPlugin_FaceExpressionStatusInternal()   {
}

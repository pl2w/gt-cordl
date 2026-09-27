#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIKMgr_IKOutput.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKOutput_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr_IKOutput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKMgr_IKOutput::*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::GorillaIKMgr_IKOutput::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5916714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr_IKOutput>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaIKMgr_IKOutput::_ctor(::UnityEngine::Quaternion  upperArmLocalRot_, ::UnityEngine::Quaternion  lowerArmLocalRot_, ::UnityEngine::Vector3  _handLocalPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr_IKOutput>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, upperArmLocalRot_, lowerArmLocalRot_, _handLocalPosition);
}
// Ctor Parameters [CppParam { name: "upperArmLocalRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lowerArmLocalRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "handLocalPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaIKMgr_IKOutput::GorillaIKMgr_IKOutput(::UnityEngine::Quaternion  upperArmLocalRot, ::UnityEngine::Quaternion  lowerArmLocalRot, ::UnityEngine::Vector3  handLocalPosition) noexcept  {
this->upperArmLocalRot = upperArmLocalRot;
this->lowerArmLocalRot = lowerArmLocalRot;
this->handLocalPosition = handLocalPosition;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaIKMgr_IKOutput::GorillaIKMgr_IKOutput()   {
}

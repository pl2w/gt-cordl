#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderPotentialPlacement.hpp"
#include "GlobalNamespace/zzzz__SnapBounds_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderPotentialPlacement_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderPotentialPlacement.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPotentialPlacement::*)()>(&::GorillaTagScripts::BuilderPotentialPlacement::Reset)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5ba94b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPotentialPlacement>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::BuilderPotentialPlacement::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPotentialPlacement>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "attachPiece", ty: "::UnityW<::GlobalNamespace::BuilderPiece>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentPiece", ty: "::UnityW<::GlobalNamespace::BuilderPiece>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentAttachIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachPlaneNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "score", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachBounds", ty: "::GlobalNamespace::SnapBounds", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentAttachBounds", ty: "::GlobalNamespace::SnapBounds", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "twist", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bumpOffsetX", ty: "int8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bumpOffsetZ", ty: "int8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTagScripts::BuilderPotentialPlacement::BuilderPotentialPlacement(::UnityW<::GlobalNamespace::BuilderPiece>  attachPiece, ::UnityW<::GlobalNamespace::BuilderPiece>  parentPiece, int32_t  attachIndex, int32_t  parentAttachIndex, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  attachPlaneNormal, float_t  attachDistance, float_t  score, ::GlobalNamespace::SnapBounds  attachBounds, ::GlobalNamespace::SnapBounds  parentAttachBounds, uint8_t  twist, int8_t  bumpOffsetX, int8_t  bumpOffsetZ) noexcept  {
this->attachPiece = attachPiece;
this->parentPiece = parentPiece;
this->attachIndex = attachIndex;
this->parentAttachIndex = parentAttachIndex;
this->localPosition = localPosition;
this->localRotation = localRotation;
this->attachPlaneNormal = attachPlaneNormal;
this->attachDistance = attachDistance;
this->score = score;
this->attachBounds = attachBounds;
this->parentAttachBounds = parentAttachBounds;
this->twist = twist;
this->bumpOffsetX = bumpOffsetX;
this->bumpOffsetZ = bumpOffsetZ;
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderPotentialPlacement::BuilderPotentialPlacement()   {
}

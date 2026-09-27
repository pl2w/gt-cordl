#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderPotentialPlacementData.hpp"
#include "GlobalNamespace/zzzz__SnapBounds_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderPotentialPlacementData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPotentialPlacement_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderPotentialPlacementData.ToPotentialPlacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::BuilderPotentialPlacement (::GorillaTagScripts::BuilderPotentialPlacementData::*)(::GorillaTagScripts::BuilderTable*)>(&::GorillaTagScripts::BuilderPotentialPlacementData::ToPotentialPlacement)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5ba9ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPotentialPlacementData>(),
                        {"ToPotentialPlacement", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GorillaTagScripts::BuilderPotentialPlacement GorillaTagScripts::BuilderPotentialPlacementData::ToPotentialPlacement(::GorillaTagScripts::BuilderTable*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPotentialPlacementData>(),
                        {"ToPotentialPlacement", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::BuilderPotentialPlacement>(*this, ___internal_method, table);
}
// Ctor Parameters [CppParam { name: "pieceId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentPieceId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "score", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentAttachIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachPlaneNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachBounds", ty: "::GlobalNamespace::SnapBounds", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentAttachBounds", ty: "::GlobalNamespace::SnapBounds", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "twist", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bumpOffsetX", ty: "int8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bumpOffsetZ", ty: "int8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTagScripts::BuilderPotentialPlacementData::BuilderPotentialPlacementData(int32_t  pieceId, int32_t  parentPieceId, float_t  score, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, int32_t  attachIndex, int32_t  parentAttachIndex, float_t  attachDistance, ::UnityEngine::Vector3  attachPlaneNormal, ::GlobalNamespace::SnapBounds  attachBounds, ::GlobalNamespace::SnapBounds  parentAttachBounds, uint8_t  twist, int8_t  bumpOffsetX, int8_t  bumpOffsetZ) noexcept  {
this->pieceId = pieceId;
this->parentPieceId = parentPieceId;
this->score = score;
this->localPosition = localPosition;
this->localRotation = localRotation;
this->attachIndex = attachIndex;
this->parentAttachIndex = parentAttachIndex;
this->attachDistance = attachDistance;
this->attachPlaneNormal = attachPlaneNormal;
this->attachBounds = attachBounds;
this->parentAttachBounds = parentAttachBounds;
this->twist = twist;
this->bumpOffsetX = bumpOffsetX;
this->bumpOffsetZ = bumpOffsetZ;
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderPotentialPlacementData::BuilderPotentialPlacementData()   {
}

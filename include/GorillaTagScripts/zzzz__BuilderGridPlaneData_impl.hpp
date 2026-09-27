#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderGridPlaneData.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderGridPlaneData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderAttachGridPlane_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderGridPlaneData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderGridPlaneData::*)(::GorillaTagScripts::BuilderAttachGridPlane*, int32_t)>(&::GorillaTagScripts::BuilderGridPlaneData::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ba9d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderGridPlaneData>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::BuilderGridPlaneData::_ctor(::GorillaTagScripts::BuilderAttachGridPlane*  gridPlane, int32_t  pieceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderGridPlaneData>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gridPlane, pieceIndex);
}
// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "male", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pieceId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pieceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "boundingRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTagScripts::BuilderGridPlaneData::BuilderGridPlaneData(int32_t  width, int32_t  length, bool  male, int32_t  pieceId, int32_t  pieceIndex, float_t  boundingRadius, int32_t  attachIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) noexcept  {
this->width = width;
this->length = length;
this->male = male;
this->pieceId = pieceId;
this->pieceIndex = pieceIndex;
this->boundingRadius = boundingRadius;
this->attachIndex = attachIndex;
this->position = position;
this->rotation = rotation;
this->localPosition = localPosition;
this->localRotation = localRotation;
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderGridPlaneData::BuilderGridPlaneData()   {
}

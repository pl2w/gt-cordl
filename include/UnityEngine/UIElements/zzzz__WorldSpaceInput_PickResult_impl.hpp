#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/WorldSpaceInput_PickResult.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__WorldSpaceInput_PickResult_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WorldSpaceInput_PickResult.ComputeCollisionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldSpaceInput_PickResult::*)(::UnityEngine::Ray)>(&::GlobalNamespace::WorldSpaceInput_PickResult::ComputeCollisionData)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb8b5864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldSpaceInput_PickResult>(),
                        {"ComputeCollisionData", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WorldSpaceInput_PickResult::setStaticF_Empty(::GlobalNamespace::WorldSpaceInput_PickResult  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::WorldSpaceInput_PickResult, "Empty", ::GlobalNamespace::WorldSpaceInput_PickResult>(std::forward<::GlobalNamespace::WorldSpaceInput_PickResult>(value));
}
inline ::GlobalNamespace::WorldSpaceInput_PickResult GlobalNamespace::WorldSpaceInput_PickResult::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::WorldSpaceInput_PickResult, "Empty", ::GlobalNamespace::WorldSpaceInput_PickResult>();
}
inline void GlobalNamespace::WorldSpaceInput_PickResult::ComputeCollisionData(::UnityEngine::Ray  ray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldSpaceInput_PickResult>(),
                        {"ComputeCollisionData", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ray);
}
// Ctor Parameters [CppParam { name: "collider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "document", ty: "::UnityW<::UnityEngine::UIElements::UIDocument>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pickedElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WorldSpaceInput_PickResult::WorldSpaceInput_PickResult(::UnityW<::UnityEngine::Collider>  collider, ::UnityW<::UnityEngine::UIElements::UIDocument>  document, ::UnityEngine::UIElements::VisualElement*  pickedElement, float_t  distance, ::UnityEngine::Vector3  normal, ::UnityEngine::Vector3  point, ::UnityEngine::Vector3  localPoint) noexcept  {
this->collider = collider;
this->document = document;
this->pickedElement = pickedElement;
this->distance = distance;
this->normal = normal;
this->point = point;
this->localPoint = localPoint;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WorldSpaceInput_PickResult::WorldSpaceInput_PickResult()   {
}

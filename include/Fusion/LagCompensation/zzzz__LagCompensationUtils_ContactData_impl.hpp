#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensationUtils_ContactData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_ContactData_def.hpp"
// Ctor Parameters [CppParam { name: "Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Penetration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LagCompensationUtils_ContactData::LagCompensationUtils_ContactData(::UnityEngine::Vector3  Point, ::UnityEngine::Vector3  Normal, float_t  Penetration) noexcept  {
this->Point = Point;
this->Normal = Normal;
this->Penetration = Penetration;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LagCompensationUtils_ContactData::LagCompensationUtils_ContactData()   {
}

#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageInternal_SetAreaOfInterest.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/zzzz__SimulationMessageInternal_SetAreaOfInterest_def.hpp"
constexpr ::UnityEngine::Vector3& Fusion::SimulationMessageInternal_SetAreaOfInterest::__cordl_internal_get_Center()  {
return this->___Center;
}
constexpr ::UnityEngine::Vector3 const& Fusion::SimulationMessageInternal_SetAreaOfInterest::__cordl_internal_get_Center() const {
return this->___Center;
}
constexpr void Fusion::SimulationMessageInternal_SetAreaOfInterest::__cordl_internal_set_Center(::UnityEngine::Vector3  value)  {
this->___Center = value;
}
constexpr float_t& Fusion::SimulationMessageInternal_SetAreaOfInterest::__cordl_internal_get_Radius()  {
return this->___Radius;
}
constexpr float_t const& Fusion::SimulationMessageInternal_SetAreaOfInterest::__cordl_internal_get_Radius() const {
return this->___Radius;
}
constexpr void Fusion::SimulationMessageInternal_SetAreaOfInterest::__cordl_internal_set_Radius(float_t  value)  {
this->___Radius = value;
}
// Ctor Parameters [CppParam { name: "Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationMessageInternal_SetAreaOfInterest::SimulationMessageInternal_SetAreaOfInterest(::UnityEngine::Vector3  Center, float_t  Radius) noexcept  {
this->Center = Center;
this->Radius = Radius;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationMessageInternal_SetAreaOfInterest::SimulationMessageInternal_SetAreaOfInterest()   {
}

#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageInternal_SetPlayerObject.hpp"
#include "Fusion/zzzz__NetworkId_impl.hpp"
#include "Fusion/zzzz__SimulationMessageInternal_SetPlayerObject_def.hpp"
constexpr ::Fusion::NetworkId& Fusion::SimulationMessageInternal_SetPlayerObject::__cordl_internal_get_Object()  {
return this->___Object;
}
constexpr ::Fusion::NetworkId const& Fusion::SimulationMessageInternal_SetPlayerObject::__cordl_internal_get_Object() const {
return this->___Object;
}
constexpr void Fusion::SimulationMessageInternal_SetPlayerObject::__cordl_internal_set_Object(::Fusion::NetworkId  value)  {
this->___Object = value;
}
// Ctor Parameters [CppParam { name: "Object", ty: "::Fusion::NetworkId", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationMessageInternal_SetPlayerObject::SimulationMessageInternal_SetPlayerObject(::Fusion::NetworkId  Object) noexcept  {
this->Object = Object;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationMessageInternal_SetPlayerObject::SimulationMessageInternal_SetPlayerObject()   {
}

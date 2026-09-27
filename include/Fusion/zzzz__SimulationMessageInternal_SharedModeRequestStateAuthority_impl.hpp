#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageInternal_SharedModeRequestStateAuthority.hpp"
#include "Fusion/zzzz__NetworkId_impl.hpp"
#include "Fusion/zzzz__SimulationMessageInternal_SharedModeRequestStateAuthority_def.hpp"
constexpr ::Fusion::NetworkId& Fusion::SimulationMessageInternal_SharedModeRequestStateAuthority::__cordl_internal_get_Object()  {
return this->___Object;
}
constexpr ::Fusion::NetworkId const& Fusion::SimulationMessageInternal_SharedModeRequestStateAuthority::__cordl_internal_get_Object() const {
return this->___Object;
}
constexpr void Fusion::SimulationMessageInternal_SharedModeRequestStateAuthority::__cordl_internal_set_Object(::Fusion::NetworkId  value)  {
this->___Object = value;
}
constexpr int32_t& Fusion::SimulationMessageInternal_SharedModeRequestStateAuthority::__cordl_internal_get_Acquire()  {
return this->___Acquire;
}
constexpr int32_t const& Fusion::SimulationMessageInternal_SharedModeRequestStateAuthority::__cordl_internal_get_Acquire() const {
return this->___Acquire;
}
constexpr void Fusion::SimulationMessageInternal_SharedModeRequestStateAuthority::__cordl_internal_set_Acquire(int32_t  value)  {
this->___Acquire = value;
}
// Ctor Parameters [CppParam { name: "Object", ty: "::Fusion::NetworkId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Acquire", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationMessageInternal_SharedModeRequestStateAuthority::SimulationMessageInternal_SharedModeRequestStateAuthority(::Fusion::NetworkId  Object, int32_t  Acquire) noexcept  {
this->Object = Object;
this->Acquire = Acquire;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationMessageInternal_SharedModeRequestStateAuthority::SimulationMessageInternal_SharedModeRequestStateAuthority()   {
}

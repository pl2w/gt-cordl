#pragma once
// IWYU pragma private; include "Fusion/SimulationInputHeader.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "Fusion/zzzz__SimulationInputHeader_def.hpp"
constexpr ::Fusion::Tick& Fusion::SimulationInputHeader::__cordl_internal_get_Tick()  {
return this->___Tick;
}
constexpr ::Fusion::Tick const& Fusion::SimulationInputHeader::__cordl_internal_get_Tick() const {
return this->___Tick;
}
constexpr void Fusion::SimulationInputHeader::__cordl_internal_set_Tick(::Fusion::Tick  value)  {
this->___Tick = value;
}
constexpr float_t& Fusion::SimulationInputHeader::__cordl_internal_get_InterpAlpha()  {
return this->___InterpAlpha;
}
constexpr float_t const& Fusion::SimulationInputHeader::__cordl_internal_get_InterpAlpha() const {
return this->___InterpAlpha;
}
constexpr void Fusion::SimulationInputHeader::__cordl_internal_set_InterpAlpha(float_t  value)  {
this->___InterpAlpha = value;
}
constexpr ::Fusion::Tick& Fusion::SimulationInputHeader::__cordl_internal_get_InterpFrom()  {
return this->___InterpFrom;
}
constexpr ::Fusion::Tick const& Fusion::SimulationInputHeader::__cordl_internal_get_InterpFrom() const {
return this->___InterpFrom;
}
constexpr void Fusion::SimulationInputHeader::__cordl_internal_set_InterpFrom(::Fusion::Tick  value)  {
this->___InterpFrom = value;
}
constexpr ::Fusion::Tick& Fusion::SimulationInputHeader::__cordl_internal_get_InterpTo()  {
return this->___InterpTo;
}
constexpr ::Fusion::Tick const& Fusion::SimulationInputHeader::__cordl_internal_get_InterpTo() const {
return this->___InterpTo;
}
constexpr void Fusion::SimulationInputHeader::__cordl_internal_set_InterpTo(::Fusion::Tick  value)  {
this->___InterpTo = value;
}
// Ctor Parameters [CppParam { name: "Tick", ty: "::Fusion::Tick", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InterpAlpha", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InterpFrom", ty: "::Fusion::Tick", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InterpTo", ty: "::Fusion::Tick", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationInputHeader::SimulationInputHeader(::Fusion::Tick  Tick, float_t  InterpAlpha, ::Fusion::Tick  InterpFrom, ::Fusion::Tick  InterpTo) noexcept  {
this->Tick = Tick;
this->InterpAlpha = InterpAlpha;
this->InterpFrom = InterpFrom;
this->InterpTo = InterpTo;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationInputHeader::SimulationInputHeader()   {
}

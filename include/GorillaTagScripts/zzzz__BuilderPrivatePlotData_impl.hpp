#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderPrivatePlotData.hpp"
#include "GlobalNamespace/zzzz__BuilderPiecePrivatePlot_PlotState_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderPrivatePlotData_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiecePrivatePlot_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderPrivatePlotData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPrivatePlotData::*)(::GlobalNamespace::BuilderPiecePrivatePlot*)>(&::GorillaTagScripts::BuilderPrivatePlotData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ba9e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPrivatePlotData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiecePrivatePlot*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::BuilderPrivatePlotData::_ctor(::GlobalNamespace::BuilderPiecePrivatePlot*  plot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPrivatePlotData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiecePrivatePlot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, plot);
}
// Ctor Parameters [CppParam { name: "plotState", ty: "::GlobalNamespace::BuilderPiecePrivatePlot_PlotState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ownerActorNumber", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isUnderCapacityLeft", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isUnderCapacityRight", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTagScripts::BuilderPrivatePlotData::BuilderPrivatePlotData(::GlobalNamespace::BuilderPiecePrivatePlot_PlotState  plotState, int32_t  ownerActorNumber, bool  isUnderCapacityLeft, bool  isUnderCapacityRight) noexcept  {
this->plotState = plotState;
this->ownerActorNumber = ownerActorNumber;
this->isUnderCapacityLeft = isUnderCapacityLeft;
this->isUnderCapacityRight = isUnderCapacityRight;
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderPrivatePlotData::BuilderPrivatePlotData()   {
}

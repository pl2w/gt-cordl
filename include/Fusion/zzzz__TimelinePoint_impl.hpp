#pragma once
// IWYU pragma private; include "Fusion/TimelinePoint.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "Fusion/zzzz__TimelinePoint_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
//  Writing Method size for method: ::Fusion::TimelinePoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TimelinePoint::*)(::Fusion::Tick, ::Fusion::Tick, double_t)>(&::Fusion::TimelinePoint::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fe151c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimelinePoint>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::TimelinePoint::_ctor(::Fusion::Tick  snapshot, ::Fusion::Tick  tick, double_t  tickDeltaDouble)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimelinePoint>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, snapshot, tick, tickDeltaDouble);
}
// Ctor Parameters [CppParam { name: "Snapshot", ty: "::Fusion::Tick", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tick", ty: "::Fusion::Tick", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::TimelinePoint::TimelinePoint(::Fusion::Tick  Snapshot, ::Fusion::Tick  Tick, double_t  Time) noexcept  {
this->Snapshot = Snapshot;
this->Tick = Tick;
this->Time = Time;
}
// Ctor Parameters []
constexpr ::Fusion::TimelinePoint::TimelinePoint()   {
}

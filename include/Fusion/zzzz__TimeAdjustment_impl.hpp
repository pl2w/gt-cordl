#pragma once
// IWYU pragma private; include "Fusion/TimeAdjustment.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "Fusion/zzzz__TimeAdjustment_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
//  Writing Method size for method: ::Fusion::TimeAdjustment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TimeAdjustment::*)(::Fusion::Tick, double_t)>(&::Fusion::TimeAdjustment::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6006894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeAdjustment>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeAdjustment.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::TimeAdjustment::*)()>(&::Fusion::TimeAdjustment::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x60068a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::TimeAdjustment>(),
                    {::i2c::class_of<::Fusion::TimeAdjustment>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Fusion::TimeAdjustment::_ctor(::Fusion::Tick  tick, double_t  total)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeAdjustment>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tick, total);
}
inline ::StringW Fusion::TimeAdjustment::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::TimeAdjustment>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Tick", ty: "::Fusion::Tick", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Total", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::TimeAdjustment::TimeAdjustment(::Fusion::Tick  Tick, double_t  Total) noexcept  {
this->Tick = Tick;
this->Total = Total;
}
// Ctor Parameters []
constexpr ::Fusion::TimeAdjustment::TimeAdjustment()   {
}

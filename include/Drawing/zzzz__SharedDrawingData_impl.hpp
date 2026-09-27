#pragma once
// IWYU pragma private; include "Drawing/SharedDrawingData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_impl.hpp"
#include "Drawing/zzzz__SharedDrawingData_def.hpp"
#include "Drawing/zzzz__SharedDrawingData_def.hpp"
inline void Drawing::SharedDrawingData::setStaticF_BurstTime(::Unity::Burst::SharedStatic_1<float_t>  value)  {
::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<float_t>, "BurstTime", ::Drawing::SharedDrawingData*>(std::forward<::Unity::Burst::SharedStatic_1<float_t>>(value));
}
inline ::Unity::Burst::SharedStatic_1<float_t> Drawing::SharedDrawingData::getStaticF_BurstTime()  {
return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<float_t>, "BurstTime", ::Drawing::SharedDrawingData*>();
}
// Ctor Parameters []
constexpr ::Drawing::SharedDrawingData::SharedDrawingData()   {
}
//  Writing Method size for method: ::Drawing::SharedDrawingData_BurstTimeKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::SharedDrawingData_BurstTimeKey::*)()>(&::Drawing::SharedDrawingData_BurstTimeKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55cb37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::SharedDrawingData_BurstTimeKey*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::SharedDrawingData_BurstTimeKey::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::SharedDrawingData_BurstTimeKey*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Drawing::SharedDrawingData_BurstTimeKey* Drawing::SharedDrawingData_BurstTimeKey::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::SharedDrawingData_BurstTimeKey*>());
}
// Ctor Parameters []
constexpr ::Drawing::SharedDrawingData_BurstTimeKey::SharedDrawingData_BurstTimeKey()   {
}

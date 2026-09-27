#pragma once
// IWYU pragma private; include "Drawing/Examples/BurstExample.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Drawing/Examples/zzzz__BurstExample_def.hpp"
#include "Drawing/Examples/zzzz__BurstExample_DrawingJob_def.hpp"
//  Writing Method size for method: ::Drawing::Examples::BurstExample.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::BurstExample::*)()>(&::Drawing::Examples::BurstExample::Update)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x55e1a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::BurstExample*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Examples::BurstExample._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::BurstExample::*)()>(&::Drawing::Examples::BurstExample::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e1b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::BurstExample*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::Examples::BurstExample::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::BurstExample*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::Examples::BurstExample::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::BurstExample*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Drawing::Examples::BurstExample* Drawing::Examples::BurstExample::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::Examples::BurstExample*>());
}
// Ctor Parameters []
constexpr ::Drawing::Examples::BurstExample::BurstExample()   {
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandDebugVisual.hpp"
#include "Oculus/Interaction/zzzz__HandDebugGizmos_impl.hpp"
#include "Oculus/Interaction/zzzz__HandDebugVisual_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandDebugVisual.UpdateSkeleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugVisual::*)()>(&::Oculus::Interaction::HandDebugVisual::UpdateSkeleton)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa46ecc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugVisual*>(),
                        {"UpdateSkeleton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugVisual::*)()>(&::Oculus::Interaction::HandDebugVisual::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa46ecf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::HandDebugVisual::UpdateSkeleton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugVisual*>(),
                        {"UpdateSkeleton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandDebugVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandDebugVisual* Oculus::Interaction::HandDebugVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandDebugVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandDebugVisual::HandDebugVisual()   {
}

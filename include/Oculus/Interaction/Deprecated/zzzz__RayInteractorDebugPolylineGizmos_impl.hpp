#pragma once
// IWYU pragma private; include "Oculus/Interaction/Deprecated/RayInteractorDebugPolylineGizmos.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Deprecated/zzzz__RayInteractorDebugPolylineGizmos_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Deprecated::RayInteractorDebugPolylineGizmos._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Deprecated::RayInteractorDebugPolylineGizmos::*)()>(&::Oculus::Interaction::Deprecated::RayInteractorDebugPolylineGizmos::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b87a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Deprecated::RayInteractorDebugPolylineGizmos*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Deprecated::RayInteractorDebugPolylineGizmos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Deprecated::RayInteractorDebugPolylineGizmos*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Deprecated::RayInteractorDebugPolylineGizmos* Oculus::Interaction::Deprecated::RayInteractorDebugPolylineGizmos::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Deprecated::RayInteractorDebugPolylineGizmos*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Deprecated::RayInteractorDebugPolylineGizmos::RayInteractorDebugPolylineGizmos()   {
}

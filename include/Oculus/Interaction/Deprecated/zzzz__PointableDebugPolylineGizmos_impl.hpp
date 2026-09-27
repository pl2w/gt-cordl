#pragma once
// IWYU pragma private; include "Oculus/Interaction/Deprecated/PointableDebugPolylineGizmos.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Deprecated/zzzz__PointableDebugPolylineGizmos_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Deprecated::PointableDebugPolylineGizmos._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Deprecated::PointableDebugPolylineGizmos::*)()>(&::Oculus::Interaction::Deprecated::PointableDebugPolylineGizmos::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b87a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Deprecated::PointableDebugPolylineGizmos*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Deprecated::PointableDebugPolylineGizmos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Deprecated::PointableDebugPolylineGizmos*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Deprecated::PointableDebugPolylineGizmos* Oculus::Interaction::Deprecated::PointableDebugPolylineGizmos::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Deprecated::PointableDebugPolylineGizmos*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Deprecated::PointableDebugPolylineGizmos::PointableDebugPolylineGizmos()   {
}

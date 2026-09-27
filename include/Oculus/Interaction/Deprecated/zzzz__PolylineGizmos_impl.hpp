#pragma once
// IWYU pragma private; include "Oculus/Interaction/Deprecated/PolylineGizmos.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Deprecated/zzzz__PolylineGizmos_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Deprecated::PolylineGizmos._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Deprecated::PolylineGizmos::*)()>(&::Oculus::Interaction::Deprecated::PolylineGizmos::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b87b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Deprecated::PolylineGizmos*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Deprecated::PolylineGizmos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Deprecated::PolylineGizmos*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Deprecated::PolylineGizmos* Oculus::Interaction::Deprecated::PolylineGizmos::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Deprecated::PolylineGizmos*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Deprecated::PolylineGizmos::PolylineGizmos()   {
}

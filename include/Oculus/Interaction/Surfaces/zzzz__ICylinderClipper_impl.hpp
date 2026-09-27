#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/ICylinderClipper.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ICylinderClipper_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__CylinderSegment_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ICylinderClipper.GetCylinderSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::ICylinderClipper::*)(::by_ref<::Oculus::Interaction::Surfaces::CylinderSegment>)>(&::Oculus::Interaction::Surfaces::ICylinderClipper::GetCylinderSegment)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Surfaces::ICylinderClipper*>(),
                    {::i2c::class_of<::Oculus::Interaction::Surfaces::ICylinderClipper*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::Surfaces::ICylinderClipper::GetCylinderSegment(::by_ref<::Oculus::Interaction::Surfaces::CylinderSegment>  segment)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Surfaces::ICylinderClipper*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, segment);
}

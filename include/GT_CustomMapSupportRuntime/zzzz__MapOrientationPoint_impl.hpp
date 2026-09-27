#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MapOrientationPoint.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AccessDoorPlaceholder_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MapOrientationPoint_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapOrientationPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MapOrientationPoint::*)()>(&::GT_CustomMapSupportRuntime::MapOrientationPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cb7370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapOrientationPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GT_CustomMapSupportRuntime::MapOrientationPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapOrientationPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::MapOrientationPoint* GT_CustomMapSupportRuntime::MapOrientationPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::MapOrientationPoint*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::MapOrientationPoint::MapOrientationPoint()   {
}

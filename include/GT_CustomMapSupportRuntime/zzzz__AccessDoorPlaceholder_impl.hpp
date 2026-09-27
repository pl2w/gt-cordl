#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/AccessDoorPlaceholder.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AccessDoorPlaceholder_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::AccessDoorPlaceholder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::AccessDoorPlaceholder::*)()>(&::GT_CustomMapSupportRuntime::AccessDoorPlaceholder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cb0690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AccessDoorPlaceholder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GT_CustomMapSupportRuntime::AccessDoorPlaceholder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AccessDoorPlaceholder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::AccessDoorPlaceholder* GT_CustomMapSupportRuntime::AccessDoorPlaceholder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::AccessDoorPlaceholder*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::AccessDoorPlaceholder::AccessDoorPlaceholder()   {
}

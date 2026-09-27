#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MovingSurfaceSettings.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MovingSurfaceSettings_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MovingSurfaceSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MovingSurfaceSettings::*)()>(&::GT_CustomMapSupportRuntime::MovingSurfaceSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cb7d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MovingSurfaceSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GT_CustomMapSupportRuntime::MovingSurfaceSettings::__cordl_internal_get_uniqueId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniqueId;
}
constexpr int32_t const& GT_CustomMapSupportRuntime::MovingSurfaceSettings::__cordl_internal_get_uniqueId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniqueId;
}
constexpr void GT_CustomMapSupportRuntime::MovingSurfaceSettings::__cordl_internal_set_uniqueId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uniqueId = value;
}
inline void GT_CustomMapSupportRuntime::MovingSurfaceSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MovingSurfaceSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::MovingSurfaceSettings* GT_CustomMapSupportRuntime::MovingSurfaceSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::MovingSurfaceSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::MovingSurfaceSettings::MovingSurfaceSettings()   {
}

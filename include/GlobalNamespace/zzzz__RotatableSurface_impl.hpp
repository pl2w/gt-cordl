#pragma once
// IWYU pragma private; include "GlobalNamespace/RotatableSurface.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RotatableSurface_def.hpp"
#include "GlobalNamespace/zzzz__ManipulatableSpinner_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RotatableSurface.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatableSurface::*)()>(&::GlobalNamespace::RotatableSurface::LateUpdate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x578907c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatableSurface*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatableSurface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatableSurface::*)()>(&::GlobalNamespace::RotatableSurface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57890e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatableSurface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ManipulatableSpinner>& GlobalNamespace::RotatableSurface::__cordl_internal_get_spinner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinner;
}
constexpr ::UnityW<::GlobalNamespace::ManipulatableSpinner> const& GlobalNamespace::RotatableSurface::__cordl_internal_get_spinner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinner;
}
constexpr void GlobalNamespace::RotatableSurface::__cordl_internal_set_spinner(::UnityW<::GlobalNamespace::ManipulatableSpinner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinner = value;
}
constexpr float_t& GlobalNamespace::RotatableSurface::__cordl_internal_get_rotationScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationScale;
}
constexpr float_t const& GlobalNamespace::RotatableSurface::__cordl_internal_get_rotationScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationScale;
}
constexpr void GlobalNamespace::RotatableSurface::__cordl_internal_set_rotationScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationScale = value;
}
inline void GlobalNamespace::RotatableSurface::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatableSurface*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatableSurface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatableSurface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RotatableSurface* GlobalNamespace::RotatableSurface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RotatableSurface*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotatableSurface::RotatableSurface()   {
}

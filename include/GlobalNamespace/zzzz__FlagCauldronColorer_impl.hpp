#pragma once
// IWYU pragma private; include "GlobalNamespace/FlagCauldronColorer.hpp"
#include "GlobalNamespace/zzzz__FlagCauldronColorer_ColorMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlagCauldronColorer_def.hpp"
#include "GlobalNamespace/zzzz__FlagCauldronColorer_ColorMode_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlagCauldronColorer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlagCauldronColorer::*)()>(&::GlobalNamespace::FlagCauldronColorer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56743e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlagCauldronColorer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FlagCauldronColorer_ColorMode& GlobalNamespace::FlagCauldronColorer::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::FlagCauldronColorer_ColorMode const& GlobalNamespace::FlagCauldronColorer::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::FlagCauldronColorer::__cordl_internal_set_mode(::GlobalNamespace::FlagCauldronColorer_ColorMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FlagCauldronColorer::__cordl_internal_get_colorPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FlagCauldronColorer::__cordl_internal_get_colorPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorPoint;
}
constexpr void GlobalNamespace::FlagCauldronColorer::__cordl_internal_set_colorPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorPoint = value;
}
inline void GlobalNamespace::FlagCauldronColorer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlagCauldronColorer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlagCauldronColorer* GlobalNamespace::FlagCauldronColorer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlagCauldronColorer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlagCauldronColorer::FlagCauldronColorer()   {
}

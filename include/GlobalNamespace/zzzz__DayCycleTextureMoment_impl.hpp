#pragma once
// IWYU pragma private; include "GlobalNamespace/DayCycleTextureMoment.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DayCycleTextureMoment_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DayCycleTextureMoment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DayCycleTextureMoment::*)()>(&::GlobalNamespace::DayCycleTextureMoment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x566e118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayCycleTextureMoment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::DayCycleTextureMoment::__cordl_internal_get_sunnyTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunnyTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::DayCycleTextureMoment::__cordl_internal_get_sunnyTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunnyTex;
}
constexpr void GlobalNamespace::DayCycleTextureMoment::__cordl_internal_set_sunnyTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunnyTex = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::DayCycleTextureMoment::__cordl_internal_get_cloudyTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudyTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::DayCycleTextureMoment::__cordl_internal_get_cloudyTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudyTex;
}
constexpr void GlobalNamespace::DayCycleTextureMoment::__cordl_internal_set_cloudyTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudyTex = value;
}
inline void GlobalNamespace::DayCycleTextureMoment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayCycleTextureMoment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DayCycleTextureMoment* GlobalNamespace::DayCycleTextureMoment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DayCycleTextureMoment*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DayCycleTextureMoment::DayCycleTextureMoment()   {
}

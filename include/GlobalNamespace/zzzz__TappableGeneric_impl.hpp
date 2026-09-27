#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableGeneric.hpp"
#include "GlobalNamespace/zzzz__Tappable_impl.hpp"
#include "GlobalNamespace/zzzz__TappableGeneric_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TappableGeneric.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGeneric::*)(float_t, float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::TappableGeneric::OnTapLocal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x595fb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TappableGeneric*>(),
                    {::i2c::class_of<::GlobalNamespace::TappableGeneric*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGeneric._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGeneric::*)()>(&::GlobalNamespace::TappableGeneric::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGeneric*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TappableGeneric::__cordl_internal_get_OnTapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTapped;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TappableGeneric::__cordl_internal_get_OnTapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTapped;
}
constexpr void GlobalNamespace::TappableGeneric::__cordl_internal_set_OnTapped(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTapped = value;
}
inline void GlobalNamespace::TappableGeneric::OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TappableGeneric*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapStrength, tapTime, info);
}
inline void GlobalNamespace::TappableGeneric::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGeneric*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TappableGeneric* GlobalNamespace::TappableGeneric::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TappableGeneric*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TappableGeneric::TappableGeneric()   {
}

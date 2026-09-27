#pragma once
// IWYU pragma private; include "GorillaTagScripts/CrystalVisualsPreset_VisualState.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GorillaTagScripts/zzzz__CrystalVisualsPreset_VisualState_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrystalVisualsPreset_VisualState.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrystalVisualsPreset_VisualState::*)()>(&::GlobalNamespace::CrystalVisualsPreset_VisualState::GetHashCode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bb64e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrystalVisualsPreset_VisualState>(),
                    {::i2c::class_of<::GlobalNamespace::CrystalVisualsPreset_VisualState>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrystalVisualsPreset_VisualState._GetHashCode_g__GetColorHash_2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Color)>(&::GlobalNamespace::CrystalVisualsPreset_VisualState::_GetHashCode_g__GetColorHash_2_0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5bb6594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrystalVisualsPreset_VisualState>(),
                        {"<GetHashCode>g__GetColorHash|2_0", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::CrystalVisualsPreset_VisualState::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrystalVisualsPreset_VisualState>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::CrystalVisualsPreset_VisualState::_GetHashCode_g__GetColorHash_2_0(::UnityEngine::Color  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrystalVisualsPreset_VisualState>(),
                        {"<GetHashCode>g__GetColorHash|2_0", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, c);
}
// Ctor Parameters [CppParam { name: "albedo", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "emission", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CrystalVisualsPreset_VisualState::CrystalVisualsPreset_VisualState(::UnityEngine::Color  albedo, ::UnityEngine::Color  emission) noexcept  {
this->albedo = albedo;
this->emission = emission;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrystalVisualsPreset_VisualState::CrystalVisualsPreset_VisualState()   {
}

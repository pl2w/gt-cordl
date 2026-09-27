#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/ValveOpenXRRenderRegionsFeature.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "Valve/OpenXR/Utils/zzzz__ValveOpenXRRenderRegionsFeature_def.hpp"
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature::*)()>(&::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb94179c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature::*)()>(&::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb9417a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature::*)()>(&::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9417a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature* Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature*>());
}
// Ctor Parameters []
constexpr ::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature::ValveOpenXRRenderRegionsFeature()   {
}

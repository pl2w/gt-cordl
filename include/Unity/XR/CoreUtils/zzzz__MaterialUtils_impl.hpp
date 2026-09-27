#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/MaterialUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__MaterialUtils_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::MaterialUtils.GetMaterialClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Renderer*)>(&::Unity::XR::CoreUtils::MaterialUtils::GetMaterialClone)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb3f8064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::MaterialUtils*>(),
                        {"GetMaterialClone", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::MaterialUtils.GetMaterialClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::UI::Graphic*)>(&::Unity::XR::CoreUtils::MaterialUtils::GetMaterialClone)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb3f8108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::MaterialUtils*>(),
                        {"GetMaterialClone", {}, {::i2c::type_of<::UnityEngine::UI::Graphic*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::MaterialUtils.CloneMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>> (*)(::UnityEngine::Renderer*)>(&::Unity::XR::CoreUtils::MaterialUtils::CloneMaterials)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb3f81bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::MaterialUtils*>(),
                        {"CloneMaterials", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::MaterialUtils.HexToColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::StringW)>(&::Unity::XR::CoreUtils::MaterialUtils::HexToColor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb3f82f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::MaterialUtils*>(),
                        {"HexToColor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::MaterialUtils.HueShift
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, float_t)>(&::Unity::XR::CoreUtils::MaterialUtils::HueShift)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb3f8478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::MaterialUtils*>(),
                        {"HueShift", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::MaterialUtils.AddMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Renderer*, ::UnityEngine::Material*)>(&::Unity::XR::CoreUtils::MaterialUtils::AddMaterial)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb3f84f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::MaterialUtils*>(),
                        {"AddMaterial", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Material> Unity::XR::CoreUtils::MaterialUtils::GetMaterialClone(::UnityEngine::Renderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::MaterialUtils*>(),
                        {"GetMaterialClone", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, renderer);
}
inline ::UnityW<::UnityEngine::Material> Unity::XR::CoreUtils::MaterialUtils::GetMaterialClone(::UnityEngine::UI::Graphic*  graphic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::MaterialUtils*>(),
                        {"GetMaterialClone", {}, {::i2c::type_of<::UnityEngine::UI::Graphic*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, graphic);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>> Unity::XR::CoreUtils::MaterialUtils::CloneMaterials(::UnityEngine::Renderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::MaterialUtils*>(),
                        {"CloneMaterials", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>>>(nullptr, ___internal_method, renderer);
}
inline ::UnityEngine::Color Unity::XR::CoreUtils::MaterialUtils::HexToColor(::StringW  hex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::MaterialUtils*>(),
                        {"HexToColor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, hex);
}
inline ::UnityEngine::Color Unity::XR::CoreUtils::MaterialUtils::HueShift(::UnityEngine::Color  color, float_t  shift)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::MaterialUtils*>(),
                        {"HueShift", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, color, shift);
}
inline void Unity::XR::CoreUtils::MaterialUtils::AddMaterial(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::MaterialUtils*>(),
                        {"AddMaterial", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderer, material);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::MaterialUtils::MaterialUtils()   {
}

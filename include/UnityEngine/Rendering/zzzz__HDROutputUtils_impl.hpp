#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HDROutputUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderKeyword_impl.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_HDRDisplayInformation_def.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_Operation_def.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderKeywordSet_def.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::HDROutputUtils.GetColorSpaceForGamut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ColorGamut, ::by_ref<int32_t>)>(&::UnityEngine::Rendering::HDROutputUtils::GetColorSpaceForGamut)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xb196de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::HDROutputUtils*>(),
                        {"GetColorSpaceForGamut", {}, {::i2c::type_of<::UnityEngine::ColorGamut>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HDROutputUtils.GetColorEncodingForGamut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ColorGamut, ::by_ref<int32_t>)>(&::UnityEngine::Rendering::HDROutputUtils::GetColorEncodingForGamut)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb196ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::HDROutputUtils*>(),
                        {"GetColorEncodingForGamut", {}, {::i2c::type_of<::UnityEngine::ColorGamut>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HDROutputUtils.ConfigureHDROutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::ColorGamut, ::GlobalNamespace::HDROutputUtils_Operation)>(&::UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xb197180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::HDROutputUtils*>(),
                        {"ConfigureHDROutput", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::ColorGamut>(), ::i2c::type_of<::GlobalNamespace::HDROutputUtils_Operation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HDROutputUtils.ConfigureHDROutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::ColorGamut)>(&::UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb1973d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::HDROutputUtils*>(),
                        {"ConfigureHDROutput", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::ColorGamut>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HDROutputUtils.ConfigureHDROutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::GlobalNamespace::HDROutputUtils_Operation)>(&::UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xb1974a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::HDROutputUtils*>(),
                        {"ConfigureHDROutput", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::GlobalNamespace::HDROutputUtils_Operation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HDROutputUtils.ConfigureHDROutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ComputeShader*, ::UnityEngine::ColorGamut, ::GlobalNamespace::HDROutputUtils_Operation)>(&::UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xb197668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::HDROutputUtils*>(),
                        {"ConfigureHDROutput", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::UnityEngine::ColorGamut>(), ::i2c::type_of<::GlobalNamespace::HDROutputUtils_Operation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HDROutputUtils.IsShaderVariantValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::ShaderKeywordSet, bool)>(&::UnityEngine::Rendering::HDROutputUtils::IsShaderVariantValid)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb1978bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::HDROutputUtils*>(),
                        {"IsShaderVariantValid", {}, {::i2c::type_of<::UnityEngine::Rendering::ShaderKeywordSet>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::HDROutputUtils::GetColorSpaceForGamut(::UnityEngine::ColorGamut  gamut, ::by_ref<int32_t>  colorspace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::HDROutputUtils*>(),
                        {"GetColorSpaceForGamut", {}, {::i2c::type_of<::UnityEngine::ColorGamut>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gamut, colorspace);
}
inline bool UnityEngine::Rendering::HDROutputUtils::GetColorEncodingForGamut(::UnityEngine::ColorGamut  gamut, ::by_ref<int32_t>  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::HDROutputUtils*>(),
                        {"GetColorEncodingForGamut", {}, {::i2c::type_of<::UnityEngine::ColorGamut>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gamut, encoding);
}
inline void UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput(::UnityEngine::Material*  material, ::UnityEngine::ColorGamut  gamut, ::GlobalNamespace::HDROutputUtils_Operation  operations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::HDROutputUtils*>(),
                        {"ConfigureHDROutput", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::ColorGamut>(), ::i2c::type_of<::GlobalNamespace::HDROutputUtils_Operation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, gamut, operations);
}
inline void UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput(::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::ColorGamut  gamut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::HDROutputUtils*>(),
                        {"ConfigureHDROutput", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::ColorGamut>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, properties, gamut);
}
inline void UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput(::UnityEngine::Material*  material, ::GlobalNamespace::HDROutputUtils_Operation  operations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::HDROutputUtils*>(),
                        {"ConfigureHDROutput", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::GlobalNamespace::HDROutputUtils_Operation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, operations);
}
inline void UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput(::UnityEngine::ComputeShader*  computeShader, ::UnityEngine::ColorGamut  gamut, ::GlobalNamespace::HDROutputUtils_Operation  operations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::HDROutputUtils*>(),
                        {"ConfigureHDROutput", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::UnityEngine::ColorGamut>(), ::i2c::type_of<::GlobalNamespace::HDROutputUtils_Operation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, computeShader, gamut, operations);
}
inline bool UnityEngine::Rendering::HDROutputUtils::IsShaderVariantValid(::UnityEngine::Rendering::ShaderKeywordSet  shaderKeywordSet, bool  isHDREnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::HDROutputUtils*>(),
                        {"IsShaderVariantValid", {}, {::i2c::type_of<::UnityEngine::Rendering::ShaderKeywordSet>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, shaderKeywordSet, isHDREnabled);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HDROutputUtils::HDROutputUtils()   {
}
inline void UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId::setStaticF_hdrColorSpace(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "hdrColorSpace", ::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId::getStaticF_hdrColorSpace()  {
return ::cordl_internals::getStaticField<int32_t, "hdrColorSpace", ::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId*>();
}
inline void UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId::setStaticF_hdrEncoding(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "hdrEncoding", ::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId::getStaticF_hdrEncoding()  {
return ::cordl_internals::getStaticField<int32_t, "hdrEncoding", ::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId::HDROutputUtils_ShaderPropertyId()   {
}
inline void UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::setStaticF_HDRColorSpaceConversion(::UnityEngine::Rendering::ShaderKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDRColorSpaceConversion", ::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>(std::forward<::UnityEngine::Rendering::ShaderKeyword>(value));
}
inline ::UnityEngine::Rendering::ShaderKeyword UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::getStaticF_HDRColorSpaceConversion()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDRColorSpaceConversion", ::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>();
}
inline void UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::setStaticF_HDREncoding(::UnityEngine::Rendering::ShaderKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDREncoding", ::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>(std::forward<::UnityEngine::Rendering::ShaderKeyword>(value));
}
inline ::UnityEngine::Rendering::ShaderKeyword UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::getStaticF_HDREncoding()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDREncoding", ::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>();
}
inline void UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::setStaticF_HDRColorSpaceConversionAndEncoding(::UnityEngine::Rendering::ShaderKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDRColorSpaceConversionAndEncoding", ::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>(std::forward<::UnityEngine::Rendering::ShaderKeyword>(value));
}
inline ::UnityEngine::Rendering::ShaderKeyword UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::getStaticF_HDRColorSpaceConversionAndEncoding()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDRColorSpaceConversionAndEncoding", ::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>();
}
inline void UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::setStaticF_HDRInput(::UnityEngine::Rendering::ShaderKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDRInput", ::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>(std::forward<::UnityEngine::Rendering::ShaderKeyword>(value));
}
inline ::UnityEngine::Rendering::ShaderKeyword UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::getStaticF_HDRInput()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDRInput", ::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::HDROutputUtils_ShaderKeywords()   {
}

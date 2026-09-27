#pragma once
// IWYU pragma private; include "GlobalNamespace/UberShader.hpp"
#include "GlobalNamespace/zzzz__UberShaderProperty_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UberShader_def.hpp"
#include "GlobalNamespace/zzzz__UberShaderProperty_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UberShader.get_ReferenceMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::GlobalNamespace::UberShader::get_ReferenceMaterial)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x598fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"get_ReferenceMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberShader.get_ReferenceShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (*)()>(&::GlobalNamespace::UberShader::get_ReferenceShader)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5990048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"get_ReferenceShader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberShader.get_ReferenceMaterialNonSRP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::GlobalNamespace::UberShader::get_ReferenceMaterialNonSRP)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59900a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"get_ReferenceMaterialNonSRP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberShader.get_ReferenceShaderNonSRP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (*)()>(&::GlobalNamespace::UberShader::get_ReferenceShaderNonSRP)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5990100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"get_ReferenceShaderNonSRP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberShader.get_AllProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::UberShaderProperty*> (*)()>(&::GlobalNamespace::UberShader::get_AllProperties)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x599015c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"get_AllProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberShader.IsAnimated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Material*)>(&::GlobalNamespace::UberShader::IsAnimated)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x59901b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"IsAnimated", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberShader.GetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UberShaderProperty* (*)(int32_t)>(&::GlobalNamespace::UberShader::GetProperty)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59902e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"GetProperty", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberShader.GetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UberShaderProperty* (*)(int32_t, ::StringW)>(&::GlobalNamespace::UberShader::GetProperty)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5990360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"GetProperty", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberShader.InitDependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::UberShader::InitDependencies)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x598fe9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"InitDependencies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberShader.GetShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (*)()>(&::GlobalNamespace::UberShader::GetShader)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5990694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"GetShader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberShader.EnumerateAllProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::UberShaderProperty*> (*)(::UnityEngine::Shader*)>(&::GlobalNamespace::UberShader::EnumerateAllProperties)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x59903e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"EnumerateAllProperties", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UberShader::setStaticF_kReferenceShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "kReferenceShader", ::GlobalNamespace::UberShader*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> GlobalNamespace::UberShader::getStaticF_kReferenceShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "kReferenceShader", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_kReferenceMaterial(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "kReferenceMaterial", ::GlobalNamespace::UberShader*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::UberShader::getStaticF_kReferenceMaterial()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "kReferenceMaterial", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_kReferenceShaderNonSRP(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "kReferenceShaderNonSRP", ::GlobalNamespace::UberShader*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> GlobalNamespace::UberShader::getStaticF_kReferenceShaderNonSRP()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "kReferenceShaderNonSRP", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_kReferenceMaterialNonSRP(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "kReferenceMaterialNonSRP", ::GlobalNamespace::UberShader*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::UberShader::getStaticF_kReferenceMaterialNonSRP()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "kReferenceMaterialNonSRP", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_kProperties(::ArrayW<::GlobalNamespace::UberShaderProperty*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::UberShaderProperty*>, "kProperties", ::GlobalNamespace::UberShader*>(std::forward<::ArrayW<::GlobalNamespace::UberShaderProperty*>>(value));
}
inline ::ArrayW<::GlobalNamespace::UberShaderProperty*> GlobalNamespace::UberShader::getStaticF_kProperties()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::UberShaderProperty*>, "kProperties", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_gInitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "gInitialized", ::GlobalNamespace::UberShader*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::UberShader::getStaticF_gInitialized()  {
return ::cordl_internals::getStaticField<bool, "gInitialized", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_TransparencyMode(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "TransparencyMode", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_TransparencyMode()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "TransparencyMode", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_Cutoff(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "Cutoff", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_Cutoff()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "Cutoff", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ColorSource(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ColorSource", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ColorSource()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ColorSource", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_BaseColor(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "BaseColor", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_BaseColor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "BaseColor", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_GChannelColor(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "GChannelColor", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_GChannelColor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "GChannelColor", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_BChannelColor(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "BChannelColor", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_BChannelColor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "BChannelColor", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_AChannelColor(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "AChannelColor", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_AChannelColor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "AChannelColor", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_BaseMap(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "BaseMap", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_BaseMap()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "BaseMap", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_BaseMap_WH(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "BaseMap_WH", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_BaseMap_WH()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "BaseMap_WH", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_TexelSnapToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "TexelSnapToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_TexelSnapToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "TexelSnapToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_TexelSnap_Factor(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "TexelSnap_Factor", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_TexelSnap_Factor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "TexelSnap_Factor", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UVSource(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UVSource", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UVSource()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UVSource", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_AlphaDetailToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "AlphaDetailToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_AlphaDetailToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "AlphaDetailToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_AlphaDetail_ST(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "AlphaDetail_ST", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_AlphaDetail_ST()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "AlphaDetail_ST", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_AlphaDetail_Opacity(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "AlphaDetail_Opacity", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_AlphaDetail_Opacity()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "AlphaDetail_Opacity", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_AlphaDetail_WorldSpace(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "AlphaDetail_WorldSpace", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_AlphaDetail_WorldSpace()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "AlphaDetail_WorldSpace", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_MaskMapToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "MaskMapToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_MaskMapToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "MaskMapToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_MaskMap(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "MaskMap", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_MaskMap()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "MaskMap", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_MaskMap_WH(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "MaskMap_WH", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_MaskMap_WH()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "MaskMap_WH", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_LavaLampToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "LavaLampToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_LavaLampToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "LavaLampToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_GradientMapToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "GradientMapToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_GradientMapToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "GradientMapToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_GradientMap(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "GradientMap", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_GradientMap()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "GradientMap", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DoTextureRotation(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DoTextureRotation", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DoTextureRotation()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DoTextureRotation", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_RotateAngle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "RotateAngle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_RotateAngle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "RotateAngle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_RotateAnim(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "RotateAnim", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_RotateAnim()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "RotateAnim", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UseWaveWarp(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UseWaveWarp", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UseWaveWarp()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UseWaveWarp", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_WaveAmplitude(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "WaveAmplitude", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_WaveAmplitude()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "WaveAmplitude", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_WaveFrequency(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "WaveFrequency", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_WaveFrequency()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "WaveFrequency", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_WaveScale(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "WaveScale", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_WaveScale()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "WaveScale", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_WaveTimeScale(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "WaveTimeScale", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_WaveTimeScale()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "WaveTimeScale", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UseWeatherMap(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UseWeatherMap", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UseWeatherMap()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UseWeatherMap", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_WeatherMap(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "WeatherMap", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_WeatherMap()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "WeatherMap", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_WeatherMapDissolveEdgeSize(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "WeatherMapDissolveEdgeSize", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_WeatherMapDissolveEdgeSize()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "WeatherMapDissolveEdgeSize", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectBoxProjectToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectBoxProjectToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectBoxProjectToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectBoxProjectToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectBoxCubePos(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectBoxCubePos", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectBoxCubePos()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectBoxCubePos", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectBoxSize(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectBoxSize", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectBoxSize()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectBoxSize", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectBoxRotation(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectBoxRotation", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectBoxRotation()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectBoxRotation", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectMatcapToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectMatcapToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectMatcapToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectMatcapToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectMatcapPerspToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectMatcapPerspToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectMatcapPerspToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectMatcapPerspToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectNormalToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectNormalToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectNormalToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectNormalToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectTex(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectTex", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectTex()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectTex", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectNormalTex(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectNormalTex", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectNormalTex()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectNormalTex", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectAlbedoTint(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectAlbedoTint", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectAlbedoTint()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectAlbedoTint", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectTint(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectTint", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectTint()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectTint", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectOpacity(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectOpacity", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectOpacity()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectOpacity", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectExposure(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectExposure", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectExposure()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectExposure", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectOffset(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectOffset", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectOffset()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectOffset", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectScale(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectScale", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectScale()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectScale", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ReflectRotate(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectRotate", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ReflectRotate()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ReflectRotate", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_HalfLambertToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "HalfLambertToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_HalfLambertToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "HalfLambertToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ZFightOffset(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ZFightOffset", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ZFightOffset()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ZFightOffset", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ParallaxPlanarToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ParallaxPlanarToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ParallaxPlanarToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ParallaxPlanarToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ParallaxToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ParallaxToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ParallaxToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ParallaxToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ParallaxAAToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ParallaxAAToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ParallaxAAToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ParallaxAAToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ParallaxAABias(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ParallaxAABias", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ParallaxAABias()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ParallaxAABias", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DepthMap(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DepthMap", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DepthMap()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DepthMap", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ParallaxAmplitude(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ParallaxAmplitude", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ParallaxAmplitude()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ParallaxAmplitude", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ParallaxSamplesMinMax(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ParallaxSamplesMinMax", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ParallaxSamplesMinMax()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ParallaxSamplesMinMax", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UvShiftToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UvShiftToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UvShiftToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UvShiftToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UvShiftSteps(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UvShiftSteps", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UvShiftSteps()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UvShiftSteps", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UvShiftRate(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UvShiftRate", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UvShiftRate()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UvShiftRate", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UvShiftOffset(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UvShiftOffset", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UvShiftOffset()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UvShiftOffset", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UseGridEffect(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UseGridEffect", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UseGridEffect()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UseGridEffect", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UseCrystalEffect(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UseCrystalEffect", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UseCrystalEffect()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UseCrystalEffect", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_CrystalPower(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "CrystalPower", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_CrystalPower()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "CrystalPower", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_CrystalRimColor(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "CrystalRimColor", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_CrystalRimColor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "CrystalRimColor", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_LiquidVolume(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidVolume", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_LiquidVolume()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidVolume", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_LiquidFill(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidFill", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_LiquidFill()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidFill", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_LiquidFillNormal(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidFillNormal", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_LiquidFillNormal()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidFillNormal", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_LiquidSurfaceColor(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidSurfaceColor", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_LiquidSurfaceColor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidSurfaceColor", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_LiquidSwayX(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidSwayX", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_LiquidSwayX()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidSwayX", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_LiquidSwayY(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidSwayY", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_LiquidSwayY()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidSwayY", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_LiquidContainer(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidContainer", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_LiquidContainer()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidContainer", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_LiquidPlanePosition(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidPlanePosition", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_LiquidPlanePosition()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidPlanePosition", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_LiquidPlaneNormal(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidPlaneNormal", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_LiquidPlaneNormal()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "LiquidPlaneNormal", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexFlapToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexFlapToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexFlapToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexFlapToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexFlapAxis(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexFlapAxis", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexFlapAxis()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexFlapAxis", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexFlapDegreesMinMax(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexFlapDegreesMinMax", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexFlapDegreesMinMax()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexFlapDegreesMinMax", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexFlapSpeed(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexFlapSpeed", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexFlapSpeed()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexFlapSpeed", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexFlapPhaseOffset(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexFlapPhaseOffset", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexFlapPhaseOffset()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexFlapPhaseOffset", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexWaveToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWaveToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexWaveToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWaveToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexWaveDebug(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWaveDebug", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexWaveDebug()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWaveDebug", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexWaveEnd(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWaveEnd", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexWaveEnd()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWaveEnd", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexWaveParams(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWaveParams", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexWaveParams()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWaveParams", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexWaveFalloff(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWaveFalloff", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexWaveFalloff()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWaveFalloff", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexWaveSphereMask(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWaveSphereMask", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexWaveSphereMask()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWaveSphereMask", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexWavePhaseOffset(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWavePhaseOffset", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexWavePhaseOffset()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWavePhaseOffset", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexWaveAxes(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWaveAxes", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexWaveAxes()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexWaveAxes", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexRotateToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexRotateToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexRotateToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexRotateToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexRotateAngles(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexRotateAngles", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexRotateAngles()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexRotateAngles", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexRotateAnim(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexRotateAnim", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexRotateAnim()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexRotateAnim", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_VertexLightToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "VertexLightToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_VertexLightToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "VertexLightToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_InnerGlowOn(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "InnerGlowOn", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_InnerGlowOn()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "InnerGlowOn", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_InnerGlowColor(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "InnerGlowColor", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_InnerGlowColor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "InnerGlowColor", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_InnerGlowParams(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "InnerGlowParams", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_InnerGlowParams()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "InnerGlowParams", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_InnerGlowTap(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "InnerGlowTap", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_InnerGlowTap()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "InnerGlowTap", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_InnerGlowSine(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "InnerGlowSine", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_InnerGlowSine()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "InnerGlowSine", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_InnerGlowSinePeriod(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "InnerGlowSinePeriod", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_InnerGlowSinePeriod()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "InnerGlowSinePeriod", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_InnerGlowSinePhaseShift(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "InnerGlowSinePhaseShift", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_InnerGlowSinePhaseShift()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "InnerGlowSinePhaseShift", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_StealthEffectOn(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "StealthEffectOn", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_StealthEffectOn()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "StealthEffectOn", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UseEyeTracking(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UseEyeTracking", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UseEyeTracking()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UseEyeTracking", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_EyeTileOffsetUV(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "EyeTileOffsetUV", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_EyeTileOffsetUV()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "EyeTileOffsetUV", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_EyeOverrideUV(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "EyeOverrideUV", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_EyeOverrideUV()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "EyeOverrideUV", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_EyeOverrideUVTransform(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "EyeOverrideUVTransform", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_EyeOverrideUVTransform()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "EyeOverrideUVTransform", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UseMouthFlap(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UseMouthFlap", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UseMouthFlap()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UseMouthFlap", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_MouthMap(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "MouthMap", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_MouthMap()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "MouthMap", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_MouthMap_Atlas(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "MouthMap_Atlas", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_MouthMap_Atlas()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "MouthMap_Atlas", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_MouthMap_AtlasSlice(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "MouthMap_AtlasSlice", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_MouthMap_AtlasSlice()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "MouthMap_AtlasSlice", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UseVertexColor(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UseVertexColor", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UseVertexColor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UseVertexColor", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_WaterEffect(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "WaterEffect", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_WaterEffect()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "WaterEffect", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_HeightBasedWaterEffect(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "HeightBasedWaterEffect", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_HeightBasedWaterEffect()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "HeightBasedWaterEffect", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UseDayNightLightmap(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UseDayNightLightmap", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UseDayNightLightmap()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UseDayNightLightmap", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UseSpecular(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UseSpecular", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UseSpecular()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UseSpecular", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UseSpecularAlphaChannel(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UseSpecularAlphaChannel", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UseSpecularAlphaChannel()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UseSpecularAlphaChannel", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_Smoothness(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "Smoothness", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_Smoothness()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "Smoothness", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_UseSpecHighlight(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "UseSpecHighlight", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_UseSpecHighlight()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "UseSpecHighlight", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_SpecularDir(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "SpecularDir", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_SpecularDir()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "SpecularDir", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_SpecularPowerIntensity(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "SpecularPowerIntensity", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_SpecularPowerIntensity()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "SpecularPowerIntensity", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_SpecularColor(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "SpecularColor", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_SpecularColor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "SpecularColor", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_SpecularUseDiffuseColor(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "SpecularUseDiffuseColor", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_SpecularUseDiffuseColor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "SpecularUseDiffuseColor", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_EmissionToggle(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionToggle", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_EmissionToggle()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionToggle", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_EmissionColor(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionColor", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_EmissionColor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionColor", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_EmissionMap(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionMap", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_EmissionMap()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionMap", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_EmissionMaskByBaseMapAlpha(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionMaskByBaseMapAlpha", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_EmissionMaskByBaseMapAlpha()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionMaskByBaseMapAlpha", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_EmissionUVScrollSpeed(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionUVScrollSpeed", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_EmissionUVScrollSpeed()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionUVScrollSpeed", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_EmissionDissolveProgress(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionDissolveProgress", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_EmissionDissolveProgress()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionDissolveProgress", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_EmissionDissolveAnimation(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionDissolveAnimation", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_EmissionDissolveAnimation()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionDissolveAnimation", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_EmissionDissolveEdgeSize(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionDissolveEdgeSize", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_EmissionDissolveEdgeSize()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionDissolveEdgeSize", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_EmissionUseUVWaveWarp(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionUseUVWaveWarp", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_EmissionUseUVWaveWarp()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionUseUVWaveWarp", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_GreyZoneException(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "GreyZoneException", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_GreyZoneException()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "GreyZoneException", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_Cull(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "Cull", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_Cull()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "Cull", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_StencilReference(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "StencilReference", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_StencilReference()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "StencilReference", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_StencilComparison(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "StencilComparison", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_StencilComparison()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "StencilComparison", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_StencilPassFront(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "StencilPassFront", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_StencilPassFront()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "StencilPassFront", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_USE_DEFORM_MAP(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "USE_DEFORM_MAP", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_USE_DEFORM_MAP()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "USE_DEFORM_MAP", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DeformMap(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMap", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DeformMap()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMap", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DeformMapIntensity(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapIntensity", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DeformMapIntensity()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapIntensity", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DeformMapMaskByVertColorRAmount(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapMaskByVertColorRAmount", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DeformMapMaskByVertColorRAmount()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapMaskByVertColorRAmount", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DeformMapScrollSpeed(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapScrollSpeed", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DeformMapScrollSpeed()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapScrollSpeed", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DeformMapUV0Influence(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapUV0Influence", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DeformMapUV0Influence()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapUV0Influence", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DeformMapObjectSpaceOffsetsU(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapObjectSpaceOffsetsU", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DeformMapObjectSpaceOffsetsU()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapObjectSpaceOffsetsU", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DeformMapObjectSpaceOffsetsV(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapObjectSpaceOffsetsV", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DeformMapObjectSpaceOffsetsV()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapObjectSpaceOffsetsV", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DeformMapWorldSpaceOffsetsU(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapWorldSpaceOffsetsU", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DeformMapWorldSpaceOffsetsU()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapWorldSpaceOffsetsU", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DeformMapWorldSpaceOffsetsV(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapWorldSpaceOffsetsV", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DeformMapWorldSpaceOffsetsV()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMapWorldSpaceOffsetsV", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_RotateOnYAxisBySinTime(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "RotateOnYAxisBySinTime", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_RotateOnYAxisBySinTime()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "RotateOnYAxisBySinTime", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_USE_TEX_ARRAY_ATLAS(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "USE_TEX_ARRAY_ATLAS", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_USE_TEX_ARRAY_ATLAS()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "USE_TEX_ARRAY_ATLAS", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_BaseMap_Atlas(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "BaseMap_Atlas", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_BaseMap_Atlas()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "BaseMap_Atlas", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_BaseMap_AtlasSlice(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "BaseMap_AtlasSlice", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_BaseMap_AtlasSlice()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "BaseMap_AtlasSlice", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_EmissionMap_Atlas(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionMap_Atlas", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_EmissionMap_Atlas()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionMap_Atlas", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_EmissionMap_AtlasSlice(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionMap_AtlasSlice", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_EmissionMap_AtlasSlice()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "EmissionMap_AtlasSlice", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DeformMap_Atlas(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMap_Atlas", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DeformMap_Atlas()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMap_Atlas", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DeformMap_AtlasSlice(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMap_AtlasSlice", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DeformMap_AtlasSlice()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DeformMap_AtlasSlice", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DEBUG_PAWN_DATA(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DEBUG_PAWN_DATA", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DEBUG_PAWN_DATA()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DEBUG_PAWN_DATA", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_SrcBlend(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "SrcBlend", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_SrcBlend()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "SrcBlend", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DstBlend(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DstBlend", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DstBlend()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DstBlend", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_SrcBlendAlpha(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "SrcBlendAlpha", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_SrcBlendAlpha()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "SrcBlendAlpha", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DstBlendAlpha(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DstBlendAlpha", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DstBlendAlpha()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DstBlendAlpha", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_ZWrite(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "ZWrite", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_ZWrite()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "ZWrite", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_AlphaToMask(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "AlphaToMask", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_AlphaToMask()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "AlphaToMask", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_Color(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "Color", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_Color()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "Color", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_Surface(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "Surface", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_Surface()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "Surface", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_Metallic(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "Metallic", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_Metallic()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "Metallic", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_SpecColor(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "SpecColor", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_SpecColor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "SpecColor", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DayNightLightmapArray(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DayNightLightmapArray", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DayNightLightmapArray()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DayNightLightmapArray", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_DayNightLightmapArray_AtlasSlice(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "DayNightLightmapArray_AtlasSlice", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_DayNightLightmapArray_AtlasSlice()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "DayNightLightmapArray_AtlasSlice", ::GlobalNamespace::UberShader*>();
}
inline void GlobalNamespace::UberShader::setStaticF_SingleLightmap(::GlobalNamespace::UberShaderProperty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UberShaderProperty*, "SingleLightmap", ::GlobalNamespace::UberShader*>(std::forward<::GlobalNamespace::UberShaderProperty*>(value));
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::getStaticF_SingleLightmap()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UberShaderProperty*, "SingleLightmap", ::GlobalNamespace::UberShader*>();
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::UberShader::get_ReferenceMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"get_ReferenceMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> GlobalNamespace::UberShader::get_ReferenceShader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"get_ReferenceShader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::UberShader::get_ReferenceMaterialNonSRP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"get_ReferenceMaterialNonSRP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> GlobalNamespace::UberShader::get_ReferenceShaderNonSRP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"get_ReferenceShaderNonSRP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(nullptr, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::UberShaderProperty*> GlobalNamespace::UberShader::get_AllProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"get_AllProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::UberShaderProperty*>>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::UberShader::IsAnimated(::UnityEngine::Material*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"IsAnimated", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m);
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::GetProperty(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"GetProperty", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UberShaderProperty*>(nullptr, ___internal_method, i);
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShader::GetProperty(int32_t  i, ::StringW  expectedName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"GetProperty", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UberShaderProperty*>(nullptr, ___internal_method, i, expectedName);
}
inline void GlobalNamespace::UberShader::InitDependencies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"InitDependencies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> GlobalNamespace::UberShader::GetShader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"GetShader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(nullptr, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::UberShaderProperty*> GlobalNamespace::UberShader::EnumerateAllProperties(::UnityEngine::Shader*  uberShader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShader*>(),
                        {"EnumerateAllProperties", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::UberShaderProperty*>>(nullptr, ___internal_method, uberShader);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UberShader::UberShader()   {
}

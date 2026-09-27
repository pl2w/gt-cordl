#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugDisplaySettingsMaterial.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMaterialMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMaterialValidationMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugVertexAttributeMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_Widget_NameAndTooltip_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsMaterial_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsMaterial_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMaterialMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMaterialValidationMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugVertexAttributeMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsData_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsQuery_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RenderingLayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_albedoValidationPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_albedoValidationPreset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21be68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_albedoValidationPreset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.set_albedoValidationPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)(::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_albedoValidationPreset)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb21be70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_albedoValidationPreset", {}, {::i2c::type_of<::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_albedoMinLuminance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_albedoMinLuminance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21beb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_albedoMinLuminance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.set_albedoMinLuminance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)(float_t)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_albedoMinLuminance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_albedoMinLuminance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_albedoMaxLuminance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_albedoMaxLuminance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_albedoMaxLuminance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.set_albedoMaxLuminance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)(float_t)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_albedoMaxLuminance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21becc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_albedoMaxLuminance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_albedoHueTolerance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_albedoHueTolerance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb21bed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_albedoHueTolerance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.set_albedoHueTolerance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)(float_t)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_albedoHueTolerance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21beec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_albedoHueTolerance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_albedoSaturationTolerance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_albedoSaturationTolerance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb21bef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_albedoSaturationTolerance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.set_albedoSaturationTolerance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)(float_t)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_albedoSaturationTolerance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_albedoSaturationTolerance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_albedoCompareColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_albedoCompareColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb21bf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_albedoCompareColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.set_albedoCompareColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)(::UnityEngine::Color)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_albedoCompareColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb21bf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_albedoCompareColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_metallicMinValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_metallicMinValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_metallicMinValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.set_metallicMinValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)(float_t)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_metallicMinValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_metallicMinValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_metallicMaxValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_metallicMaxValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_metallicMaxValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.set_metallicMaxValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)(float_t)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_metallicMaxValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_metallicMaxValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_renderingLayersSelectedLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_renderingLayersSelectedLight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_renderingLayersSelectedLight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.set_renderingLayersSelectedLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)(bool)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_renderingLayersSelectedLight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_renderingLayersSelectedLight", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_selectedLightShadowLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_selectedLightShadowLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_selectedLightShadowLayerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.set_selectedLightShadowLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)(bool)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_selectedLightShadowLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_selectedLightShadowLayerMask", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_renderingLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_renderingLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_renderingLayerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.set_renderingLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)(uint32_t)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_renderingLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_renderingLayerMask", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.GetDebugLightLayersMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::GetDebugLightLayersMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"GetDebugLightLayersMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_materialValidationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugMaterialValidationMode (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_materialValidationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_materialValidationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.set_materialValidationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)(::UnityEngine::Rendering::Universal::DebugMaterialValidationMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_materialValidationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_materialValidationMode", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugMaterialValidationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_materialDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugMaterialMode (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_materialDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_materialDebugMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.set_materialDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)(::UnityEngine::Rendering::Universal::DebugMaterialMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_materialDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bf9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_materialDebugMode", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugMaterialMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_vertexAttributeDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugVertexAttributeMode (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_vertexAttributeDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_vertexAttributeDebugMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.set_vertexAttributeDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)(::UnityEngine::Rendering::Universal::DebugVertexAttributeMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_vertexAttributeDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21bfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_vertexAttributeDebugMode", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugVertexAttributeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_AreAnySettingsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_AreAnySettingsActive)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb21bfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_AreAnySettingsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_IsPostProcessingAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_IsPostProcessingAllowed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb21bfdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_IsPostProcessingAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.get_IsLightingActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_IsLightingActive)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb21c004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_IsLightingActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial.UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb21c02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::_ctor)> {
  constexpr static std::size_t size = 0xa18;
  constexpr static std::size_t addrs = 0xb21c600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData>& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get_m_AlbedoDebugValidationPresetData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlbedoDebugValidationPresetData;
}
constexpr ::ArrayW<::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData> const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get_m_AlbedoDebugValidationPresetData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlbedoDebugValidationPresetData;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set_m_AlbedoDebugValidationPresetData(::ArrayW<::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AlbedoDebugValidationPresetData = value;
}
constexpr ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get_m_AlbedoValidationPreset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlbedoValidationPreset;
}
constexpr ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get_m_AlbedoValidationPreset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlbedoValidationPreset;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set_m_AlbedoValidationPreset(::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AlbedoValidationPreset = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__albedoMinLuminance_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____albedoMinLuminance_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__albedoMinLuminance_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____albedoMinLuminance_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set__albedoMinLuminance_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____albedoMinLuminance_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__albedoMaxLuminance_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____albedoMaxLuminance_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__albedoMaxLuminance_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____albedoMaxLuminance_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set__albedoMaxLuminance_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____albedoMaxLuminance_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get_m_AlbedoHueTolerance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlbedoHueTolerance;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get_m_AlbedoHueTolerance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlbedoHueTolerance;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set_m_AlbedoHueTolerance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AlbedoHueTolerance = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get_m_AlbedoSaturationTolerance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlbedoSaturationTolerance;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get_m_AlbedoSaturationTolerance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlbedoSaturationTolerance;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set_m_AlbedoSaturationTolerance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AlbedoSaturationTolerance = value;
}
constexpr ::UnityEngine::Color& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__albedoCompareColor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____albedoCompareColor_k__BackingField;
}
constexpr ::UnityEngine::Color const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__albedoCompareColor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____albedoCompareColor_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set__albedoCompareColor_k__BackingField(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____albedoCompareColor_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__metallicMinValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metallicMinValue_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__metallicMinValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metallicMinValue_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set__metallicMinValue_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metallicMinValue_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__metallicMaxValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metallicMaxValue_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__metallicMaxValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metallicMaxValue_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set__metallicMaxValue_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metallicMaxValue_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__renderingLayersSelectedLight_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderingLayersSelectedLight_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__renderingLayersSelectedLight_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderingLayersSelectedLight_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set__renderingLayersSelectedLight_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderingLayersSelectedLight_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__selectedLightShadowLayerMask_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedLightShadowLayerMask_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__selectedLightShadowLayerMask_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedLightShadowLayerMask_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set__selectedLightShadowLayerMask_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedLightShadowLayerMask_k__BackingField = value;
}
constexpr uint32_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__renderingLayerMask_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderingLayerMask_k__BackingField;
}
constexpr uint32_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__renderingLayerMask_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderingLayerMask_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set__renderingLayerMask_k__BackingField(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderingLayerMask_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get_debugRenderingLayersColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugRenderingLayersColors;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get_debugRenderingLayersColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugRenderingLayersColors;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set_debugRenderingLayersColors(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugRenderingLayersColors = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__materialValidationMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialValidationMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__materialValidationMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialValidationMode_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set__materialValidationMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugMaterialValidationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialValidationMode_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__materialDebugMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialDebugMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__materialDebugMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialDebugMode_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set__materialDebugMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugMaterialMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialDebugMode_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__vertexAttributeDebugMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vertexAttributeDebugMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode const& UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_get__vertexAttributeDebugMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vertexAttributeDebugMode_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::__cordl_internal_set__vertexAttributeDebugMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugVertexAttributeMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vertexAttributeDebugMode_k__BackingField = value;
}
inline ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_albedoValidationPreset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_albedoValidationPreset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_albedoValidationPreset(::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_albedoValidationPreset", {}, {::i2c::type_of<::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_albedoMinLuminance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_albedoMinLuminance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_albedoMinLuminance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_albedoMinLuminance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_albedoMaxLuminance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_albedoMaxLuminance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_albedoMaxLuminance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_albedoMaxLuminance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_albedoHueTolerance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_albedoHueTolerance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_albedoHueTolerance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_albedoHueTolerance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_albedoSaturationTolerance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_albedoSaturationTolerance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_albedoSaturationTolerance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_albedoSaturationTolerance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_albedoCompareColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_albedoCompareColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_albedoCompareColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_albedoCompareColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_metallicMinValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_metallicMinValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_metallicMinValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_metallicMinValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_metallicMaxValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_metallicMaxValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_metallicMaxValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_metallicMaxValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_renderingLayersSelectedLight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_renderingLayersSelectedLight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_renderingLayersSelectedLight(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_renderingLayersSelectedLight", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_selectedLightShadowLayerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_selectedLightShadowLayerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_selectedLightShadowLayerMask(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_selectedLightShadowLayerMask", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_renderingLayerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_renderingLayerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_renderingLayerMask(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_renderingLayerMask", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::GetDebugLightLayersMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"GetDebugLightLayersMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_materialValidationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_materialValidationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugMaterialValidationMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_materialValidationMode(::UnityEngine::Rendering::Universal::DebugMaterialValidationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_materialValidationMode", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugMaterialValidationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugMaterialMode UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_materialDebugMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_materialDebugMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugMaterialMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_materialDebugMode(::UnityEngine::Rendering::Universal::DebugMaterialMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_materialDebugMode", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugMaterialMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_vertexAttributeDebugMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_vertexAttributeDebugMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugVertexAttributeMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::set_vertexAttributeDebugMode(::UnityEngine::Rendering::Universal::DebugVertexAttributeMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"set_vertexAttributeDebugMode", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugVertexAttributeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_AreAnySettingsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_AreAnySettingsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_IsPostProcessingAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_IsPostProcessingAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::get_IsLightingActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"get_IsLightingActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {"UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
constexpr  UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::operator ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept {
return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept {
return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr  UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept {
return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept {
return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial::DebugDisplaySettingsMaterial()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel::*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel::_ctor)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0xb21c084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel::_ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel::New_ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>(data));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel::DebugDisplaySettingsMaterial_SettingsPanel()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::*)()>(&::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb220588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0.__ctor_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::*)()>(&::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb220590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {"<.ctor>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0.__ctor_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::*)()>(&::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::__ctor_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb2205b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {"<.ctor>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0.__ctor_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::*)()>(&::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::__ctor_b__2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb2205d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {"<.ctor>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* const& UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::__cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::__ctor_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {"<.ctor>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::__ctor_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {"<.ctor>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::__ctor_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {"<.ctor>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0* UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory.CreateMaterialOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateMaterialOverride)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xb21d608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateMaterialOverride", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory.CreateVertexAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateVertexAttribute)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xb21d894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateVertexAttribute", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory.CreateMaterialValidationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateMaterialValidationMode)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0xb21db20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateMaterialValidationMode", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory.CreateRenderingLayersSelectedLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateRenderingLayersSelectedLight)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb21de60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateRenderingLayersSelectedLight", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory.CreateSelectedLightShadowLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateSelectedLightShadowLayerMask)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb21e018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateSelectedLightShadowLayerMask", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory.CreateFilterRenderingLayerMasks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_RenderingLayerField* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateFilterRenderingLayerMasks)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xb21e218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateFilterRenderingLayerMasks", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory.CreateAlbedoPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateAlbedoPreset)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0xb21e4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateAlbedoPreset", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory.CreateAlbedoCustomColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateAlbedoCustomColor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb21e814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateAlbedoCustomColor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory.CreateAlbedoMinLuminance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateAlbedoMinLuminance)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb21ea20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateAlbedoMinLuminance", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory.CreateAlbedoMaxLuminance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateAlbedoMaxLuminance)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb21ebdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateAlbedoMaxLuminance", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory.CreateAlbedoHueTolerance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateAlbedoHueTolerance)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xb21ed98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateAlbedoHueTolerance", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory.CreateAlbedoSaturationTolerance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateAlbedoSaturationTolerance)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xb21efb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateAlbedoSaturationTolerance", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory.CreateMetallicMinValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateMetallicMinValue)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb21f1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateMetallicMinValue", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory.CreateMetallicMaxValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateMetallicMaxValue)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb21f384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateMetallicMaxValue", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateMaterialOverride(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateMaterialOverride", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateVertexAttribute(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateVertexAttribute", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateMaterialValidationMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateMaterialValidationMode", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateRenderingLayersSelectedLight(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateRenderingLayersSelectedLight", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateSelectedLightShadowLayerMask(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateSelectedLightShadowLayerMask", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_RenderingLayerField* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateFilterRenderingLayerMasks(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateFilterRenderingLayerMasks", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_RenderingLayerField*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateAlbedoPreset(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateAlbedoPreset", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateAlbedoCustomColor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateAlbedoCustomColor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateAlbedoMinLuminance(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateAlbedoMinLuminance", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateAlbedoMaxLuminance(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateAlbedoMaxLuminance", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateAlbedoHueTolerance(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateAlbedoHueTolerance", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateAlbedoSaturationTolerance(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateAlbedoSaturationTolerance", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateMetallicMinValue(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateMetallicMinValue", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::CreateMetallicMaxValue(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*>(),
                        {"CreateMetallicMaxValue", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory::DebugDisplaySettingsMaterial_WidgetFactory()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21ed90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0._CreateAlbedoMaxLuminance_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0::_CreateAlbedoMaxLuminance_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb2204dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0*>(),
                        {"<CreateAlbedoMaxLuminance>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0._CreateAlbedoMaxLuminance_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0::*)(float_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0::_CreateAlbedoMaxLuminance_b__1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb22052c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0*>(),
                        {"<CreateAlbedoMaxLuminance>b__1", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0::__cordl_internal_get_panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0::__cordl_internal_get_panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0::__cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0::_CreateAlbedoMaxLuminance_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0*>(),
                        {"<CreateAlbedoMaxLuminance>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0::_CreateAlbedoMaxLuminance_b__1(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0*>(),
                        {"<CreateAlbedoMaxLuminance>b__1", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21ebd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0._CreateAlbedoMinLuminance_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0::_CreateAlbedoMinLuminance_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb220430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0*>(),
                        {"<CreateAlbedoMinLuminance>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0._CreateAlbedoMinLuminance_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0::*)(float_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0::_CreateAlbedoMinLuminance_b__1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb220480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0*>(),
                        {"<CreateAlbedoMinLuminance>b__1", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0::__cordl_internal_get_panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0::__cordl_internal_get_panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0::__cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0::_CreateAlbedoMinLuminance_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0*>(),
                        {"<CreateAlbedoMinLuminance>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0::_CreateAlbedoMinLuminance_b__1(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0*>(),
                        {"<CreateAlbedoMinLuminance>b__1", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21ea18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0._CreateAlbedoCustomColor_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::_CreateAlbedoCustomColor_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb220310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0*>(),
                        {"<CreateAlbedoCustomColor>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0._CreateAlbedoCustomColor_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::*)(::UnityEngine::Color)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::_CreateAlbedoCustomColor_b__1)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb220364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0*>(),
                        {"<CreateAlbedoCustomColor>b__1", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0._CreateAlbedoCustomColor_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::_CreateAlbedoCustomColor_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb2203d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0*>(),
                        {"<CreateAlbedoCustomColor>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::__cordl_internal_get_panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::__cordl_internal_get_panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::__cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::_CreateAlbedoCustomColor_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0*>(),
                        {"<CreateAlbedoCustomColor>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::_CreateAlbedoCustomColor_b__1(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0*>(),
                        {"<CreateAlbedoCustomColor>b__1", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::_CreateAlbedoCustomColor_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0*>(),
                        {"<CreateAlbedoCustomColor>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21e80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0._CreateAlbedoPreset_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::_CreateAlbedoPreset_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb2201c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0*>(),
                        {"<CreateAlbedoPreset>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0._CreateAlbedoPreset_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::*)(int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::_CreateAlbedoPreset_b__1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb220218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0*>(),
                        {"<CreateAlbedoPreset>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0._CreateAlbedoPreset_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::_CreateAlbedoPreset_b__2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb22026c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0*>(),
                        {"<CreateAlbedoPreset>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0._CreateAlbedoPreset_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::*)(int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::_CreateAlbedoPreset_b__3)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb2202bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0*>(),
                        {"<CreateAlbedoPreset>b__3", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::__cordl_internal_get_panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::__cordl_internal_get_panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::__cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::_CreateAlbedoPreset_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0*>(),
                        {"<CreateAlbedoPreset>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::_CreateAlbedoPreset_b__1(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0*>(),
                        {"<CreateAlbedoPreset>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::_CreateAlbedoPreset_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0*>(),
                        {"<CreateAlbedoPreset>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::_CreateAlbedoPreset_b__3(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0*>(),
                        {"<CreateAlbedoPreset>b__3", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21e4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0._CreateFilterRenderingLayerMasks_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderingLayerMask (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::_CreateFilterRenderingLayerMasks_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb21ff70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0*>(),
                        {"<CreateFilterRenderingLayerMasks>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0._CreateFilterRenderingLayerMasks_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::*)(::UnityEngine::RenderingLayerMask)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::_CreateFilterRenderingLayerMasks_b__1)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb21ffec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0*>(),
                        {"<CreateFilterRenderingLayerMasks>b__1", {}, {::i2c::type_of<::UnityEngine::RenderingLayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0._CreateFilterRenderingLayerMasks_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::*)(int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::_CreateFilterRenderingLayerMasks_b__2)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb220070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0*>(),
                        {"<CreateFilterRenderingLayerMasks>b__2", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0._CreateFilterRenderingLayerMasks_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::*)(::UnityEngine::Vector4, int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::_CreateFilterRenderingLayerMasks_b__3)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb2200e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0*>(),
                        {"<CreateFilterRenderingLayerMasks>b__3", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0._CreateFilterRenderingLayerMasks_b__4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::_CreateFilterRenderingLayerMasks_b__4)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb220178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0*>(),
                        {"<CreateFilterRenderingLayerMasks>b__4", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::__cordl_internal_get_panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::__cordl_internal_get_panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::__cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::RenderingLayerMask UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::_CreateFilterRenderingLayerMasks_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0*>(),
                        {"<CreateFilterRenderingLayerMasks>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderingLayerMask>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::_CreateFilterRenderingLayerMasks_b__1(::UnityEngine::RenderingLayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0*>(),
                        {"<CreateFilterRenderingLayerMasks>b__1", {}, {::i2c::type_of<::UnityEngine::RenderingLayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::_CreateFilterRenderingLayerMasks_b__2(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0*>(),
                        {"<CreateFilterRenderingLayerMasks>b__2", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, index);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::_CreateFilterRenderingLayerMasks_b__3(::UnityEngine::Vector4  value, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0*>(),
                        {"<CreateFilterRenderingLayerMasks>b__3", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, index);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::_CreateFilterRenderingLayerMasks_b__4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0*>(),
                        {"<CreateFilterRenderingLayerMasks>b__4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21e210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0._CreateSelectedLightShadowLayerMask_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::_CreateSelectedLightShadowLayerMask_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb21fe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0*>(),
                        {"<CreateSelectedLightShadowLayerMask>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0._CreateSelectedLightShadowLayerMask_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::*)(bool)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::_CreateSelectedLightShadowLayerMask_b__1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb21fec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0*>(),
                        {"<CreateSelectedLightShadowLayerMask>b__1", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0._CreateSelectedLightShadowLayerMask_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::_CreateSelectedLightShadowLayerMask_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb21ff18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0*>(),
                        {"<CreateSelectedLightShadowLayerMask>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::__cordl_internal_get_panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::__cordl_internal_get_panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::__cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::_CreateSelectedLightShadowLayerMask_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0*>(),
                        {"<CreateSelectedLightShadowLayerMask>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::_CreateSelectedLightShadowLayerMask_b__1(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0*>(),
                        {"<CreateSelectedLightShadowLayerMask>b__1", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::_CreateSelectedLightShadowLayerMask_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0*>(),
                        {"<CreateSelectedLightShadowLayerMask>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21e010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0._CreateRenderingLayersSelectedLight_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0::_CreateRenderingLayersSelectedLight_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb21fdc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0*>(),
                        {"<CreateRenderingLayersSelectedLight>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0._CreateRenderingLayersSelectedLight_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0::*)(bool)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0::_CreateRenderingLayersSelectedLight_b__1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb21fe18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0*>(),
                        {"<CreateRenderingLayersSelectedLight>b__1", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0::__cordl_internal_get_panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0::__cordl_internal_get_panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0::__cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0::_CreateRenderingLayersSelectedLight_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0*>(),
                        {"<CreateRenderingLayersSelectedLight>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0::_CreateRenderingLayersSelectedLight_b__1(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0*>(),
                        {"<CreateRenderingLayersSelectedLight>b__1", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21de58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0._CreateMaterialValidationMode_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::_CreateMaterialValidationMode_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb21fc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0*>(),
                        {"<CreateMaterialValidationMode>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0._CreateMaterialValidationMode_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::*)(int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::_CreateMaterialValidationMode_b__1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb21fcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0*>(),
                        {"<CreateMaterialValidationMode>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0._CreateMaterialValidationMode_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::_CreateMaterialValidationMode_b__2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb21fd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0*>(),
                        {"<CreateMaterialValidationMode>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0._CreateMaterialValidationMode_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::*)(int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::_CreateMaterialValidationMode_b__3)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb21fd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0*>(),
                        {"<CreateMaterialValidationMode>b__3", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::__cordl_internal_get_panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::__cordl_internal_get_panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::__cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::_CreateMaterialValidationMode_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0*>(),
                        {"<CreateMaterialValidationMode>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::_CreateMaterialValidationMode_b__1(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0*>(),
                        {"<CreateMaterialValidationMode>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::_CreateMaterialValidationMode_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0*>(),
                        {"<CreateMaterialValidationMode>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::_CreateMaterialValidationMode_b__3(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0*>(),
                        {"<CreateMaterialValidationMode>b__3", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21db18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0._CreateVertexAttribute_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::_CreateVertexAttribute_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb21fb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0*>(),
                        {"<CreateVertexAttribute>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0._CreateVertexAttribute_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::*)(int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::_CreateVertexAttribute_b__1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb21fb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0*>(),
                        {"<CreateVertexAttribute>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0._CreateVertexAttribute_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::_CreateVertexAttribute_b__2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb21fbdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0*>(),
                        {"<CreateVertexAttribute>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0._CreateVertexAttribute_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::*)(int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::_CreateVertexAttribute_b__3)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb21fc2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0*>(),
                        {"<CreateVertexAttribute>b__3", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::__cordl_internal_get_panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::__cordl_internal_get_panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::__cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::_CreateVertexAttribute_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0*>(),
                        {"<CreateVertexAttribute>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::_CreateVertexAttribute_b__1(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0*>(),
                        {"<CreateVertexAttribute>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::_CreateVertexAttribute_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0*>(),
                        {"<CreateVertexAttribute>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::_CreateVertexAttribute_b__3(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0*>(),
                        {"<CreateVertexAttribute>b__3", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21f538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0._CreateMetallicMaxValue_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0::_CreateMetallicMaxValue_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb21fa8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0*>(),
                        {"<CreateMetallicMaxValue>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0._CreateMetallicMaxValue_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0::*)(float_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0::_CreateMetallicMaxValue_b__1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb21fadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0*>(),
                        {"<CreateMetallicMaxValue>b__1", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0::__cordl_internal_get_panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0::__cordl_internal_get_panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0::__cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0::_CreateMetallicMaxValue_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0*>(),
                        {"<CreateMetallicMaxValue>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0::_CreateMetallicMaxValue_b__1(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0*>(),
                        {"<CreateMetallicMaxValue>b__1", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21f37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0._CreateMetallicMinValue_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0::_CreateMetallicMinValue_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb21f9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0*>(),
                        {"<CreateMetallicMinValue>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0._CreateMetallicMinValue_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0::*)(float_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0::_CreateMetallicMinValue_b__1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb21fa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0*>(),
                        {"<CreateMetallicMinValue>b__1", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0::__cordl_internal_get_panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0::__cordl_internal_get_panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0::__cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0::_CreateMetallicMinValue_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0*>(),
                        {"<CreateMetallicMinValue>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0::_CreateMetallicMinValue_b__1(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0*>(),
                        {"<CreateMetallicMinValue>b__1", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21f1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0._CreateAlbedoSaturationTolerance_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::_CreateAlbedoSaturationTolerance_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb21f8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0*>(),
                        {"<CreateAlbedoSaturationTolerance>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0._CreateAlbedoSaturationTolerance_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::*)(float_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::_CreateAlbedoSaturationTolerance_b__1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb21f92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0*>(),
                        {"<CreateAlbedoSaturationTolerance>b__1", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0._CreateAlbedoSaturationTolerance_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::_CreateAlbedoSaturationTolerance_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb21f988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0*>(),
                        {"<CreateAlbedoSaturationTolerance>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::__cordl_internal_get_panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::__cordl_internal_get_panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::__cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::_CreateAlbedoSaturationTolerance_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0*>(),
                        {"<CreateAlbedoSaturationTolerance>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::_CreateAlbedoSaturationTolerance_b__1(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0*>(),
                        {"<CreateAlbedoSaturationTolerance>b__1", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::_CreateAlbedoSaturationTolerance_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0*>(),
                        {"<CreateAlbedoSaturationTolerance>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21efa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0._CreateAlbedoHueTolerance_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::_CreateAlbedoHueTolerance_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb21f7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0*>(),
                        {"<CreateAlbedoHueTolerance>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0._CreateAlbedoHueTolerance_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::*)(float_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::_CreateAlbedoHueTolerance_b__1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb21f818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0*>(),
                        {"<CreateAlbedoHueTolerance>b__1", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0._CreateAlbedoHueTolerance_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::_CreateAlbedoHueTolerance_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb21f874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0*>(),
                        {"<CreateAlbedoHueTolerance>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::__cordl_internal_get_panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::__cordl_internal_get_panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::__cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::_CreateAlbedoHueTolerance_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0*>(),
                        {"<CreateAlbedoHueTolerance>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::_CreateAlbedoHueTolerance_b__1(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0*>(),
                        {"<CreateAlbedoHueTolerance>b__1", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::_CreateAlbedoHueTolerance_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0*>(),
                        {"<CreateAlbedoHueTolerance>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21d88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0._CreateMaterialOverride_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::_CreateMaterialOverride_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb21f670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {"<CreateMaterialOverride>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0._CreateMaterialOverride_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::*)(int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::_CreateMaterialOverride_b__1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb21f6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {"<CreateMaterialOverride>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0._CreateMaterialOverride_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::_CreateMaterialOverride_b__2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb21f714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {"<CreateMaterialOverride>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0._CreateMaterialOverride_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::*)(int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::_CreateMaterialOverride_b__3)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb21f764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {"<CreateMaterialOverride>b__3", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::__cordl_internal_get_panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::__cordl_internal_get_panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::__cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::_CreateMaterialOverride_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {"<CreateMaterialOverride>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::_CreateMaterialOverride_b__1(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {"<CreateMaterialOverride>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::_CreateMaterialOverride_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {"<CreateMaterialOverride>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::_CreateMaterialOverride_b__3(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>(),
                        {"<CreateMaterialOverride>b__3", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::*)()>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb21f5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c._CreateMaterialValidationMode_b__2_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::*)(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::_CreateMaterialValidationMode_b__2_4)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb21f5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*>(),
                        {"<CreateMaterialValidationMode>b__2_4", {}, {::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c._CreateAlbedoPreset_b__6_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::*)(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::_CreateAlbedoPreset_b__6_4)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb21f610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*>(),
                        {"<CreateAlbedoPreset>b__6_4", {}, {::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::setStaticF___9(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*, "<>9", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*>(std::forward<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*, "<>9", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::setStaticF___9__2_4(::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*,int32_t>*, "<>9__2_4", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*>(std::forward<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*,int32_t>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*,int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::getStaticF___9__2_4()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*,int32_t>*, "<>9__2_4", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::setStaticF___9__6_4(::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*,int32_t>*, "<>9__6_4", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*>(std::forward<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*,int32_t>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*,int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::getStaticF___9__6_4()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*,int32_t>*, "<>9__6_4", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::_CreateMaterialValidationMode_b__2_4(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*  _, int32_t  __param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*>(),
                        {"<CreateMaterialValidationMode>b__2_4", {}, {::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __param_1);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::_CreateAlbedoPreset_b__6_4(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*  _, int32_t  __param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*>(),
                        {"<CreateAlbedoPreset>b__6_4", {}, {::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __param_1);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c::WidgetFactory_DebugDisplaySettingsMaterial___c()   {
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::setStaticF_MaterialOverride(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "MaterialOverride", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>(std::forward<::GlobalNamespace::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::getStaticF_MaterialOverride()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "MaterialOverride", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::setStaticF_VertexAttribute(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "VertexAttribute", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>(std::forward<::GlobalNamespace::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::getStaticF_VertexAttribute()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "VertexAttribute", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::setStaticF_MaterialValidationMode(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "MaterialValidationMode", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>(std::forward<::GlobalNamespace::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::getStaticF_MaterialValidationMode()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "MaterialValidationMode", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::setStaticF_RenderingLayersSelectedLight(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "RenderingLayersSelectedLight", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>(std::forward<::GlobalNamespace::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::getStaticF_RenderingLayersSelectedLight()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "RenderingLayersSelectedLight", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::setStaticF_SelectedLightShadowLayerMask(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "SelectedLightShadowLayerMask", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>(std::forward<::GlobalNamespace::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::getStaticF_SelectedLightShadowLayerMask()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "SelectedLightShadowLayerMask", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::setStaticF_FilterRenderingLayerMask(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "FilterRenderingLayerMask", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>(std::forward<::GlobalNamespace::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::getStaticF_FilterRenderingLayerMask()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "FilterRenderingLayerMask", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::setStaticF_ValidationPreset(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "ValidationPreset", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>(std::forward<::GlobalNamespace::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::getStaticF_ValidationPreset()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "ValidationPreset", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::setStaticF_AlbedoCustomColor(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "AlbedoCustomColor", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>(std::forward<::GlobalNamespace::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::getStaticF_AlbedoCustomColor()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "AlbedoCustomColor", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::setStaticF_AlbedoMinLuminance(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "AlbedoMinLuminance", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>(std::forward<::GlobalNamespace::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::getStaticF_AlbedoMinLuminance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "AlbedoMinLuminance", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::setStaticF_AlbedoMaxLuminance(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "AlbedoMaxLuminance", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>(std::forward<::GlobalNamespace::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::getStaticF_AlbedoMaxLuminance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "AlbedoMaxLuminance", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::setStaticF_AlbedoHueTolerance(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "AlbedoHueTolerance", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>(std::forward<::GlobalNamespace::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::getStaticF_AlbedoHueTolerance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "AlbedoHueTolerance", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::setStaticF_AlbedoSaturationTolerance(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "AlbedoSaturationTolerance", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>(std::forward<::GlobalNamespace::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::getStaticF_AlbedoSaturationTolerance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "AlbedoSaturationTolerance", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::setStaticF_MetallicMinValue(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "MetallicMinValue", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>(std::forward<::GlobalNamespace::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::getStaticF_MetallicMinValue()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "MetallicMinValue", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::setStaticF_MetallicMaxValue(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "MetallicMaxValue", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>(std::forward<::GlobalNamespace::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::GlobalNamespace::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::getStaticF_MetallicMaxValue()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "MetallicMaxValue", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings::DebugDisplaySettingsMaterial_Strings()   {
}

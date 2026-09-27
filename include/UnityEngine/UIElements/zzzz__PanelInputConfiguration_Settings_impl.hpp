#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelInputConfiguration_Settings.hpp"
#include "UnityEngine/UIElements/zzzz__PanelInputConfiguration_PanelInputRedirection_impl.hpp"
#include "UnityEngine/zzzz__Camera_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelInputConfiguration_Settings_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelInputConfiguration_PanelInputRedirection_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PanelInputConfiguration_Settings.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PanelInputConfiguration_Settings (*)()>(&::GlobalNamespace::PanelInputConfiguration_Settings::get_Default)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb8aebdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelInputConfiguration_Settings.get_processWorldSpaceInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PanelInputConfiguration_Settings::*)()>(&::GlobalNamespace::PanelInputConfiguration_Settings::get_processWorldSpaceInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8aec3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_processWorldSpaceInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelInputConfiguration_Settings.get_interactionLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::PanelInputConfiguration_Settings::*)()>(&::GlobalNamespace::PanelInputConfiguration_Settings::get_interactionLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8aec44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_interactionLayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelInputConfiguration_Settings.get_maxInteractionDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PanelInputConfiguration_Settings::*)()>(&::GlobalNamespace::PanelInputConfiguration_Settings::get_maxInteractionDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8aec4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_maxInteractionDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelInputConfiguration_Settings.get_defaultEventCameraIsMainCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PanelInputConfiguration_Settings::*)()>(&::GlobalNamespace::PanelInputConfiguration_Settings::get_defaultEventCameraIsMainCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8aec54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_defaultEventCameraIsMainCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelInputConfiguration_Settings.get_eventCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Camera>> (::GlobalNamespace::PanelInputConfiguration_Settings::*)()>(&::GlobalNamespace::PanelInputConfiguration_Settings::get_eventCameras)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8aec5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_eventCameras", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelInputConfiguration_Settings.get_panelInputRedirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection (::GlobalNamespace::PanelInputConfiguration_Settings::*)()>(&::GlobalNamespace::PanelInputConfiguration_Settings::get_panelInputRedirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8aec64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_panelInputRedirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelInputConfiguration_Settings.get_autoCreatePanelComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PanelInputConfiguration_Settings::*)()>(&::GlobalNamespace::PanelInputConfiguration_Settings::get_autoCreatePanelComponents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8aec6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_autoCreatePanelComponents", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PanelInputConfiguration_Settings::setStaticF_s_Default(::GlobalNamespace::PanelInputConfiguration_Settings  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PanelInputConfiguration_Settings, "s_Default", ::GlobalNamespace::PanelInputConfiguration_Settings>(std::forward<::GlobalNamespace::PanelInputConfiguration_Settings>(value));
}
inline ::GlobalNamespace::PanelInputConfiguration_Settings GlobalNamespace::PanelInputConfiguration_Settings::getStaticF_s_Default()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PanelInputConfiguration_Settings, "s_Default", ::GlobalNamespace::PanelInputConfiguration_Settings>();
}
inline ::GlobalNamespace::PanelInputConfiguration_Settings GlobalNamespace::PanelInputConfiguration_Settings::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PanelInputConfiguration_Settings>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::PanelInputConfiguration_Settings::get_processWorldSpaceInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_processWorldSpaceInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::LayerMask GlobalNamespace::PanelInputConfiguration_Settings::get_interactionLayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_interactionLayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(*this, ___internal_method);
}
inline float_t GlobalNamespace::PanelInputConfiguration_Settings::get_maxInteractionDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_maxInteractionDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::PanelInputConfiguration_Settings::get_defaultEventCameraIsMainCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_defaultEventCameraIsMainCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Camera>> GlobalNamespace::PanelInputConfiguration_Settings::get_eventCameras()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_eventCameras", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Camera>>>(*this, ___internal_method);
}
inline ::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection GlobalNamespace::PanelInputConfiguration_Settings::get_panelInputRedirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_panelInputRedirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection>(*this, ___internal_method);
}
inline bool GlobalNamespace::PanelInputConfiguration_Settings::get_autoCreatePanelComponents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelInputConfiguration_Settings>(),
                        {"get_autoCreatePanelComponents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ProcessWorldSpaceInput", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InteractionLayers", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MaxInteractionDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DefaultEventCameraIsMainCamera", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EventCameras", ty: "::ArrayW<::UnityW<::UnityEngine::Camera>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PanelInputRedirection", ty: "::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AutoCreatePanelComponents", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PanelInputConfiguration_Settings::PanelInputConfiguration_Settings(bool  m_ProcessWorldSpaceInput, ::UnityEngine::LayerMask  m_InteractionLayers, float_t  m_MaxInteractionDistance, bool  m_DefaultEventCameraIsMainCamera, ::ArrayW<::UnityW<::UnityEngine::Camera>>  m_EventCameras, ::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection  m_PanelInputRedirection, bool  m_AutoCreatePanelComponents) noexcept  {
this->m_ProcessWorldSpaceInput = m_ProcessWorldSpaceInput;
this->m_InteractionLayers = m_InteractionLayers;
this->m_MaxInteractionDistance = m_MaxInteractionDistance;
this->m_DefaultEventCameraIsMainCamera = m_DefaultEventCameraIsMainCamera;
this->m_EventCameras = m_EventCameras;
this->m_PanelInputRedirection = m_PanelInputRedirection;
this->m_AutoCreatePanelComponents = m_AutoCreatePanelComponents;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PanelInputConfiguration_Settings::PanelInputConfiguration_Settings()   {
}

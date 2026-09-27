#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelInputConfiguration.hpp"
#include "UnityEngine/UIElements/zzzz__PanelInputConfiguration_Settings_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelInputConfiguration_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelInputConfiguration_PanelInputRedirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelInputConfiguration_Settings_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration> (*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::get_current)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb8ae020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::PanelInputConfiguration*)>(&::UnityEngine::UIElements::PanelInputConfiguration::set_current)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb8ae068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_current", {}, {::i2c::type_of<::UnityEngine::UIElements::PanelInputConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PanelInputConfiguration_Settings (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::get_settings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb8ae0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_processWorldSpaceInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::get_processWorldSpaceInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8ae0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_processWorldSpaceInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_processWorldSpaceInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)(bool)>(&::UnityEngine::UIElements::PanelInputConfiguration::set_processWorldSpaceInput)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb8ae0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_processWorldSpaceInput", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_interactionLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::get_interactionLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8ae538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_interactionLayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_interactionLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)(::UnityEngine::LayerMask)>(&::UnityEngine::UIElements::PanelInputConfiguration::set_interactionLayers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb8ae540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_interactionLayers", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_maxInteractionDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::get_maxInteractionDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8ae594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_maxInteractionDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_maxInteractionDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)(float_t)>(&::UnityEngine::UIElements::PanelInputConfiguration::set_maxInteractionDistance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb8ae59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_maxInteractionDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_defaultEventCameraIsMainCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::get_defaultEventCameraIsMainCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8ae5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_defaultEventCameraIsMainCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_defaultEventCameraIsMainCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)(bool)>(&::UnityEngine::UIElements::PanelInputConfiguration::set_defaultEventCameraIsMainCamera)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb8ae5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_defaultEventCameraIsMainCamera", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_eventCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Camera>> (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::get_eventCameras)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8ae5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_eventCameras", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_eventCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)(::ArrayW<::UnityEngine::Camera*>)>(&::UnityEngine::UIElements::PanelInputConfiguration::set_eventCameras)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb8ae5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_eventCameras", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Camera*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_panelInputRedirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::get_panelInputRedirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8ae610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_panelInputRedirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_panelInputRedirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)(::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection)>(&::UnityEngine::UIElements::PanelInputConfiguration::set_panelInputRedirection)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb8ae618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_panelInputRedirection", {}, {::i2c::type_of<::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.get_autoCreatePanelComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::get_autoCreatePanelComponents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb8ae630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_autoCreatePanelComponents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.set_autoCreatePanelComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)(bool)>(&::UnityEngine::UIElements::PanelInputConfiguration::set_autoCreatePanelComponents)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb8ae638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_autoCreatePanelComponents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::OnEnable)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xb8ae654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::OnDisable)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb8ae948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::PanelInputConfiguration*)>(&::UnityEngine::UIElements::PanelInputConfiguration::Apply)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0xb8ae0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"Apply", {}, {::i2c::type_of<::UnityEngine::UIElements::PanelInputConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelInputConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelInputConfiguration::*)()>(&::UnityEngine::UIElements::PanelInputConfiguration::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb8aeb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PanelInputConfiguration_Settings& UnityEngine::UIElements::PanelInputConfiguration::__cordl_internal_get_m_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr ::GlobalNamespace::PanelInputConfiguration_Settings const& UnityEngine::UIElements::PanelInputConfiguration::__cordl_internal_get_m_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr void UnityEngine::UIElements::PanelInputConfiguration::__cordl_internal_set_m_Settings(::GlobalNamespace::PanelInputConfiguration_Settings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Settings = value;
}
inline void UnityEngine::UIElements::PanelInputConfiguration::setStaticF__current_k__BackingField(::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>, "<current>k__BackingField", ::UnityEngine::UIElements::PanelInputConfiguration*>(std::forward<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>(value));
}
inline ::UnityW<::UnityEngine::UIElements::PanelInputConfiguration> UnityEngine::UIElements::PanelInputConfiguration::getStaticF__current_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>, "<current>k__BackingField", ::UnityEngine::UIElements::PanelInputConfiguration*>();
}
inline void UnityEngine::UIElements::PanelInputConfiguration::setStaticF_s_ActiveInstances(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ActiveInstances", ::UnityEngine::UIElements::PanelInputConfiguration*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::PanelInputConfiguration::getStaticF_s_ActiveInstances()  {
return ::cordl_internals::getStaticField<int32_t, "s_ActiveInstances", ::UnityEngine::UIElements::PanelInputConfiguration*>();
}
inline void UnityEngine::UIElements::PanelInputConfiguration::setStaticF_onApply(::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>*, "onApply", ::UnityEngine::UIElements::PanelInputConfiguration*>(std::forward<::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>* UnityEngine::UIElements::PanelInputConfiguration::getStaticF_onApply()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>*, "onApply", ::UnityEngine::UIElements::PanelInputConfiguration*>();
}
inline ::UnityW<::UnityEngine::UIElements::PanelInputConfiguration> UnityEngine::UIElements::PanelInputConfiguration::get_current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_current(::UnityEngine::UIElements::PanelInputConfiguration*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_current", {}, {::i2c::type_of<::UnityEngine::UIElements::PanelInputConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::PanelInputConfiguration_Settings UnityEngine::UIElements::PanelInputConfiguration::get_settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PanelInputConfiguration_Settings>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PanelInputConfiguration::get_processWorldSpaceInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_processWorldSpaceInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_processWorldSpaceInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_processWorldSpaceInput", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::UIElements::PanelInputConfiguration::get_interactionLayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_interactionLayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_interactionLayers(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_interactionLayers", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::PanelInputConfiguration::get_maxInteractionDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_maxInteractionDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_maxInteractionDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_maxInteractionDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::PanelInputConfiguration::get_defaultEventCameraIsMainCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_defaultEventCameraIsMainCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_defaultEventCameraIsMainCamera(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_defaultEventCameraIsMainCamera", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Camera>> UnityEngine::UIElements::PanelInputConfiguration::get_eventCameras()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_eventCameras", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Camera>>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_eventCameras(::ArrayW<::UnityEngine::Camera*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_eventCameras", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Camera*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection UnityEngine::UIElements::PanelInputConfiguration::get_panelInputRedirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_panelInputRedirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_panelInputRedirection(::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_panelInputRedirection", {}, {::i2c::type_of<::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::PanelInputConfiguration::get_autoCreatePanelComponents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"get_autoCreatePanelComponents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::set_autoCreatePanelComponents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"set_autoCreatePanelComponents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::Apply(::UnityEngine::UIElements::PanelInputConfiguration*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {"Apply", {}, {::i2c::type_of<::UnityEngine::UIElements::PanelInputConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input);
}
inline void UnityEngine::UIElements::PanelInputConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::PanelInputConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PanelInputConfiguration* UnityEngine::UIElements::PanelInputConfiguration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PanelInputConfiguration*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelInputConfiguration::PanelInputConfiguration()   {
}

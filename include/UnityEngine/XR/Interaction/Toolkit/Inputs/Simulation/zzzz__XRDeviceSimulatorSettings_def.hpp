#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRDeviceSimulatorSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/zzzz__ScriptableSettings_1_def.hpp"
CORDL_MODULE_EXPORT(XRDeviceSimulatorSettings)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRDeviceSimulatorSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulatorSettings");
// [ScriptableSettingsPath("Assets/XRI/Settings")]
// Dependencies Unity.XR.CoreUtils.ScriptableSettings`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulatorSettings
class CORDL_TYPE XRDeviceSimulatorSettings : public ::Unity::XR::CoreUtils::ScriptableSettings_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings>> {
public:
// Declarations
 __declspec(property(get=get_automaticallyInstantiateInEditorOnly, put=set_automaticallyInstantiateInEditorOnly)) bool  automaticallyInstantiateInEditorOnly;

 __declspec(property(get=get_automaticallyInstantiateSimulatorPrefab, put=set_automaticallyInstantiateSimulatorPrefab)) bool  automaticallyInstantiateSimulatorPrefab;

/// @brief Field m_AutomaticallyInstantiateInEditorOnly, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutomaticallyInstantiateInEditorOnly, put=__cordl_internal_set_m_AutomaticallyInstantiateInEditorOnly)) bool  m_AutomaticallyInstantiateInEditorOnly;

/// @brief Field m_AutomaticallyInstantiateSimulatorPrefab, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutomaticallyInstantiateSimulatorPrefab, put=__cordl_internal_set_m_AutomaticallyInstantiateSimulatorPrefab)) bool  m_AutomaticallyInstantiateSimulatorPrefab;

/// @brief Field m_SimulatorPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SimulatorPrefab, put=__cordl_internal_set_m_SimulatorPrefab)) ::UnityW<::UnityEngine::GameObject>  m_SimulatorPrefab;

/// @brief Field m_UseClassic, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseClassic, put=__cordl_internal_set_m_UseClassic)) bool  m_UseClassic;

 __declspec(property(get=get_simulatorPrefab, put=set_simulatorPrefab)) ::UnityW<::UnityEngine::GameObject>  simulatorPrefab;

 __declspec(property(get=get_useClassic, put=set_useClassic)) bool  useClassic;

/// @brief Method GetInstanceOrLoadOnly, addr 0xb4c32d4, size 0x1d0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings> GetInstanceOrLoadOnly() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_m_AutomaticallyInstantiateInEditorOnly() const;

constexpr bool& __cordl_internal_get_m_AutomaticallyInstantiateInEditorOnly() ;

constexpr bool const& __cordl_internal_get_m_AutomaticallyInstantiateSimulatorPrefab() const;

constexpr bool& __cordl_internal_get_m_AutomaticallyInstantiateSimulatorPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_SimulatorPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_SimulatorPrefab() ;

constexpr bool const& __cordl_internal_get_m_UseClassic() const;

constexpr bool& __cordl_internal_get_m_UseClassic() ;

constexpr void __cordl_internal_set_m_AutomaticallyInstantiateInEditorOnly(bool  value) ;

constexpr void __cordl_internal_set_m_AutomaticallyInstantiateSimulatorPrefab(bool  value) ;

constexpr void __cordl_internal_set_m_SimulatorPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_UseClassic(bool  value) ;

/// @brief Method .ctor, addr 0xb4c34e4, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_automaticallyInstantiateInEditorOnly, addr 0xb4c34b4, size 0x8, virtual false, abstract: false, final false
inline bool get_automaticallyInstantiateInEditorOnly() ;

/// @brief Method get_automaticallyInstantiateSimulatorPrefab, addr 0xb4c34a4, size 0x8, virtual false, abstract: false, final false
inline bool get_automaticallyInstantiateSimulatorPrefab() ;

/// @brief Method get_simulatorPrefab, addr 0xb4c34d4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_simulatorPrefab() ;

/// @brief Method get_useClassic, addr 0xb4c34c4, size 0x8, virtual false, abstract: false, final false
inline bool get_useClassic() ;

/// @brief Method set_automaticallyInstantiateInEditorOnly, addr 0xb4c34bc, size 0x8, virtual false, abstract: false, final false
inline void set_automaticallyInstantiateInEditorOnly(bool  value) ;

/// @brief Method set_automaticallyInstantiateSimulatorPrefab, addr 0xb4c34ac, size 0x8, virtual false, abstract: false, final false
inline void set_automaticallyInstantiateSimulatorPrefab(bool  value) ;

/// @brief Method set_simulatorPrefab, addr 0xb4c34dc, size 0x8, virtual false, abstract: false, final false
inline void set_simulatorPrefab(::UnityEngine::GameObject*  value) ;

/// @brief Method set_useClassic, addr 0xb4c34cc, size 0x8, virtual false, abstract: false, final false
inline void set_useClassic(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRDeviceSimulatorSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRDeviceSimulatorSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRDeviceSimulatorSettings(XRDeviceSimulatorSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRDeviceSimulatorSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRDeviceSimulatorSettings(XRDeviceSimulatorSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11626};

/// [SerializeField]
/// @brief Field m_AutomaticallyInstantiateSimulatorPrefab, offset: 0x18, size: 0x1, def value: None
 bool  ___m_AutomaticallyInstantiateSimulatorPrefab;

/// [SerializeField]
/// @brief Field m_AutomaticallyInstantiateInEditorOnly, offset: 0x19, size: 0x1, def value: None
 bool  ___m_AutomaticallyInstantiateInEditorOnly;

/// [SerializeField]
/// @brief Field m_UseClassic, offset: 0x1a, size: 0x1, def value: None
 bool  ___m_UseClassic;

/// [SerializeField]
/// @brief Field m_SimulatorPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_SimulatorPrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings, ___m_AutomaticallyInstantiateSimulatorPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings, ___m_AutomaticallyInstantiateInEditorOnly) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings, ___m_UseClassic) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings, ___m_SimulatorPrefab) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation

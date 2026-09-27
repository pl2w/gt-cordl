#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/SimulatedHandExpressionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SimulatedHandExpressionManager)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands {
class HandExpressionCapture;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class SimulatedDeviceLifecycleManager;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class SimulatedHandExpression;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class SimulatedHandExpressionManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "SimulatedHandExpressionManager");
// [AddComponentMenu("XR/Debug/Simulated Hand Expression Manager", 11)]
// [DefaultExecutionOrder(-29994)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.SimulatedHandExpressionManager.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.SimulatedHandExpressionManager
class CORDL_TYPE SimulatedHandExpressionManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_DeviceLifecycleManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeviceLifecycleManager, put=__cordl_internal_set_m_DeviceLifecycleManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>  m_DeviceLifecycleManager;

/// @brief Field m_RestingHandExpressionCapture, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RestingHandExpressionCapture, put=__cordl_internal_set_m_RestingHandExpressionCapture)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  m_RestingHandExpressionCapture;

/// @brief Field m_SimulatedHandExpressions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SimulatedHandExpressions, put=__cordl_internal_set_m_SimulatedHandExpressions)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>*  m_SimulatedHandExpressions;

 __declspec(property(get=get_restingHandExpressionCapture, put=set_restingHandExpressionCapture)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  restingHandExpressionCapture;

 __declspec(property(get=get_simulatedHandExpressions)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>*  simulatedHandExpressions;

/// @brief Method InitializeHandExpressions, addr 0xb4b90cc, size 0x4, virtual false, abstract: false, final false
inline void InitializeHandExpressions() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager* New_ctor() ;

/// @brief Method Start, addr 0xb4b9050, size 0x7c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager> const& __cordl_internal_get_m_DeviceLifecycleManager() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>& __cordl_internal_get_m_DeviceLifecycleManager() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture> const& __cordl_internal_get_m_RestingHandExpressionCapture() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>& __cordl_internal_get_m_RestingHandExpressionCapture() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>* const& __cordl_internal_get_m_SimulatedHandExpressions() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>*& __cordl_internal_get_m_SimulatedHandExpressions() ;

constexpr void __cordl_internal_set_m_DeviceLifecycleManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>  value) ;

constexpr void __cordl_internal_set_m_RestingHandExpressionCapture(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  value) ;

constexpr void __cordl_internal_set_m_SimulatedHandExpressions(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>*  value) ;

/// @brief Method .ctor, addr 0xb4b90d0, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_restingHandExpressionCapture, addr 0xb4b9040, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture> get_restingHandExpressionCapture() ;

/// @brief Method get_simulatedHandExpressions, addr 0xb4b9038, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>* get_simulatedHandExpressions() ;

/// @brief Method set_restingHandExpressionCapture, addr 0xb4b9048, size 0x8, virtual false, abstract: false, final false
inline void set_restingHandExpressionCapture(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulatedHandExpressionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulatedHandExpressionManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulatedHandExpressionManager(SimulatedHandExpressionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulatedHandExpressionManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulatedHandExpressionManager(SimulatedHandExpressionManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11615};

/// [SerializeField]
/// [Tooltip("The list of hand expressions to simulate.")]
/// @brief Field m_SimulatedHandExpressions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>*  ___m_SimulatedHandExpressions;

/// [SerializeField]
/// [Tooltip("The resting hand expression to use when no other hand expression is active.")]
/// @brief Field m_RestingHandExpressionCapture, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  ___m_RestingHandExpressionCapture;

/// @brief Field m_DeviceLifecycleManager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>  ___m_DeviceLifecycleManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager, ___m_SimulatedHandExpressions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager, ___m_RestingHandExpressionCapture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager, ___m_DeviceLifecycleManager) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/DeviceBasedContinuousMoveProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousMoveProviderBase_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeviceBasedContinuousMoveProvider_InputAxes_def.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DeviceBasedContinuousMoveProvider)
namespace GlobalNamespace {
struct DeviceBasedContinuousMoveProvider_InputAxes;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseController;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class DeviceBasedContinuousMoveProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*, "UnityEngine.XR.Interaction.Toolkit", "DeviceBasedContinuousMoveProvider");
// [AddComponentMenu("XR/Locomotion/Legacy/Continuous Move Provider (Device-based)", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider.html")]
// [Obsolete("DeviceBasedContinuousMoveProvider has been deprecated in version 3.0.0. Use ContinuousMoveProvider instead.")]
// Dependencies UnityEngine.Vector2, UnityEngine.XR.InputFeatureUsage`1<T>, UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase, UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider::InputAxes
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider
class CORDL_TYPE DeviceBasedContinuousMoveProvider : public ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase {
public:
// Declarations
using InputAxes = ::GlobalNamespace::DeviceBasedContinuousMoveProvider_InputAxes;

 __declspec(property(get=get_controllers, put=set_controllers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*  controllers;

 __declspec(property(get=get_deadzoneMax, put=set_deadzoneMax)) float_t  deadzoneMax;

 __declspec(property(get=get_deadzoneMin, put=set_deadzoneMin)) float_t  deadzoneMin;

 __declspec(property(get=get_inputBinding, put=set_inputBinding)) ::GlobalNamespace::DeviceBasedContinuousMoveProvider_InputAxes  inputBinding;

/// @brief Field k_Vec2UsageList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Vec2UsageList, put=setStaticF_k_Vec2UsageList)) ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>  k_Vec2UsageList;

/// @brief Field m_Controllers, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Controllers, put=__cordl_internal_set_m_Controllers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*  m_Controllers;

/// @brief Field m_DeadzoneMax, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeadzoneMax, put=__cordl_internal_set_m_DeadzoneMax)) float_t  m_DeadzoneMax;

/// @brief Field m_DeadzoneMin, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeadzoneMin, put=__cordl_internal_set_m_DeadzoneMin)) float_t  m_DeadzoneMin;

/// @brief Field m_InputBinding, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InputBinding, put=__cordl_internal_set_m_InputBinding)) ::GlobalNamespace::DeviceBasedContinuousMoveProvider_InputAxes  m_InputBinding;

/// @brief Method GetDeadzoneAdjustedValue, addr 0xb418ab0, size 0x16c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetDeadzoneAdjustedValue(::UnityEngine::Vector2  value) ;

/// @brief Method GetDeadzoneAdjustedValue, addr 0xb418c1c, size 0x54, virtual false, abstract: false, final false
inline float_t GetDeadzoneAdjustedValue(float_t  value) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider* New_ctor() ;

/// @brief Method ReadInput, addr 0xb418874, size 0x23c, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 ReadInput() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* const& __cordl_internal_get_m_Controllers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*& __cordl_internal_get_m_Controllers() ;

constexpr float_t const& __cordl_internal_get_m_DeadzoneMax() const;

constexpr float_t& __cordl_internal_get_m_DeadzoneMax() ;

constexpr float_t const& __cordl_internal_get_m_DeadzoneMin() const;

constexpr float_t& __cordl_internal_get_m_DeadzoneMin() ;

constexpr ::GlobalNamespace::DeviceBasedContinuousMoveProvider_InputAxes const& __cordl_internal_get_m_InputBinding() const;

constexpr ::GlobalNamespace::DeviceBasedContinuousMoveProvider_InputAxes& __cordl_internal_get_m_InputBinding() ;

constexpr void __cordl_internal_set_m_Controllers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*  value) ;

constexpr void __cordl_internal_set_m_DeadzoneMax(float_t  value) ;

constexpr void __cordl_internal_set_m_DeadzoneMin(float_t  value) ;

constexpr void __cordl_internal_set_m_InputBinding(::GlobalNamespace::DeviceBasedContinuousMoveProvider_InputAxes  value) ;

/// @brief Method .ctor, addr 0xb418c70, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>> getStaticF_k_Vec2UsageList() ;

/// @brief Method get_controllers, addr 0xb418844, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* get_controllers() ;

/// @brief Method get_deadzoneMax, addr 0xb418864, size 0x8, virtual false, abstract: false, final false
inline float_t get_deadzoneMax() ;

/// @brief Method get_deadzoneMin, addr 0xb418854, size 0x8, virtual false, abstract: false, final false
inline float_t get_deadzoneMin() ;

/// @brief Method get_inputBinding, addr 0xb418834, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::DeviceBasedContinuousMoveProvider_InputAxes get_inputBinding() ;

static inline void setStaticF_k_Vec2UsageList(::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>  value) ;

/// @brief Method set_controllers, addr 0xb41884c, size 0x8, virtual false, abstract: false, final false
inline void set_controllers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*  value) ;

/// @brief Method set_deadzoneMax, addr 0xb41886c, size 0x8, virtual false, abstract: false, final false
inline void set_deadzoneMax(float_t  value) ;

/// @brief Method set_deadzoneMin, addr 0xb41885c, size 0x8, virtual false, abstract: false, final false
inline void set_deadzoneMin(float_t  value) ;

/// @brief Method set_inputBinding, addr 0xb41883c, size 0x8, virtual false, abstract: false, final false
inline void set_inputBinding(::GlobalNamespace::DeviceBasedContinuousMoveProvider_InputAxes  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeviceBasedContinuousMoveProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeviceBasedContinuousMoveProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeviceBasedContinuousMoveProvider(DeviceBasedContinuousMoveProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeviceBasedContinuousMoveProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeviceBasedContinuousMoveProvider(DeviceBasedContinuousMoveProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11119};

/// [SerializeField]
/// [Tooltip("The 2D Input Axis on the controller devices that will be used to trigger a move.")]
/// @brief Field m_InputBinding, offset: 0xc8, size: 0x4, def value: None
 ::GlobalNamespace::DeviceBasedContinuousMoveProvider_InputAxes  ___m_InputBinding;

/// [SerializeField]
/// [Tooltip("A list of controllers that allow move.  If an XRController is not enabled, or does not have input actions enabled, move will not work.")]
/// @brief Field m_Controllers, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*  ___m_Controllers;

/// [SerializeField]
/// [Tooltip("Value below which input values will be clamped. After clamping, values will be renormalized to [0, 1] between min and max.")]
/// @brief Field m_DeadzoneMin, offset: 0xd8, size: 0x4, def value: None
 float_t  ___m_DeadzoneMin;

/// [SerializeField]
/// [Tooltip("Value above which input values will be clamped. After clamping, values will be renormalized to [0, 1] between min and max.")]
/// @brief Field m_DeadzoneMax, offset: 0xdc, size: 0x4, def value: None
 float_t  ___m_DeadzoneMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider, ___m_InputBinding) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider, ___m_Controllers) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider, ___m_DeadzoneMin) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider, ___m_DeadzoneMax) == 0xdc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider) == 0xe0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit

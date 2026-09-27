#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/DeviceBasedSnapTurnProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeviceBasedSnapTurnProvider_InputAxes_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SnapTurnProviderBase_def.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DeviceBasedSnapTurnProvider)
namespace GlobalNamespace {
struct DeviceBasedSnapTurnProvider_InputAxes;
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
class DeviceBasedSnapTurnProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*, "UnityEngine.XR.Interaction.Toolkit", "DeviceBasedSnapTurnProvider");
// [AddComponentMenu("XR/Locomotion/Legacy/Snap Turn Provider (Device-based)", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.DeviceBasedSnapTurnProvider.html")]
// [Obsolete("DeviceBasedSnapTurnProvider has been deprecated in version 3.0.0. Use SnapTurnProvider instead.")]
// Dependencies UnityEngine.Vector2, UnityEngine.XR.InputFeatureUsage`1<T>, UnityEngine.XR.Interaction.Toolkit.DeviceBasedSnapTurnProvider::InputAxes, UnityEngine.XR.Interaction.Toolkit.SnapTurnProviderBase
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.DeviceBasedSnapTurnProvider
class CORDL_TYPE DeviceBasedSnapTurnProvider : public ::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase {
public:
// Declarations
using InputAxes = ::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes;

 __declspec(property(get=get_controllers, put=set_controllers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*  controllers;

 __declspec(property(get=get_deadZone, put=set_deadZone)) float_t  deadZone;

/// @brief Field k_Vec2UsageList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Vec2UsageList, put=setStaticF_k_Vec2UsageList)) ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>  k_Vec2UsageList;

/// @brief Field m_Controllers, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Controllers, put=__cordl_internal_set_m_Controllers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*  m_Controllers;

/// @brief Field m_DeadZone, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeadZone, put=__cordl_internal_set_m_DeadZone)) float_t  m_DeadZone;

/// @brief Field m_TurnUsage, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TurnUsage, put=__cordl_internal_set_m_TurnUsage)) ::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes  m_TurnUsage;

 __declspec(property(get=get_turnUsage, put=set_turnUsage)) ::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes  turnUsage;

static inline ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider* New_ctor() ;

/// @brief Method ReadInput, addr 0xb4193f8, size 0x258, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 ReadInput() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* const& __cordl_internal_get_m_Controllers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*& __cordl_internal_get_m_Controllers() ;

constexpr float_t const& __cordl_internal_get_m_DeadZone() const;

constexpr float_t& __cordl_internal_get_m_DeadZone() ;

constexpr ::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes const& __cordl_internal_get_m_TurnUsage() const;

constexpr ::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes& __cordl_internal_get_m_TurnUsage() ;

constexpr void __cordl_internal_set_m_Controllers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*  value) ;

constexpr void __cordl_internal_set_m_DeadZone(float_t  value) ;

constexpr void __cordl_internal_set_m_TurnUsage(::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes  value) ;

/// @brief Method .ctor, addr 0xb419650, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>> getStaticF_k_Vec2UsageList() ;

/// @brief Method get_controllers, addr 0xb4193d8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* get_controllers() ;

/// @brief Method get_deadZone, addr 0xb4193e8, size 0x8, virtual false, abstract: false, final false
inline float_t get_deadZone() ;

/// @brief Method get_turnUsage, addr 0xb4193c8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes get_turnUsage() ;

static inline void setStaticF_k_Vec2UsageList(::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>  value) ;

/// @brief Method set_controllers, addr 0xb4193e0, size 0x8, virtual false, abstract: false, final false
inline void set_controllers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*  value) ;

/// @brief Method set_deadZone, addr 0xb4193f0, size 0x8, virtual false, abstract: false, final false
inline void set_deadZone(float_t  value) ;

/// @brief Method set_turnUsage, addr 0xb4193d0, size 0x8, virtual false, abstract: false, final false
inline void set_turnUsage(::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeviceBasedSnapTurnProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeviceBasedSnapTurnProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeviceBasedSnapTurnProvider(DeviceBasedSnapTurnProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeviceBasedSnapTurnProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeviceBasedSnapTurnProvider(DeviceBasedSnapTurnProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11123};

/// [SerializeField]
/// [Tooltip("The 2D Input Axis on the controller devices that will be used to trigger a snap turn.")]
/// @brief Field m_TurnUsage, offset: 0xb8, size: 0x4, def value: None
 ::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes  ___m_TurnUsage;

/// [SerializeField]
/// [Tooltip("A list of controllers that allow Snap Turn.  If an XRController is not enabled, or does not have input actions enabled, snap turn will not work.")]
/// @brief Field m_Controllers, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*  ___m_Controllers;

/// [SerializeField]
/// [Tooltip("The deadzone that the controller movement will have to be above to trigger a snap turn.")]
/// @brief Field m_DeadZone, offset: 0xc8, size: 0x4, def value: None
 float_t  ___m_DeadZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider, ___m_TurnUsage) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider, ___m_Controllers) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider, ___m_DeadZone) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider) == 0xd0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit

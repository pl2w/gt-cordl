#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDeviceEventData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedDeviceEventData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class TrackedDeviceEventData;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*, "UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceEventData");
// Dependencies UnityEngine.EventSystems.PointerEventData, UnityEngine.LayerMask, UnityEngine.Vector3
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceEventData
class CORDL_TYPE TrackedDeviceEventData : public ::UnityEngine::EventSystems::PointerEventData {
public:
// Declarations
/// @brief Field <layerMask>k__BackingField, offset 0x1cc, size 0x4 
 __declspec(property(get=__cordl_internal_get__layerMask_k__BackingField, put=__cordl_internal_set__layerMask_k__BackingField)) ::UnityEngine::LayerMask  _layerMask_k__BackingField;

/// @brief Field <pressWorldPosition>k__BackingField, offset 0x1d0, size 0xc 
 __declspec(property(get=__cordl_internal_get__pressWorldPosition_k__BackingField, put=__cordl_internal_set__pressWorldPosition_k__BackingField)) ::UnityEngine::Vector3  _pressWorldPosition_k__BackingField;

/// @brief Field <rayHitIndex>k__BackingField, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get__rayHitIndex_k__BackingField, put=__cordl_internal_set__rayHitIndex_k__BackingField)) int32_t  _rayHitIndex_k__BackingField;

/// @brief Field <rayPoints>k__BackingField, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get__rayPoints_k__BackingField, put=__cordl_internal_set__rayPoints_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  _rayPoints_k__BackingField;

 __declspec(property(get=get_interactor)) ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor;

 __declspec(property(get=get_layerMask, put=set_layerMask)) ::UnityEngine::LayerMask  layerMask;

 __declspec(property(get=get_pressWorldPosition, put=set_pressWorldPosition)) ::UnityEngine::Vector3  pressWorldPosition;

 __declspec(property(get=get_rayHitIndex, put=set_rayHitIndex)) int32_t  rayHitIndex;

 __declspec(property(get=get_rayPoints, put=set_rayPoints)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  rayPoints;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData* New_ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem) ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__layerMask_k__BackingField() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__layerMask_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__pressWorldPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__pressWorldPosition_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__rayHitIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__rayHitIndex_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get__rayPoints_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get__rayPoints_k__BackingField() ;

constexpr void __cordl_internal_set__layerMask_k__BackingField(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__pressWorldPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rayHitIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__rayPoints_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0xb4344c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem) ;

/// @brief Method get_interactor, addr 0xb434508, size 0xdc, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* get_interactor() ;

/// [CompilerGenerated]
/// @brief Method get_layerMask, addr 0xb4344f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_layerMask() ;

/// [CompilerGenerated]
/// @brief Method get_pressWorldPosition, addr 0xb4346f8, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_pressWorldPosition() ;

/// [CompilerGenerated]
/// @brief Method get_rayHitIndex, addr 0xb4344e8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_rayHitIndex() ;

/// [CompilerGenerated]
/// @brief Method get_rayPoints, addr 0xb4344d0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* get_rayPoints() ;

/// [CompilerGenerated]
/// @brief Method set_layerMask, addr 0xb434500, size 0x8, virtual false, abstract: false, final false
inline void set_layerMask(::UnityEngine::LayerMask  value) ;

/// [CompilerGenerated]
/// @brief Method set_pressWorldPosition, addr 0xb434708, size 0x10, virtual false, abstract: false, final false
inline void set_pressWorldPosition(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_rayHitIndex, addr 0xb4344f0, size 0x8, virtual false, abstract: false, final false
inline void set_rayHitIndex(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_rayPoints, addr 0xb4344d8, size 0x10, virtual false, abstract: false, final false
inline void set_rayPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedDeviceEventData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceEventData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedDeviceEventData(TrackedDeviceEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceEventData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedDeviceEventData(TrackedDeviceEventData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11293};

/// [CompilerGenerated]
/// @brief Field <rayPoints>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ____rayPoints_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <rayHitIndex>k__BackingField, offset: 0x1c8, size: 0x4, def value: None
 int32_t  ____rayHitIndex_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <layerMask>k__BackingField, offset: 0x1cc, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____layerMask_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pressWorldPosition>k__BackingField, offset: 0x1d0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____pressWorldPosition_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData, ____rayPoints_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData, ____rayHitIndex_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData, ____layerMask_k__BackingField) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData, ____pressWorldPosition_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData) == 0x1e0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI

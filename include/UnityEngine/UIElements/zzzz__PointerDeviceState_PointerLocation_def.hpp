#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerDeviceState_PointerLocation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerDeviceState_LocationFlag_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PointerDeviceState_PointerLocation)
namespace GlobalNamespace {
struct PointerDeviceState_LocationFlag;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct PointerDeviceState_PointerLocation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PointerDeviceState_PointerLocation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PointerDeviceState_PointerLocation, "UnityEngine.UIElements", "PointerDeviceState/PointerLocation");
// Dependencies UnityEngine.UIElements.PointerDeviceState::LocationFlag, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.PointerDeviceState/PointerLocation
struct CORDL_TYPE PointerDeviceState_PointerLocation {
public:
// Declarations
 __declspec(property(get=get_Flags, put=set_Flags)) ::GlobalNamespace::PointerDeviceState_LocationFlag  Flags;

 __declspec(property(get=get_Panel, put=set_Panel)) ::UnityEngine::UIElements::IPanel*  Panel;

 __declspec(property(get=get_Position, put=set_Position)) ::UnityEngine::Vector3  Position;

/// @brief Method SetLocation, addr 0xb8999d0, size 0x154, virtual false, abstract: false, final false
inline void SetLocation(::UnityEngine::Vector3  position, ::UnityEngine::UIElements::IPanel*  panel) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Flags, addr 0xb89adb4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::PointerDeviceState_LocationFlag get_Flags() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_Panel, addr 0xb89ada4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::IPanel* get_Panel() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Position, addr 0xb89ad8c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// [CompilerGenerated]
/// @brief Method set_Flags, addr 0xb89adbc, size 0x8, virtual false, abstract: false, final false
inline void set_Flags(::GlobalNamespace::PointerDeviceState_LocationFlag  value) ;

/// [CompilerGenerated]
/// @brief Method set_Panel, addr 0xb89adac, size 0x8, virtual false, abstract: false, final false
inline void set_Panel(::UnityEngine::UIElements::IPanel*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Position, addr 0xb89ad98, size 0xc, virtual false, abstract: false, final false
inline void set_Position(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PointerDeviceState_PointerLocation() ;

// Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Panel_k__BackingField", ty: "::UnityEngine::UIElements::IPanel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Flags_k__BackingField", ty: "::GlobalNamespace::PointerDeviceState_LocationFlag", modifiers: "", def_value: None, comment: None }]
constexpr PointerDeviceState_PointerLocation(::UnityEngine::Vector3  _Position_k__BackingField, ::UnityEngine::UIElements::IPanel*  _Panel_k__BackingField, ::GlobalNamespace::PointerDeviceState_LocationFlag  _Flags_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7681};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Position>k__BackingField, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  _Position_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Panel>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::IPanel*  _Panel_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <Flags>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::PointerDeviceState_LocationFlag  _Flags_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PointerDeviceState_PointerLocation, _Position_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerDeviceState_PointerLocation, _Panel_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerDeviceState_PointerLocation, _Flags_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PointerDeviceState_PointerLocation) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcadeMachineJoystickNetworkState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
CORDL_MODULE_EXPORT(ArcadeMachineJoystickNetworkState)
namespace GlobalNamespace {
class ArcadeMachineJoystick;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
// Forward declare root types
namespace GlobalNamespace {
class ArcadeMachineJoystickNetworkState;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ArcadeMachineJoystickNetworkState*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArcadeMachineJoystickNetworkState*, "", "ArcadeMachineJoystickNetworkState");
// [NetworkBehaviourWeaved(0)]
// Dependencies NetworkComponent
namespace GlobalNamespace {
// Is value type: false
// CS Name: ArcadeMachineJoystickNetworkState
class CORDL_TYPE ArcadeMachineJoystickNetworkState : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
/// @brief Field joystick, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_joystick, put=__cordl_internal_set_joystick)) ::UnityW<::GlobalNamespace::ArcadeMachineJoystick>  joystick;

/// @brief Method Awake, addr 0x55e5a78, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x55e5b50, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x55e5b58, size 0x8, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::ArcadeMachineJoystickNetworkState* New_ctor() ;

/// @brief Method ReadDataFusion, addr 0x55e5ad0, size 0x38, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x55e5b40, size 0x4, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method WriteDataFusion, addr 0x55e5b08, size 0x38, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x55e5b44, size 0x4, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::UnityW<::GlobalNamespace::ArcadeMachineJoystick> const& __cordl_internal_get_joystick() const;

constexpr ::UnityW<::GlobalNamespace::ArcadeMachineJoystick>& __cordl_internal_get_joystick() ;

constexpr void __cordl_internal_set_joystick(::UnityW<::GlobalNamespace::ArcadeMachineJoystick>  value) ;

/// @brief Method .ctor, addr 0x55e5b48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArcadeMachineJoystickNetworkState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArcadeMachineJoystickNetworkState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArcadeMachineJoystickNetworkState(ArcadeMachineJoystickNetworkState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArcadeMachineJoystickNetworkState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArcadeMachineJoystickNetworkState(ArcadeMachineJoystickNetworkState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17};

/// @brief Field joystick, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ArcadeMachineJoystick>  ___joystick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArcadeMachineJoystickNetworkState, ___joystick) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArcadeMachineJoystickNetworkState) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/TeleportingEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportRequest_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_def.hpp"
CORDL_MODULE_EXPORT(TeleportingEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
struct TeleportRequest;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportingEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "TeleportingEventArgs");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs, UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportRequest
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportingEventArgs
class CORDL_TYPE TeleportingEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs {
public:
// Declarations
/// @brief Field <teleportRequest>k__BackingField, offset 0x20, size 0x24 
 __declspec(property(get=__cordl_internal_get__teleportRequest_k__BackingField, put=__cordl_internal_set__teleportRequest_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  _teleportRequest_k__BackingField;

 __declspec(property(get=get_teleportRequest, put=set_teleportRequest)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  teleportRequest;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs* New_ctor() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest const& __cordl_internal_get__teleportRequest_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest& __cordl_internal_get__teleportRequest_k__BackingField() ;

constexpr void __cordl_internal_set__teleportRequest_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  value) ;

/// @brief Method .ctor, addr 0xb44d534, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_teleportRequest, addr 0xb44f8b4, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest get_teleportRequest() ;

/// [CompilerGenerated]
/// @brief Method set_teleportRequest, addr 0xb44f8c8, size 0x14, virtual false, abstract: false, final false
inline void set_teleportRequest(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportingEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportingEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportingEventArgs(TeleportingEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportingEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportingEventArgs(TeleportingEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11366};

/// [CompilerGenerated]
/// @brief Field <teleportRequest>k__BackingField, offset: 0x20, size: 0x24, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  ____teleportRequest_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs, ____teleportRequest_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation

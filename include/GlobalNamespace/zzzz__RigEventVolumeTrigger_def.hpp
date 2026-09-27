#pragma once
// IWYU pragma private; include "GlobalNamespace/RigEventVolumeTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RigEventVolumeTrigger)
namespace GlobalNamespace {
class VRRig;
}
// Forward declare root types
namespace GlobalNamespace {
class RigEventVolumeTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RigEventVolumeTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigEventVolumeTrigger*, "", "RigEventVolumeTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RigEventVolumeTrigger
class CORDL_TYPE RigEventVolumeTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Rig)) ::UnityW<::GlobalNamespace::VRRig>  Rig;

/// @brief Field _rig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rig, put=__cordl_internal_set__rig)) ::UnityW<::GlobalNamespace::VRRig>  _rig;

static inline ::GlobalNamespace::RigEventVolumeTrigger* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__rig() ;

constexpr void __cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5744630, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Rig, addr 0x5744628, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_Rig() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigEventVolumeTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigEventVolumeTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigEventVolumeTrigger(RigEventVolumeTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigEventVolumeTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigEventVolumeTrigger(RigEventVolumeTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1257};

/// [SerializeField]
/// @brief Field _rig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____rig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigEventVolumeTrigger, ____rig) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigEventVolumeTrigger) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

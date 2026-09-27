#pragma once
// IWYU pragma private; include "GlobalNamespace/VStumpActivateTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__VirtualStumpActivateMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VStumpActivateTrigger)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class VStumpActivateTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VStumpActivateTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VStumpActivateTrigger*, "", "VStumpActivateTrigger");
// Dependencies GorillaTagScripts.VirtualStumpCustomMaps.VirtualStumpActivateMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VStumpActivateTrigger
class CORDL_TYPE VStumpActivateTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field armed, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_armed, put=__cordl_internal_set_armed)) bool  armed;

/// @brief Field mode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  mode;

static inline ::GlobalNamespace::VStumpActivateTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5a10888, size 0x12c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5a109b4, size 0xe4, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr bool const& __cordl_internal_get_armed() const;

constexpr bool& __cordl_internal_get_armed() ;

constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode const& __cordl_internal_get_mode() const;

constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode& __cordl_internal_get_mode() ;

constexpr void __cordl_internal_set_armed(bool  value) ;

constexpr void __cordl_internal_set_mode(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  value) ;

/// @brief Method .ctor, addr 0x5a10a98, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VStumpActivateTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VStumpActivateTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VStumpActivateTrigger(VStumpActivateTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VStumpActivateTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VStumpActivateTrigger(VStumpActivateTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2776};

/// [Tooltip("Which hallway this is: FeatureA -> featured map 0, FeatureB -> featured map 1, Custom -> open the stump with no auto-load.")]
/// [SerializeField]
/// @brief Field mode, offset: 0x20, size: 0x4, def value: None
 ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  ___mode;

/// @brief Field armed, offset: 0x24, size: 0x1, def value: None
 bool  ___armed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VStumpActivateTrigger, ___mode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VStumpActivateTrigger, ___armed) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VStumpActivateTrigger) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

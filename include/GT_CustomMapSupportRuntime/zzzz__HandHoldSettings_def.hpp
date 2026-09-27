#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/HandHoldSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__HandHoldSettings_HandSnapMethod_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HandHoldSettings)
namespace GlobalNamespace {
struct HandHoldSettings_HandSnapMethod;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class HandHoldSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::HandHoldSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::HandHoldSettings*, "GT_CustomMapSupportRuntime", "HandHoldSettings");
// [RequireComponent(typeof(UnityEngine.Collider))]
// [DisallowMultipleComponent]
// Dependencies GT_CustomMapSupportRuntime.HandHoldSettings::HandSnapMethod, UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.HandHoldSettings
class CORDL_TYPE HandHoldSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HandSnapMethod = ::GlobalNamespace::HandHoldSettings_HandSnapMethod;

/// @brief Field allowPreGrab, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowPreGrab, put=__cordl_internal_set_allowPreGrab)) bool  allowPreGrab;

/// @brief Field handSnapMethod, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_handSnapMethod, put=__cordl_internal_set_handSnapMethod)) ::GlobalNamespace::HandHoldSettings_HandSnapMethod  handSnapMethod;

/// @brief Field rotatePlayerWhenHeld, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_rotatePlayerWhenHeld, put=__cordl_internal_set_rotatePlayerWhenHeld)) bool  rotatePlayerWhenHeld;

static inline ::GT_CustomMapSupportRuntime::HandHoldSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_allowPreGrab() const;

constexpr bool& __cordl_internal_get_allowPreGrab() ;

constexpr ::GlobalNamespace::HandHoldSettings_HandSnapMethod const& __cordl_internal_get_handSnapMethod() const;

constexpr ::GlobalNamespace::HandHoldSettings_HandSnapMethod& __cordl_internal_get_handSnapMethod() ;

constexpr bool const& __cordl_internal_get_rotatePlayerWhenHeld() const;

constexpr bool& __cordl_internal_get_rotatePlayerWhenHeld() ;

constexpr void __cordl_internal_set_allowPreGrab(bool  value) ;

constexpr void __cordl_internal_set_handSnapMethod(::GlobalNamespace::HandHoldSettings_HandSnapMethod  value) ;

constexpr void __cordl_internal_set_rotatePlayerWhenHeld(bool  value) ;

/// @brief Method .ctor, addr 0x9cb70b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandHoldSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandHoldSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandHoldSettings(HandHoldSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandHoldSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandHoldSettings(HandHoldSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30904};

/// @brief Field handSnapMethod, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::HandHoldSettings_HandSnapMethod  ___handSnapMethod;

/// @brief Field rotatePlayerWhenHeld, offset: 0x24, size: 0x1, def value: None
 bool  ___rotatePlayerWhenHeld;

/// [Tooltip("If TRUE, players will be able to perform the Grab action before their hand collides with this HandHold and it will still be grabbed once their hand comes in contact with the HandHold. If FALSE, players must perform the Grab action while their hand is already near the HandHold for it to be grabbed.")]
/// @brief Field allowPreGrab, offset: 0x25, size: 0x1, def value: None
 bool  ___allowPreGrab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::HandHoldSettings, ___handSnapMethod) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::HandHoldSettings, ___rotatePlayerWhenHeld) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::HandHoldSettings, ___allowPreGrab) == 0x25, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::HandHoldSettings) == 0x28, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime

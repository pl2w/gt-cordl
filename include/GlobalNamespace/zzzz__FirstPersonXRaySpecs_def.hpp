#pragma once
// IWYU pragma private; include "GlobalNamespace/FirstPersonXRaySpecs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FirstPersonXRaySpecs)
// Forward declare root types
namespace GlobalNamespace {
class FirstPersonXRaySpecs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FirstPersonXRaySpecs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FirstPersonXRaySpecs*, "", "FirstPersonXRaySpecs");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FirstPersonXRaySpecs
class CORDL_TYPE FirstPersonXRaySpecs : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::FirstPersonXRaySpecs* New_ctor() ;

/// @brief Method OnDisable, addr 0x5789c28, size 0x54, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5789bd4, size 0x54, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method .ctor, addr 0x5789c7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirstPersonXRaySpecs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirstPersonXRaySpecs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FirstPersonXRaySpecs(FirstPersonXRaySpecs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirstPersonXRaySpecs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirstPersonXRaySpecs(FirstPersonXRaySpecs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1425};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FirstPersonXRaySpecs) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

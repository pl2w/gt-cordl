#pragma once
// IWYU pragma private; include "Oculus/Voice/UX/HierarchySimplifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HierarchySimplifier)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Oculus::Voice::UX {
class HierarchySimplifier;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::UX::HierarchySimplifier*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::UX::HierarchySimplifier*, "Oculus.Voice.UX", "HierarchySimplifier");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Voice::UX {
// Is value type: false
// CS Name: Oculus.Voice.UX.HierarchySimplifier
class CORDL_TYPE HierarchySimplifier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field hideByDefault, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_hideByDefault, put=__cordl_internal_set_hideByDefault)) bool  hideByDefault;

/// @brief Method HideSubObjects, addr 0xb949e28, size 0xb0, virtual false, abstract: false, final false
static inline void HideSubObjects(::UnityEngine::GameObject*  obj, bool  hideObjects) ;

static inline ::Oculus::Voice::UX::HierarchySimplifier* New_ctor() ;

/// @brief Method OnValidate, addr 0xb949f24, size 0x1c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ToggleShowInHierarchyFlag, addr 0xb949ed8, size 0x4c, virtual false, abstract: false, final false
static inline void ToggleShowInHierarchyFlag(::UnityEngine::GameObject*  obj, bool  hideObject) ;

constexpr bool const& __cordl_internal_get_hideByDefault() const;

constexpr bool& __cordl_internal_get_hideByDefault() ;

constexpr void __cordl_internal_set_hideByDefault(bool  value) ;

/// @brief Method .ctor, addr 0xb949f40, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HierarchySimplifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HierarchySimplifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HierarchySimplifier(HierarchySimplifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HierarchySimplifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HierarchySimplifier(HierarchySimplifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31695};

/// [Tooltip("Whether to hide the object on startup, by default.")]
/// [SerializeField]
/// @brief Field hideByDefault, offset: 0x20, size: 0x1, def value: None
 bool  ___hideByDefault;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::UX::HierarchySimplifier, ___hideByDefault) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::UX::HierarchySimplifier) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Voice::UX

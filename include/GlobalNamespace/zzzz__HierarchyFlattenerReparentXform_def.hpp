#pragma once
// IWYU pragma private; include "GlobalNamespace/HierarchyFlattenerReparentXform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HierarchyFlattenerReparentXform)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HierarchyFlattenerReparentXform;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HierarchyFlattenerReparentXform*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HierarchyFlattenerReparentXform*, "", "HierarchyFlattenerReparentXform");
// [DefaultExecutionOrder(-1000)]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HierarchyFlattenerReparentXform
class CORDL_TYPE HierarchyFlattenerReparentXform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _didIt, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__didIt, put=__cordl_internal_set__didIt)) bool  _didIt;

/// @brief Field newParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_newParent, put=__cordl_internal_set_newParent)) ::UnityW<::UnityEngine::Transform>  newParent;

/// @brief Method Awake, addr 0x567b284, size 0x28, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::HierarchyFlattenerReparentXform* New_ctor() ;

/// @brief Method OnEnable, addr 0x567b364, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method _DoIt, addr 0x567b2ac, size 0xb8, virtual false, abstract: false, final false
inline void _DoIt() ;

constexpr bool const& __cordl_internal_get__didIt() const;

constexpr bool& __cordl_internal_get__didIt() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_newParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_newParent() ;

constexpr void __cordl_internal_set__didIt(bool  value) ;

constexpr void __cordl_internal_set_newParent(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x567b368, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HierarchyFlattenerReparentXform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HierarchyFlattenerReparentXform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HierarchyFlattenerReparentXform(HierarchyFlattenerReparentXform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyFlattenerReparentXform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HierarchyFlattenerReparentXform(HierarchyFlattenerReparentXform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{854};

/// @brief Field newParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___newParent;

/// @brief Field _didIt, offset: 0x28, size: 0x1, def value: None
 bool  ____didIt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HierarchyFlattenerReparentXform, ___newParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyFlattenerReparentXform, ____didIt) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HierarchyFlattenerReparentXform) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

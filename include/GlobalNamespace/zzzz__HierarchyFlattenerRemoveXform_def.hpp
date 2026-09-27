#pragma once
// IWYU pragma private; include "GlobalNamespace/HierarchyFlattenerRemoveXform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HierarchyFlattenerRemoveXform)
// Forward declare root types
namespace GlobalNamespace {
class HierarchyFlattenerRemoveXform;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HierarchyFlattenerRemoveXform*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HierarchyFlattenerRemoveXform*, "", "HierarchyFlattenerRemoveXform");
// [DefaultExecutionOrder(-1000)]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HierarchyFlattenerRemoveXform
class CORDL_TYPE HierarchyFlattenerRemoveXform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _didIt, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__didIt, put=__cordl_internal_set__didIt)) bool  _didIt;

/// @brief Method Awake, addr 0x567b0d8, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::HierarchyFlattenerRemoveXform* New_ctor() ;

/// @brief Method _DoIt, addr 0x567b0dc, size 0x1a0, virtual false, abstract: false, final false
inline void _DoIt() ;

constexpr bool const& __cordl_internal_get__didIt() const;

constexpr bool& __cordl_internal_get__didIt() ;

constexpr void __cordl_internal_set__didIt(bool  value) ;

/// @brief Method .ctor, addr 0x567b27c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HierarchyFlattenerRemoveXform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HierarchyFlattenerRemoveXform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HierarchyFlattenerRemoveXform(HierarchyFlattenerRemoveXform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyFlattenerRemoveXform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HierarchyFlattenerRemoveXform(HierarchyFlattenerRemoveXform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{853};

/// @brief Field _didIt, offset: 0x20, size: 0x1, def value: None
 bool  ____didIt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HierarchyFlattenerRemoveXform, ____didIt) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HierarchyFlattenerRemoveXform) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

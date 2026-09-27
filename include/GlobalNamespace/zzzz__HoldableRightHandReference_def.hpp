#pragma once
// IWYU pragma private; include "GlobalNamespace/HoldableRightHandReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HoldableRightHandReference)
// Forward declare root types
namespace GlobalNamespace {
class HoldableRightHandReference;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HoldableRightHandReference*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HoldableRightHandReference*, "", "HoldableRightHandReference");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HoldableRightHandReference
class CORDL_TYPE HoldableRightHandReference : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::HoldableRightHandReference* New_ctor() ;

/// @brief Method .ctor, addr 0x567b378, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoldableRightHandReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoldableRightHandReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoldableRightHandReference(HoldableRightHandReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoldableRightHandReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoldableRightHandReference(HoldableRightHandReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{856};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HoldableRightHandReference) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

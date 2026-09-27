#pragma once
// IWYU pragma private; include "GlobalNamespace/HoldableLeftHandReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HoldableLeftHandReference)
// Forward declare root types
namespace GlobalNamespace {
class HoldableLeftHandReference;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HoldableLeftHandReference*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HoldableLeftHandReference*, "", "HoldableLeftHandReference");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HoldableLeftHandReference
class CORDL_TYPE HoldableLeftHandReference : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::HoldableLeftHandReference* New_ctor() ;

/// @brief Method .ctor, addr 0x567b370, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoldableLeftHandReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoldableLeftHandReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoldableLeftHandReference(HoldableLeftHandReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoldableLeftHandReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoldableLeftHandReference(HoldableLeftHandReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{855};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HoldableLeftHandReference) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

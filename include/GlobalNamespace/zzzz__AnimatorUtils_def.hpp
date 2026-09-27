#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatorUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AnimatorUtils)
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimatorUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimatorUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimatorUtils*, "", "AnimatorUtils");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimatorUtils
class CORDL_TYPE AnimatorUtils : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ResetToEntryState, addr 0x5ae0d8c, size 0x90, virtual false, abstract: false, final false
static inline void ResetToEntryState(::UnityEngine::Animator*  a) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatorUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatorUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatorUtils(AnimatorUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatorUtils(AnimatorUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3454};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AnimatorUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

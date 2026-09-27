#pragma once
// IWYU pragma private; include "GorillaTag/DeactivateOnAwake.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DeactivateOnAwake)
// Forward declare root types
namespace GorillaTag {
class DeactivateOnAwake;
}
// Write type traits
MARK_REF_T(::GorillaTag::DeactivateOnAwake*);
DEFINE_IL2CPP_CLASS(::GorillaTag::DeactivateOnAwake*, "GorillaTag", "DeactivateOnAwake");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.DeactivateOnAwake
class CORDL_TYPE DeactivateOnAwake : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x5d23fcc, size 0x78, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::DeactivateOnAwake* New_ctor() ;

/// @brief Method .ctor, addr 0x5d24044, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeactivateOnAwake() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeactivateOnAwake", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeactivateOnAwake(DeactivateOnAwake && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeactivateOnAwake", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeactivateOnAwake(DeactivateOnAwake const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4614};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::DeactivateOnAwake) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag

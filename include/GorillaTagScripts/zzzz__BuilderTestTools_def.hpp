#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTestTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BuilderTestTools)
// Forward declare root types
namespace GorillaTagScripts {
class BuilderTestTools;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::BuilderTestTools*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderTestTools*, "GorillaTagScripts", "BuilderTestTools");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderTestTools
class CORDL_TYPE BuilderTestTools : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x5bb5884, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTagScripts::BuilderTestTools* New_ctor() ;

/// @brief Method .ctor, addr 0x5bb58dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTestTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderTestTools", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderTestTools(BuilderTestTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderTestTools", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderTestTools(BuilderTestTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3963};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::BuilderTestTools) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts

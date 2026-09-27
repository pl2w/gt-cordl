#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderEnv.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BuilderEnv)
// Forward declare root types
namespace GlobalNamespace {
class BuilderEnv;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderEnv*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderEnv*, "", "BuilderEnv");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderEnv
class CORDL_TYPE BuilderEnv : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::BuilderEnv* New_ctor() ;

/// @brief Method Start, addr 0x57baef4, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x57baef8, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x57baefc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderEnv() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderEnv", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderEnv(BuilderEnv && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderEnv", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderEnv(BuilderEnv const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1589};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BuilderEnv) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

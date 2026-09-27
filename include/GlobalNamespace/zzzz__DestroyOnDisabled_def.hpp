#pragma once
// IWYU pragma private; include "GlobalNamespace/DestroyOnDisabled.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DestroyOnDisabled)
// Forward declare root types
namespace GlobalNamespace {
class DestroyOnDisabled;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DestroyOnDisabled*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DestroyOnDisabled*, "", "DestroyOnDisabled");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DestroyOnDisabled
class CORDL_TYPE DestroyOnDisabled : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::DestroyOnDisabled* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b07b40, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method .ctor, addr 0x5b07bac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DestroyOnDisabled() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DestroyOnDisabled", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DestroyOnDisabled(DestroyOnDisabled && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DestroyOnDisabled", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DestroyOnDisabled(DestroyOnDisabled const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3491};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DestroyOnDisabled) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/DevPrefs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(DevPrefs)
// Forward declare root types
namespace GlobalNamespace {
class DevPrefs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevPrefs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevPrefs*, "", "DevPrefs");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevPrefs
class CORDL_TYPE DevPrefs : public ::UnityEngine::ScriptableObject {
public:
// Declarations
static inline ::GlobalNamespace::DevPrefs* New_ctor() ;

/// @brief Method .ctor, addr 0x5ac2808, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevPrefs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevPrefs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevPrefs(DevPrefs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevPrefs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevPrefs(DevPrefs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3351};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DevPrefs) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

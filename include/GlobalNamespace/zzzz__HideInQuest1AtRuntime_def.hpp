#pragma once
// IWYU pragma private; include "GlobalNamespace/HideInQuest1AtRuntime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HideInQuest1AtRuntime)
// Forward declare root types
namespace GlobalNamespace {
class HideInQuest1AtRuntime;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HideInQuest1AtRuntime*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HideInQuest1AtRuntime*, "", "HideInQuest1AtRuntime");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HideInQuest1AtRuntime
class CORDL_TYPE HideInQuest1AtRuntime : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::HideInQuest1AtRuntime* New_ctor() ;

/// @brief Method OnEnable, addr 0x5b08374, size 0x124, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method .ctor, addr 0x5b08498, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HideInQuest1AtRuntime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HideInQuest1AtRuntime", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HideInQuest1AtRuntime(HideInQuest1AtRuntime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HideInQuest1AtRuntime", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HideInQuest1AtRuntime(HideInQuest1AtRuntime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3503};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HideInQuest1AtRuntime) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

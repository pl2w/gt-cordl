#pragma once
// IWYU pragma private; include "GlobalNamespace/SnowballKnockbackEnabler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SnowballKnockbackEnabler)
// Forward declare root types
namespace GlobalNamespace {
class SnowballKnockbackEnabler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SnowballKnockbackEnabler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SnowballKnockbackEnabler*, "", "SnowballKnockbackEnabler");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SnowballKnockbackEnabler
class CORDL_TYPE SnowballKnockbackEnabler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::SnowballKnockbackEnabler* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e03060, size 0x54, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5e0300c, size 0x54, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method .ctor, addr 0x5e030b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnowballKnockbackEnabler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnowballKnockbackEnabler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnowballKnockbackEnabler(SnowballKnockbackEnabler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnowballKnockbackEnabler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnowballKnockbackEnabler(SnowballKnockbackEnabler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{520};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SnowballKnockbackEnabler) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

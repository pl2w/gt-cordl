#pragma once
// IWYU pragma private; include "GlobalNamespace/RadialGravity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RadialGravity)
// Forward declare root types
namespace GlobalNamespace {
class RadialGravity;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RadialGravity*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RadialGravity*, "", "RadialGravity");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RadialGravity
class CORDL_TYPE RadialGravity : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::RadialGravity* New_ctor() ;

/// @brief Method Start, addr 0x5640518, size 0x36c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0x5640884, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RadialGravity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RadialGravity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RadialGravity(RadialGravity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RadialGravity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RadialGravity(RadialGravity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{648};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RadialGravity) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

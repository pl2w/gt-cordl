#pragma once
// IWYU pragma private; include "GlobalNamespace/DoNotShip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DoNotShip)
namespace GlobalNamespace {
class IBuildValidation;
}
// Forward declare root types
namespace GlobalNamespace {
class DoNotShip;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DoNotShip*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DoNotShip*, "", "DoNotShip");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DoNotShip
class CORDL_TYPE DoNotShip : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method IBuildValidation.BuildValidationCheck, addr 0x5704814, size 0xc4, virtual true, abstract: false, final true
inline bool IBuildValidation_BuildValidationCheck() ;

static inline ::GlobalNamespace::DoNotShip* New_ctor() ;

/// @brief Method .ctor, addr 0x57048d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DoNotShip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DoNotShip", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DoNotShip(DoNotShip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DoNotShip", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DoNotShip(DoNotShip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{155};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DoNotShip) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

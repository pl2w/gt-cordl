#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPowerGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GRPowerGenerator)
// Forward declare root types
namespace GlobalNamespace {
class GRPowerGenerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRPowerGenerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRPowerGenerator*, "", "GRPowerGenerator");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRPowerGenerator
class CORDL_TYPE GRPowerGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GRPowerGenerator* New_ctor() ;

/// @brief Method .ctor, addr 0x58a6958, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRPowerGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRPowerGenerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRPowerGenerator(GRPowerGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRPowerGenerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRPowerGenerator(GRPowerGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2011};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GRPowerGenerator) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

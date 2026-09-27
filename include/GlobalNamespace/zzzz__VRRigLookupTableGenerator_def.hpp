#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigLookupTableGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VRRigLookupTableGenerator)
// Forward declare root types
namespace GlobalNamespace {
class VRRigLookupTableGenerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VRRigLookupTableGenerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRigLookupTableGenerator*, "", "VRRigLookupTableGenerator");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRRigLookupTableGenerator
class CORDL_TYPE VRRigLookupTableGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::VRRigLookupTableGenerator* New_ctor() ;

/// @brief Method Start, addr 0x5a11340, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5a11344, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5a11348, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRRigLookupTableGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRRigLookupTableGenerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRRigLookupTableGenerator(VRRigLookupTableGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRRigLookupTableGenerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRRigLookupTableGenerator(VRRigLookupTableGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2781};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::VRRigLookupTableGenerator) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

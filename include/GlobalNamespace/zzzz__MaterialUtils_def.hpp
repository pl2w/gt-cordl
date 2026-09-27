#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MaterialUtils)
namespace GlobalNamespace {
class MeshAndMaterials;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MaterialUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaterialUtils*, "", "MaterialUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialUtils
class CORDL_TYPE MaterialUtils : public ::System::Object {
public:
// Declarations
/// @brief Method GetTrimmedMaterialName, addr 0x58b804c, size 0x84, virtual false, abstract: false, final false
static inline ::StringW GetTrimmedMaterialName(::UnityEngine::Material*  material) ;

/// @brief Method SwapMaterial, addr 0x58b80d0, size 0x2c4, virtual false, abstract: false, final false
static inline void SwapMaterial(::GlobalNamespace::MeshAndMaterials*  meshAndMaterial, bool  isOnToOff) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialUtils(MaterialUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialUtils(MaterialUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2050};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MaterialUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

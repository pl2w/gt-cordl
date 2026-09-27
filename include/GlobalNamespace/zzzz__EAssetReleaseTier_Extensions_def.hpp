#pragma once
// IWYU pragma private; include "GlobalNamespace/EAssetReleaseTier_Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EAssetReleaseTier_Extensions)
namespace GlobalNamespace {
struct EAssetReleaseTier;
}
namespace GlobalNamespace {
struct EBuildReleaseTier;
}
// Forward declare root types
namespace GlobalNamespace {
class EAssetReleaseTier_Extensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EAssetReleaseTier_Extensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EAssetReleaseTier_Extensions*, "", "EAssetReleaseTier_Extensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EAssetReleaseTier_Extensions
class CORDL_TYPE EAssetReleaseTier_Extensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ShouldIncludeInBuild, addr 0x58dc1c8, size 0x10, virtual false, abstract: false, final false
static inline bool ShouldIncludeInBuild(::GlobalNamespace::EAssetReleaseTier  assetTier, ::GlobalNamespace::EBuildReleaseTier  buildTier) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EAssetReleaseTier_Extensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EAssetReleaseTier_Extensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EAssetReleaseTier_Extensions(EAssetReleaseTier_Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EAssetReleaseTier_Extensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EAssetReleaseTier_Extensions(EAssetReleaseTier_Extensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{247};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EAssetReleaseTier_Extensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

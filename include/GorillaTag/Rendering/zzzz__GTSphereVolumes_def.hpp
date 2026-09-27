#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/GTSphereVolumes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GTSphereVolumes)
// Forward declare root types
namespace GorillaTag::Rendering {
class GTSphereVolumes;
}
// Write type traits
MARK_REF_T(::GorillaTag::Rendering::GTSphereVolumes*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Rendering::GTSphereVolumes*, "GorillaTag.Rendering", "GTSphereVolumes");
// Dependencies System.Object
namespace GorillaTag::Rendering {
// Is value type: false
// CS Name: GorillaTag.Rendering.GTSphereVolumes
class CORDL_TYPE GTSphereVolumes : public ::System::Object {
public:
// Declarations
static inline ::GorillaTag::Rendering::GTSphereVolumes* New_ctor() ;

/// @brief Method .ctor, addr 0x5d5e520, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTSphereVolumes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTSphereVolumes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTSphereVolumes(GTSphereVolumes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTSphereVolumes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTSphereVolumes(GTSphereVolumes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4817};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Rendering::GTSphereVolumes) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::Rendering

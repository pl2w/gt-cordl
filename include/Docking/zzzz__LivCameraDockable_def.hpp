#pragma once
// IWYU pragma private; include "Docking/LivCameraDockable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Docking/zzzz__Dockable_def.hpp"
CORDL_MODULE_EXPORT(LivCameraDockable)
// Forward declare root types
namespace Docking {
class LivCameraDockable;
}
// Write type traits
MARK_REF_T(::Docking::LivCameraDockable*);
DEFINE_IL2CPP_CLASS(::Docking::LivCameraDockable*, "Docking", "LivCameraDockable");
// Dependencies Docking.Dockable
namespace Docking {
// Is value type: false
// CS Name: Docking.LivCameraDockable
class CORDL_TYPE LivCameraDockable : public ::Docking::Dockable {
public:
// Declarations
/// @brief Method Dock, addr 0x5ddcf9c, size 0x160, virtual true, abstract: false, final false
inline void Dock() ;

static inline ::Docking::LivCameraDockable* New_ctor() ;

/// @brief Method .ctor, addr 0x5ddd0fc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LivCameraDockable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LivCameraDockable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LivCameraDockable(LivCameraDockable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LivCameraDockable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LivCameraDockable(LivCameraDockable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5111};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Docking::LivCameraDockable) == 0x38, "Size mismatch!");

} // namespace end def Docking

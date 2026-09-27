#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetProjectileType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SIGadgetProjectileType)
namespace GlobalNamespace {
class SIPlayer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetProjectileType;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetProjectileType*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetProjectileType*, "", "SIGadgetProjectileType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetProjectileType
class CORDL_TYPE SIGadgetProjectileType {
public:
// Declarations
/// @brief Method LocalProjectileHit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LocalProjectileHit(::GlobalNamespace::SIPlayer*  player) ;

/// @brief Method NetworkedProjectileHit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void NetworkedProjectileHit(::ArrayW<::System::Object*>  data) ;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetProjectileType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetProjectileType(SIGadgetProjectileType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{226};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace

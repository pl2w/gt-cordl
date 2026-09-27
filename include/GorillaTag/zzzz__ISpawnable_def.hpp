#pragma once
// IWYU pragma private; include "GorillaTag/ISpawnable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISpawnable)
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
// Forward declare root types
namespace GorillaTag {
class ISpawnable;
}
// Write type traits
MARK_REF_T(::GorillaTag::ISpawnable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::ISpawnable*, "GorillaTag", "ISpawnable");
// Dependencies 
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.ISpawnable
class CORDL_TYPE ISpawnable {
public:
// Declarations
 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Method OnDespawn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDespawn() ;

/// @brief Method OnSpawn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method get_CosmeticSelectedSide, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// @brief Method get_IsSpawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsSpawned() ;

/// @brief Method set_CosmeticSelectedSide, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// @brief Method set_IsSpawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_IsSpawned(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ISpawnable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISpawnable(ISpawnable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4595};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag

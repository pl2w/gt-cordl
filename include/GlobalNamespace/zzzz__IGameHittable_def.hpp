#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameHittable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGameHittable)
namespace GlobalNamespace {
struct GameHitData;
}
// Forward declare root types
namespace GlobalNamespace {
class IGameHittable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGameHittable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGameHittable*, "", "IGameHittable");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGameHittable
class CORDL_TYPE IGameHittable {
public:
// Declarations
/// @brief Method IsHitValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsHitValid(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnHit(::GlobalNamespace::GameHitData  hit) ;

// Ctor Parameters [CppParam { name: "", ty: "IGameHittable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGameHittable(IGameHittable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1765};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace

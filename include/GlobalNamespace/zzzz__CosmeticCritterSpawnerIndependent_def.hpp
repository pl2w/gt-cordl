#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterSpawnerIndependent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticCritterSpawner_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticCritterSpawnerIndependent)
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCritterSpawnerIndependent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCritterSpawnerIndependent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterSpawnerIndependent*, "", "CosmeticCritterSpawnerIndependent");
// Dependencies CosmeticCritterSpawner
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritterSpawnerIndependent
class CORDL_TYPE CosmeticCritterSpawnerIndependent : public ::GlobalNamespace::CosmeticCritterSpawner {
public:
// Declarations
/// @brief Method CanSpawnLocal, addr 0x5800f3c, size 0x14, virtual true, abstract: false, final false
inline bool CanSpawnLocal() ;

/// @brief Method CanSpawnRemote, addr 0x5800f50, size 0x30, virtual true, abstract: false, final false
inline bool CanSpawnRemote(double_t  serverTime) ;

static inline ::GlobalNamespace::CosmeticCritterSpawnerIndependent* New_ctor() ;

/// @brief Method OnDisable, addr 0x5800fe4, size 0x64, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5800f80, size 0x64, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method .ctor, addr 0x5801048, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterSpawnerIndependent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterSpawnerIndependent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritterSpawnerIndependent(CosmeticCritterSpawnerIndependent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterSpawnerIndependent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritterSpawnerIndependent(CosmeticCritterSpawnerIndependent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1670};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CosmeticCritterSpawnerIndependent) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

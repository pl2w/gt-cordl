#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/AISpawnPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AISpawnPoint)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class AISpawnPoint;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::AISpawnPoint*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::AISpawnPoint*, "GT_CustomMapSupportRuntime", "AISpawnPoint");
// Dependencies UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.AISpawnPoint
class CORDL_TYPE AISpawnPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field spawnCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnCount, put=__cordl_internal_set_spawnCount)) int32_t  spawnCount;

/// @brief Field spawnID, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnID, put=__cordl_internal_set_spawnID)) ::StringW  spawnID;

static inline ::GT_CustomMapSupportRuntime::AISpawnPoint* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_spawnCount() const;

constexpr int32_t& __cordl_internal_get_spawnCount() ;

constexpr ::StringW const& __cordl_internal_get_spawnID() const;

constexpr ::StringW& __cordl_internal_get_spawnID() ;

constexpr void __cordl_internal_set_spawnCount(int32_t  value) ;

constexpr void __cordl_internal_set_spawnID(::StringW  value) ;

/// @brief Method .ctor, addr 0x9cb1804, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AISpawnPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AISpawnPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AISpawnPoint(AISpawnPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AISpawnPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AISpawnPoint(AISpawnPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30877};

/// [Nullable(1)]
/// @brief Field spawnID, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___spawnID;

/// @brief Field spawnCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___spawnCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::AISpawnPoint, ___spawnID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AISpawnPoint, ___spawnCount) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::AISpawnPoint) == 0x30, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime

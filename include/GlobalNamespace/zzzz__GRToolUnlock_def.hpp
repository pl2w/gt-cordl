#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUnlock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolUpgrade_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolUnlock)
// Forward declare root types
namespace GlobalNamespace {
class GRToolUnlock;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolUnlock*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolUnlock*, "", "GRToolUnlock");
// Dependencies GRToolUpgrade, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolUnlock
class CORDL_TYPE GRToolUnlock : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field toolId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolId, put=__cordl_internal_set_toolId)) ::StringW  toolId;

/// @brief Field toolName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolName, put=__cordl_internal_set_toolName)) ::StringW  toolName;

/// @brief Field toolUpgrades, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolUpgrades, put=__cordl_internal_set_toolUpgrades)) ::ArrayW<::UnityW<::GlobalNamespace::GRToolUpgrade>>  toolUpgrades;

/// @brief Field unlockCost, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_unlockCost, put=__cordl_internal_set_unlockCost)) int32_t  unlockCost;

/// @brief Field unlockLevel, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_unlockLevel, put=__cordl_internal_set_unlockLevel)) int32_t  unlockLevel;

static inline ::GlobalNamespace::GRToolUnlock* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_toolId() const;

constexpr ::StringW& __cordl_internal_get_toolId() ;

constexpr ::StringW const& __cordl_internal_get_toolName() const;

constexpr ::StringW& __cordl_internal_get_toolName() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GRToolUpgrade>> const& __cordl_internal_get_toolUpgrades() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GRToolUpgrade>>& __cordl_internal_get_toolUpgrades() ;

constexpr int32_t const& __cordl_internal_get_unlockCost() const;

constexpr int32_t& __cordl_internal_get_unlockCost() ;

constexpr int32_t const& __cordl_internal_get_unlockLevel() const;

constexpr int32_t& __cordl_internal_get_unlockLevel() ;

constexpr void __cordl_internal_set_toolId(::StringW  value) ;

constexpr void __cordl_internal_set_toolName(::StringW  value) ;

constexpr void __cordl_internal_set_toolUpgrades(::ArrayW<::UnityW<::GlobalNamespace::GRToolUpgrade>>  value) ;

constexpr void __cordl_internal_set_unlockCost(int32_t  value) ;

constexpr void __cordl_internal_set_unlockLevel(int32_t  value) ;

/// @brief Method .ctor, addr 0x58c843c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolUnlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolUnlock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolUnlock(GRToolUnlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolUnlock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolUnlock(GRToolUnlock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2085};

/// @brief Field toolName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___toolName;

/// @brief Field toolId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___toolId;

/// @brief Field unlockLevel, offset: 0x28, size: 0x4, def value: None
 int32_t  ___unlockLevel;

/// @brief Field unlockCost, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___unlockCost;

/// @brief Field toolUpgrades, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GRToolUpgrade>>  ___toolUpgrades;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolUnlock, ___toolName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUnlock, ___toolId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUnlock, ___unlockLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUnlock, ___unlockCost) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUnlock, ___toolUpgrades) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolUnlock) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

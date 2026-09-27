#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgrade.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolUpgrade_ToolUpgradeLevel_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GRToolUpgrade)
namespace GlobalNamespace {
struct GRToolUpgrade_ToolUpgradeLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolUpgrade;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolUpgrade*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolUpgrade*, "", "GRToolUpgrade");
// Dependencies GRToolUpgrade::ToolUpgradeLevel, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolUpgrade
class CORDL_TYPE GRToolUpgrade : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ToolUpgradeLevel = ::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel;

/// @brief Field description, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_description, put=__cordl_internal_set_description)) ::StringW  description;

/// @brief Field upgradeId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradeId, put=__cordl_internal_set_upgradeId)) ::StringW  upgradeId;

/// @brief Field upgradeLevels, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradeLevels, put=__cordl_internal_set_upgradeLevels)) ::ArrayW<::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel>  upgradeLevels;

/// @brief Field upgradeName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradeName, put=__cordl_internal_set_upgradeName)) ::StringW  upgradeName;

static inline ::GlobalNamespace::GRToolUpgrade* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_description() const;

constexpr ::StringW& __cordl_internal_get_description() ;

constexpr ::StringW const& __cordl_internal_get_upgradeId() const;

constexpr ::StringW& __cordl_internal_get_upgradeId() ;

constexpr ::ArrayW<::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel> const& __cordl_internal_get_upgradeLevels() const;

constexpr ::ArrayW<::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel>& __cordl_internal_get_upgradeLevels() ;

constexpr ::StringW const& __cordl_internal_get_upgradeName() const;

constexpr ::StringW& __cordl_internal_get_upgradeName() ;

constexpr void __cordl_internal_set_description(::StringW  value) ;

constexpr void __cordl_internal_set_upgradeId(::StringW  value) ;

constexpr void __cordl_internal_set_upgradeLevels(::ArrayW<::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel>  value) ;

constexpr void __cordl_internal_set_upgradeName(::StringW  value) ;

/// @brief Method .ctor, addr 0x58c8444, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolUpgrade() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgrade", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolUpgrade(GRToolUpgrade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgrade", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolUpgrade(GRToolUpgrade const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2087};

/// @brief Field upgradeName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___upgradeName;

/// @brief Field description, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___description;

/// @brief Field upgradeId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___upgradeId;

/// [SerializeField]
/// @brief Field upgradeLevels, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel>  ___upgradeLevels;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolUpgrade, ___upgradeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgrade, ___description) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgrade, ___upgradeId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgrade, ___upgradeLevels) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolUpgrade) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

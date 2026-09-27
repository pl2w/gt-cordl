#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUpgradeBasedGenericEntry_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SIUpgradeBasedGenericEntry_1)
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace GlobalNamespace {
struct SIUpgradeType;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct SIUpgradeBasedGenericEntry_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::SIUpgradeBasedGenericEntry_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::SIUpgradeBasedGenericEntry_1, "", "SIUpgradeBasedGenericEntry`1");
// Dependencies SIUpgradeType
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: SIUpgradeBasedGenericEntry`1<T>
struct CORDL_TYPE SIUpgradeBasedGenericEntry_1 {
public:
// Declarations
/// @brief Method IsActive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsActive(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

// Ctor Parameters []
// @brief default ctor
constexpr SIUpgradeBasedGenericEntry_1() ;

// Ctor Parameters [CppParam { name: "value", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "activeRequirements", ty: "::ArrayW<::GlobalNamespace::SIUpgradeType>", modifiers: "", def_value: None, comment: None }, CppParam { name: "inactiveRequirements", ty: "::ArrayW<::GlobalNamespace::SIUpgradeType>", modifiers: "", def_value: None, comment: None }]
constexpr SIUpgradeBasedGenericEntry_1(T  value, ::ArrayW<::GlobalNamespace::SIUpgradeType>  activeRequirements, ::ArrayW<::GlobalNamespace::SIUpgradeType>  inactiveRequirements) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{287};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field value, offset: 0x0, size: 0x8, def value: None
 T  value;

/// [Tooltip("For the objects to become activated, you must match AT LEAST ONE appearRequirement (if there are any), and not match any disappearRequirements.")]
/// @brief Field activeRequirements, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SIUpgradeType>  activeRequirements;

/// [Tooltip("For the objects to become deactivated, you must match AT LEAST ONE disappearRequirement (if there are any).")]
/// @brief Field inactiveRequirements, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SIUpgradeType>  inactiveRequirements;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

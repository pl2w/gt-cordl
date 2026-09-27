#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUpgradeBasedGeneric_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIUpgradeBasedGenericEntry_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SIUpgradeBasedGeneric_1)
namespace GlobalNamespace {
template<typename T>
struct SIUpgradeBasedGenericEntry_1;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct SIUpgradeBasedGeneric_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::SIUpgradeBasedGeneric_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::SIUpgradeBasedGeneric_1, "", "SIUpgradeBasedGeneric`1");
// Dependencies SIUpgradeBasedGenericEntry`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: SIUpgradeBasedGeneric`1<T>
struct CORDL_TYPE SIUpgradeBasedGeneric_1 {
public:
// Declarations
/// @brief Method TryGetActiveValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetActiveValue(::GlobalNamespace::SIUpgradeSet  withUpgrades, ::by_ref<T>  out_value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SIUpgradeBasedGeneric_1() ;

// Ctor Parameters [CppParam { name: "entries", ty: "::ArrayW<::GlobalNamespace::SIUpgradeBasedGenericEntry_1<T>>", modifiers: "", def_value: None, comment: None }]
constexpr SIUpgradeBasedGeneric_1(::ArrayW<::GlobalNamespace::SIUpgradeBasedGenericEntry_1<T>>  entries) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{286};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field entries, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SIUpgradeBasedGenericEntry_1<T>>  entries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUpgradeSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIUpgradeSet)
namespace GlobalNamespace {
class SIPlayer;
}
namespace GlobalNamespace {
struct SITechTreePageId;
}
namespace GlobalNamespace {
struct SIUpgradeType;
}
// Forward declare root types
namespace GlobalNamespace {
struct SIUpgradeSet;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIUpgradeSet);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIUpgradeSet, "", "SIUpgradeSet");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIUpgradeSet
struct CORDL_TYPE SIUpgradeSet {
public:
// Declarations
/// @brief Method Add, addr 0x59d6bc8, size 0x18, virtual false, abstract: false, final false
inline void Add(int32_t  nodeId) ;

/// @brief Method Add, addr 0x59d6b90, size 0x38, virtual false, abstract: false, final false
inline void Add(::GlobalNamespace::SIUpgradeType  upgrade) ;

/// @brief Method Clear, addr 0x59d6aac, size 0x8, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Contains, addr 0x59d5db0, size 0x30, virtual false, abstract: false, final false
inline bool Contains(::GlobalNamespace::SIUpgradeType  upgrade) ;

/// @brief Method ContainsAny, addr 0x59d6c18, size 0x88, virtual false, abstract: false, final false
inline bool ContainsAny(/* [ParamArray] */ ::ArrayW<::GlobalNamespace::SIUpgradeType>  upgrades) ;

/// @brief Method GetBits, addr 0x59d6abc, size 0x8, virtual false, abstract: false, final false
inline int32_t GetBits() ;

/// @brief Method GetCreateData, addr 0x59d6acc, size 0x28, virtual false, abstract: false, final false
inline int64_t GetCreateData(::GlobalNamespace::SIPlayer*  player) ;

/// @brief Method GetString, addr 0x59d6ca0, size 0x108, virtual false, abstract: false, final false
inline ::StringW GetString(::GlobalNamespace::SITechTreePageId  pageId) ;

/// @brief Method Remove, addr 0x59d6be0, size 0x38, virtual false, abstract: false, final false
inline void Remove(::GlobalNamespace::SIUpgradeType  upgrade) ;

/// @brief Method SetBits, addr 0x59d6ac4, size 0x8, virtual false, abstract: false, final false
inline void SetBits(int32_t  bits) ;

/// @brief Method .ctor, addr 0x59d6ab4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  bits) ;

// Ctor Parameters []
// @brief default ctor
constexpr SIUpgradeSet() ;

// Ctor Parameters [CppParam { name: "backingBits", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIUpgradeSet(int32_t  backingBits) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{291};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field backingBits, offset: 0x0, size: 0x4, def value: None
 int32_t  backingBits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIUpgradeSet, backingBits) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIUpgradeSet) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "PlayFab/PluginContractKeyComparator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/zzzz__PluginContractKey_def.hpp"
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PluginContractKeyComparator)
namespace PlayFab {
struct PluginContractKey;
}
// Forward declare root types
namespace PlayFab {
class PluginContractKeyComparator;
}
// Write type traits
MARK_REF_T(::PlayFab::PluginContractKeyComparator*);
DEFINE_IL2CPP_CLASS(::PlayFab::PluginContractKeyComparator*, "PlayFab", "PluginContractKeyComparator");
// Dependencies PlayFab.PluginContractKey, System.Collections.Generic.EqualityComparer`1<T>
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PluginContractKeyComparator
class CORDL_TYPE PluginContractKeyComparator : public ::System::Collections::Generic::EqualityComparer_1<::PlayFab::PluginContractKey> {
public:
// Declarations
/// @brief Method Equals, addr 0xa7de90c, size 0x2c, virtual true, abstract: false, final false
inline bool Equals(::PlayFab::PluginContractKey  x, ::PlayFab::PluginContractKey  y) ;

/// @brief Method GetHashCode, addr 0xa7de938, size 0x2c, virtual true, abstract: false, final false
inline int32_t GetHashCode(::PlayFab::PluginContractKey  obj) ;

static inline ::PlayFab::PluginContractKeyComparator* New_ctor() ;

/// @brief Method .ctor, addr 0xa7de964, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PluginContractKeyComparator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PluginContractKeyComparator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PluginContractKeyComparator(PluginContractKeyComparator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PluginContractKeyComparator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PluginContractKeyComparator(PluginContractKeyComparator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19527};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::PluginContractKeyComparator) == 0x10, "Size mismatch!");

} // namespace end def PlayFab

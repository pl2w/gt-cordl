#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomLocalizedStrings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RandomContainer_1_def.hpp"
CORDL_MODULE_EXPORT(RandomLocalizedStrings)
namespace UnityEngine::Localization {
class LocalizedString;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomLocalizedStrings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RandomLocalizedStrings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RandomLocalizedStrings*, "", "RandomLocalizedStrings");
// Dependencies RandomContainer`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomLocalizedStrings
class CORDL_TYPE RandomLocalizedStrings : public ::GlobalNamespace::RandomContainer_1<::UnityEngine::Localization::LocalizedString*> {
public:
// Declarations
static inline ::GlobalNamespace::RandomLocalizedStrings* New_ctor() ;

/// @brief Method .ctor, addr 0x5ac2588, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomLocalizedStrings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomLocalizedStrings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomLocalizedStrings(RandomLocalizedStrings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomLocalizedStrings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomLocalizedStrings(RandomLocalizedStrings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3348};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RandomLocalizedStrings) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

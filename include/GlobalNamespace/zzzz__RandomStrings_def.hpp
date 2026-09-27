#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomStrings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RandomContainer_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RandomStrings)
// Forward declare root types
namespace GlobalNamespace {
class RandomStrings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RandomStrings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RandomStrings*, "", "RandomStrings");
// Dependencies RandomContainer`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomStrings
class CORDL_TYPE RandomStrings : public ::GlobalNamespace::RandomContainer_1<::StringW> {
public:
// Declarations
static inline ::GlobalNamespace::RandomStrings* New_ctor() ;

/// @brief Method .ctor, addr 0x5ac25d0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomStrings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomStrings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomStrings(RandomStrings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomStrings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomStrings(RandomStrings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3349};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RandomStrings) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

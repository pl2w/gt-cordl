#pragma once
// IWYU pragma private; include "GlobalNamespace/IBuilderTappable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IBuilderTappable)
// Forward declare root types
namespace GlobalNamespace {
class IBuilderTappable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IBuilderTappable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IBuilderTappable*, "", "IBuilderTappable");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBuilderTappable
class CORDL_TYPE IBuilderTappable {
public:
// Declarations
/// @brief Method OnTapLocal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnTapLocal(float_t  tapStrength) ;

// Ctor Parameters [CppParam { name: "", ty: "IBuilderTappable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBuilderTappable(IBuilderTappable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1599};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace

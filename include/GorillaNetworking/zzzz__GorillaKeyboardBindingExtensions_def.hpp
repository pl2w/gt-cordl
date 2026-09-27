#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaKeyboardBindingExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaKeyboardBindingExtensions)
namespace GorillaNetworking {
struct GorillaKeyboardBindings;
}
// Forward declare root types
namespace GorillaNetworking {
class GorillaKeyboardBindingExtensions;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::GorillaKeyboardBindingExtensions*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaKeyboardBindingExtensions*, "GorillaNetworking", "GorillaKeyboardBindingExtensions");
// [Extension]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaKeyboardBindingExtensions
class CORDL_TYPE GorillaKeyboardBindingExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method FromNumberBindingToInt, addr 0x5c877b8, size 0x18, virtual false, abstract: false, final false
static inline bool FromNumberBindingToInt(::GorillaNetworking::GorillaKeyboardBindings  binding, ::by_ref<int32_t>  result) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaKeyboardBindingExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaKeyboardBindingExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaKeyboardBindingExtensions(GorillaKeyboardBindingExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaKeyboardBindingExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaKeyboardBindingExtensions(GorillaKeyboardBindingExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4336};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::GorillaKeyboardBindingExtensions) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking

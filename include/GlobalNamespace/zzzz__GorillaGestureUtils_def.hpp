#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaGestureUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GorillaGestureUtils)
// Forward declare root types
namespace GlobalNamespace {
class GorillaGestureUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaGestureUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaGestureUtils*, "", "GorillaGestureUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaGestureUtils
class CORDL_TYPE GorillaGestureUtils : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaGestureUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaGestureUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaGestureUtils(GorillaGestureUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaGestureUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaGestureUtils(GorillaGestureUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{724};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaGestureUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

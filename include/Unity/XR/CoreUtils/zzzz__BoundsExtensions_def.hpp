#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/BoundsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BoundsExtensions)
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class BoundsExtensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::BoundsExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::BoundsExtensions*, "Unity.XR.CoreUtils", "BoundsExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.BoundsExtensions
class CORDL_TYPE BoundsExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ContainsCompletely, addr 0xb3eecfc, size 0xa0, virtual false, abstract: false, final false
static inline bool ContainsCompletely(::UnityEngine::Bounds  outerBounds, ::UnityEngine::Bounds  innerBounds) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoundsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoundsExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoundsExtensions(BoundsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoundsExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoundsExtensions(BoundsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30387};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::BoundsExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils

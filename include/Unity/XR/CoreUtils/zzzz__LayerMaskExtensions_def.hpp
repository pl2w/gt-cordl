#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/LayerMaskExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LayerMaskExtensions)
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class LayerMaskExtensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::LayerMaskExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::LayerMaskExtensions*, "Unity.XR.CoreUtils", "LayerMaskExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.LayerMaskExtensions
class CORDL_TYPE LayerMaskExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Contains, addr 0xb3efe00, size 0x24, virtual false, abstract: false, final false
static inline bool Contains(::UnityEngine::LayerMask  mask, int32_t  layer) ;

/// [Extension]
/// @brief Method GetFirstLayerIndex, addr 0xb3efda8, size 0x58, virtual false, abstract: false, final false
static inline int32_t GetFirstLayerIndex(::UnityEngine::LayerMask  layerMask) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayerMaskExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayerMaskExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayerMaskExtensions(LayerMaskExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayerMaskExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayerMaskExtensions(LayerMaskExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30394};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::LayerMaskExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils

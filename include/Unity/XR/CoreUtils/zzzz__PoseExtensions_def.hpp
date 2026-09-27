#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/PoseExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PoseExtensions)
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class PoseExtensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::PoseExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::PoseExtensions*, "Unity.XR.CoreUtils", "PoseExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.PoseExtensions
class CORDL_TYPE PoseExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ApplyInverseOffsetTo, addr 0xb3eff64, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ApplyInverseOffsetTo(::UnityEngine::Pose  pose, ::UnityEngine::Vector3  position) ;

/// [Extension]
/// @brief Method ApplyOffsetTo, addr 0xb3efe24, size 0xf8, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose ApplyOffsetTo(::UnityEngine::Pose  pose, ::UnityEngine::Pose  otherPose) ;

/// [Extension]
/// @brief Method ApplyOffsetTo, addr 0xb3eff1c, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ApplyOffsetTo(::UnityEngine::Pose  pose, ::UnityEngine::Vector3  position) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoseExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoseExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoseExtensions(PoseExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoseExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoseExtensions(PoseExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30397};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::PoseExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils

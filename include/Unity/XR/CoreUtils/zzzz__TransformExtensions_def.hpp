#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/TransformExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TransformExtensions)
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class TransformExtensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::TransformExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::TransformExtensions*, "Unity.XR.CoreUtils", "TransformExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.TransformExtensions
class CORDL_TYPE TransformExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetLocalPose, addr 0xb3f04f8, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose GetLocalPose(::UnityEngine::Transform*  transform) ;

/// [Extension]
/// @brief Method GetWorldPose, addr 0xb3f055c, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose GetWorldPose(::UnityEngine::Transform*  transform) ;

/// [Extension]
/// @brief Method InverseTransformPose, addr 0xb3f0694, size 0x188, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose InverseTransformPose(::UnityEngine::Transform*  transform, ::UnityEngine::Pose  pose) ;

/// [Extension]
/// @brief Method InverseTransformRay, addr 0xb3f081c, size 0x1ec, virtual false, abstract: false, final false
static inline ::UnityEngine::Ray InverseTransformRay(::UnityEngine::Transform*  transform, ::UnityEngine::Ray  ray) ;

/// [Extension]
/// @brief Method SetLocalPose, addr 0xb3f05c0, size 0x24, virtual false, abstract: false, final false
static inline void SetLocalPose(::UnityEngine::Transform*  transform, ::UnityEngine::Pose  pose) ;

/// [Extension]
/// @brief Method SetWorldPose, addr 0xb3f05e4, size 0x24, virtual false, abstract: false, final false
static inline void SetWorldPose(::UnityEngine::Transform*  transform, ::UnityEngine::Pose  pose) ;

/// [Extension]
/// @brief Method TransformPose, addr 0xb3f0608, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose TransformPose(::UnityEngine::Transform*  transform, ::UnityEngine::Pose  pose) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformExtensions(TransformExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformExtensions(TransformExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30401};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::TransformExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils

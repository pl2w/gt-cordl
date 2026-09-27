#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/QuaternionExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(QuaternionExtensions)
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class QuaternionExtensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::QuaternionExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::QuaternionExtensions*, "Unity.XR.CoreUtils", "QuaternionExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.QuaternionExtensions
class CORDL_TYPE QuaternionExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ConstrainYaw, addr 0xb3effbc, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion ConstrainYaw(::UnityEngine::Quaternion  rotation) ;

/// [Extension]
/// @brief Method ConstrainYawNormalized, addr 0xb3effc8, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion ConstrainYawNormalized(::UnityEngine::Quaternion  rotation) ;

/// [Extension]
/// @brief Method ConstrainYawPitchNormalized, addr 0xb3f0080, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion ConstrainYawPitchNormalized(::UnityEngine::Quaternion  rotation) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuaternionExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuaternionExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuaternionExtensions(QuaternionExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuaternionExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuaternionExtensions(QuaternionExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30398};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::QuaternionExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils

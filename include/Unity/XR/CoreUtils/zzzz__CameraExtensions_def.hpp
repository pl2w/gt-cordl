#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/CameraExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CameraExtensions)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class CameraExtensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::CameraExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::CameraExtensions*, "Unity.XR.CoreUtils", "CameraExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.CameraExtensions
class CORDL_TYPE CameraExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetHorizontalFieldOfView, addr 0xb3eee0c, size 0x64, virtual false, abstract: false, final false
static inline float_t GetHorizontalFieldOfView(::UnityEngine::Camera*  camera) ;

/// [Extension]
/// @brief Method GetVerticalFieldOfView, addr 0xb3eed9c, size 0x70, virtual false, abstract: false, final false
static inline float_t GetVerticalFieldOfView(::UnityEngine::Camera*  camera, float_t  aspectNeutralFieldOfView) ;

/// [Extension]
/// @brief Method GetVerticalOrthographicSize, addr 0xb3eee70, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetVerticalOrthographicSize(::UnityEngine::Camera*  camera, float_t  size) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraExtensions(CameraExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraExtensions(CameraExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30388};

/// @brief Field k_OneOverSqrt2 offset 0xffffffff size 0x4
static constexpr float_t  k_OneOverSqrt2{static_cast<float_t>(0.70710677f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::CameraExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils

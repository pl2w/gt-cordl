#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FaceExpressionStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_FaceExpressionStatus)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_FaceExpressionStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_FaceExpressionStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_FaceExpressionStatus, "", "OVRPlugin/FaceExpressionStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/FaceExpressionStatus
struct CORDL_TYPE OVRPlugin_FaceExpressionStatus {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_FaceExpressionStatus() ;

// Ctor Parameters [CppParam { name: "IsValid", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsEyeFollowingBlendshapesValid", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_FaceExpressionStatus(bool  IsValid, bool  IsEyeFollowingBlendshapesValid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12162};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field IsValid, offset: 0x0, size: 0x1, def value: None
 bool  IsValid;

/// @brief Field IsEyeFollowingBlendshapesValid, offset: 0x1, size: 0x1, def value: None
 bool  IsEyeFollowingBlendshapesValid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceExpressionStatus, IsValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceExpressionStatus, IsEyeFollowingBlendshapesValid) == 0x1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_FaceExpressionStatus) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace

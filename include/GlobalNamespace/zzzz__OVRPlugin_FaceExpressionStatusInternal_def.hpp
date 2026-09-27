#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FaceExpressionStatusInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_FaceExpressionStatusInternal)
namespace GlobalNamespace {
struct OVRPlugin_FaceExpressionStatus;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_FaceExpressionStatusInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal, "", "OVRPlugin/FaceExpressionStatusInternal");
// Dependencies OVRPlugin::Bool
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/FaceExpressionStatusInternal
struct CORDL_TYPE OVRPlugin_FaceExpressionStatusInternal {
public:
// Declarations
/// @brief Method ToFaceExpressionStatus, addr 0xa60f6cc, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_FaceExpressionStatus ToFaceExpressionStatus() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_FaceExpressionStatusInternal() ;

// Ctor Parameters [CppParam { name: "IsValid", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsEyeFollowingBlendshapesValid", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_FaceExpressionStatusInternal(::GlobalNamespace::OVRPlugin_Bool  IsValid, ::GlobalNamespace::OVRPlugin_Bool  IsEyeFollowingBlendshapesValid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12165};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field IsValid, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Bool  IsValid;

/// @brief Field IsEyeFollowingBlendshapesValid, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Bool  IsEyeFollowingBlendshapesValid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal, IsValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal, IsEyeFollowingBlendshapesValid) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace

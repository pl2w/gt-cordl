#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/MeshGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/Acoustics/zzzz__FaceType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MeshGroup)
// Forward declare root types
namespace Meta::XR::Acoustics {
struct MeshGroup;
}
// Write type traits
MARK_VAL_T(::Meta::XR::Acoustics::MeshGroup);
DEFINE_IL2CPP_CLASS(::Meta::XR::Acoustics::MeshGroup, "Meta.XR.Acoustics", "MeshGroup");
// Dependencies Meta.XR.Acoustics.FaceType, System.IntPtr, System.UIntPtr
namespace Meta::XR::Acoustics {
// Is value type: true
// CS Name: Meta.XR.Acoustics.MeshGroup
#pragma pack(push, 1)
struct CORDL_TYPE MeshGroup {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MeshGroup() ;

// Ctor Parameters [CppParam { name: "indexOffset", ty: "::System::UIntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "faceCount", ty: "::System::UIntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "faceType", ty: "::Meta::XR::Acoustics::FaceType", modifiers: "", def_value: None, comment: None }, CppParam { name: "material", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr MeshGroup(::System::UIntPtr  indexOffset, ::System::UIntPtr  faceCount, ::Meta::XR::Acoustics::FaceType  faceType, ::System::IntPtr  material) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29972};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field indexOffset, offset: 0x0, size: 0x8, def value: None
 ::System::UIntPtr  indexOffset;

/// @brief Field faceCount, offset: 0x8, size: 0x8, def value: None
 ::System::UIntPtr  faceCount;

/// @brief Field faceType, offset: 0x10, size: 0x4, def value: None
 ::Meta::XR::Acoustics::FaceType  faceType;

/// @brief Field material, offset: 0x14, size: 0x8, def value: None
 ::System::IntPtr  material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Meta::XR::Acoustics::MeshGroup, indexOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MeshGroup, faceCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MeshGroup, faceType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MeshGroup, material) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::Acoustics::MeshGroup) == 0x1c, "Size mismatch!");

} // namespace end def Meta::XR::Acoustics

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceSemanticLabelInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceSemanticLabelInternal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceSemanticLabelInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceSemanticLabelInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceSemanticLabelInternal, "", "OVRPlugin/SpaceSemanticLabelInternal");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceSemanticLabelInternal
struct CORDL_TYPE OVRPlugin_SpaceSemanticLabelInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceSemanticLabelInternal() ;

// Ctor Parameters [CppParam { name: "byteCapacityInput", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byteCountOutput", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "labels", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceSemanticLabelInternal(int32_t  byteCapacityInput, int32_t  byteCountOutput, ::System::IntPtr  labels) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12236};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field byteCapacityInput, offset: 0x0, size: 0x4, def value: None
 int32_t  byteCapacityInput;

/// @brief Field byteCountOutput, offset: 0x4, size: 0x4, def value: None
 int32_t  byteCountOutput;

/// @brief Field labels, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  labels;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceSemanticLabelInternal, byteCapacityInput) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceSemanticLabelInternal, byteCountOutput) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceSemanticLabelInternal, labels) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceSemanticLabelInternal) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

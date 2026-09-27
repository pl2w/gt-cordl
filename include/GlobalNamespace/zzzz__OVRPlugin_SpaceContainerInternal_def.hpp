#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceContainerInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceContainerInternal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceContainerInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceContainerInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceContainerInternal, "", "OVRPlugin/SpaceContainerInternal");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceContainerInternal
struct CORDL_TYPE OVRPlugin_SpaceContainerInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceContainerInternal() ;

// Ctor Parameters [CppParam { name: "uuidCapacityInput", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uuidCountOutput", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uuids", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceContainerInternal(int32_t  uuidCapacityInput, int32_t  uuidCountOutput, ::System::IntPtr  uuids) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12235};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field uuidCapacityInput, offset: 0x0, size: 0x4, def value: None
 int32_t  uuidCapacityInput;

/// @brief Field uuidCountOutput, offset: 0x4, size: 0x4, def value: None
 int32_t  uuidCountOutput;

/// @brief Field uuids, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  uuids;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceContainerInternal, uuidCapacityInput) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceContainerInternal, uuidCountOutput) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceContainerInternal, uuids) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceContainerInternal) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Qpl_Annotation_Builder_Entry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_Variant_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_Qpl_Annotation_Builder_Entry)
// Forward declare root types
namespace GlobalNamespace {
struct Builder_Annotation_Qpl_OVRPlugin_Entry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Builder_Annotation_Qpl_OVRPlugin_Entry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Builder_Annotation_Qpl_OVRPlugin_Entry, "", "OVRPlugin/Qpl/Annotation/Builder/Entry");
// Dependencies OVRPlugin::Qpl::Variant, System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Qpl/Annotation/Builder/Entry
struct CORDL_TYPE Builder_Annotation_Qpl_OVRPlugin_Entry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Builder_Annotation_Qpl_OVRPlugin_Entry() ;

// Ctor Parameters [CppParam { name: "Key", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "Value", ty: "::GlobalNamespace::Qpl_OVRPlugin_Variant", modifiers: "", def_value: None, comment: None }]
constexpr Builder_Annotation_Qpl_OVRPlugin_Entry(::System::IntPtr  Key, ::GlobalNamespace::Qpl_OVRPlugin_Variant  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12267};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Key, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  Key;

/// @brief Field Value, offset: 0x8, size: 0x10, def value: None
 ::GlobalNamespace::Qpl_OVRPlugin_Variant  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Builder_Annotation_Qpl_OVRPlugin_Entry, Key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Builder_Annotation_Qpl_OVRPlugin_Entry, Value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Builder_Annotation_Qpl_OVRPlugin_Entry) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

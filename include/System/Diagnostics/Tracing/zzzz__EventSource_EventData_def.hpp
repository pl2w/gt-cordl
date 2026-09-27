#pragma once
// IWYU pragma private; include "System/Diagnostics/Tracing/EventSource_EventData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventSource_EventData)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
struct EventSource_EventData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EventSource_EventData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EventSource_EventData, "System.Diagnostics.Tracing", "EventSource/EventData");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Diagnostics.Tracing.EventSource/EventData
struct CORDL_TYPE EventSource_EventData {
public:
// Declarations
 __declspec(property(put=set_DataPointer)) ::System::IntPtr  DataPointer;

 __declspec(property(put=set_Reserved)) int32_t  Reserved;

 __declspec(property(put=set_Size)) int32_t  Size;

/// [CompilerGenerated]
/// @brief Method set_DataPointer, addr 0xa260998, size 0x8, virtual false, abstract: false, final false
inline void set_DataPointer(::System::IntPtr  value) ;

/// [CompilerGenerated]
/// @brief Method set_Reserved, addr 0xa2609a8, size 0x8, virtual false, abstract: false, final false
inline void set_Reserved(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Size, addr 0xa2609a0, size 0x8, virtual false, abstract: false, final false
inline void set_Size(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr EventSource_EventData() ;

// Ctor Parameters [CppParam { name: "_DataPointer_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Size_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Reserved_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EventSource_EventData(::System::IntPtr  _DataPointer_k__BackingField, int32_t  _Size_k__BackingField, int32_t  _Reserved_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6798};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [CompilerGenerated]
/// @brief Field <DataPointer>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _DataPointer_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Size>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _Size_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Reserved>k__BackingField, offset: 0xc, size: 0x4, def value: None
 int32_t  _Reserved_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventSource_EventData, _DataPointer_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventSource_EventData, _Size_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventSource_EventData, _Reserved_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EventSource_EventData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

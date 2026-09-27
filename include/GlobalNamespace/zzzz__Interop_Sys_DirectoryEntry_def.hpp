#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_Sys_DirectoryEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Interop_Sys_NodeType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Interop_Sys_DirectoryEntry)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct Sys_Interop_DirectoryEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Sys_Interop_DirectoryEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Sys_Interop_DirectoryEntry, "", "Interop/Sys/DirectoryEntry");
// Dependencies Interop::Sys::NodeType
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Sys/DirectoryEntry
struct CORDL_TYPE Sys_Interop_DirectoryEntry {
public:
// Declarations
/// @brief Method GetName, addr 0xa10d7a0, size 0x128, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<char16_t> GetName(::System::Span_1<char16_t>  buffer) ;

// Ctor Parameters []
// @brief default ctor
constexpr Sys_Interop_DirectoryEntry() ;

// Ctor Parameters [CppParam { name: "Name", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "NameLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "InodeType", ty: "::GlobalNamespace::Sys_Interop_NodeType", modifiers: "", def_value: None, comment: None }]
constexpr Sys_Interop_DirectoryEntry(uint8_t*  Name, int32_t  NameLength, ::GlobalNamespace::Sys_Interop_NodeType  InodeType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5313};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 uint8_t*  Name;

/// @brief Field NameLength, offset: 0x8, size: 0x4, def value: None
 int32_t  NameLength;

/// @brief Field InodeType, offset: 0xc, size: 0x4, def value: None
 ::GlobalNamespace::Sys_Interop_NodeType  InodeType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Sys_Interop_DirectoryEntry, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_DirectoryEntry, NameLength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_DirectoryEntry, InodeType) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Sys_Interop_DirectoryEntry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

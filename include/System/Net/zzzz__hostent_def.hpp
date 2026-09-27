#pragma once
// IWYU pragma private; include "System/Net/hostent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(hostent)
// Forward declare root types
namespace System::Net {
struct hostent;
}
// Write type traits
MARK_VAL_T(::System::Net::hostent);
DEFINE_IL2CPP_CLASS(::System::Net::hostent, "System.Net", "hostent");
// Dependencies System.IntPtr
namespace System::Net {
// Is value type: true
// CS Name: System.Net.hostent
struct CORDL_TYPE hostent {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr hostent() ;

// Ctor Parameters [CppParam { name: "h_name", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "h_aliases", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "h_addrtype", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h_length", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h_addr_list", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr hostent(::System::IntPtr  h_name, ::System::IntPtr  h_aliases, int16_t  h_addrtype, int16_t  h_length, ::System::IntPtr  h_addr_list) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10540};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field h_name, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  h_name;

/// @brief Field h_aliases, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  h_aliases;

/// @brief Field h_addrtype, offset: 0x10, size: 0x2, def value: None
 int16_t  h_addrtype;

/// @brief Field h_length, offset: 0x12, size: 0x2, def value: None
 int16_t  h_length;

/// @brief Field h_addr_list, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  h_addr_list;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::hostent, h_name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::hostent, h_aliases) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::hostent, h_addrtype) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::hostent, h_length) == 0x12, "Offset mismatch!");

static_assert(offsetof(::System::Net::hostent, h_addr_list) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Net::hostent) == 0x20, "Size mismatch!");

} // namespace end def System::Net

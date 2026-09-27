#pragma once
// IWYU pragma private; include "System/Globalization/CultureInfo_Data.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CultureInfo_Data)
// Forward declare root types
namespace GlobalNamespace {
struct CultureInfo_Data;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CultureInfo_Data);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CultureInfo_Data, "System.Globalization", "CultureInfo/Data");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Globalization.CultureInfo/Data
struct CORDL_TYPE CultureInfo_Data {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CultureInfo_Data() ;

// Ctor Parameters [CppParam { name: "ansi", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ebcdic", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mac", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "oem", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "right_to_left", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "list_sep", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr CultureInfo_Data(int32_t  ansi, int32_t  ebcdic, int32_t  mac, int32_t  oem, bool  right_to_left, uint8_t  list_sep) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6772};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field ansi, offset: 0x0, size: 0x4, def value: None
 int32_t  ansi;

/// @brief Field ebcdic, offset: 0x4, size: 0x4, def value: None
 int32_t  ebcdic;

/// @brief Field mac, offset: 0x8, size: 0x4, def value: None
 int32_t  mac;

/// @brief Field oem, offset: 0xc, size: 0x4, def value: None
 int32_t  oem;

/// @brief Field right_to_left, offset: 0x10, size: 0x1, def value: None
 bool  right_to_left;

/// @brief Field list_sep, offset: 0x11, size: 0x1, def value: None
 uint8_t  list_sep;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CultureInfo_Data, ansi) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureInfo_Data, ebcdic) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureInfo_Data, mac) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureInfo_Data, oem) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureInfo_Data, right_to_left) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureInfo_Data, list_sep) == 0x11, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CultureInfo_Data) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace

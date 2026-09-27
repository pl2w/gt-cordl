#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/HostSystemID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HostSystemID)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
struct HostSystemID;
}
// Write type traits
MARK_VAL_T(::ICSharpCode::SharpZipLib::Zip::HostSystemID);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::HostSystemID, "ICSharpCode.SharpZipLib.Zip", "HostSystemID");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.Zip.HostSystemID
struct CORDL_TYPE HostSystemID {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HostSystemID_Unwrapped
enum struct __HostSystemID_Unwrapped : int32_t {
__E_Msdos = static_cast<int32_t>(0x0),
__E_Amiga = static_cast<int32_t>(0x1),
__E_OpenVms = static_cast<int32_t>(0x2),
__E_Unix = static_cast<int32_t>(0x3),
__E_VMCms = static_cast<int32_t>(0x4),
__E_AtariST = static_cast<int32_t>(0x5),
__E_OS2 = static_cast<int32_t>(0x6),
__E_Macintosh = static_cast<int32_t>(0x7),
__E_ZSystem = static_cast<int32_t>(0x8),
__E_Cpm = static_cast<int32_t>(0x9),
__E_WindowsNT = static_cast<int32_t>(0xa),
__E_MVS = static_cast<int32_t>(0xb),
__E_Vse = static_cast<int32_t>(0xc),
__E_AcornRisc = static_cast<int32_t>(0xd),
__E_Vfat = static_cast<int32_t>(0xe),
__E_AlternateMvs = static_cast<int32_t>(0xf),
__E_BeOS = static_cast<int32_t>(0x10),
__E_Tandem = static_cast<int32_t>(0x11),
__E_OS400 = static_cast<int32_t>(0x12),
__E_OSX = static_cast<int32_t>(0x13),
__E_WinZipAES = static_cast<int32_t>(0x63),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HostSystemID_Unwrapped () const noexcept {
return static_cast<__HostSystemID_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HostSystemID() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HostSystemID(int32_t  value__) noexcept;

/// @brief Field AcornRisc value: I32(13)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const AcornRisc;

/// @brief Field AlternateMvs value: I32(15)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const AlternateMvs;

/// @brief Field Amiga value: I32(1)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const Amiga;

/// @brief Field AtariST value: I32(5)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const AtariST;

/// @brief Field BeOS value: I32(16)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const BeOS;

/// @brief Field Cpm value: I32(9)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const Cpm;

/// @brief Field MVS value: I32(11)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const MVS;

/// @brief Field Macintosh value: I32(7)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const Macintosh;

/// @brief Field Msdos value: I32(0)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const Msdos;

/// @brief Field OS2 value: I32(6)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const OS2;

/// @brief Field OS400 value: I32(18)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const OS400;

/// @brief Field OSX value: I32(19)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const OSX;

/// @brief Field OpenVms value: I32(2)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const OpenVms;

/// @brief Field Tandem value: I32(17)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const Tandem;

/// @brief Field Unix value: I32(3)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const Unix;

/// @brief Field VMCms value: I32(4)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const VMCms;

/// @brief Field Vfat value: I32(14)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const Vfat;

/// @brief Field Vse value: I32(12)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const Vse;

/// @brief Field WinZipAES value: I32(99)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const WinZipAES;

/// @brief Field WindowsNT value: I32(10)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const WindowsNT;

/// @brief Field ZSystem value: I32(8)
static ::ICSharpCode::SharpZipLib::Zip::HostSystemID const ZSystem;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17323};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::HostSystemID, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::HostSystemID) == 0x4, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip

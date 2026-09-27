#pragma once
// IWYU pragma private; include "System/Environment_SpecialFolder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Environment_SpecialFolder)
// Forward declare root types
namespace GlobalNamespace {
struct Environment_SpecialFolder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Environment_SpecialFolder);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Environment_SpecialFolder, "System", "Environment/SpecialFolder");
// [ComVisible(true)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Environment/SpecialFolder
struct CORDL_TYPE Environment_SpecialFolder {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Environment_SpecialFolder_Unwrapped
enum struct __Environment_SpecialFolder_Unwrapped : int32_t {
__E_MyDocuments = static_cast<int32_t>(0x5),
__E_Desktop = static_cast<int32_t>(0x0),
__E_MyComputer = static_cast<int32_t>(0x11),
__E_Programs = static_cast<int32_t>(0x2),
__E_Personal = static_cast<int32_t>(0x5),
__E_Favorites = static_cast<int32_t>(0x6),
__E_Startup = static_cast<int32_t>(0x7),
__E_Recent = static_cast<int32_t>(0x8),
__E_SendTo = static_cast<int32_t>(0x9),
__E_StartMenu = static_cast<int32_t>(0xb),
__E_MyMusic = static_cast<int32_t>(0xd),
__E_DesktopDirectory = static_cast<int32_t>(0x10),
__E_Templates = static_cast<int32_t>(0x15),
__E_ApplicationData = static_cast<int32_t>(0x1a),
__E_LocalApplicationData = static_cast<int32_t>(0x1c),
__E_InternetCache = static_cast<int32_t>(0x20),
__E_Cookies = static_cast<int32_t>(0x21),
__E_History = static_cast<int32_t>(0x22),
__E_CommonApplicationData = static_cast<int32_t>(0x23),
__E_System = static_cast<int32_t>(0x25),
__E_ProgramFiles = static_cast<int32_t>(0x26),
__E_MyPictures = static_cast<int32_t>(0x27),
__E_CommonProgramFiles = static_cast<int32_t>(0x2b),
__E_MyVideos = static_cast<int32_t>(0xe),
__E_NetworkShortcuts = static_cast<int32_t>(0x13),
__E_Fonts = static_cast<int32_t>(0x14),
__E_CommonStartMenu = static_cast<int32_t>(0x16),
__E_CommonPrograms = static_cast<int32_t>(0x17),
__E_CommonStartup = static_cast<int32_t>(0x18),
__E_CommonDesktopDirectory = static_cast<int32_t>(0x19),
__E_PrinterShortcuts = static_cast<int32_t>(0x1b),
__E_Windows = static_cast<int32_t>(0x24),
__E_UserProfile = static_cast<int32_t>(0x28),
__E_SystemX86 = static_cast<int32_t>(0x29),
__E_ProgramFilesX86 = static_cast<int32_t>(0x2a),
__E_CommonProgramFilesX86 = static_cast<int32_t>(0x2c),
__E_CommonTemplates = static_cast<int32_t>(0x2d),
__E_CommonDocuments = static_cast<int32_t>(0x2e),
__E_CommonAdminTools = static_cast<int32_t>(0x2f),
__E_AdminTools = static_cast<int32_t>(0x30),
__E_CommonMusic = static_cast<int32_t>(0x35),
__E_CommonPictures = static_cast<int32_t>(0x36),
__E_CommonVideos = static_cast<int32_t>(0x37),
__E_Resources = static_cast<int32_t>(0x38),
__E_LocalizedResources = static_cast<int32_t>(0x39),
__E_CommonOemLinks = static_cast<int32_t>(0x3a),
__E_CDBurning = static_cast<int32_t>(0x3b),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Environment_SpecialFolder_Unwrapped () const noexcept {
return static_cast<__Environment_SpecialFolder_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Environment_SpecialFolder() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Environment_SpecialFolder(int32_t  value__) noexcept;

/// @brief Field AdminTools value: I32(48)
static ::GlobalNamespace::Environment_SpecialFolder const AdminTools;

/// @brief Field ApplicationData value: I32(26)
static ::GlobalNamespace::Environment_SpecialFolder const ApplicationData;

/// @brief Field CDBurning value: I32(59)
static ::GlobalNamespace::Environment_SpecialFolder const CDBurning;

/// @brief Field CommonAdminTools value: I32(47)
static ::GlobalNamespace::Environment_SpecialFolder const CommonAdminTools;

/// @brief Field CommonApplicationData value: I32(35)
static ::GlobalNamespace::Environment_SpecialFolder const CommonApplicationData;

/// @brief Field CommonDesktopDirectory value: I32(25)
static ::GlobalNamespace::Environment_SpecialFolder const CommonDesktopDirectory;

/// @brief Field CommonDocuments value: I32(46)
static ::GlobalNamespace::Environment_SpecialFolder const CommonDocuments;

/// @brief Field CommonMusic value: I32(53)
static ::GlobalNamespace::Environment_SpecialFolder const CommonMusic;

/// @brief Field CommonOemLinks value: I32(58)
static ::GlobalNamespace::Environment_SpecialFolder const CommonOemLinks;

/// @brief Field CommonPictures value: I32(54)
static ::GlobalNamespace::Environment_SpecialFolder const CommonPictures;

/// @brief Field CommonProgramFiles value: I32(43)
static ::GlobalNamespace::Environment_SpecialFolder const CommonProgramFiles;

/// @brief Field CommonProgramFilesX86 value: I32(44)
static ::GlobalNamespace::Environment_SpecialFolder const CommonProgramFilesX86;

/// @brief Field CommonPrograms value: I32(23)
static ::GlobalNamespace::Environment_SpecialFolder const CommonPrograms;

/// @brief Field CommonStartMenu value: I32(22)
static ::GlobalNamespace::Environment_SpecialFolder const CommonStartMenu;

/// @brief Field CommonStartup value: I32(24)
static ::GlobalNamespace::Environment_SpecialFolder const CommonStartup;

/// @brief Field CommonTemplates value: I32(45)
static ::GlobalNamespace::Environment_SpecialFolder const CommonTemplates;

/// @brief Field CommonVideos value: I32(55)
static ::GlobalNamespace::Environment_SpecialFolder const CommonVideos;

/// @brief Field Cookies value: I32(33)
static ::GlobalNamespace::Environment_SpecialFolder const Cookies;

/// @brief Field Desktop value: I32(0)
static ::GlobalNamespace::Environment_SpecialFolder const Desktop;

/// @brief Field DesktopDirectory value: I32(16)
static ::GlobalNamespace::Environment_SpecialFolder const DesktopDirectory;

/// @brief Field Favorites value: I32(6)
static ::GlobalNamespace::Environment_SpecialFolder const Favorites;

/// @brief Field Fonts value: I32(20)
static ::GlobalNamespace::Environment_SpecialFolder const Fonts;

/// @brief Field History value: I32(34)
static ::GlobalNamespace::Environment_SpecialFolder const History;

/// @brief Field InternetCache value: I32(32)
static ::GlobalNamespace::Environment_SpecialFolder const InternetCache;

/// @brief Field LocalApplicationData value: I32(28)
static ::GlobalNamespace::Environment_SpecialFolder const LocalApplicationData;

/// @brief Field LocalizedResources value: I32(57)
static ::GlobalNamespace::Environment_SpecialFolder const LocalizedResources;

/// @brief Field MyComputer value: I32(17)
static ::GlobalNamespace::Environment_SpecialFolder const MyComputer;

/// @brief Field MyDocuments value: I32(5)
static ::GlobalNamespace::Environment_SpecialFolder const MyDocuments;

/// @brief Field MyMusic value: I32(13)
static ::GlobalNamespace::Environment_SpecialFolder const MyMusic;

/// @brief Field MyPictures value: I32(39)
static ::GlobalNamespace::Environment_SpecialFolder const MyPictures;

/// @brief Field MyVideos value: I32(14)
static ::GlobalNamespace::Environment_SpecialFolder const MyVideos;

/// @brief Field NetworkShortcuts value: I32(19)
static ::GlobalNamespace::Environment_SpecialFolder const NetworkShortcuts;

/// @brief Field Personal value: I32(5)
static ::GlobalNamespace::Environment_SpecialFolder const Personal;

/// @brief Field PrinterShortcuts value: I32(27)
static ::GlobalNamespace::Environment_SpecialFolder const PrinterShortcuts;

/// @brief Field ProgramFiles value: I32(38)
static ::GlobalNamespace::Environment_SpecialFolder const ProgramFiles;

/// @brief Field ProgramFilesX86 value: I32(42)
static ::GlobalNamespace::Environment_SpecialFolder const ProgramFilesX86;

/// @brief Field Programs value: I32(2)
static ::GlobalNamespace::Environment_SpecialFolder const Programs;

/// @brief Field Recent value: I32(8)
static ::GlobalNamespace::Environment_SpecialFolder const Recent;

/// @brief Field Resources value: I32(56)
static ::GlobalNamespace::Environment_SpecialFolder const Resources;

/// @brief Field SendTo value: I32(9)
static ::GlobalNamespace::Environment_SpecialFolder const SendTo;

/// @brief Field StartMenu value: I32(11)
static ::GlobalNamespace::Environment_SpecialFolder const StartMenu;

/// @brief Field Startup value: I32(7)
static ::GlobalNamespace::Environment_SpecialFolder const Startup;

/// @brief Field System value: I32(37)
static ::GlobalNamespace::Environment_SpecialFolder const System;

/// @brief Field SystemX86 value: I32(41)
static ::GlobalNamespace::Environment_SpecialFolder const SystemX86;

/// @brief Field Templates value: I32(21)
static ::GlobalNamespace::Environment_SpecialFolder const Templates;

/// @brief Field UserProfile value: I32(40)
static ::GlobalNamespace::Environment_SpecialFolder const UserProfile;

/// @brief Field Windows value: I32(36)
static ::GlobalNamespace::Environment_SpecialFolder const Windows;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5702};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Environment_SpecialFolder, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Environment_SpecialFolder) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

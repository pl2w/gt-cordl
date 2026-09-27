#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipEntryFactory_TimeSetting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipEntryFactory_TimeSetting)
// Forward declare root types
namespace GlobalNamespace {
struct ZipEntryFactory_TimeSetting;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ZipEntryFactory_TimeSetting);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZipEntryFactory_TimeSetting, "ICSharpCode.SharpZipLib.Zip", "ZipEntryFactory/TimeSetting");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipEntryFactory/TimeSetting
struct CORDL_TYPE ZipEntryFactory_TimeSetting {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZipEntryFactory_TimeSetting_Unwrapped
enum struct __ZipEntryFactory_TimeSetting_Unwrapped : int32_t {
__E_LastWriteTime = static_cast<int32_t>(0x0),
__E_LastWriteTimeUtc = static_cast<int32_t>(0x1),
__E_CreateTime = static_cast<int32_t>(0x2),
__E_CreateTimeUtc = static_cast<int32_t>(0x3),
__E_LastAccessTime = static_cast<int32_t>(0x4),
__E_LastAccessTimeUtc = static_cast<int32_t>(0x5),
__E_Fixed = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZipEntryFactory_TimeSetting_Unwrapped () const noexcept {
return static_cast<__ZipEntryFactory_TimeSetting_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZipEntryFactory_TimeSetting() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ZipEntryFactory_TimeSetting(int32_t  value__) noexcept;

/// @brief Field CreateTime value: I32(2)
static ::GlobalNamespace::ZipEntryFactory_TimeSetting const CreateTime;

/// @brief Field CreateTimeUtc value: I32(3)
static ::GlobalNamespace::ZipEntryFactory_TimeSetting const CreateTimeUtc;

/// @brief Field Fixed value: I32(6)
static ::GlobalNamespace::ZipEntryFactory_TimeSetting const Fixed;

/// @brief Field LastAccessTime value: I32(4)
static ::GlobalNamespace::ZipEntryFactory_TimeSetting const LastAccessTime;

/// @brief Field LastAccessTimeUtc value: I32(5)
static ::GlobalNamespace::ZipEntryFactory_TimeSetting const LastAccessTimeUtc;

/// @brief Field LastWriteTime value: I32(0)
static ::GlobalNamespace::ZipEntryFactory_TimeSetting const LastWriteTime;

/// @brief Field LastWriteTimeUtc value: I32(1)
static ::GlobalNamespace::ZipEntryFactory_TimeSetting const LastWriteTimeUtc;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17327};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZipEntryFactory_TimeSetting, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZipEntryFactory_TimeSetting) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

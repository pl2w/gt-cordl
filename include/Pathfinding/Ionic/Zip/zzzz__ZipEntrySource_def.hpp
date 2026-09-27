#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipEntrySource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipEntrySource)
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
struct ZipEntrySource;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Ionic::Zip::ZipEntrySource);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipEntrySource, "Pathfinding.Ionic.Zip", "ZipEntrySource");
// Dependencies 
namespace Pathfinding::Ionic::Zip {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zip.ZipEntrySource
struct CORDL_TYPE ZipEntrySource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZipEntrySource_Unwrapped
enum struct __ZipEntrySource_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_FileSystem = static_cast<int32_t>(0x1),
__E_Stream = static_cast<int32_t>(0x2),
__E_ZipFile = static_cast<int32_t>(0x3),
__E_WriteDelegate = static_cast<int32_t>(0x4),
__E_JitStream = static_cast<int32_t>(0x5),
__E_ZipOutputStream = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZipEntrySource_Unwrapped () const noexcept {
return static_cast<__ZipEntrySource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZipEntrySource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ZipEntrySource(int32_t  value__) noexcept;

/// @brief Field FileSystem value: I32(1)
static ::Pathfinding::Ionic::Zip::ZipEntrySource const FileSystem;

/// @brief Field JitStream value: I32(5)
static ::Pathfinding::Ionic::Zip::ZipEntrySource const JitStream;

/// @brief Field None value: I32(0)
static ::Pathfinding::Ionic::Zip::ZipEntrySource const None;

/// @brief Field Stream value: I32(2)
static ::Pathfinding::Ionic::Zip::ZipEntrySource const Stream;

/// @brief Field WriteDelegate value: I32(4)
static ::Pathfinding::Ionic::Zip::ZipEntrySource const WriteDelegate;

/// @brief Field ZipFile value: I32(3)
static ::Pathfinding::Ionic::Zip::ZipEntrySource const ZipFile;

/// @brief Field ZipOutputStream value: I32(6)
static ::Pathfinding::Ionic::Zip::ZipEntrySource const ZipOutputStream;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28164};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntrySource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipEntrySource) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip

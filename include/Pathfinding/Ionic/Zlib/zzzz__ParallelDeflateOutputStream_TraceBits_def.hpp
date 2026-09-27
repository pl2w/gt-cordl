#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/ParallelDeflateOutputStream_TraceBits.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParallelDeflateOutputStream_TraceBits)
// Forward declare root types
namespace GlobalNamespace {
struct ParallelDeflateOutputStream_TraceBits;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParallelDeflateOutputStream_TraceBits);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParallelDeflateOutputStream_TraceBits, "Pathfinding.Ionic.Zlib", "ParallelDeflateOutputStream/TraceBits");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream/TraceBits
struct CORDL_TYPE ParallelDeflateOutputStream_TraceBits {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __ParallelDeflateOutputStream_TraceBits_Unwrapped
enum struct __ParallelDeflateOutputStream_TraceBits_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x0u),
__E_NotUsed1 = static_cast<uint32_t>(0x1u),
__E_EmitLock = static_cast<uint32_t>(0x2u),
__E_EmitEnter = static_cast<uint32_t>(0x4u),
__E_EmitBegin = static_cast<uint32_t>(0x8u),
__E_EmitDone = static_cast<uint32_t>(0x10u),
__E_EmitSkip = static_cast<uint32_t>(0x20u),
__E_EmitAll = static_cast<uint32_t>(0x3au),
__E_Flush = static_cast<uint32_t>(0x40u),
__E_Lifecycle = static_cast<uint32_t>(0x80u),
__E_Session = static_cast<uint32_t>(0x100u),
__E_Synch = static_cast<uint32_t>(0x200u),
__E_Instance = static_cast<uint32_t>(0x400u),
__E_Compress = static_cast<uint32_t>(0x800u),
__E_Write = static_cast<uint32_t>(0x1000u),
__E_WriteEnter = static_cast<uint32_t>(0x2000u),
__E_WriteTake = static_cast<uint32_t>(0x4000u),
__E_All = static_cast<uint32_t>(0xffffffffu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParallelDeflateOutputStream_TraceBits_Unwrapped () const noexcept {
return static_cast<__ParallelDeflateOutputStream_TraceBits_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ParallelDeflateOutputStream_TraceBits() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr ParallelDeflateOutputStream_TraceBits(uint32_t  value__) noexcept;

/// @brief Field All value: U32(4294967295)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const All;

/// @brief Field Compress value: U32(2048)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const Compress;

/// @brief Field EmitAll value: U32(58)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const EmitAll;

/// @brief Field EmitBegin value: U32(8)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const EmitBegin;

/// @brief Field EmitDone value: U32(16)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const EmitDone;

/// @brief Field EmitEnter value: U32(4)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const EmitEnter;

/// @brief Field EmitLock value: U32(2)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const EmitLock;

/// @brief Field EmitSkip value: U32(32)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const EmitSkip;

/// @brief Field Flush value: U32(64)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const Flush;

/// @brief Field Instance value: U32(1024)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const Instance;

/// @brief Field Lifecycle value: U32(128)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const Lifecycle;

/// @brief Field None value: U32(0)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const None;

/// @brief Field NotUsed1 value: U32(1)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const NotUsed1;

/// @brief Field Session value: U32(256)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const Session;

/// @brief Field Synch value: U32(512)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const Synch;

/// @brief Field Write value: U32(4096)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const Write;

/// @brief Field WriteEnter value: U32(8192)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const WriteEnter;

/// @brief Field WriteTake value: U32(16384)
static ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const WriteTake;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28191};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParallelDeflateOutputStream_TraceBits, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParallelDeflateOutputStream_TraceBits) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

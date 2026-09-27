#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_NetSecurityNative_GssBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Interop_NetSecurityNative_GssBuffer)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetSecurityNative_Interop_GssBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetSecurityNative_Interop_GssBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetSecurityNative_Interop_GssBuffer, "", "Interop/NetSecurityNative/GssBuffer");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/NetSecurityNative/GssBuffer
struct CORDL_TYPE NetSecurityNative_Interop_GssBuffer {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Copy, addr 0xa8cc8d4, size 0x16c, virtual false, abstract: false, final false
inline int32_t Copy(::ArrayW<uint8_t>  destination, int32_t  offset) ;

/// @brief Method Dispose, addr 0xa8ccb90, size 0x18, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method ToByteArray, addr 0xa8cca40, size 0x150, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToByteArray() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetSecurityNative_Interop_GssBuffer() ;

// Ctor Parameters [CppParam { name: "_length", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr NetSecurityNative_Interop_GssBuffer(uint64_t  _length, ::System::IntPtr  _data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9794};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _length, offset: 0x0, size: 0x8, def value: None
 uint64_t  _length;

/// @brief Field _data, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  _data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetSecurityNative_Interop_GssBuffer, _length) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetSecurityNative_Interop_GssBuffer, _data) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetSecurityNative_Interop_GssBuffer) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

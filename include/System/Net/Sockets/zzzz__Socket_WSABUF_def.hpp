#pragma once
// IWYU pragma private; include "System/Net/Sockets/Socket_WSABUF.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Socket_WSABUF)
// Forward declare root types
namespace GlobalNamespace {
struct Socket_WSABUF;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Socket_WSABUF);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Socket_WSABUF, "System.Net.Sockets", "Socket/WSABUF");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.Sockets.Socket/WSABUF
struct CORDL_TYPE Socket_WSABUF {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Socket_WSABUF() ;

// Ctor Parameters [CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "buf", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr Socket_WSABUF(int32_t  len, ::System::IntPtr  buf) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10838};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field len, offset: 0x0, size: 0x4, def value: None
 int32_t  len;

/// @brief Field buf, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  buf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Socket_WSABUF, len) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Socket_WSABUF, buf) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Socket_WSABUF) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "NanoSockets/Socket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Socket)
// Forward declare root types
namespace NanoSockets {
struct Socket;
}
// Write type traits
MARK_VAL_T(::NanoSockets::Socket);
DEFINE_IL2CPP_CLASS(::NanoSockets::Socket, "NanoSockets", "Socket");
// Dependencies 
namespace NanoSockets {
// Is value type: true
// CS Name: NanoSockets.Socket
struct CORDL_TYPE Socket {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Field handle, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_handle, put=__cordl_internal_set_handle)) int64_t  handle;

constexpr int64_t const& __cordl_internal_get_handle() const;

constexpr int64_t& __cordl_internal_get_handle() ;

constexpr void __cordl_internal_set_handle(int64_t  value) ;

/// @brief Method get_IsCreated, addr 0xa36796c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method op_Implicit, addr 0xa367980, size 0x4, virtual false, abstract: false, final false
static inline ::NanoSockets::Socket op_Implicit___NanoSockets__Socket(int64_t  handle) ;

/// @brief Method op_Implicit, addr 0xa36797c, size 0x4, virtual false, abstract: false, final false
static inline int64_t op_Implicit_int64_t(::NanoSockets::Socket  socket) ;

// Ctor Parameters []
// @brief default ctor
constexpr Socket() ;

// Ctor Parameters [CppParam { name: "handle", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr Socket(int64_t  handle) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___handle_padding[0x0];
/// @brief Field handle, offset: 0x0, size: 0x8, def value: None
 int64_t  ___handle;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___handle_padding_forAlignment[0x0];
/// @brief Field handle, offset: 0x0, size: 0x8, def value: None
 int64_t  ___handle_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33104};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::NanoSockets::Socket) == 0x8, "Size mismatch!");

} // namespace end def NanoSockets

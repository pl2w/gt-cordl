#pragma once
// IWYU pragma private; include "Fusion/Sockets/OnConnectionRequestReply.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnConnectionRequestReply)
// Forward declare root types
namespace Fusion::Sockets {
struct OnConnectionRequestReply;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::OnConnectionRequestReply);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::OnConnectionRequestReply, "Fusion.Sockets", "OnConnectionRequestReply");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.OnConnectionRequestReply
struct CORDL_TYPE OnConnectionRequestReply {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OnConnectionRequestReply_Unwrapped
enum struct __OnConnectionRequestReply_Unwrapped : int32_t {
__E_Ok = static_cast<int32_t>(0x0),
__E_Refuse = static_cast<int32_t>(0x1),
__E_Waiting = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OnConnectionRequestReply_Unwrapped () const noexcept {
return static_cast<__OnConnectionRequestReply_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OnConnectionRequestReply() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OnConnectionRequestReply(int32_t  value__) noexcept;

/// @brief Field Ok value: I32(0)
static ::Fusion::Sockets::OnConnectionRequestReply const Ok;

/// @brief Field Refuse value: I32(1)
static ::Fusion::Sockets::OnConnectionRequestReply const Refuse;

/// @brief Field Waiting value: I32(2)
static ::Fusion::Sockets::OnConnectionRequestReply const Waiting;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29376};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::OnConnectionRequestReply, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::OnConnectionRequestReply) == 0x4, "Size mismatch!");

} // namespace end def Fusion::Sockets

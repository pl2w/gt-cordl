#pragma once
// IWYU pragma private; include "XNode/NodePort_IO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NodePort_IO)
// Forward declare root types
namespace GlobalNamespace {
struct NodePort_IO;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NodePort_IO);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NodePort_IO, "XNode", "NodePort/IO");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: XNode.NodePort/IO
struct CORDL_TYPE NodePort_IO {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NodePort_IO_Unwrapped
enum struct __NodePort_IO_Unwrapped : int32_t {
__E_Input = static_cast<int32_t>(0x0),
__E_Output = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NodePort_IO_Unwrapped () const noexcept {
return static_cast<__NodePort_IO_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NodePort_IO() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NodePort_IO(int32_t  value__) noexcept;

/// @brief Field Input value: I32(0)
static ::GlobalNamespace::NodePort_IO const Input;

/// @brief Field Output value: I32(1)
static ::GlobalNamespace::NodePort_IO const Output;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32281};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NodePort_IO, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NodePort_IO) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

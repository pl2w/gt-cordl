#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/IProtocol_DeserializationFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IProtocol_DeserializationFlags)
// Forward declare root types
namespace GlobalNamespace {
struct IProtocol_DeserializationFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IProtocol_DeserializationFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IProtocol_DeserializationFlags, "ExitGames.Client.Photon", "IProtocol/DeserializationFlags");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ExitGames.Client.Photon.IProtocol/DeserializationFlags
struct CORDL_TYPE IProtocol_DeserializationFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __IProtocol_DeserializationFlags_Unwrapped
enum struct __IProtocol_DeserializationFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_AllowPooledByteArray = static_cast<int32_t>(0x1),
__E_WrapIncomingStructs = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IProtocol_DeserializationFlags_Unwrapped () const noexcept {
return static_cast<__IProtocol_DeserializationFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr IProtocol_DeserializationFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr IProtocol_DeserializationFlags(int32_t  value__) noexcept;

/// @brief Field AllowPooledByteArray value: I32(1)
static ::GlobalNamespace::IProtocol_DeserializationFlags const AllowPooledByteArray;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::IProtocol_DeserializationFlags const None;

/// @brief Field WrapIncomingStructs value: I32(2)
static ::GlobalNamespace::IProtocol_DeserializationFlags const WrapIncomingStructs;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26431};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IProtocol_DeserializationFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IProtocol_DeserializationFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

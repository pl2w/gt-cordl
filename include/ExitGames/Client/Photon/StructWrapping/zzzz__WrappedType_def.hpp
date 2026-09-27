#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/StructWrapping/WrappedType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WrappedType)
// Forward declare root types
namespace ExitGames::Client::Photon::StructWrapping {
struct WrappedType;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::StructWrapping::WrappedType);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::StructWrapping::WrappedType, "ExitGames.Client.Photon.StructWrapping", "WrappedType");
// Dependencies 
namespace ExitGames::Client::Photon::StructWrapping {
// Is value type: true
// CS Name: ExitGames.Client.Photon.StructWrapping.WrappedType
struct CORDL_TYPE WrappedType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WrappedType_Unwrapped
enum struct __WrappedType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Bool = static_cast<int32_t>(0x1),
__E_Byte = static_cast<int32_t>(0x2),
__E_Int16 = static_cast<int32_t>(0x3),
__E_Int32 = static_cast<int32_t>(0x4),
__E_Int64 = static_cast<int32_t>(0x5),
__E_Single = static_cast<int32_t>(0x6),
__E_Double = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WrappedType_Unwrapped () const noexcept {
return static_cast<__WrappedType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WrappedType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WrappedType(int32_t  value__) noexcept;

/// @brief Field Bool value: I32(1)
static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Bool;

/// @brief Field Byte value: I32(2)
static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Byte;

/// @brief Field Double value: I32(7)
static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Double;

/// @brief Field Int16 value: I32(3)
static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Int16;

/// @brief Field Int32 value: I32(4)
static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Int32;

/// @brief Field Int64 value: I32(5)
static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Int64;

/// @brief Field Single value: I32(6)
static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Single;

/// @brief Field Unknown value: I32(0)
static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26489};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::StructWrapping::WrappedType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::StructWrapping::WrappedType) == 0x4, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon::StructWrapping

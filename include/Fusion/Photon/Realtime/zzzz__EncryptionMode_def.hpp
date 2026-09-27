#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/EncryptionMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptionMode)
// Forward declare root types
namespace Fusion::Photon::Realtime {
struct EncryptionMode;
}
// Write type traits
MARK_VAL_T(::Fusion::Photon::Realtime::EncryptionMode);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::EncryptionMode, "Fusion.Photon.Realtime", "EncryptionMode");
// Dependencies 
namespace Fusion::Photon::Realtime {
// Is value type: true
// CS Name: Fusion.Photon.Realtime.EncryptionMode
struct CORDL_TYPE EncryptionMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EncryptionMode_Unwrapped
enum struct __EncryptionMode_Unwrapped : int32_t {
__E_PayloadEncryption = static_cast<int32_t>(0x0),
__E_DatagramEncryptionGCM = static_cast<int32_t>(0xd),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EncryptionMode_Unwrapped () const noexcept {
return static_cast<__EncryptionMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EncryptionMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EncryptionMode(int32_t  value__) noexcept;

/// @brief Field DatagramEncryptionGCM value: I32(13)
static ::Fusion::Photon::Realtime::EncryptionMode const DatagramEncryptionGCM;

/// @brief Field PayloadEncryption value: I32(0)
static ::Fusion::Photon::Realtime::EncryptionMode const PayloadEncryption;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28049};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::EncryptionMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::EncryptionMode) == 0x4, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime

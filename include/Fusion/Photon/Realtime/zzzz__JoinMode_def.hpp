#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/JoinMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinMode)
// Forward declare root types
namespace Fusion::Photon::Realtime {
struct JoinMode;
}
// Write type traits
MARK_VAL_T(::Fusion::Photon::Realtime::JoinMode);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::JoinMode, "Fusion.Photon.Realtime", "JoinMode");
// Dependencies 
namespace Fusion::Photon::Realtime {
// Is value type: true
// CS Name: Fusion.Photon.Realtime.JoinMode
struct CORDL_TYPE JoinMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __JoinMode_Unwrapped
enum struct __JoinMode_Unwrapped : uint8_t {
__E_Default = static_cast<uint8_t>(0x0u),
__E_CreateIfNotExists = static_cast<uint8_t>(0x1u),
__E_JoinOrRejoin = static_cast<uint8_t>(0x2u),
__E_RejoinOnly = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JoinMode_Unwrapped () const noexcept {
return static_cast<__JoinMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JoinMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr JoinMode(uint8_t  value__) noexcept;

/// @brief Field CreateIfNotExists value: U8(1)
static ::Fusion::Photon::Realtime::JoinMode const CreateIfNotExists;

/// @brief Field Default value: U8(0)
static ::Fusion::Photon::Realtime::JoinMode const Default;

/// @brief Field JoinOrRejoin value: U8(2)
static ::Fusion::Photon::Realtime::JoinMode const JoinOrRejoin;

/// @brief Field RejoinOnly value: U8(3)
static ::Fusion::Photon::Realtime::JoinMode const RejoinOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28080};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::JoinMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::JoinMode) == 0x1, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime

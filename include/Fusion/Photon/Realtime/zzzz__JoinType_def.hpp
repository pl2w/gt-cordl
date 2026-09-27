#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/JoinType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinType)
// Forward declare root types
namespace Fusion::Photon::Realtime {
struct JoinType;
}
// Write type traits
MARK_VAL_T(::Fusion::Photon::Realtime::JoinType);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::JoinType, "Fusion.Photon.Realtime", "JoinType");
// Dependencies 
namespace Fusion::Photon::Realtime {
// Is value type: true
// CS Name: Fusion.Photon.Realtime.JoinType
struct CORDL_TYPE JoinType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JoinType_Unwrapped
enum struct __JoinType_Unwrapped : int32_t {
__E_CreateRoom = static_cast<int32_t>(0x0),
__E_JoinRoom = static_cast<int32_t>(0x1),
__E_JoinRandomRoom = static_cast<int32_t>(0x2),
__E_JoinRandomOrCreateRoom = static_cast<int32_t>(0x3),
__E_JoinOrCreateRoom = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JoinType_Unwrapped () const noexcept {
return static_cast<__JoinType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JoinType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JoinType(int32_t  value__) noexcept;

/// @brief Field CreateRoom value: I32(0)
static ::Fusion::Photon::Realtime::JoinType const CreateRoom;

/// @brief Field JoinOrCreateRoom value: I32(4)
static ::Fusion::Photon::Realtime::JoinType const JoinOrCreateRoom;

/// @brief Field JoinRandomOrCreateRoom value: I32(3)
static ::Fusion::Photon::Realtime::JoinType const JoinRandomOrCreateRoom;

/// @brief Field JoinRandomRoom value: I32(2)
static ::Fusion::Photon::Realtime::JoinType const JoinRandomRoom;

/// @brief Field JoinRoom value: I32(1)
static ::Fusion::Photon::Realtime::JoinType const JoinRoom;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28045};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::JoinType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::JoinType) == 0x4, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime

#pragma once
// IWYU pragma private; include "Photon/Pun/ViewSynchronization.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ViewSynchronization)
// Forward declare root types
namespace Photon::Pun {
struct ViewSynchronization;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::ViewSynchronization);
DEFINE_IL2CPP_CLASS(::Photon::Pun::ViewSynchronization, "Photon.Pun", "ViewSynchronization");
// Dependencies 
namespace Photon::Pun {
// Is value type: true
// CS Name: Photon.Pun.ViewSynchronization
struct CORDL_TYPE ViewSynchronization {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ViewSynchronization_Unwrapped
enum struct __ViewSynchronization_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_ReliableDeltaCompressed = static_cast<int32_t>(0x1),
__E_Unreliable = static_cast<int32_t>(0x2),
__E_UnreliableOnChange = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ViewSynchronization_Unwrapped () const noexcept {
return static_cast<__ViewSynchronization_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ViewSynchronization() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ViewSynchronization(int32_t  value__) noexcept;

/// @brief Field Off value: I32(0)
static ::Photon::Pun::ViewSynchronization const Off;

/// @brief Field ReliableDeltaCompressed value: I32(1)
static ::Photon::Pun::ViewSynchronization const ReliableDeltaCompressed;

/// @brief Field Unreliable value: I32(2)
static ::Photon::Pun::ViewSynchronization const Unreliable;

/// @brief Field UnreliableOnChange value: I32(3)
static ::Photon::Pun::ViewSynchronization const UnreliableOnChange;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29690};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::ViewSynchronization, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::ViewSynchronization) == 0x4, "Size mismatch!");

} // namespace end def Photon::Pun

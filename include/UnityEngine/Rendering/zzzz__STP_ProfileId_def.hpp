#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/STP_ProfileId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(STP_ProfileId)
// Forward declare root types
namespace GlobalNamespace {
struct STP_ProfileId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::STP_ProfileId);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::STP_ProfileId, "UnityEngine.Rendering", "STP/ProfileId");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.STP/ProfileId
struct CORDL_TYPE STP_ProfileId {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __STP_ProfileId_Unwrapped
enum struct __STP_ProfileId_Unwrapped : int32_t {
__E_StpSetup = static_cast<int32_t>(0x0),
__E_StpPreTaa = static_cast<int32_t>(0x1),
__E_StpTaa = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __STP_ProfileId_Unwrapped () const noexcept {
return static_cast<__STP_ProfileId_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr STP_ProfileId() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr STP_ProfileId(int32_t  value__) noexcept;

/// @brief Field StpPreTaa value: I32(1)
static ::GlobalNamespace::STP_ProfileId const StpPreTaa;

/// @brief Field StpSetup value: I32(0)
static ::GlobalNamespace::STP_ProfileId const StpSetup;

/// @brief Field StpTaa value: I32(2)
static ::GlobalNamespace::STP_ProfileId const StpTaa;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16951};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::STP_ProfileId, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::STP_ProfileId) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

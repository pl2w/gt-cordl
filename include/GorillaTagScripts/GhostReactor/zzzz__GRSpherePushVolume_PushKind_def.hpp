#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GRSpherePushVolume_PushKind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRSpherePushVolume_PushKind)
// Forward declare root types
namespace GlobalNamespace {
struct GRSpherePushVolume_PushKind;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRSpherePushVolume_PushKind);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSpherePushVolume_PushKind, "GorillaTagScripts.GhostReactor", "GRSpherePushVolume/PushKind");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.GhostReactor.GRSpherePushVolume/PushKind
struct CORDL_TYPE GRSpherePushVolume_PushKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRSpherePushVolume_PushKind_Unwrapped
enum struct __GRSpherePushVolume_PushKind_Unwrapped : int32_t {
__E_Radial = static_cast<int32_t>(0x0),
__E_UpAndOut = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRSpherePushVolume_PushKind_Unwrapped () const noexcept {
return static_cast<__GRSpherePushVolume_PushKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRSpherePushVolume_PushKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRSpherePushVolume_PushKind(int32_t  value__) noexcept;

/// @brief Field Radial value: I32(0)
static ::GlobalNamespace::GRSpherePushVolume_PushKind const Radial;

/// @brief Field UpAndOut value: I32(1)
static ::GlobalNamespace::GRSpherePushVolume_PushKind const UpAndOut;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4132};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSpherePushVolume_PushKind, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSpherePushVolume_PushKind) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

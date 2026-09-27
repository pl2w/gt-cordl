#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/HDRDebugViewPass_HDRDebugPassId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HDRDebugViewPass_HDRDebugPassId)
// Forward declare root types
namespace GlobalNamespace {
struct HDRDebugViewPass_HDRDebugPassId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HDRDebugViewPass_HDRDebugPassId);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HDRDebugViewPass_HDRDebugPassId, "UnityEngine.Rendering.Universal", "HDRDebugViewPass/HDRDebugPassId");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.HDRDebugViewPass/HDRDebugPassId
struct CORDL_TYPE HDRDebugViewPass_HDRDebugPassId {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HDRDebugViewPass_HDRDebugPassId_Unwrapped
enum struct __HDRDebugViewPass_HDRDebugPassId_Unwrapped : int32_t {
__E_CIExyPrepass = static_cast<int32_t>(0x0),
__E_DebugViewPass = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HDRDebugViewPass_HDRDebugPassId_Unwrapped () const noexcept {
return static_cast<__HDRDebugViewPass_HDRDebugPassId_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HDRDebugViewPass_HDRDebugPassId() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HDRDebugViewPass_HDRDebugPassId(int32_t  value__) noexcept;

/// @brief Field CIExyPrepass value: I32(0)
static ::GlobalNamespace::HDRDebugViewPass_HDRDebugPassId const CIExyPrepass;

/// @brief Field DebugViewPass value: I32(1)
static ::GlobalNamespace::HDRDebugViewPass_HDRDebugPassId const DebugViewPass;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18477};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HDRDebugViewPass_HDRDebugPassId, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HDRDebugViewPass_HDRDebugPassId) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

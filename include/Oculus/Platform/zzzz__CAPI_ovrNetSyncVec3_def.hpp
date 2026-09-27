#pragma once
// IWYU pragma private; include "Oculus/Platform/CAPI_ovrNetSyncVec3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CAPI_ovrNetSyncVec3)
// Forward declare root types
namespace GlobalNamespace {
struct CAPI_ovrNetSyncVec3;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CAPI_ovrNetSyncVec3);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CAPI_ovrNetSyncVec3, "Oculus.Platform", "CAPI/ovrNetSyncVec3");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Platform.CAPI/ovrNetSyncVec3
struct CORDL_TYPE CAPI_ovrNetSyncVec3 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CAPI_ovrNetSyncVec3() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CAPI_ovrNetSyncVec3(float_t  x, float_t  y, float_t  z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26756};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 float_t  z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CAPI_ovrNetSyncVec3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CAPI_ovrNetSyncVec3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CAPI_ovrNetSyncVec3, z) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CAPI_ovrNetSyncVec3) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace

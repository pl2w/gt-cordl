#pragma once
// IWYU pragma private; include "GlobalNamespace/SynthesisArcadeObject_SynthesisCallbacks_DRM_STATUS.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SynthesisArcadeObject_SynthesisCallbacks_DRM_STATUS)
// Forward declare root types
namespace GlobalNamespace {
struct SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS, "", "SynthesisArcadeObject/SynthesisCallbacks/DRM_STATUS");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SynthesisArcadeObject/SynthesisCallbacks/DRM_STATUS
struct CORDL_TYPE SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS_Unwrapped
enum struct __SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS_Unwrapped : int32_t {
__E_DIE = static_cast<int32_t>(0xffffffff),
__E_RETRY = static_cast<int32_t>(0x0),
__E_OK = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS_Unwrapped () const noexcept {
return static_cast<__SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS(int32_t  value__) noexcept;

/// @brief Field DIE value: I32(-1)
static ::GlobalNamespace::SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS const DIE;

/// @brief Field OK value: I32(1)
static ::GlobalNamespace::SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS const OK;

/// @brief Field RETRY value: I32(0)
static ::GlobalNamespace::SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS const RETRY;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3627};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

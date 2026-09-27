#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousProperty_Cast.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuousProperty_Cast)
// Forward declare root types
namespace GlobalNamespace {
struct ContinuousProperty_Cast;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContinuousProperty_Cast);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContinuousProperty_Cast, "GorillaTag.Cosmetics", "ContinuousProperty/Cast");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.ContinuousProperty/Cast
struct CORDL_TYPE ContinuousProperty_Cast {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContinuousProperty_Cast_Unwrapped
enum struct __ContinuousProperty_Cast_Unwrapped : int32_t {
__E_Null = static_cast<int32_t>(0x0),
__E_Any = static_cast<int32_t>(0x400),
__E_Transform = static_cast<int32_t>(0x800),
__E_ParticleSystem = static_cast<int32_t>(0xc00),
__E_SkinnedMeshRenderer = static_cast<int32_t>(0x1000),
__E_Animator = static_cast<int32_t>(0x1400),
__E_AudioSource = static_cast<int32_t>(0x1800),
__E_Renderer = static_cast<int32_t>(0x1c00),
__E_Behaviour = static_cast<int32_t>(0x2000),
__E_GameObject = static_cast<int32_t>(0x2400),
__E_Rigidbody = static_cast<int32_t>(0x2800),
__E_VoicePitchShiftCosmetic = static_cast<int32_t>(0x2c00),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContinuousProperty_Cast_Unwrapped () const noexcept {
return static_cast<__ContinuousProperty_Cast_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContinuousProperty_Cast() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContinuousProperty_Cast(int32_t  value__) noexcept;

/// @brief Field Animator value: I32(5120)
static ::GlobalNamespace::ContinuousProperty_Cast const Animator;

/// @brief Field Any value: I32(1024)
static ::GlobalNamespace::ContinuousProperty_Cast const Any;

/// @brief Field AudioSource value: I32(6144)
static ::GlobalNamespace::ContinuousProperty_Cast const AudioSource;

/// @brief Field Behaviour value: I32(8192)
static ::GlobalNamespace::ContinuousProperty_Cast const Behaviour;

/// @brief Field GameObject value: I32(9216)
static ::GlobalNamespace::ContinuousProperty_Cast const GameObject;

/// @brief Field Null value: I32(0)
static ::GlobalNamespace::ContinuousProperty_Cast const Null;

/// @brief Field ParticleSystem value: I32(3072)
static ::GlobalNamespace::ContinuousProperty_Cast const ParticleSystem;

/// @brief Field Renderer value: I32(7168)
static ::GlobalNamespace::ContinuousProperty_Cast const Renderer;

/// @brief Field Rigidbody value: I32(10240)
static ::GlobalNamespace::ContinuousProperty_Cast const Rigidbody;

/// @brief Field SkinnedMeshRenderer value: I32(4096)
static ::GlobalNamespace::ContinuousProperty_Cast const SkinnedMeshRenderer;

/// @brief Field Transform value: I32(2048)
static ::GlobalNamespace::ContinuousProperty_Cast const Transform;

/// @brief Field VoicePitchShiftCosmetic value: I32(11264)
static ::GlobalNamespace::ContinuousProperty_Cast const VoicePitchShiftCosmetic;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4882};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContinuousProperty_Cast, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContinuousProperty_Cast) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

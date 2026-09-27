#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicRingCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MagicRingCosmetic_FadeState_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MagicRingCosmetic)
namespace GlobalNamespace {
struct MagicRingCosmetic_FadeState;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class ThermalReceiver;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MagicRingCosmetic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MagicRingCosmetic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MagicRingCosmetic*, "", "MagicRingCosmetic");
// Dependencies MagicRingCosmetic::FadeState, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MagicRingCosmetic
class CORDL_TYPE MagicRingCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FadeState = ::GlobalNamespace::MagicRingCosmetic_FadeState;

/// @brief Field defaultEmissiveColor, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get_defaultEmissiveColor, put=__cordl_internal_set_defaultEmissiveColor)) ::UnityEngine::Color  defaultEmissiveColor;

/// @brief Field emissiveAmount, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_emissiveAmount, put=__cordl_internal_set_emissiveAmount)) float_t  emissiveAmount;

/// @brief Field fadeInSounds, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_fadeInSounds, put=__cordl_internal_set_fadeInSounds)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  fadeInSounds;

/// @brief Field fadeInTemperatureThreshold, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeInTemperatureThreshold, put=__cordl_internal_set_fadeInTemperatureThreshold)) float_t  fadeInTemperatureThreshold;

/// @brief Field fadeOutSounds, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_fadeOutSounds, put=__cordl_internal_set_fadeOutSounds)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  fadeOutSounds;

/// @brief Field fadeOutTemperatureThreshold, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeOutTemperatureThreshold, put=__cordl_internal_set_fadeOutTemperatureThreshold)) float_t  fadeOutTemperatureThreshold;

/// @brief Field fadeState, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeState, put=__cordl_internal_set_fadeState)) ::GlobalNamespace::MagicRingCosmetic_FadeState  fadeState;

/// @brief Field fadeTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeTime, put=__cordl_internal_set_fadeTime)) float_t  fadeTime;

/// @brief Field materialPropertyBlock, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialPropertyBlock, put=__cordl_internal_set_materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock;

/// @brief Field ringRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ringRenderer, put=__cordl_internal_set_ringRenderer)) ::UnityW<::UnityEngine::Renderer>  ringRenderer;

/// @brief Field thermalReceiver, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_thermalReceiver, put=__cordl_internal_set_thermalReceiver)) ::UnityW<::GlobalNamespace::ThermalReceiver>  thermalReceiver;

/// @brief Method Awake, addr 0x5e06740, size 0xcc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5e0680c, size 0x188, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::MagicRingCosmetic* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultEmissiveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_defaultEmissiveColor() ;

constexpr float_t const& __cordl_internal_get_emissiveAmount() const;

constexpr float_t& __cordl_internal_get_emissiveAmount() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_fadeInSounds() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_fadeInSounds() ;

constexpr float_t const& __cordl_internal_get_fadeInTemperatureThreshold() const;

constexpr float_t& __cordl_internal_get_fadeInTemperatureThreshold() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_fadeOutSounds() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_fadeOutSounds() ;

constexpr float_t const& __cordl_internal_get_fadeOutTemperatureThreshold() const;

constexpr float_t& __cordl_internal_get_fadeOutTemperatureThreshold() ;

constexpr ::GlobalNamespace::MagicRingCosmetic_FadeState const& __cordl_internal_get_fadeState() const;

constexpr ::GlobalNamespace::MagicRingCosmetic_FadeState& __cordl_internal_get_fadeState() ;

constexpr float_t const& __cordl_internal_get_fadeTime() const;

constexpr float_t& __cordl_internal_get_fadeTime() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_materialPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_materialPropertyBlock() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_ringRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_ringRenderer() ;

constexpr ::UnityW<::GlobalNamespace::ThermalReceiver> const& __cordl_internal_get_thermalReceiver() const;

constexpr ::UnityW<::GlobalNamespace::ThermalReceiver>& __cordl_internal_get_thermalReceiver() ;

constexpr void __cordl_internal_set_defaultEmissiveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_emissiveAmount(float_t  value) ;

constexpr void __cordl_internal_set_fadeInSounds(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_fadeInTemperatureThreshold(float_t  value) ;

constexpr void __cordl_internal_set_fadeOutSounds(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_fadeOutTemperatureThreshold(float_t  value) ;

constexpr void __cordl_internal_set_fadeState(::GlobalNamespace::MagicRingCosmetic_FadeState  value) ;

constexpr void __cordl_internal_set_fadeTime(float_t  value) ;

constexpr void __cordl_internal_set_materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_ringRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_thermalReceiver(::UnityW<::GlobalNamespace::ThermalReceiver>  value) ;

/// @brief Method .ctor, addr 0x5e06994, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MagicRingCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MagicRingCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MagicRingCosmetic(MagicRingCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MagicRingCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MagicRingCosmetic(MagicRingCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{530};

/// [Tooltip("The ring will fade in the emissive texture based on temperature from this ThermalReceiver.")]
/// @brief Field thermalReceiver, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ThermalReceiver>  ___thermalReceiver;

/// @brief Field ringRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___ringRenderer;

/// @brief Field fadeInTemperatureThreshold, offset: 0x30, size: 0x4, def value: None
 float_t  ___fadeInTemperatureThreshold;

/// @brief Field fadeOutTemperatureThreshold, offset: 0x34, size: 0x4, def value: None
 float_t  ___fadeOutTemperatureThreshold;

/// @brief Field fadeTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___fadeTime;

/// @brief Field fadeInSounds, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___fadeInSounds;

/// @brief Field fadeOutSounds, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___fadeOutSounds;

/// @brief Field fadeState, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::MagicRingCosmetic_FadeState  ___fadeState;

/// @brief Field defaultEmissiveColor, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Color  ___defaultEmissiveColor;

/// @brief Field emissiveAmount, offset: 0x64, size: 0x4, def value: None
 float_t  ___emissiveAmount;

/// @brief Field materialPropertyBlock, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___materialPropertyBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MagicRingCosmetic, ___thermalReceiver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicRingCosmetic, ___ringRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicRingCosmetic, ___fadeInTemperatureThreshold) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicRingCosmetic, ___fadeOutTemperatureThreshold) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicRingCosmetic, ___fadeTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicRingCosmetic, ___fadeInSounds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicRingCosmetic, ___fadeOutSounds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicRingCosmetic, ___fadeState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicRingCosmetic, ___defaultEmissiveColor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicRingCosmetic, ___emissiveAmount) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicRingCosmetic, ___materialPropertyBlock) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MagicRingCosmetic) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace

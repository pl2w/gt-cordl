#pragma once
// IWYU pragma private; include "Photon/Voice/VoiceClient_CreateOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceClient_CreateOptions)
// Forward declare root types
namespace GlobalNamespace {
struct VoiceClient_CreateOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoiceClient_CreateOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceClient_CreateOptions, "Photon.Voice", "VoiceClient/CreateOptions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Voice.VoiceClient/CreateOptions
struct CORDL_TYPE VoiceClient_CreateOptions {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::GlobalNamespace::VoiceClient_CreateOptions  Default;

static inline ::GlobalNamespace::VoiceClient_CreateOptions getStaticF_Default() ;

static inline void setStaticF_Default(::GlobalNamespace::VoiceClient_CreateOptions  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr VoiceClient_CreateOptions() ;

// Ctor Parameters [CppParam { name: "VoiceIDMin", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "VoiceIDMax", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr VoiceClient_CreateOptions(uint8_t  VoiceIDMin, uint8_t  VoiceIDMax) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28454};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field VoiceIDMin, offset: 0x0, size: 0x1, def value: None
 uint8_t  VoiceIDMin;

/// @brief Field VoiceIDMax, offset: 0x1, size: 0x1, def value: None
 uint8_t  VoiceIDMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceClient_CreateOptions, VoiceIDMin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceClient_CreateOptions, VoiceIDMax) == 0x1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceClient_CreateOptions) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/HapticImpulseSingleChannelGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HapticImpulseSingleChannelGroup)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class IXRHapticImpulseChannelGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class IXRHapticImpulseChannel;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class HapticImpulseSingleChannelGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics", "HapticImpulseSingleChannelGroup");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.HapticImpulseSingleChannelGroup
class CORDL_TYPE HapticImpulseSingleChannelGroup : public ::System::Object {
public:
// Declarations
/// @brief Field <impulseChannel>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__impulseChannel_k__BackingField, put=__cordl_internal_set__impulseChannel_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*  _impulseChannel_k__BackingField;

 __declspec(property(get=get_channelCount)) int32_t  channelCount;

 __declspec(property(get=get_impulseChannel)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*  impulseChannel;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup*() noexcept;

/// @brief Method GetChannel, addr 0xb4cbd50, size 0x84, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* GetChannel(int32_t  channel) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup* New_ctor(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*  channel) ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* const& __cordl_internal_get__impulseChannel_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*& __cordl_internal_get__impulseChannel_k__BackingField() ;

constexpr void __cordl_internal_set__impulseChannel_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*  value) ;

/// @brief Method .ctor, addr 0xb4caedc, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*  channel) ;

/// @brief Method get_channelCount, addr 0xb4cbd40, size 0x8, virtual true, abstract: false, final true
inline int32_t get_channelCount() ;

/// [CompilerGenerated]
/// @brief Method get_impulseChannel, addr 0xb4cbd48, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* get_impulseChannel() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Haptics__IXRHapticImpulseChannelGroup() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HapticImpulseSingleChannelGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HapticImpulseSingleChannelGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HapticImpulseSingleChannelGroup(HapticImpulseSingleChannelGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HapticImpulseSingleChannelGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HapticImpulseSingleChannelGroup(HapticImpulseSingleChannelGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11672};

/// [CompilerGenerated]
/// @brief Field <impulseChannel>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*  ____impulseChannel_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup, ____impulseChannel_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics

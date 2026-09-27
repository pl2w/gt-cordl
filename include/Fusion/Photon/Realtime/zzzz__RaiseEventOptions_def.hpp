#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/RaiseEventOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Photon/Realtime/zzzz__EventCaching_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ReceiverGroup_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RaiseEventOptions)
namespace Fusion::Photon::Realtime {
class WebFlags;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class RaiseEventOptions;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::RaiseEventOptions*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::RaiseEventOptions*, "Fusion.Photon.Realtime", "RaiseEventOptions");
// Dependencies Fusion.Photon.Realtime.EventCaching, Fusion.Photon.Realtime.ReceiverGroup, System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.RaiseEventOptions
class CORDL_TYPE RaiseEventOptions : public ::System::Object {
public:
// Declarations
/// @brief Field CachingOption, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_CachingOption, put=__cordl_internal_set_CachingOption)) ::Fusion::Photon::Realtime::EventCaching  CachingOption;

/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::Fusion::Photon::Realtime::RaiseEventOptions*  Default;

/// @brief Field Flags, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Flags, put=__cordl_internal_set_Flags)) ::Fusion::Photon::Realtime::WebFlags*  Flags;

/// @brief Field InterestGroup, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_InterestGroup, put=__cordl_internal_set_InterestGroup)) uint8_t  InterestGroup;

/// @brief Field Receivers, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_Receivers, put=__cordl_internal_set_Receivers)) ::Fusion::Photon::Realtime::ReceiverGroup  Receivers;

/// @brief Field SequenceChannel, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_SequenceChannel, put=__cordl_internal_set_SequenceChannel)) uint8_t  SequenceChannel;

/// @brief Field TargetActors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetActors, put=__cordl_internal_set_TargetActors)) ::ArrayW<int32_t>  TargetActors;

static inline ::Fusion::Photon::Realtime::RaiseEventOptions* New_ctor() ;

constexpr ::Fusion::Photon::Realtime::EventCaching const& __cordl_internal_get_CachingOption() const;

constexpr ::Fusion::Photon::Realtime::EventCaching& __cordl_internal_get_CachingOption() ;

constexpr ::Fusion::Photon::Realtime::WebFlags* const& __cordl_internal_get_Flags() const;

constexpr ::Fusion::Photon::Realtime::WebFlags*& __cordl_internal_get_Flags() ;

constexpr uint8_t const& __cordl_internal_get_InterestGroup() const;

constexpr uint8_t& __cordl_internal_get_InterestGroup() ;

constexpr ::Fusion::Photon::Realtime::ReceiverGroup const& __cordl_internal_get_Receivers() const;

constexpr ::Fusion::Photon::Realtime::ReceiverGroup& __cordl_internal_get_Receivers() ;

constexpr uint8_t const& __cordl_internal_get_SequenceChannel() const;

constexpr uint8_t& __cordl_internal_get_SequenceChannel() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_TargetActors() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_TargetActors() ;

constexpr void __cordl_internal_set_CachingOption(::Fusion::Photon::Realtime::EventCaching  value) ;

constexpr void __cordl_internal_set_Flags(::Fusion::Photon::Realtime::WebFlags*  value) ;

constexpr void __cordl_internal_set_InterestGroup(uint8_t  value) ;

constexpr void __cordl_internal_set_Receivers(::Fusion::Photon::Realtime::ReceiverGroup  value) ;

constexpr void __cordl_internal_set_SequenceChannel(uint8_t  value) ;

constexpr void __cordl_internal_set_TargetActors(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0x5f5dc6c, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::Photon::Realtime::RaiseEventOptions* getStaticF_Default() ;

static inline void setStaticF_Default(::Fusion::Photon::Realtime::RaiseEventOptions*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RaiseEventOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RaiseEventOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RaiseEventOptions(RaiseEventOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RaiseEventOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RaiseEventOptions(RaiseEventOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28086};

/// @brief Field CachingOption, offset: 0x10, size: 0x1, def value: None
 ::Fusion::Photon::Realtime::EventCaching  ___CachingOption;

/// @brief Field InterestGroup, offset: 0x11, size: 0x1, def value: None
 uint8_t  ___InterestGroup;

/// @brief Field TargetActors, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___TargetActors;

/// @brief Field Receivers, offset: 0x20, size: 0x1, def value: None
 ::Fusion::Photon::Realtime::ReceiverGroup  ___Receivers;

/// [Obsolete("Not used where SendOptions are a parameter too. Use SendOptions.Channel instead.")]
/// @brief Field SequenceChannel, offset: 0x21, size: 0x1, def value: None
 uint8_t  ___SequenceChannel;

/// @brief Field Flags, offset: 0x28, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::WebFlags*  ___Flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::RaiseEventOptions, ___CachingOption) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RaiseEventOptions, ___InterestGroup) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RaiseEventOptions, ___TargetActors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RaiseEventOptions, ___Receivers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RaiseEventOptions, ___SequenceChannel) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RaiseEventOptions, ___Flags) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::RaiseEventOptions) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime

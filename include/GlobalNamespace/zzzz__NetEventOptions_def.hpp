#pragma once
// IWYU pragma private; include "GlobalNamespace/NetEventOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetEventOptions_RecieverTarget_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetEventOptions)
namespace GlobalNamespace {
struct NetEventOptions_RecieverTarget;
}
namespace Photon::Realtime {
class WebFlags;
}
// Forward declare root types
namespace GlobalNamespace {
class NetEventOptions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetEventOptions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetEventOptions*, "", "NetEventOptions");
// Dependencies NetEventOptions::RecieverTarget, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetEventOptions
class CORDL_TYPE NetEventOptions : public ::System::Object {
public:
// Declarations
using RecieverTarget = ::GlobalNamespace::NetEventOptions_RecieverTarget;

/// @brief Field Flags, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Flags, put=__cordl_internal_set_Flags)) ::Photon::Realtime::WebFlags*  Flags;

 __declspec(property(get=get_HasWebHooks)) bool  HasWebHooks;

/// @brief Field Reciever, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Reciever, put=__cordl_internal_set_Reciever)) ::GlobalNamespace::NetEventOptions_RecieverTarget  Reciever;

/// @brief Field TargetActors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetActors, put=__cordl_internal_set_TargetActors)) ::ArrayW<int32_t>  TargetActors;

static inline ::GlobalNamespace::NetEventOptions* New_ctor() ;

static inline ::GlobalNamespace::NetEventOptions* New_ctor(int32_t  reciever, ::ArrayW<int32_t>  actors, uint8_t  flags) ;

constexpr ::Photon::Realtime::WebFlags* const& __cordl_internal_get_Flags() const;

constexpr ::Photon::Realtime::WebFlags*& __cordl_internal_get_Flags() ;

constexpr ::GlobalNamespace::NetEventOptions_RecieverTarget const& __cordl_internal_get_Reciever() const;

constexpr ::GlobalNamespace::NetEventOptions_RecieverTarget& __cordl_internal_get_Reciever() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_TargetActors() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_TargetActors() ;

constexpr void __cordl_internal_set_Flags(::Photon::Realtime::WebFlags*  value) ;

constexpr void __cordl_internal_set_Reciever(::GlobalNamespace::NetEventOptions_RecieverTarget  value) ;

constexpr void __cordl_internal_set_TargetActors(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0x56ebb14, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x56ebbec, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(int32_t  reciever, ::ArrayW<int32_t>  actors, uint8_t  flags) ;

/// @brief Method get_HasWebHooks, addr 0x56ebb84, size 0x68, virtual false, abstract: false, final false
inline bool get_HasWebHooks() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetEventOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetEventOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetEventOptions(NetEventOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetEventOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetEventOptions(NetEventOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1134};

/// @brief Field Reciever, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::NetEventOptions_RecieverTarget  ___Reciever;

/// @brief Field TargetActors, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___TargetActors;

/// @brief Field Flags, offset: 0x20, size: 0x8, def value: None
 ::Photon::Realtime::WebFlags*  ___Flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetEventOptions, ___Reciever) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetEventOptions, ___TargetActors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetEventOptions, ___Flags) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetEventOptions) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

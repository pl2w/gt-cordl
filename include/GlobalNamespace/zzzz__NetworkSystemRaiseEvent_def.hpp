#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemRaiseEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSystemRaiseEvent)
namespace GlobalNamespace {
class NetEventOptions;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkSystemRaiseEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkSystemRaiseEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemRaiseEvent*, "", "NetworkSystemRaiseEvent");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystemRaiseEvent
class CORDL_TYPE NetworkSystemRaiseEvent : public ::System::Object {
public:
// Declarations
/// @brief Field neoMaster, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_neoMaster, put=setStaticF_neoMaster)) ::GlobalNamespace::NetEventOptions*  neoMaster;

/// @brief Field neoOthers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_neoOthers, put=setStaticF_neoOthers)) ::GlobalNamespace::NetEventOptions*  neoOthers;

/// @brief Field neoTarget, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_neoTarget, put=setStaticF_neoTarget)) ::GlobalNamespace::NetEventOptions*  neoTarget;

/// @brief Method RaiseEvent, addr 0x56eb800, size 0xd8, virtual false, abstract: false, final false
static inline void RaiseEvent(uint8_t  code, ::System::Object*  data) ;

/// @brief Method RaiseEvent, addr 0x56eb8d8, size 0x128, virtual false, abstract: false, final false
static inline void RaiseEvent(uint8_t  code, ::System::Object*  data, ::GlobalNamespace::NetEventOptions*  options, bool  reliable) ;

static inline ::GlobalNamespace::NetEventOptions* getStaticF_neoMaster() ;

static inline ::GlobalNamespace::NetEventOptions* getStaticF_neoOthers() ;

static inline ::GlobalNamespace::NetEventOptions* getStaticF_neoTarget() ;

static inline void setStaticF_neoMaster(::GlobalNamespace::NetEventOptions*  value) ;

static inline void setStaticF_neoOthers(::GlobalNamespace::NetEventOptions*  value) ;

static inline void setStaticF_neoTarget(::GlobalNamespace::NetEventOptions*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemRaiseEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemRaiseEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystemRaiseEvent(NetworkSystemRaiseEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemRaiseEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystemRaiseEvent(NetworkSystemRaiseEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1132};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkSystemRaiseEvent) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

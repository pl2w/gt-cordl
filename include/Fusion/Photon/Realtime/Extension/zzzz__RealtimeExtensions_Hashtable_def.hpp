#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Extension/RealtimeExtensions_Hashtable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RealtimeExtensions_Hashtable)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace ExitGames::Client::Photon {
class Protocol18;
}
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace Fusion {
class SessionProperty;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Fusion::Photon::Realtime::Extension {
class RealtimeExtensions_Hashtable;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable*, "Fusion.Photon.Realtime.Extension", "RealtimeExtensions_Hashtable");
// [Extension]
// Dependencies System.Object
namespace Fusion::Photon::Realtime::Extension {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Extension.RealtimeExtensions_Hashtable
class CORDL_TYPE RealtimeExtensions_Hashtable : public ::System::Object {
public:
// Declarations
/// @brief Field buffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_buffer, put=setStaticF_buffer)) ::ExitGames::Client::Photon::StreamBuffer*  buffer;

/// @brief Field protocol, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_protocol, put=setStaticF_protocol)) ::ExitGames::Client::Photon::Protocol18*  protocol;

/// [Extension]
/// @brief Method CalculateTotalSize, addr 0x5f68ee4, size 0xac, virtual false, abstract: false, final false
static inline int32_t CalculateTotalSize(::ExitGames::Client::Photon::Hashtable*  hashtable) ;

/// [Extension]
/// @brief Method ConvertToDictionaryProperty, addr 0x5f68bac, size 0x1a4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>* ConvertToDictionaryProperty(::ExitGames::Client::Photon::Hashtable*  customProperties) ;

/// [Extension]
/// @brief Method ConvertToHashtable, addr 0x5f68d50, size 0x194, virtual false, abstract: false, final false
static inline ::ExitGames::Client::Photon::Hashtable* ConvertToHashtable(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  properties) ;

static inline ::ExitGames::Client::Photon::StreamBuffer* getStaticF_buffer() ;

static inline ::ExitGames::Client::Photon::Protocol18* getStaticF_protocol() ;

static inline void setStaticF_buffer(::ExitGames::Client::Photon::StreamBuffer*  value) ;

static inline void setStaticF_protocol(::ExitGames::Client::Photon::Protocol18*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RealtimeExtensions_Hashtable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RealtimeExtensions_Hashtable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RealtimeExtensions_Hashtable(RealtimeExtensions_Hashtable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RealtimeExtensions_Hashtable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RealtimeExtensions_Hashtable(RealtimeExtensions_Hashtable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28115};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Extension

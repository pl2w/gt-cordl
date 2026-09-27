#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Extension/RealtimeExtensions_RoomInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RealtimeExtensions_RoomInfo)
namespace Fusion::Photon::Realtime {
class RoomInfo;
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
class RealtimeExtensions_RoomInfo;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::Extension::RealtimeExtensions_RoomInfo*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Extension::RealtimeExtensions_RoomInfo*, "Fusion.Photon.Realtime.Extension", "RealtimeExtensions_RoomInfo");
// [Extension]
// Dependencies System.Object
namespace Fusion::Photon::Realtime::Extension {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Extension.RealtimeExtensions_RoomInfo
class CORDL_TYPE RealtimeExtensions_RoomInfo : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetCustomProperties, addr 0x5f69054, size 0x60, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>* GetCustomProperties(::Fusion::Photon::Realtime::RoomInfo*  roomInfo) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RealtimeExtensions_RoomInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RealtimeExtensions_RoomInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RealtimeExtensions_RoomInfo(RealtimeExtensions_RoomInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RealtimeExtensions_RoomInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RealtimeExtensions_RoomInfo(RealtimeExtensions_RoomInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28116};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Photon::Realtime::Extension::RealtimeExtensions_RoomInfo) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Extension

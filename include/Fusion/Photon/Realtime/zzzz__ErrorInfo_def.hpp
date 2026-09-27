#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/ErrorInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ErrorInfo)
namespace ExitGames::Client::Photon {
class EventData;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class ErrorInfo;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::ErrorInfo*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::ErrorInfo*, "Fusion.Photon.Realtime", "ErrorInfo");
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.ErrorInfo
class CORDL_TYPE ErrorInfo : public ::System::Object {
public:
// Declarations
/// @brief Field Info, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Info, put=__cordl_internal_set_Info)) ::StringW  Info;

static inline ::Fusion::Photon::Realtime::ErrorInfo* New_ctor(::ExitGames::Client::Photon::EventData*  eventData) ;

/// @brief Method ToString, addr 0x5f59de4, size 0x4c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_Info() const;

constexpr ::StringW& __cordl_internal_get_Info() ;

constexpr void __cordl_internal_set_Info(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f59d6c, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::EventData*  eventData) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorInfo(ErrorInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorInfo(ErrorInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28067};

/// @brief Field Info, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Info;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::ErrorInfo, ___Info) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::ErrorInfo) == 0x18, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime

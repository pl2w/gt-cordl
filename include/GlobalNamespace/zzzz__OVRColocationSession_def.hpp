#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRColocationSession.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRColocationSession)
namespace GlobalNamespace {
struct OVRColocationSession_Data;
}
namespace GlobalNamespace {
struct OVRColocationSession_Result;
}
namespace GlobalNamespace {
struct OVRPlugin_Result;
}
namespace GlobalNamespace {
template<typename TStatus>
struct OVRResult_1;
}
namespace GlobalNamespace {
template<typename TValue,typename TStatus>
struct OVRResult_2;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRColocationSession;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRColocationSession*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRColocationSession*, "", "OVRColocationSession");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRColocationSession
class CORDL_TYPE OVRColocationSession : public ::System::Object {
public:
// Declarations
using Data = ::GlobalNamespace::OVRColocationSession_Data;

using Result = ::GlobalNamespace::OVRColocationSession_Result;

/// @brief Field ColocationSessionDiscovered, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ColocationSessionDiscovered, put=setStaticF_ColocationSessionDiscovered)) ::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*  ColocationSessionDiscovered;

static inline ::GlobalNamespace::OVRColocationSession* New_ctor() ;

/// @brief Method OnColocationSessionAdvertisementComplete, addr 0xa58298c, size 0xbc, virtual false, abstract: false, final false
static inline void OnColocationSessionAdvertisementComplete(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result) ;

/// @brief Method OnColocationSessionDiscoveryComplete, addr 0xa582a48, size 0xbc, virtual false, abstract: false, final false
static inline void OnColocationSessionDiscoveryComplete(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result) ;

/// @brief Method OnColocationSessionDiscoveryResult, addr 0xa582860, size 0x12c, virtual false, abstract: false, final false
static inline void OnColocationSessionDiscoveryResult(uint64_t  requestId, ::System::Guid  uuid, uint32_t  metaDataCount, uint8_t*  metaDataPtr) ;

/// @brief Method OnColocationSessionStartAdvertisementComplete, addr 0xa582630, size 0xb0, virtual false, abstract: false, final false
static inline void OnColocationSessionStartAdvertisementComplete(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result, ::System::Guid  uuid) ;

/// @brief Method OnColocationSessionStartDiscoveryComplete, addr 0xa582760, size 0x80, virtual false, abstract: false, final false
static inline void OnColocationSessionStartDiscoveryComplete(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result) ;

/// @brief Method OnColocationSessionStopAdvertisementComplete, addr 0xa5826e0, size 0x80, virtual false, abstract: false, final false
static inline void OnColocationSessionStopAdvertisementComplete(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result) ;

/// @brief Method OnColocationSessionStopDiscoveryComplete, addr 0xa5827e0, size 0x80, virtual false, abstract: false, final false
static inline void OnColocationSessionStopDiscoveryComplete(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result) ;

/// @brief Method StartAdvertisementAsync, addr 0xa5822b0, size 0x170, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Guid,::GlobalNamespace::OVRColocationSession_Result>> StartAdvertisementAsync(::System::ReadOnlySpan_1<uint8_t>  colocationSessionData) ;

/// @brief Method StartDiscoveryAsync, addr 0xa5824d0, size 0xb0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> StartDiscoveryAsync() ;

/// @brief Method StopAdvertisementAsync, addr 0xa582420, size 0xb0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> StopAdvertisementAsync() ;

/// @brief Method StopDiscoveryAsync, addr 0xa582580, size 0xb0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> StopDiscoveryAsync() ;

/// @brief Method .ctor, addr 0xa582b04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_ColocationSessionDiscovered, addr 0xa582118, size 0xcc, virtual false, abstract: false, final false
static inline void add_ColocationSessionDiscovered(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*  value) ;

static inline ::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* getStaticF_ColocationSessionDiscovered() ;

/// [CompilerGenerated]
/// @brief Method remove_ColocationSessionDiscovered, addr 0xa5821e4, size 0xcc, virtual false, abstract: false, final false
static inline void remove_ColocationSessionDiscovered(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*  value) ;

static inline void setStaticF_ColocationSessionDiscovered(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRColocationSession() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRColocationSession", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRColocationSession(OVRColocationSession && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRColocationSession", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRColocationSession(OVRColocationSession const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11875};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRColocationSession) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

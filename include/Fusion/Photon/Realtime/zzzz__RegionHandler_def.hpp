#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/RegionHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RegionHandler)
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace Fusion::Photon::Realtime {
class LoadBalancingClient;
}
namespace Fusion::Photon::Realtime {
class MonoBehaviourEmpty;
}
namespace Fusion::Photon::Realtime {
class RegionHandler___c;
}
namespace Fusion::Photon::Realtime {
class RegionHandler___c__DisplayClass31_0;
}
namespace Fusion::Photon::Realtime {
class RegionPinger;
}
namespace Fusion::Photon::Realtime {
class Region;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class RegionHandler;
}
namespace Fusion::Photon::Realtime {
class RegionHandler___c;
}
namespace Fusion::Photon::Realtime {
class RegionHandler___c__DisplayClass31_0;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::RegionHandler*);
MARK_REF_T(::Fusion::Photon::Realtime::RegionHandler___c*);
MARK_REF_T(::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::RegionHandler*, "Fusion.Photon.Realtime", "RegionHandler");
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::RegionHandler___c*, "Fusion.Photon.Realtime", "RegionHandler/<>c");
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0*, "Fusion.Photon.Realtime", "RegionHandler/<>c__DisplayClass31_0");
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.RegionHandler
class CORDL_TYPE RegionHandler : public ::System::Object {
public:
// Declarations
using __c = ::Fusion::Photon::Realtime::RegionHandler___c;

using __c__DisplayClass31_0 = ::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0;

 __declspec(property(get=get_Aborted, put=set_Aborted)) bool  Aborted;

 __declspec(property(get=get_BestRegion)) ::Fusion::Photon::Realtime::Region*  BestRegion;

/// @brief Field BestRegionSummaryPingLimit, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_BestRegionSummaryPingLimit, put=__cordl_internal_set_BestRegionSummaryPingLimit)) int32_t  BestRegionSummaryPingLimit;

 __declspec(property(get=get_EnabledRegions, put=set_EnabledRegions)) ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*  EnabledRegions;

 __declspec(property(get=get_IsPinging, put=set_IsPinging)) bool  IsPinging;

/// @brief Field PingImplementation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PingImplementation, put=setStaticF_PingImplementation)) ::System::Type*  PingImplementation;

/// @brief Field PortToPingOverride, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_PortToPingOverride, put=setStaticF_PortToPingOverride)) uint16_t  PortToPingOverride;

 __declspec(property(get=get_SummaryToCache)) ::StringW  SummaryToCache;

/// @brief Field <Aborted>k__BackingField, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get__Aborted_k__BackingField, put=__cordl_internal_set__Aborted_k__BackingField)) bool  _Aborted_k__BackingField;

/// @brief Field <EnabledRegions>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__EnabledRegions_k__BackingField, put=__cordl_internal_set__EnabledRegions_k__BackingField)) ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*  _EnabledRegions_k__BackingField;

/// @brief Field <IsPinging>k__BackingField, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPinging_k__BackingField, put=__cordl_internal_set__IsPinging_k__BackingField)) bool  _IsPinging_k__BackingField;

/// @brief Field availableRegionCodes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_availableRegionCodes, put=__cordl_internal_set_availableRegionCodes)) ::StringW  availableRegionCodes;

/// @brief Field bestRegionCache, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bestRegionCache, put=__cordl_internal_set_bestRegionCache)) ::Fusion::Photon::Realtime::Region*  bestRegionCache;

/// @brief Field emptyMonoBehavior, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_emptyMonoBehavior, put=__cordl_internal_set_emptyMonoBehavior)) ::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty>  emptyMonoBehavior;

/// @brief Field onCompleteCall, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCompleteCall, put=__cordl_internal_set_onCompleteCall)) ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  onCompleteCall;

/// @brief Field pingSimilarityFactor, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pingSimilarityFactor, put=__cordl_internal_set_pingSimilarityFactor)) float_t  pingSimilarityFactor;

/// @brief Field pingerList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pingerList, put=__cordl_internal_set_pingerList)) ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RegionPinger*>*  pingerList;

/// @brief Field previousPing, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousPing, put=__cordl_internal_set_previousPing)) int32_t  previousPing;

/// @brief Field previousSummaryProvided, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_previousSummaryProvided, put=__cordl_internal_set_previousSummaryProvided)) ::StringW  previousSummaryProvided;

/// @brief Field rePingFactor, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_rePingFactor, put=__cordl_internal_set_rePingFactor)) float_t  rePingFactor;

/// @brief Method Abort, addr 0x5f61834, size 0x280, virtual false, abstract: false, final false
inline void Abort() ;

/// @brief Method GetResults, addr 0x5f60434, size 0x1f0, virtual false, abstract: false, final false
inline ::StringW GetResults() ;

static inline ::Fusion::Photon::Realtime::RegionHandler* New_ctor(uint16_t  masterServerPortOverride) ;

/// @brief Method OnPreferredRegionPinged, addr 0x5f61ad8, size 0x6c, virtual false, abstract: false, final false
inline void OnPreferredRegionPinged(::Fusion::Photon::Realtime::Region*  preferredRegion) ;

/// @brief Method OnRegionDone, addr 0x5f61b44, size 0x264, virtual false, abstract: false, final false
inline void OnRegionDone(::Fusion::Photon::Realtime::Region*  region) ;

/// @brief Method PingEnabledRegions, addr 0x5f61154, size 0x364, virtual false, abstract: false, final false
inline bool PingEnabledRegions() ;

/// @brief Method PingMinimumOfRegions, addr 0x5f60b74, size 0x498, virtual false, abstract: false, final false
inline bool PingMinimumOfRegions(::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  onCompleteCallback, ::StringW  previousSummary) ;

/// @brief Method SetRegions, addr 0x5f6070c, size 0x378, virtual false, abstract: false, final false
inline void SetRegions(::ExitGames::Client::Photon::OperationResponse*  opGetRegions, ::Fusion::Photon::Realtime::LoadBalancingClient*  loadBalancingClient) ;

constexpr int32_t const& __cordl_internal_get_BestRegionSummaryPingLimit() const;

constexpr int32_t& __cordl_internal_get_BestRegionSummaryPingLimit() ;

constexpr bool const& __cordl_internal_get__Aborted_k__BackingField() const;

constexpr bool& __cordl_internal_get__Aborted_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>* const& __cordl_internal_get__EnabledRegions_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*& __cordl_internal_get__EnabledRegions_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsPinging_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPinging_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_availableRegionCodes() const;

constexpr ::StringW& __cordl_internal_get_availableRegionCodes() ;

constexpr ::Fusion::Photon::Realtime::Region* const& __cordl_internal_get_bestRegionCache() const;

constexpr ::Fusion::Photon::Realtime::Region*& __cordl_internal_get_bestRegionCache() ;

constexpr ::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty> const& __cordl_internal_get_emptyMonoBehavior() const;

constexpr ::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty>& __cordl_internal_get_emptyMonoBehavior() ;

constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>* const& __cordl_internal_get_onCompleteCall() const;

constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*& __cordl_internal_get_onCompleteCall() ;

constexpr float_t const& __cordl_internal_get_pingSimilarityFactor() const;

constexpr float_t& __cordl_internal_get_pingSimilarityFactor() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RegionPinger*>* const& __cordl_internal_get_pingerList() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RegionPinger*>*& __cordl_internal_get_pingerList() ;

constexpr int32_t const& __cordl_internal_get_previousPing() const;

constexpr int32_t& __cordl_internal_get_previousPing() ;

constexpr ::StringW const& __cordl_internal_get_previousSummaryProvided() const;

constexpr ::StringW& __cordl_internal_get_previousSummaryProvided() ;

constexpr float_t const& __cordl_internal_get_rePingFactor() const;

constexpr float_t& __cordl_internal_get_rePingFactor() ;

constexpr void __cordl_internal_set_BestRegionSummaryPingLimit(int32_t  value) ;

constexpr void __cordl_internal_set__Aborted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__EnabledRegions_k__BackingField(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*  value) ;

constexpr void __cordl_internal_set__IsPinging_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_availableRegionCodes(::StringW  value) ;

constexpr void __cordl_internal_set_bestRegionCache(::Fusion::Photon::Realtime::Region*  value) ;

constexpr void __cordl_internal_set_emptyMonoBehavior(::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty>  value) ;

constexpr void __cordl_internal_set_onCompleteCall(::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  value) ;

constexpr void __cordl_internal_set_pingSimilarityFactor(float_t  value) ;

constexpr void __cordl_internal_set_pingerList(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RegionPinger*>*  value) ;

constexpr void __cordl_internal_set_previousPing(int32_t  value) ;

constexpr void __cordl_internal_set_previousSummaryProvided(::StringW  value) ;

constexpr void __cordl_internal_set_rePingFactor(float_t  value) ;

/// @brief Method .ctor, addr 0x5f60aa4, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(uint16_t  masterServerPortOverride) ;

static inline ::System::Type* getStaticF_PingImplementation() ;

static inline uint16_t getStaticF_PortToPingOverride() ;

/// [CompilerGenerated]
/// @brief Method get_Aborted, addr 0x5f60a94, size 0x8, virtual false, abstract: false, final false
inline bool get_Aborted() ;

/// @brief Method get_BestRegion, addr 0x5f5ff90, size 0x2fc, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::Region* get_BestRegion() ;

/// [CompilerGenerated]
/// @brief Method get_EnabledRegions, addr 0x5f5ff80, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>* get_EnabledRegions() ;

/// [CompilerGenerated]
/// @brief Method get_IsPinging, addr 0x5f60a84, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPinging() ;

/// @brief Method get_SummaryToCache, addr 0x5f6028c, size 0x1a8, virtual false, abstract: false, final false
inline ::StringW get_SummaryToCache() ;

static inline void setStaticF_PingImplementation(::System::Type*  value) ;

static inline void setStaticF_PortToPingOverride(uint16_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Aborted, addr 0x5f60a9c, size 0x8, virtual false, abstract: false, final false
inline void set_Aborted(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_EnabledRegions, addr 0x5f5ff88, size 0x8, virtual false, abstract: false, final false
inline void set_EnabledRegions(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsPinging, addr 0x5f60a8c, size 0x8, virtual false, abstract: false, final false
inline void set_IsPinging(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegionHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegionHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegionHandler(RegionHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegionHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegionHandler(RegionHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28100};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <EnabledRegions>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*  ____EnabledRegions_k__BackingField;

/// @brief Field availableRegionCodes, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___availableRegionCodes;

/// @brief Field bestRegionCache, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::Region*  ___bestRegionCache;

/// @brief Field pingerList, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RegionPinger*>*  ___pingerList;

/// @brief Field onCompleteCall, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  ___onCompleteCall;

/// @brief Field previousPing, offset: 0x38, size: 0x4, def value: None
 int32_t  ___previousPing;

/// @brief Field previousSummaryProvided, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___previousSummaryProvided;

/// @brief Field rePingFactor, offset: 0x48, size: 0x4, def value: None
 float_t  ___rePingFactor;

/// @brief Field pingSimilarityFactor, offset: 0x4c, size: 0x4, def value: None
 float_t  ___pingSimilarityFactor;

/// @brief Field BestRegionSummaryPingLimit, offset: 0x50, size: 0x4, def value: None
 int32_t  ___BestRegionSummaryPingLimit;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <IsPinging>k__BackingField, offset: 0x54, size: 0x1, def value: None
 bool  ____IsPinging_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Aborted>k__BackingField, offset: 0x55, size: 0x1, def value: None
 bool  ____Aborted_k__BackingField;

/// @brief Field emptyMonoBehavior, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty>  ___emptyMonoBehavior;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::RegionHandler, ____EnabledRegions_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionHandler, ___availableRegionCodes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionHandler, ___bestRegionCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionHandler, ___pingerList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionHandler, ___onCompleteCall) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionHandler, ___previousPing) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionHandler, ___previousSummaryProvided) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionHandler, ___rePingFactor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionHandler, ___pingSimilarityFactor) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionHandler, ___BestRegionSummaryPingLimit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionHandler, ____IsPinging_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionHandler, ____Aborted_k__BackingField) == 0x55, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::RegionHandler, ___emptyMonoBehavior) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::RegionHandler) == 0x60, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.RegionHandler/<>c__DisplayClass31_0
class CORDL_TYPE RegionHandler___c__DisplayClass31_0 : public ::System::Object {
public:
// Declarations
/// @brief Field prevBestRegionCode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevBestRegionCode, put=__cordl_internal_set_prevBestRegionCode)) ::StringW  prevBestRegionCode;

static inline ::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0* New_ctor() ;

/// @brief Method <PingMinimumOfRegions>b__0, addr 0x5f61e4c, size 0x28, virtual false, abstract: false, final false
inline bool _PingMinimumOfRegions_b__0(::Fusion::Photon::Realtime::Region*  r) ;

constexpr ::StringW const& __cordl_internal_get_prevBestRegionCode() const;

constexpr ::StringW& __cordl_internal_get_prevBestRegionCode() ;

constexpr void __cordl_internal_set_prevBestRegionCode(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f6100c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegionHandler___c__DisplayClass31_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegionHandler___c__DisplayClass31_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegionHandler___c__DisplayClass31_0(RegionHandler___c__DisplayClass31_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegionHandler___c__DisplayClass31_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegionHandler___c__DisplayClass31_0(RegionHandler___c__DisplayClass31_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28099};

/// @brief Field prevBestRegionCode, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___prevBestRegionCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0, ___prevBestRegionCode) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0) == 0x18, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.RegionHandler/<>c
class CORDL_TYPE RegionHandler___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::Photon::Realtime::RegionHandler___c*  __9;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Comparison_1<::Fusion::Photon::Realtime::Region*>*  __9__8_0;

static inline ::Fusion::Photon::Realtime::RegionHandler___c* New_ctor() ;

/// @brief Method .ctor, addr 0x5f61e10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_BestRegion>b__8_0, addr 0x5f61e18, size 0x34, virtual false, abstract: false, final false
inline int32_t _get_BestRegion_b__8_0(::Fusion::Photon::Realtime::Region*  a, ::Fusion::Photon::Realtime::Region*  b) ;

static inline ::Fusion::Photon::Realtime::RegionHandler___c* getStaticF___9() ;

static inline ::System::Comparison_1<::Fusion::Photon::Realtime::Region*>* getStaticF___9__8_0() ;

static inline void setStaticF___9(::Fusion::Photon::Realtime::RegionHandler___c*  value) ;

static inline void setStaticF___9__8_0(::System::Comparison_1<::Fusion::Photon::Realtime::Region*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegionHandler___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegionHandler___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegionHandler___c(RegionHandler___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegionHandler___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegionHandler___c(RegionHandler___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28098};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Photon::Realtime::RegionHandler___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime

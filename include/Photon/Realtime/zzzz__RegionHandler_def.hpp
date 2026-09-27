#pragma once
// IWYU pragma private; include "Photon/Realtime/RegionHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegionHandler)
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace Photon::Realtime {
class RegionHandler___c;
}
namespace Photon::Realtime {
class RegionHandler___c__DisplayClass23_0;
}
namespace Photon::Realtime {
class RegionPinger;
}
namespace Photon::Realtime {
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
namespace Photon::Realtime {
class RegionHandler;
}
namespace Photon::Realtime {
class RegionHandler___c;
}
namespace Photon::Realtime {
class RegionHandler___c__DisplayClass23_0;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::RegionHandler*);
MARK_REF_T(::Photon::Realtime::RegionHandler___c*);
MARK_REF_T(::Photon::Realtime::RegionHandler___c__DisplayClass23_0*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::RegionHandler*, "Photon.Realtime", "RegionHandler");
DEFINE_IL2CPP_CLASS(::Photon::Realtime::RegionHandler___c*, "Photon.Realtime", "RegionHandler/<>c");
DEFINE_IL2CPP_CLASS(::Photon::Realtime::RegionHandler___c__DisplayClass23_0*, "Photon.Realtime", "RegionHandler/<>c__DisplayClass23_0");
// Dependencies System.Object
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.RegionHandler
class CORDL_TYPE RegionHandler : public ::System::Object {
public:
// Declarations
using __c = ::Photon::Realtime::RegionHandler___c;

using __c__DisplayClass23_0 = ::Photon::Realtime::RegionHandler___c__DisplayClass23_0;

 __declspec(property(get=get_BestRegion)) ::Photon::Realtime::Region*  BestRegion;

 __declspec(property(get=get_EnabledRegions, put=set_EnabledRegions)) ::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*  EnabledRegions;

 __declspec(property(get=get_IsPinging, put=set_IsPinging)) bool  IsPinging;

/// @brief Field PingImplementation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PingImplementation, put=setStaticF_PingImplementation)) ::System::Type*  PingImplementation;

/// @brief Field PortToPingOverride, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_PortToPingOverride, put=setStaticF_PortToPingOverride)) uint16_t  PortToPingOverride;

 __declspec(property(get=get_SummaryToCache)) ::StringW  SummaryToCache;

/// @brief Field <EnabledRegions>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__EnabledRegions_k__BackingField, put=__cordl_internal_set__EnabledRegions_k__BackingField)) ::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*  _EnabledRegions_k__BackingField;

/// @brief Field <IsPinging>k__BackingField, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPinging_k__BackingField, put=__cordl_internal_set__IsPinging_k__BackingField)) bool  _IsPinging_k__BackingField;

/// @brief Field availableRegionCodes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_availableRegionCodes, put=__cordl_internal_set_availableRegionCodes)) ::StringW  availableRegionCodes;

/// @brief Field bestRegionCache, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bestRegionCache, put=__cordl_internal_set_bestRegionCache)) ::Photon::Realtime::Region*  bestRegionCache;

/// @brief Field onCompleteCall, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCompleteCall, put=__cordl_internal_set_onCompleteCall)) ::System::Action_1<::Photon::Realtime::RegionHandler*>*  onCompleteCall;

/// @brief Field pingerList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pingerList, put=__cordl_internal_set_pingerList)) ::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>*  pingerList;

/// @brief Field previousPing, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousPing, put=__cordl_internal_set_previousPing)) int32_t  previousPing;

/// @brief Field previousSummaryProvided, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_previousSummaryProvided, put=__cordl_internal_set_previousSummaryProvided)) ::StringW  previousSummaryProvided;

/// @brief Method GetResults, addr 0xa70b424, size 0x2a4, virtual false, abstract: false, final false
inline ::StringW GetResults() ;

static inline ::Photon::Realtime::RegionHandler* New_ctor(uint16_t  masterServerPortOverride) ;

/// @brief Method OnPreferredRegionPinged, addr 0xa70ba44, size 0x60, virtual false, abstract: false, final false
inline void OnPreferredRegionPinged(::Photon::Realtime::Region*  preferredRegion) ;

/// @brief Method OnRegionDone, addr 0xa70baa4, size 0x25c, virtual false, abstract: false, final false
inline void OnRegionDone(::Photon::Realtime::Region*  region) ;

/// @brief Method PingEnabledRegions, addr 0xa70b6d8, size 0x36c, virtual false, abstract: false, final false
inline bool PingEnabledRegions() ;

/// @brief Method PingMinimumOfRegions, addr 0xa702790, size 0x398, virtual false, abstract: false, final false
inline bool PingMinimumOfRegions(::System::Action_1<::Photon::Realtime::RegionHandler*>*  onCompleteCallback, ::StringW  previousSummary) ;

/// @brief Method SetRegions, addr 0xa7022d8, size 0x300, virtual false, abstract: false, final false
inline void SetRegions(::ExitGames::Client::Photon::OperationResponse*  opGetRegions) ;

constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::Region*>* const& __cordl_internal_get__EnabledRegions_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*& __cordl_internal_get__EnabledRegions_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsPinging_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPinging_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_availableRegionCodes() const;

constexpr ::StringW& __cordl_internal_get_availableRegionCodes() ;

constexpr ::Photon::Realtime::Region* const& __cordl_internal_get_bestRegionCache() const;

constexpr ::Photon::Realtime::Region*& __cordl_internal_get_bestRegionCache() ;

constexpr ::System::Action_1<::Photon::Realtime::RegionHandler*>* const& __cordl_internal_get_onCompleteCall() const;

constexpr ::System::Action_1<::Photon::Realtime::RegionHandler*>*& __cordl_internal_get_onCompleteCall() ;

constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>* const& __cordl_internal_get_pingerList() const;

constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>*& __cordl_internal_get_pingerList() ;

constexpr int32_t const& __cordl_internal_get_previousPing() const;

constexpr int32_t& __cordl_internal_get_previousPing() ;

constexpr ::StringW const& __cordl_internal_get_previousSummaryProvided() const;

constexpr ::StringW& __cordl_internal_get_previousSummaryProvided() ;

constexpr void __cordl_internal_set__EnabledRegions_k__BackingField(::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*  value) ;

constexpr void __cordl_internal_set__IsPinging_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_availableRegionCodes(::StringW  value) ;

constexpr void __cordl_internal_set_bestRegionCache(::Photon::Realtime::Region*  value) ;

constexpr void __cordl_internal_set_onCompleteCall(::System::Action_1<::Photon::Realtime::RegionHandler*>*  value) ;

constexpr void __cordl_internal_set_pingerList(::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>*  value) ;

constexpr void __cordl_internal_set_previousPing(int32_t  value) ;

constexpr void __cordl_internal_set_previousSummaryProvided(::StringW  value) ;

/// @brief Method .ctor, addr 0xa702220, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(uint16_t  masterServerPortOverride) ;

static inline ::System::Type* getStaticF_PingImplementation() ;

static inline uint16_t getStaticF_PortToPingOverride() ;

/// @brief Method get_BestRegion, addr 0xa705d74, size 0x160, virtual false, abstract: false, final false
inline ::Photon::Realtime::Region* get_BestRegion() ;

/// [CompilerGenerated]
/// @brief Method get_EnabledRegions, addr 0xa70b414, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Photon::Realtime::Region*>* get_EnabledRegions() ;

/// [CompilerGenerated]
/// @brief Method get_IsPinging, addr 0xa70b6c8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPinging() ;

/// @brief Method get_SummaryToCache, addr 0xa705c18, size 0x15c, virtual false, abstract: false, final false
inline ::StringW get_SummaryToCache() ;

static inline void setStaticF_PingImplementation(::System::Type*  value) ;

static inline void setStaticF_PortToPingOverride(uint16_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_EnabledRegions, addr 0xa70b41c, size 0x8, virtual false, abstract: false, final false
inline void set_EnabledRegions(::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsPinging, addr 0xa70b6d0, size 0x8, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29896};

/// [CompilerGenerated]
/// @brief Field <EnabledRegions>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*  ____EnabledRegions_k__BackingField;

/// @brief Field availableRegionCodes, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___availableRegionCodes;

/// @brief Field bestRegionCache, offset: 0x20, size: 0x8, def value: None
 ::Photon::Realtime::Region*  ___bestRegionCache;

/// @brief Field pingerList, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>*  ___pingerList;

/// @brief Field onCompleteCall, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::Photon::Realtime::RegionHandler*>*  ___onCompleteCall;

/// @brief Field previousPing, offset: 0x38, size: 0x4, def value: None
 int32_t  ___previousPing;

/// [CompilerGenerated]
/// @brief Field <IsPinging>k__BackingField, offset: 0x3c, size: 0x1, def value: None
 bool  ____IsPinging_k__BackingField;

/// @brief Field previousSummaryProvided, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___previousSummaryProvided;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::RegionHandler, ____EnabledRegions_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionHandler, ___availableRegionCodes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionHandler, ___bestRegionCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionHandler, ___pingerList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionHandler, ___onCompleteCall) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionHandler, ___previousPing) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionHandler, ____IsPinging_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionHandler, ___previousSummaryProvided) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::RegionHandler) == 0x48, "Size mismatch!");

} // namespace end def Photon::Realtime
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.RegionHandler/<>c__DisplayClass23_0
class CORDL_TYPE RegionHandler___c__DisplayClass23_0 : public ::System::Object {
public:
// Declarations
/// @brief Field prevBestRegionCode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevBestRegionCode, put=__cordl_internal_set_prevBestRegionCode)) ::StringW  prevBestRegionCode;

static inline ::Photon::Realtime::RegionHandler___c__DisplayClass23_0* New_ctor() ;

/// @brief Method <PingMinimumOfRegions>b__0, addr 0xa70bdac, size 0x28, virtual false, abstract: false, final false
inline bool _PingMinimumOfRegions_b__0(::Photon::Realtime::Region*  r) ;

constexpr ::StringW const& __cordl_internal_get_prevBestRegionCode() const;

constexpr ::StringW& __cordl_internal_get_prevBestRegionCode() ;

constexpr void __cordl_internal_set_prevBestRegionCode(::StringW  value) ;

/// @brief Method .ctor, addr 0xa70bda4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegionHandler___c__DisplayClass23_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegionHandler___c__DisplayClass23_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegionHandler___c__DisplayClass23_0(RegionHandler___c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegionHandler___c__DisplayClass23_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegionHandler___c__DisplayClass23_0(RegionHandler___c__DisplayClass23_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29895};

/// @brief Field prevBestRegionCode, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___prevBestRegionCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::RegionHandler___c__DisplayClass23_0, ___prevBestRegionCode) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::RegionHandler___c__DisplayClass23_0) == 0x18, "Size mismatch!");

} // namespace end def Photon::Realtime
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.RegionHandler/<>c
class CORDL_TYPE RegionHandler___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Photon::Realtime::RegionHandler___c*  __9;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Comparison_1<::Photon::Realtime::Region*>*  __9__8_0;

static inline ::Photon::Realtime::RegionHandler___c* New_ctor() ;

/// @brief Method .ctor, addr 0xa70bd68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_BestRegion>b__8_0, addr 0xa70bd70, size 0x34, virtual false, abstract: false, final false
inline int32_t _get_BestRegion_b__8_0(::Photon::Realtime::Region*  a, ::Photon::Realtime::Region*  b) ;

static inline ::Photon::Realtime::RegionHandler___c* getStaticF___9() ;

static inline ::System::Comparison_1<::Photon::Realtime::Region*>* getStaticF___9__8_0() ;

static inline void setStaticF___9(::Photon::Realtime::RegionHandler___c*  value) ;

static inline void setStaticF___9__8_0(::System::Comparison_1<::Photon::Realtime::Region*>*  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29894};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Realtime::RegionHandler___c) == 0x10, "Size mismatch!");

} // namespace end def Photon::Realtime

#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StoreUpdateEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StoreUpdateEvent)
namespace GorillaNetworking::Store {
class StoreUpdateEvent___c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class StoreUpdateEvent;
}
namespace GorillaNetworking::Store {
class StoreUpdateEvent___c;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::StoreUpdateEvent*);
MARK_REF_T(::GorillaNetworking::Store::StoreUpdateEvent___c*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::StoreUpdateEvent*, "GorillaNetworking.Store", "StoreUpdateEvent");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::StoreUpdateEvent___c*, "GorillaNetworking.Store", "StoreUpdateEvent/<>c");
// Dependencies System.DateTime, System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.StoreUpdateEvent
class CORDL_TYPE StoreUpdateEvent : public ::System::Object {
public:
// Declarations
using __c = ::GorillaNetworking::Store::StoreUpdateEvent___c;

/// @brief Field EndTimeUTC, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_EndTimeUTC, put=__cordl_internal_set_EndTimeUTC)) ::System::DateTime  EndTimeUTC;

/// @brief Field ItemName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemName, put=__cordl_internal_set_ItemName)) ::StringW  ItemName;

/// @brief Field PedestalID, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PedestalID, put=__cordl_internal_set_PedestalID)) ::StringW  PedestalID;

/// @brief Field StartTimeUTC, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_StartTimeUTC, put=__cordl_internal_set_StartTimeUTC)) ::System::DateTime  StartTimeUTC;

/// @brief Method DeserializeFromJSon, addr 0x5cb343c, size 0x48, virtual false, abstract: false, final false
static inline ::GorillaNetworking::Store::StoreUpdateEvent* DeserializeFromJSon(::StringW  json) ;

/// @brief Method DeserializeFromJSonArray, addr 0x5cb3484, size 0x170, virtual false, abstract: false, final false
static inline ::ArrayW<::GorillaNetworking::Store::StoreUpdateEvent*> DeserializeFromJSonArray(::StringW  json) ;

/// @brief Method DeserializeFromJSonList, addr 0x5cb35f4, size 0x158, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>* DeserializeFromJSonList(::StringW  json) ;

static inline ::GorillaNetworking::Store::StoreUpdateEvent* New_ctor() ;

static inline ::GorillaNetworking::Store::StoreUpdateEvent* New_ctor(::StringW  pedestalID, ::StringW  itemName, ::System::DateTime  startTimeUTC, ::System::DateTime  endTimeUTC) ;

/// @brief Method SerializeArrayAsJSon, addr 0x5cb33e4, size 0x58, virtual false, abstract: false, final false
static inline ::StringW SerializeArrayAsJSon(::ArrayW<::GorillaNetworking::Store::StoreUpdateEvent*>  storeEvents) ;

/// @brief Method SerializeAsJSon, addr 0x5cb33dc, size 0x8, virtual false, abstract: false, final false
static inline ::StringW SerializeAsJSon(::GorillaNetworking::Store::StoreUpdateEvent*  storeEvent) ;

constexpr ::System::DateTime const& __cordl_internal_get_EndTimeUTC() const;

constexpr ::System::DateTime& __cordl_internal_get_EndTimeUTC() ;

constexpr ::StringW const& __cordl_internal_get_ItemName() const;

constexpr ::StringW& __cordl_internal_get_ItemName() ;

constexpr ::StringW const& __cordl_internal_get_PedestalID() const;

constexpr ::StringW& __cordl_internal_get_PedestalID() ;

constexpr ::System::DateTime const& __cordl_internal_get_StartTimeUTC() const;

constexpr ::System::DateTime& __cordl_internal_get_StartTimeUTC() ;

constexpr void __cordl_internal_set_EndTimeUTC(::System::DateTime  value) ;

constexpr void __cordl_internal_set_ItemName(::StringW  value) ;

constexpr void __cordl_internal_set_PedestalID(::StringW  value) ;

constexpr void __cordl_internal_set_StartTimeUTC(::System::DateTime  value) ;

/// @brief Method .ctor, addr 0x5cb3378, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5cb3380, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::StringW  pedestalID, ::StringW  itemName, ::System::DateTime  startTimeUTC, ::System::DateTime  endTimeUTC) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StoreUpdateEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreUpdateEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreUpdateEvent(StoreUpdateEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreUpdateEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreUpdateEvent(StoreUpdateEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4449};

/// @brief Field PedestalID, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___PedestalID;

/// @brief Field ItemName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ItemName;

/// @brief Field StartTimeUTC, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  ___StartTimeUTC;

/// @brief Field EndTimeUTC, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ___EndTimeUTC;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::StoreUpdateEvent, ___PedestalID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdateEvent, ___ItemName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdateEvent, ___StartTimeUTC) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdateEvent, ___EndTimeUTC) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::StoreUpdateEvent) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.StoreUpdateEvent/<>c
class CORDL_TYPE StoreUpdateEvent___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaNetworking::Store::StoreUpdateEvent___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>*  __9__10_0;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>*  __9__9_0;

static inline ::GorillaNetworking::Store::StoreUpdateEvent___c* New_ctor() ;

/// @brief Method <DeserializeFromJSonArray>b__9_0, addr 0x5cb37bc, size 0x70, virtual false, abstract: false, final false
inline int32_t _DeserializeFromJSonArray_b__9_0(::GorillaNetworking::Store::StoreUpdateEvent*  x, ::GorillaNetworking::Store::StoreUpdateEvent*  y) ;

/// @brief Method <DeserializeFromJSonList>b__10_0, addr 0x5cb382c, size 0x70, virtual false, abstract: false, final false
inline int32_t _DeserializeFromJSonList_b__10_0(::GorillaNetworking::Store::StoreUpdateEvent*  x, ::GorillaNetworking::Store::StoreUpdateEvent*  y) ;

/// @brief Method .ctor, addr 0x5cb37b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaNetworking::Store::StoreUpdateEvent___c* getStaticF___9() ;

static inline ::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>* getStaticF___9__10_0() ;

static inline ::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>* getStaticF___9__9_0() ;

static inline void setStaticF___9(::GorillaNetworking::Store::StoreUpdateEvent___c*  value) ;

static inline void setStaticF___9__10_0(::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>*  value) ;

static inline void setStaticF___9__9_0(::System::Comparison_1<::GorillaNetworking::Store::StoreUpdateEvent*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StoreUpdateEvent___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreUpdateEvent___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreUpdateEvent___c(StoreUpdateEvent___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreUpdateEvent___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreUpdateEvent___c(StoreUpdateEvent___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4448};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::Store::StoreUpdateEvent___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking::Store

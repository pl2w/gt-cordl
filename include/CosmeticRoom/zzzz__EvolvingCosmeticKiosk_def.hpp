#pragma once
// IWYU pragma private; include "CosmeticRoom/EvolvingCosmeticKiosk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "CosmeticRoom/zzzz__EvolvingCosmeticKioskButtonSet_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EvolvingCosmeticKiosk)
namespace CosmeticRoom {
class EvolvingCosmeticKiosk_CosmeticData;
}
namespace GlobalNamespace {
struct EvolvingCosmeticKiosk__BuildCosmeticsList_d__14;
}
namespace GlobalNamespace {
struct EvolvingCosmeticKiosk__OnHandScanned_d__17;
}
namespace GlobalNamespace {
class EvolvingCosmetic;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace CosmeticRoom {
class EvolvingCosmeticKiosk;
}
namespace CosmeticRoom {
class EvolvingCosmeticKiosk_CosmeticData;
}
// Write type traits
MARK_REF_T(::CosmeticRoom::EvolvingCosmeticKiosk*);
MARK_REF_T(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*);
DEFINE_IL2CPP_CLASS(::CosmeticRoom::EvolvingCosmeticKiosk*, "CosmeticRoom", "EvolvingCosmeticKiosk");
DEFINE_IL2CPP_CLASS(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*, "CosmeticRoom", "EvolvingCosmeticKiosk/CosmeticData");
// Dependencies CosmeticRoom.EvolvingCosmeticKioskButtonSet, UnityEngine.MonoBehaviour
namespace CosmeticRoom {
// Is value type: false
// CS Name: CosmeticRoom.EvolvingCosmeticKiosk
class CORDL_TYPE EvolvingCosmeticKiosk : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CosmeticData = ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData;

using _BuildCosmeticsList_d__14 = ::GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14;

using _OnHandScanned_d__17 = ::GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17;

 __declspec(property(get=get_CosmeticsListBuilding, put=set_CosmeticsListBuilding)) bool  CosmeticsListBuilding;

 __declspec(property(get=get_Initialized, put=set_Initialized)) bool  Initialized;

 __declspec(property(get=get_VRRig)) ::UnityW<::GlobalNamespace::VRRig>  VRRig;

/// @brief Field <CosmeticsListBuilding>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__CosmeticsListBuilding_k__BackingField, put=__cordl_internal_set__CosmeticsListBuilding_k__BackingField)) bool  _CosmeticsListBuilding_k__BackingField;

/// @brief Field <Initialized>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__Initialized_k__BackingField, put=__cordl_internal_set__Initialized_k__BackingField)) bool  _Initialized_k__BackingField;

/// @brief Field _buttonSets, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonSets, put=__cordl_internal_set__buttonSets)) ::ArrayW<::UnityW<::CosmeticRoom::EvolvingCosmeticKioskButtonSet>>  _buttonSets;

/// @brief Field _cosmeticIdx, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__cosmeticIdx, put=__cordl_internal_set__cosmeticIdx)) int32_t  _cosmeticIdx;

/// @brief Field _cosmetics, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cosmetics, put=__cordl_internal_set__cosmetics)) ::System::Collections::Generic::List_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>*  _cosmetics;

/// @brief Method Awake, addr 0x5c4be40, size 0x74, virtual false, abstract: false, final false
inline void Awake() ;

/// [AsyncStateMachine(typeof(CosmeticRoom.EvolvingCosmeticKiosk::<BuildCosmeticsList>d__14))]
/// @brief Method BuildCosmeticsList, addr 0x5c4bf7c, size 0xe4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* BuildCosmeticsList() ;

static inline ::CosmeticRoom::EvolvingCosmeticKiosk* New_ctor() ;

/// [AsyncStateMachine(typeof(CosmeticRoom.EvolvingCosmeticKiosk::<OnHandScanned>d__17))]
/// @brief Method OnHandScanned, addr 0x5c4c238, size 0xc0, virtual false, abstract: false, final false
inline void OnHandScanned(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method ResetButtonSets, addr 0x5c4c060, size 0x60, virtual false, abstract: false, final false
inline void ResetButtonSets() ;

/// @brief Method Scroll, addr 0x5c4c300, size 0x104, virtual false, abstract: false, final false
inline void Scroll(int32_t  direction) ;

/// @brief Method ScrollBackward, addr 0x5c4c404, size 0x8, virtual false, abstract: false, final false
inline void ScrollBackward() ;

/// @brief Method ScrollForward, addr 0x5c4c2f8, size 0x8, virtual false, abstract: false, final false
inline void ScrollForward() ;

/// @brief Method UpdateButtonSets, addr 0x5c4c100, size 0xe8, virtual false, abstract: false, final false
inline void UpdateButtonSets() ;

constexpr bool const& __cordl_internal_get__CosmeticsListBuilding_k__BackingField() const;

constexpr bool& __cordl_internal_get__CosmeticsListBuilding_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Initialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__Initialized_k__BackingField() ;

constexpr ::ArrayW<::UnityW<::CosmeticRoom::EvolvingCosmeticKioskButtonSet>> const& __cordl_internal_get__buttonSets() const;

constexpr ::ArrayW<::UnityW<::CosmeticRoom::EvolvingCosmeticKioskButtonSet>>& __cordl_internal_get__buttonSets() ;

constexpr int32_t const& __cordl_internal_get__cosmeticIdx() const;

constexpr int32_t& __cordl_internal_get__cosmeticIdx() ;

constexpr ::System::Collections::Generic::List_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>* const& __cordl_internal_get__cosmetics() const;

constexpr ::System::Collections::Generic::List_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>*& __cordl_internal_get__cosmetics() ;

constexpr void __cordl_internal_set__CosmeticsListBuilding_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Initialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__buttonSets(::ArrayW<::UnityW<::CosmeticRoom::EvolvingCosmeticKioskButtonSet>>  value) ;

constexpr void __cordl_internal_set__cosmeticIdx(int32_t  value) ;

constexpr void __cordl_internal_set__cosmetics(::System::Collections::Generic::List_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>*  value) ;

/// @brief Method .ctor, addr 0x5c4c40c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticsListBuilding, addr 0x5c4be30, size 0x8, virtual false, abstract: false, final false
inline bool get_CosmeticsListBuilding() ;

/// [CompilerGenerated]
/// @brief Method get_Initialized, addr 0x5c4bd98, size 0x8, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_VRRig, addr 0x5c4bda8, size 0x88, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_VRRig() ;

/// [CompilerGenerated]
/// @brief Method set_CosmeticsListBuilding, addr 0x5c4be38, size 0x8, virtual false, abstract: false, final false
inline void set_CosmeticsListBuilding(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Initialized, addr 0x5c4bda0, size 0x8, virtual false, abstract: false, final false
inline void set_Initialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EvolvingCosmeticKiosk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmeticKiosk", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EvolvingCosmeticKiosk(EvolvingCosmeticKiosk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmeticKiosk", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EvolvingCosmeticKiosk(EvolvingCosmeticKiosk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4239};

/// [CompilerGenerated]
/// @brief Field <Initialized>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____Initialized_k__BackingField;

/// [SerializeField]
/// @brief Field _buttonSets, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::CosmeticRoom::EvolvingCosmeticKioskButtonSet>>  ____buttonSets;

/// @brief Field _cosmetics, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>*  ____cosmetics;

/// [CompilerGenerated]
/// @brief Field <CosmeticsListBuilding>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____CosmeticsListBuilding_k__BackingField;

/// @brief Field _cosmeticIdx, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____cosmeticIdx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::CosmeticRoom::EvolvingCosmeticKiosk, ____Initialized_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::EvolvingCosmeticKiosk, ____buttonSets) == 0x28, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::EvolvingCosmeticKiosk, ____cosmetics) == 0x30, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::EvolvingCosmeticKiosk, ____CosmeticsListBuilding_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::EvolvingCosmeticKiosk, ____cosmeticIdx) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::CosmeticRoom::EvolvingCosmeticKiosk) == 0x40, "Size mismatch!");

} // namespace end def CosmeticRoom
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace CosmeticRoom {
// Is value type: false
// CS Name: CosmeticRoom.EvolvingCosmeticKiosk/CosmeticData
class CORDL_TYPE EvolvingCosmeticKiosk_CosmeticData : public ::System::Object {
public:
// Declarations
/// @brief [CompilerGenerated]
 __declspec(property(get=get_EqualityContract)) ::System::Type*  EqualityContract;

/// @brief Field EvolvingCosmetic, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_EvolvingCosmetic, put=__cordl_internal_set_EvolvingCosmetic)) ::UnityW<::GlobalNamespace::EvolvingCosmetic>  EvolvingCosmetic;

/// @brief Field PlayfabId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayfabId, put=__cordl_internal_set_PlayfabId)) ::StringW  PlayfabId;

/// @brief Convert operator to "::System::IEquatable_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>"
constexpr operator  ::System::IEquatable_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>*() noexcept;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method Equals, addr 0x5c4c7dc, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method Equals, addr 0x5c4c864, size 0x124, virtual true, abstract: false, final false
inline bool Equals(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*  other) ;

/// [CompilerGenerated]
/// @brief Method GetHashCode, addr 0x5c4c6e4, size 0xf8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData* New_ctor() ;

/// @brief [CompilerGenerated]
static inline ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData* New_ctor(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*  original) ;

/// [CompilerGenerated]
/// @brief Method PrintMembers, addr 0x5c4c5dc, size 0xac, virtual true, abstract: false, final false
inline bool PrintMembers(::System::Text::StringBuilder*  builder) ;

/// [CompilerGenerated]
/// @brief Method ToString, addr 0x5c4c4f4, size 0xe8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [CompilerGenerated]
/// @brief Method <Clone>$, addr 0x5c4c988, size 0x58, virtual true, abstract: false, final false
inline ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData* _Clone_$() ;

constexpr ::UnityW<::GlobalNamespace::EvolvingCosmetic> const& __cordl_internal_get_EvolvingCosmetic() const;

constexpr ::UnityW<::GlobalNamespace::EvolvingCosmetic>& __cordl_internal_get_EvolvingCosmetic() ;

constexpr ::StringW const& __cordl_internal_get_PlayfabId() const;

constexpr ::StringW& __cordl_internal_get_PlayfabId() ;

constexpr void __cordl_internal_set_EvolvingCosmetic(::UnityW<::GlobalNamespace::EvolvingCosmetic>  value) ;

constexpr void __cordl_internal_set_PlayfabId(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c4ca28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method .ctor, addr 0x5c4c9e0, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*  original) ;

/// [CompilerGenerated]
/// @brief Method get_EqualityContract, addr 0x5c4c494, size 0x60, virtual true, abstract: false, final false
inline ::System::Type* get_EqualityContract() ;

/// @brief Convert to "::System::IEquatable_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>"
constexpr ::System::IEquatable_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>* i___System__IEquatable_1___CosmeticRoom__EvolvingCosmeticKiosk_CosmeticData__() noexcept;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method op_Equality, addr 0x5c4c6c4, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*  left, ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*  right) ;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method op_Inequality, addr 0x5c4c688, size 0x3c, virtual false, abstract: false, final false
static inline bool op_Inequality(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*  left, ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*  right) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EvolvingCosmeticKiosk_CosmeticData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmeticKiosk_CosmeticData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EvolvingCosmeticKiosk_CosmeticData(EvolvingCosmeticKiosk_CosmeticData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmeticKiosk_CosmeticData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EvolvingCosmeticKiosk_CosmeticData(EvolvingCosmeticKiosk_CosmeticData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4236};

/// [Nullable(0)]
/// @brief Field EvolvingCosmetic, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EvolvingCosmetic>  ___EvolvingCosmetic;

/// [Nullable(0)]
/// @brief Field PlayfabId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PlayfabId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData, ___EvolvingCosmetic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData, ___PlayfabId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData) == 0x20, "Size mismatch!");

} // namespace end def CosmeticRoom

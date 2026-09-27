#pragma once
// IWYU pragma private; include "GlobalNamespace/Gorillanalytics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Gorillanalytics)
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace GlobalNamespace {
class Gorillanalytics_UploadData;
}
namespace GlobalNamespace {
class Gorillanalytics__Start_d__7;
}
namespace GlobalNamespace {
class Gorillanalytics___c;
}
namespace GorillaGameModes {
class GameModeZoneMapping;
}
namespace GorillaNetworking {
class PhotonNetworkController;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class Gorillanalytics;
}
namespace GlobalNamespace {
class Gorillanalytics_UploadData;
}
namespace GlobalNamespace {
class Gorillanalytics__Start_d__7;
}
namespace GlobalNamespace {
class Gorillanalytics___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Gorillanalytics*);
MARK_REF_T(::GlobalNamespace::Gorillanalytics_UploadData*);
MARK_REF_T(::GlobalNamespace::Gorillanalytics__Start_d__7*);
MARK_REF_T(::GlobalNamespace::Gorillanalytics___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Gorillanalytics*, "", "Gorillanalytics");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Gorillanalytics_UploadData*, "", "Gorillanalytics/UploadData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Gorillanalytics__Start_d__7*, "", "Gorillanalytics/<Start>d__7");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Gorillanalytics___c*, "", "Gorillanalytics/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Gorillanalytics
class CORDL_TYPE Gorillanalytics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using UploadData = ::GlobalNamespace::Gorillanalytics_UploadData;

using _Start_d__7 = ::GlobalNamespace::Gorillanalytics__Start_d__7;

using __c = ::GlobalNamespace::Gorillanalytics___c;

/// @brief Field gameModeData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModeData, put=__cordl_internal_set_gameModeData)) ::UnityW<::GorillaGameModes::GameModeZoneMapping>  gameModeData;

/// @brief Field interval, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_interval, put=__cordl_internal_set_interval)) float_t  interval;

/// @brief Field oneOverChance, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_oneOverChance, put=__cordl_internal_set_oneOverChance)) double_t  oneOverChance;

/// @brief Field photonNetworkController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonNetworkController, put=__cordl_internal_set_photonNetworkController)) ::UnityW<::GorillaNetworking::PhotonNetworkController>  photonNetworkController;

/// @brief Field uploadData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_uploadData, put=__cordl_internal_set_uploadData)) ::GlobalNamespace::Gorillanalytics_UploadData*  uploadData;

/// @brief Method GetMapModeQueue, addr 0x591af80, size 0x3a4, virtual false, abstract: false, final false
inline void GetMapModeQueue(::by_ref<::StringW>  map, ::by_ref<::StringW>  mode, ::by_ref<::StringW>  queue) ;

static inline ::GlobalNamespace::Gorillanalytics* New_ctor() ;

/// [IteratorStateMachine(typeof(Gorillanalytics::<Start>d__7))]
/// @brief Method Start, addr 0x591a87c, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Start() ;

/// @brief Method UploadGorillanalytics, addr 0x591a8f0, size 0x690, virtual false, abstract: false, final false
inline void UploadGorillanalytics() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__7_0, addr 0x591b3a4, size 0x220, virtual false, abstract: false, final false
inline void _Start_b__7_0(::StringW  s) ;

constexpr ::UnityW<::GorillaGameModes::GameModeZoneMapping> const& __cordl_internal_get_gameModeData() const;

constexpr ::UnityW<::GorillaGameModes::GameModeZoneMapping>& __cordl_internal_get_gameModeData() ;

constexpr float_t const& __cordl_internal_get_interval() const;

constexpr float_t& __cordl_internal_get_interval() ;

constexpr double_t const& __cordl_internal_get_oneOverChance() const;

constexpr double_t& __cordl_internal_get_oneOverChance() ;

constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController> const& __cordl_internal_get_photonNetworkController() const;

constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController>& __cordl_internal_get_photonNetworkController() ;

constexpr ::GlobalNamespace::Gorillanalytics_UploadData* const& __cordl_internal_get_uploadData() const;

constexpr ::GlobalNamespace::Gorillanalytics_UploadData*& __cordl_internal_get_uploadData() ;

constexpr void __cordl_internal_set_gameModeData(::UnityW<::GorillaGameModes::GameModeZoneMapping>  value) ;

constexpr void __cordl_internal_set_interval(float_t  value) ;

constexpr void __cordl_internal_set_oneOverChance(double_t  value) ;

constexpr void __cordl_internal_set_photonNetworkController(::UnityW<::GorillaNetworking::PhotonNetworkController>  value) ;

constexpr void __cordl_internal_set_uploadData(::GlobalNamespace::Gorillanalytics_UploadData*  value) ;

/// @brief Method .ctor, addr 0x591b324, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Gorillanalytics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Gorillanalytics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Gorillanalytics(Gorillanalytics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gorillanalytics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gorillanalytics(Gorillanalytics const& ) = delete;

/// @brief Field GORILLANALYTICS_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  GORILLANALYTICS_EVENT_NAME{u"periodic_player_state"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2204};

/// @brief Field interval, offset: 0x20, size: 0x4, def value: None
 float_t  ___interval;

/// @brief Field oneOverChance, offset: 0x28, size: 0x8, def value: None
 double_t  ___oneOverChance;

/// @brief Field photonNetworkController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PhotonNetworkController>  ___photonNetworkController;

/// @brief Field gameModeData, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaGameModes::GameModeZoneMapping>  ___gameModeData;

/// @brief Field uploadData, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::Gorillanalytics_UploadData*  ___uploadData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Gorillanalytics, ___interval) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics, ___oneOverChance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics, ___photonNetworkController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics, ___gameModeData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics, ___uploadData) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Gorillanalytics) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Gorillanalytics/<Start>d__7
class CORDL_TYPE Gorillanalytics__Start_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::Gorillanalytics>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x591b67c, size 0x288, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::Gorillanalytics__Start_d__7* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x591b904, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x591b90c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x591b944, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x591b678, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::Gorillanalytics> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::Gorillanalytics>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::Gorillanalytics>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x591b650, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Gorillanalytics__Start_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Gorillanalytics__Start_d__7", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Gorillanalytics__Start_d__7(Gorillanalytics__Start_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gorillanalytics__Start_d__7", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gorillanalytics__Start_d__7(Gorillanalytics__Start_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2203};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Gorillanalytics>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Gorillanalytics__Start_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics__Start_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics__Start_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Gorillanalytics__Start_d__7) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Gorillanalytics/<>c
class CORDL_TYPE Gorillanalytics___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::Gorillanalytics___c*  __9;

/// @brief Field <>9__7_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_1, put=setStaticF___9__7_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__7_1;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>*  __9__8_0;

/// @brief Field <>9__8_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_1, put=setStaticF___9__8_1)) ::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>*  __9__8_1;

static inline ::GlobalNamespace::Gorillanalytics___c* New_ctor() ;

/// @brief Method <Start>b__7_1, addr 0x591b63c, size 0x4, virtual false, abstract: false, final false
inline void _Start_b__7_1(::PlayFab::PlayFabError*  e) ;

/// @brief Method <UploadGorillanalytics>b__8_0, addr 0x591b640, size 0x8, virtual false, abstract: false, final false
inline ::StringW _UploadGorillanalytics_b__8_0(::GlobalNamespace::CosmeticsController_CosmeticItem  c) ;

/// @brief Method <UploadGorillanalytics>b__8_1, addr 0x591b648, size 0x8, virtual false, abstract: false, final false
inline ::StringW _UploadGorillanalytics_b__8_1(::GlobalNamespace::CosmeticsController_CosmeticItem  c) ;

/// @brief Method .ctor, addr 0x591b634, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::Gorillanalytics___c* getStaticF___9() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__7_1() ;

static inline ::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>* getStaticF___9__8_0() ;

static inline ::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>* getStaticF___9__8_1() ;

static inline void setStaticF___9(::GlobalNamespace::Gorillanalytics___c*  value) ;

static inline void setStaticF___9__7_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

static inline void setStaticF___9__8_0(::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>*  value) ;

static inline void setStaticF___9__8_1(::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Gorillanalytics___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Gorillanalytics___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Gorillanalytics___c(Gorillanalytics___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gorillanalytics___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gorillanalytics___c(Gorillanalytics___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2202};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Gorillanalytics___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Gorillanalytics/UploadData
class CORDL_TYPE Gorillanalytics_UploadData : public ::System::Object {
public:
// Declarations
/// @brief Field cosmetics_owned, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmetics_owned, put=__cordl_internal_set_cosmetics_owned)) ::StringW  cosmetics_owned;

/// @brief Field cosmetics_worn, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmetics_worn, put=__cordl_internal_set_cosmetics_worn)) ::StringW  cosmetics_worn;

/// @brief Field map, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_map, put=__cordl_internal_set_map)) ::StringW  map;

/// @brief Field mode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::StringW  mode;

/// @brief Field player_count, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_player_count, put=__cordl_internal_set_player_count)) int32_t  player_count;

/// @brief Field pos_x, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pos_x, put=__cordl_internal_set_pos_x)) float_t  pos_x;

/// @brief Field pos_y, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_pos_y, put=__cordl_internal_set_pos_y)) float_t  pos_y;

/// @brief Field pos_z, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_pos_z, put=__cordl_internal_set_pos_z)) float_t  pos_z;

/// @brief Field queue, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_queue, put=__cordl_internal_set_queue)) ::StringW  queue;

/// @brief Field upload_chance, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_upload_chance, put=__cordl_internal_set_upload_chance)) double_t  upload_chance;

/// @brief Field vel_x, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_vel_x, put=__cordl_internal_set_vel_x)) float_t  vel_x;

/// @brief Field vel_y, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_vel_y, put=__cordl_internal_set_vel_y)) float_t  vel_y;

/// @brief Field vel_z, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_vel_z, put=__cordl_internal_set_vel_z)) float_t  vel_z;

/// @brief Field version, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) ::StringW  version;

static inline ::GlobalNamespace::Gorillanalytics_UploadData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_cosmetics_owned() const;

constexpr ::StringW& __cordl_internal_get_cosmetics_owned() ;

constexpr ::StringW const& __cordl_internal_get_cosmetics_worn() const;

constexpr ::StringW& __cordl_internal_get_cosmetics_worn() ;

constexpr ::StringW const& __cordl_internal_get_map() const;

constexpr ::StringW& __cordl_internal_get_map() ;

constexpr ::StringW const& __cordl_internal_get_mode() const;

constexpr ::StringW& __cordl_internal_get_mode() ;

constexpr int32_t const& __cordl_internal_get_player_count() const;

constexpr int32_t& __cordl_internal_get_player_count() ;

constexpr float_t const& __cordl_internal_get_pos_x() const;

constexpr float_t& __cordl_internal_get_pos_x() ;

constexpr float_t const& __cordl_internal_get_pos_y() const;

constexpr float_t& __cordl_internal_get_pos_y() ;

constexpr float_t const& __cordl_internal_get_pos_z() const;

constexpr float_t& __cordl_internal_get_pos_z() ;

constexpr ::StringW const& __cordl_internal_get_queue() const;

constexpr ::StringW& __cordl_internal_get_queue() ;

constexpr double_t const& __cordl_internal_get_upload_chance() const;

constexpr double_t& __cordl_internal_get_upload_chance() ;

constexpr float_t const& __cordl_internal_get_vel_x() const;

constexpr float_t& __cordl_internal_get_vel_x() ;

constexpr float_t const& __cordl_internal_get_vel_y() const;

constexpr float_t& __cordl_internal_get_vel_y() ;

constexpr float_t const& __cordl_internal_get_vel_z() const;

constexpr float_t& __cordl_internal_get_vel_z() ;

constexpr ::StringW const& __cordl_internal_get_version() const;

constexpr ::StringW& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_cosmetics_owned(::StringW  value) ;

constexpr void __cordl_internal_set_cosmetics_worn(::StringW  value) ;

constexpr void __cordl_internal_set_map(::StringW  value) ;

constexpr void __cordl_internal_set_mode(::StringW  value) ;

constexpr void __cordl_internal_set_player_count(int32_t  value) ;

constexpr void __cordl_internal_set_pos_x(float_t  value) ;

constexpr void __cordl_internal_set_pos_y(float_t  value) ;

constexpr void __cordl_internal_set_pos_z(float_t  value) ;

constexpr void __cordl_internal_set_queue(::StringW  value) ;

constexpr void __cordl_internal_set_upload_chance(double_t  value) ;

constexpr void __cordl_internal_set_vel_x(float_t  value) ;

constexpr void __cordl_internal_set_vel_y(float_t  value) ;

constexpr void __cordl_internal_set_vel_z(float_t  value) ;

constexpr void __cordl_internal_set_version(::StringW  value) ;

/// @brief Method .ctor, addr 0x591b5c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Gorillanalytics_UploadData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Gorillanalytics_UploadData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Gorillanalytics_UploadData(Gorillanalytics_UploadData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gorillanalytics_UploadData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gorillanalytics_UploadData(Gorillanalytics_UploadData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2201};

/// @brief Field version, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___version;

/// @brief Field upload_chance, offset: 0x18, size: 0x8, def value: None
 double_t  ___upload_chance;

/// @brief Field map, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___map;

/// @brief Field mode, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___mode;

/// @brief Field queue, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___queue;

/// @brief Field player_count, offset: 0x38, size: 0x4, def value: None
 int32_t  ___player_count;

/// @brief Field pos_x, offset: 0x3c, size: 0x4, def value: None
 float_t  ___pos_x;

/// @brief Field pos_y, offset: 0x40, size: 0x4, def value: None
 float_t  ___pos_y;

/// @brief Field pos_z, offset: 0x44, size: 0x4, def value: None
 float_t  ___pos_z;

/// @brief Field vel_x, offset: 0x48, size: 0x4, def value: None
 float_t  ___vel_x;

/// @brief Field vel_y, offset: 0x4c, size: 0x4, def value: None
 float_t  ___vel_y;

/// @brief Field vel_z, offset: 0x50, size: 0x4, def value: None
 float_t  ___vel_z;

/// @brief Field cosmetics_owned, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___cosmetics_owned;

/// @brief Field cosmetics_worn, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___cosmetics_worn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Gorillanalytics_UploadData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics_UploadData, ___upload_chance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics_UploadData, ___map) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics_UploadData, ___mode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics_UploadData, ___queue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics_UploadData, ___player_count) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics_UploadData, ___pos_x) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics_UploadData, ___pos_y) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics_UploadData, ___pos_z) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics_UploadData, ___vel_x) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics_UploadData, ___vel_y) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics_UploadData, ___vel_z) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics_UploadData, ___cosmetics_owned) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Gorillanalytics_UploadData, ___cosmetics_worn) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Gorillanalytics_UploadData) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace

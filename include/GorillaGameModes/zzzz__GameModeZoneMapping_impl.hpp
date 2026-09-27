#pragma once
// IWYU pragma private; include "GorillaGameModes/GameModeZoneMapping.hpp"
#include "GorillaGameModes/zzzz__GameModeNameOverrides_impl.hpp"
#include "GorillaGameModes/zzzz__GameModeTypeCountdown_impl.hpp"
#include "GorillaGameModes/zzzz__GameModeType_impl.hpp"
#include "GorillaGameModes/zzzz__ZoneGameModes_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaGameModes/zzzz__GameModeZoneMapping_def.hpp"
#include "GameObjectScheduling/zzzz__CountdownTextDate_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GorillaGameModes::GameModeZoneMapping.get_AllModes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* (::GorillaGameModes::GameModeZoneMapping::*)()>(&::GorillaGameModes::GameModeZoneMapping::get_AllModes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b76708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"get_AllModes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameModeZoneMapping.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaGameModes::GameModeZoneMapping::*)()>(&::GorillaGameModes::GameModeZoneMapping::Init)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x5b76720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameModeZoneMapping.GetModesForZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* (::GorillaGameModes::GameModeZoneMapping::*)(::GlobalNamespace::GTZone, bool)>(&::GorillaGameModes::GameModeZoneMapping::GetModesForZone)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5b76db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"GetModesForZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameModeZoneMapping.IsBigRoomMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaGameModes::GameModeZoneMapping::*)(::GorillaGameModes::GameModeType)>(&::GorillaGameModes::GameModeZoneMapping::IsBigRoomMode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b76ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"IsBigRoomMode", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameModeZoneMapping.GetModeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaGameModes::GameModeZoneMapping::*)(::GorillaGameModes::GameModeType)>(&::GorillaGameModes::GameModeZoneMapping::GetModeName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b76f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"GetModeName", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameModeZoneMapping.IsNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaGameModes::GameModeZoneMapping::*)(::GorillaGameModes::GameModeType)>(&::GorillaGameModes::GameModeZoneMapping::IsNew)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b7700c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"IsNew", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameModeZoneMapping.GetCountdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GameObjectScheduling::CountdownTextDate> (::GorillaGameModes::GameModeZoneMapping::*)(::GorillaGameModes::GameModeType)>(&::GorillaGameModes::GameModeZoneMapping::GetCountdown)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b7706c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"GetCountdown", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameModeZoneMapping.VerifyModeForZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GorillaGameModes::GameModeZoneMapping::*)(::GlobalNamespace::GTZone, ::GorillaGameModes::GameModeType, bool)>(&::GorillaGameModes::GameModeZoneMapping::VerifyModeForZone)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5b77108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"VerifyModeForZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GorillaGameModes::GameModeType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameModeZoneMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaGameModes::GameModeZoneMapping::*)()>(&::GorillaGameModes::GameModeZoneMapping::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b77400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_notes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notes;
}
constexpr ::StringW const& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_notes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notes;
}
constexpr void GorillaGameModes::GameModeZoneMapping::__cordl_internal_set_notes(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notes = value;
}
constexpr ::ArrayW<::GorillaGameModes::GameModeNameOverrides>& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_gameModeNameOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeNameOverrides;
}
constexpr ::ArrayW<::GorillaGameModes::GameModeNameOverrides> const& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_gameModeNameOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeNameOverrides;
}
constexpr void GorillaGameModes::GameModeZoneMapping::__cordl_internal_set_gameModeNameOverrides(::ArrayW<::GorillaGameModes::GameModeNameOverrides>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeNameOverrides = value;
}
constexpr ::ArrayW<::GorillaGameModes::GameModeType>& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_defaultGameModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultGameModes;
}
constexpr ::ArrayW<::GorillaGameModes::GameModeType> const& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_defaultGameModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultGameModes;
}
constexpr void GorillaGameModes::GameModeZoneMapping::__cordl_internal_set_defaultGameModes(::ArrayW<::GorillaGameModes::GameModeType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultGameModes = value;
}
constexpr ::ArrayW<::GorillaGameModes::GameModeType>& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_bigRoomGameModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigRoomGameModes;
}
constexpr ::ArrayW<::GorillaGameModes::GameModeType> const& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_bigRoomGameModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigRoomGameModes;
}
constexpr void GorillaGameModes::GameModeZoneMapping::__cordl_internal_set_bigRoomGameModes(::ArrayW<::GorillaGameModes::GameModeType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bigRoomGameModes = value;
}
constexpr ::ArrayW<::GorillaGameModes::ZoneGameModes>& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_zoneGameModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneGameModes;
}
constexpr ::ArrayW<::GorillaGameModes::ZoneGameModes> const& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_zoneGameModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneGameModes;
}
constexpr void GorillaGameModes::GameModeZoneMapping::__cordl_internal_set_zoneGameModes(::ArrayW<::GorillaGameModes::ZoneGameModes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneGameModes = value;
}
constexpr ::ArrayW<::GorillaGameModes::GameModeTypeCountdown>& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_gameModeTypeCountdowns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeTypeCountdowns;
}
constexpr ::ArrayW<::GorillaGameModes::GameModeTypeCountdown> const& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_gameModeTypeCountdowns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeTypeCountdowns;
}
constexpr void GorillaGameModes::GameModeZoneMapping::__cordl_internal_set_gameModeTypeCountdowns(::ArrayW<::GorillaGameModes::GameModeTypeCountdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeTypeCountdowns = value;
}
constexpr ::ArrayW<::GorillaGameModes::GameModeType>& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_newThisUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newThisUpdate;
}
constexpr ::ArrayW<::GorillaGameModes::GameModeType> const& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_newThisUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newThisUpdate;
}
constexpr void GorillaGameModes::GameModeZoneMapping::__cordl_internal_set_newThisUpdate(::ArrayW<::GorillaGameModes::GameModeType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newThisUpdate = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_bigRoomZoneGameModesLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigRoomZoneGameModesLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>* const& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_bigRoomZoneGameModesLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigRoomZoneGameModesLookup;
}
constexpr void GorillaGameModes::GameModeZoneMapping::__cordl_internal_set_bigRoomZoneGameModesLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bigRoomZoneGameModesLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_publicZoneGameModesLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publicZoneGameModesLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>* const& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_publicZoneGameModesLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publicZoneGameModesLookup;
}
constexpr void GorillaGameModes::GameModeZoneMapping::__cordl_internal_set_publicZoneGameModesLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___publicZoneGameModesLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_privateZoneGameModesLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateZoneGameModesLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>* const& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_privateZoneGameModesLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateZoneGameModesLookup;
}
constexpr void GorillaGameModes::GameModeZoneMapping::__cordl_internal_set_privateZoneGameModesLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___privateZoneGameModesLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::StringW>*& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_modeNameLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modeNameLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::StringW>* const& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_modeNameLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modeNameLookup;
}
constexpr void GorillaGameModes::GameModeZoneMapping::__cordl_internal_set_modeNameLookup(::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modeNameLookup = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_isNewLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isNewLookup;
}
constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* const& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_isNewLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isNewLookup;
}
constexpr void GorillaGameModes::GameModeZoneMapping::__cordl_internal_set_isNewLookup(::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isNewLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::UnityW<::GameObjectScheduling::CountdownTextDate>>*& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_gameModeTypeCountdownsLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeTypeCountdownsLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::UnityW<::GameObjectScheduling::CountdownTextDate>>* const& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_gameModeTypeCountdownsLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeTypeCountdownsLookup;
}
constexpr void GorillaGameModes::GameModeZoneMapping::__cordl_internal_set_gameModeTypeCountdownsLookup(::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::UnityW<::GameObjectScheduling::CountdownTextDate>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeTypeCountdownsLookup = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_allModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allModes;
}
constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* const& GorillaGameModes::GameModeZoneMapping::__cordl_internal_get_allModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allModes;
}
constexpr void GorillaGameModes::GameModeZoneMapping::__cordl_internal_set_allModes(::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allModes = value;
}
inline ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* GorillaGameModes::GameModeZoneMapping::get_AllModes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"get_AllModes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>(this, ___internal_method);
}
inline void GorillaGameModes::GameModeZoneMapping::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* GorillaGameModes::GameModeZoneMapping::GetModesForZone(::GlobalNamespace::GTZone  zone, bool  isPrivate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"GetModesForZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>(this, ___internal_method, zone, isPrivate);
}
inline bool GorillaGameModes::GameModeZoneMapping::IsBigRoomMode(::GorillaGameModes::GameModeType  gameModeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"IsBigRoomMode", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameModeType);
}
inline ::StringW GorillaGameModes::GameModeZoneMapping::GetModeName(::GorillaGameModes::GameModeType  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"GetModeName", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, mode);
}
inline bool GorillaGameModes::GameModeZoneMapping::IsNew(::GorillaGameModes::GameModeType  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"IsNew", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mode);
}
inline ::UnityW<::GameObjectScheduling::CountdownTextDate> GorillaGameModes::GameModeZoneMapping::GetCountdown(::GorillaGameModes::GameModeType  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"GetCountdown", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GameObjectScheduling::CountdownTextDate>>(this, ___internal_method, mode);
}
inline ::GorillaGameModes::GameModeType GorillaGameModes::GameModeZoneMapping::VerifyModeForZone(::GlobalNamespace::GTZone  zone, ::GorillaGameModes::GameModeType  mode, bool  isPrivate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {"VerifyModeForZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GorillaGameModes::GameModeType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method, zone, mode, isPrivate);
}
inline void GorillaGameModes::GameModeZoneMapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeZoneMapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaGameModes::GameModeZoneMapping* GorillaGameModes::GameModeZoneMapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaGameModes::GameModeZoneMapping*>());
}
// Ctor Parameters []
constexpr ::GorillaGameModes::GameModeZoneMapping::GameModeZoneMapping()   {
}

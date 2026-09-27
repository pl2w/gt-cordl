#pragma once
// IWYU pragma private; include "GlobalNamespace/GRShiftStat.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRShiftStat_def.hpp"
#include "GlobalNamespace/zzzz__GRShiftStatType_def.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GREnemyType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRShiftStat.get_EnemyKills
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::GorillaTagScripts::GhostReactor::GREnemyType,int32_t>* (::GlobalNamespace::GRShiftStat::*)()>(&::GlobalNamespace::GRShiftStat::get_EnemyKills)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b3f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"get_EnemyKills", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShiftStat.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShiftStat::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::GRShiftStat::Serialize)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x58b3f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShiftStat.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShiftStat::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::GRShiftStat::Deserialize)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x58b41e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"Deserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShiftStat.SetShiftStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShiftStat::*)(::GlobalNamespace::GRShiftStatType, int32_t)>(&::GlobalNamespace::GRShiftStat::SetShiftStat)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58b4388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"SetShiftStat", {}, {::i2c::type_of<::GlobalNamespace::GRShiftStatType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShiftStat.IncrementShiftStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShiftStat::*)(::GlobalNamespace::GRShiftStatType)>(&::GlobalNamespace::GRShiftStat::IncrementShiftStat)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x58b4434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"IncrementShiftStat", {}, {::i2c::type_of<::GlobalNamespace::GRShiftStatType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShiftStat.IncrementEnemyKills
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShiftStat::*)(::GorillaTagScripts::GhostReactor::GREnemyType)>(&::GlobalNamespace::GRShiftStat::IncrementEnemyKills)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x58b4550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"IncrementEnemyKills", {}, {::i2c::type_of<::GorillaTagScripts::GhostReactor::GREnemyType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShiftStat.ResetShiftStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShiftStat::*)()>(&::GlobalNamespace::GRShiftStat::ResetShiftStats)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x58b4658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"ResetShiftStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShiftStat.GetShiftStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRShiftStat::*)(::GlobalNamespace::GRShiftStatType)>(&::GlobalNamespace::GRShiftStat::GetShiftStat)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58b4154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"GetShiftStat", {}, {::i2c::type_of<::GlobalNamespace::GRShiftStatType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShiftStat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShiftStat::*)()>(&::GlobalNamespace::GRShiftStat::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58b4760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRShiftStatType,int32_t>*& GlobalNamespace::GRShiftStat::__cordl_internal_get_shiftStats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftStats;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRShiftStatType,int32_t>* const& GlobalNamespace::GRShiftStat::__cordl_internal_get_shiftStats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftStats;
}
constexpr void GlobalNamespace::GRShiftStat::__cordl_internal_set_shiftStats(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRShiftStatType,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftStats = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GorillaTagScripts::GhostReactor::GREnemyType,int32_t>*& GlobalNamespace::GRShiftStat::__cordl_internal_get_enemyKills()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyKills;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GorillaTagScripts::GhostReactor::GREnemyType,int32_t>* const& GlobalNamespace::GRShiftStat::__cordl_internal_get_enemyKills() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyKills;
}
constexpr void GlobalNamespace::GRShiftStat::__cordl_internal_set_enemyKills(::System::Collections::Generic::Dictionary_2<::GorillaTagScripts::GhostReactor::GREnemyType,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enemyKills = value;
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::GorillaTagScripts::GhostReactor::GREnemyType,int32_t>* GlobalNamespace::GRShiftStat::get_EnemyKills()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"get_EnemyKills", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::GorillaTagScripts::GhostReactor::GREnemyType,int32_t>*>(this, ___internal_method);
}
inline void GlobalNamespace::GRShiftStat::Serialize(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::GRShiftStat::Deserialize(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"Deserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void GlobalNamespace::GRShiftStat::SetShiftStat(::GlobalNamespace::GRShiftStatType  stat, int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"SetShiftStat", {}, {::i2c::type_of<::GlobalNamespace::GRShiftStatType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stat, newValue);
}
inline void GlobalNamespace::GRShiftStat::IncrementShiftStat(::GlobalNamespace::GRShiftStatType  stat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"IncrementShiftStat", {}, {::i2c::type_of<::GlobalNamespace::GRShiftStatType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stat);
}
inline void GlobalNamespace::GRShiftStat::IncrementEnemyKills(::GorillaTagScripts::GhostReactor::GREnemyType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"IncrementEnemyKills", {}, {::i2c::type_of<::GorillaTagScripts::GhostReactor::GREnemyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void GlobalNamespace::GRShiftStat::ResetShiftStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"ResetShiftStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRShiftStat::GetShiftStat(::GlobalNamespace::GRShiftStatType  stat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {"GetShiftStat", {}, {::i2c::type_of<::GlobalNamespace::GRShiftStatType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, stat);
}
inline void GlobalNamespace::GRShiftStat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShiftStat*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRShiftStat* GlobalNamespace::GRShiftStat::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRShiftStat*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRShiftStat::GRShiftStat()   {
}

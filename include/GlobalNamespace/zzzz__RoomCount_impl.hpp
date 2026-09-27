#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomCount.hpp"
#include "GlobalNamespace/zzzz__PrivateRoomCount_impl.hpp"
#include "GlobalNamespace/zzzz__RoomCountForZone_impl.hpp"
#include "GlobalNamespace/zzzz__RoomCount_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomCount.GetRoomCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RoomCount::*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::RoomCount::GetRoomCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5adc0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomCount*>(),
                        {"GetRoomCount", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomCount.GetRoomCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RoomCount::*)(::GlobalNamespace::GTZone, ::GorillaGameModes::GameModeType)>(&::GlobalNamespace::RoomCount::GetRoomCount)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5adc138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RoomCount*>(),
                    {::i2c::class_of<::GlobalNamespace::RoomCount*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomCount._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomCount::*)()>(&::GlobalNamespace::RoomCount::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomCount*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::RoomCountForZone*>& GlobalNamespace::RoomCount::__cordl_internal_get_zoneCountOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneCountOverrides;
}
constexpr ::ArrayW<::GlobalNamespace::RoomCountForZone*> const& GlobalNamespace::RoomCount::__cordl_internal_get_zoneCountOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneCountOverrides;
}
constexpr void GlobalNamespace::RoomCount::__cordl_internal_set_zoneCountOverrides(::ArrayW<::GlobalNamespace::RoomCountForZone*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneCountOverrides = value;
}
inline int32_t GlobalNamespace::RoomCount::GetRoomCount(::GlobalNamespace::GTZone  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomCount*>(),
                        {"GetRoomCount", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, zone);
}
inline int32_t GlobalNamespace::RoomCount::GetRoomCount(::GlobalNamespace::GTZone  zone, ::GorillaGameModes::GameModeType  mode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RoomCount*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, zone, mode);
}
inline void GlobalNamespace::RoomCount::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomCount*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomCount* GlobalNamespace::RoomCount::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoomCount*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomCount::RoomCount()   {
}

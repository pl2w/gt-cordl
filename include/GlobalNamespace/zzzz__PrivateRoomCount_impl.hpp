#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivateRoomCount.hpp"
#include "GlobalNamespace/zzzz__RoomCountForMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PrivateRoomCount_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomCount.GetRoomCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PrivateRoomCount::*)()>(&::GlobalNamespace::PrivateRoomCount::GetRoomCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateRoomCount*>(),
                        {"GetRoomCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomCount.GetRoomCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PrivateRoomCount::*)(::GorillaGameModes::GameModeType)>(&::GlobalNamespace::PrivateRoomCount::GetRoomCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5adc050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateRoomCount*>(),
                        {"GetRoomCount", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomCount.GetRoomCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PrivateRoomCount::*)(::GlobalNamespace::GTZone, ::GorillaGameModes::GameModeType)>(&::GlobalNamespace::PrivateRoomCount::GetRoomCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PrivateRoomCount*>(),
                    {::i2c::class_of<::GlobalNamespace::PrivateRoomCount*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomCount._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrivateRoomCount::*)()>(&::GlobalNamespace::PrivateRoomCount::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateRoomCount*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PrivateRoomCount::__cordl_internal_get_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr int32_t const& GlobalNamespace::PrivateRoomCount::__cordl_internal_get_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr void GlobalNamespace::PrivateRoomCount::__cordl_internal_set_count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___count = value;
}
constexpr ::ArrayW<::GlobalNamespace::RoomCountForMode*>& GlobalNamespace::PrivateRoomCount::__cordl_internal_get_modeCountOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modeCountOverrides;
}
constexpr ::ArrayW<::GlobalNamespace::RoomCountForMode*> const& GlobalNamespace::PrivateRoomCount::__cordl_internal_get_modeCountOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modeCountOverrides;
}
constexpr void GlobalNamespace::PrivateRoomCount::__cordl_internal_set_modeCountOverrides(::ArrayW<::GlobalNamespace::RoomCountForMode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modeCountOverrides = value;
}
inline int32_t GlobalNamespace::PrivateRoomCount::GetRoomCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateRoomCount*>(),
                        {"GetRoomCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PrivateRoomCount::GetRoomCount(::GorillaGameModes::GameModeType  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateRoomCount*>(),
                        {"GetRoomCount", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, mode);
}
inline int32_t GlobalNamespace::PrivateRoomCount::GetRoomCount(::GlobalNamespace::GTZone  zone, ::GorillaGameModes::GameModeType  mode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PrivateRoomCount*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, zone, mode);
}
inline void GlobalNamespace::PrivateRoomCount::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrivateRoomCount*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PrivateRoomCount* GlobalNamespace::PrivateRoomCount::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PrivateRoomCount*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrivateRoomCount::PrivateRoomCount()   {
}

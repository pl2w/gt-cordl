#pragma once
// IWYU pragma private; include "GorillaGameModes/GameModeString.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaGameModes/zzzz__GameModeString_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::GorillaGameModes::GameModeString.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaGameModes::GameModeString::*)()>(&::GorillaGameModes::GameModeString::ToString)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5b71f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaGameModes::GameModeString*>(),
                    {::i2c::class_of<::GorillaGameModes::GameModeString*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameModeString.FromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeString* (*)(::StringW)>(&::GorillaGameModes::GameModeString::FromString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5b7210c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeString*>(),
                        {"FromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameModeString.DoesPropertyStringContainGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::GorillaGameModes::GameModeString::DoesPropertyStringContainGameMode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b722a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeString*>(),
                        {"DoesPropertyStringContainGameMode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameModeString.GameTypeFromPropertyString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::StringW)>(&::GorillaGameModes::GameModeString::GameTypeFromPropertyString)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5b72328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeString*>(),
                        {"GameTypeFromPropertyString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameModeString._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaGameModes::GameModeString::*)()>(&::GorillaGameModes::GameModeString::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7229c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeString*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaGameModes::GameModeString::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::StringW const& GorillaGameModes::GameModeString::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GorillaGameModes::GameModeString::__cordl_internal_set_zone(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr ::StringW& GorillaGameModes::GameModeString::__cordl_internal_get_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr ::StringW const& GorillaGameModes::GameModeString::__cordl_internal_get_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr void GorillaGameModes::GameModeString::__cordl_internal_set_queue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queue = value;
}
constexpr ::StringW& GorillaGameModes::GameModeString::__cordl_internal_get_gameType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameType;
}
constexpr ::StringW const& GorillaGameModes::GameModeString::__cordl_internal_get_gameType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameType;
}
constexpr void GorillaGameModes::GameModeString::__cordl_internal_set_gameType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameType = value;
}
constexpr ::StringW& GorillaGameModes::GameModeString::__cordl_internal_get_modId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modId;
}
constexpr ::StringW const& GorillaGameModes::GameModeString::__cordl_internal_get_modId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modId;
}
constexpr void GorillaGameModes::GameModeString::__cordl_internal_set_modId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modId = value;
}
constexpr ::StringW& GorillaGameModes::GameModeString::__cordl_internal_get_modFileId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modFileId;
}
constexpr ::StringW const& GorillaGameModes::GameModeString::__cordl_internal_get_modFileId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modFileId;
}
constexpr void GorillaGameModes::GameModeString::__cordl_internal_set_modFileId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modFileId = value;
}
inline ::StringW GorillaGameModes::GameModeString::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaGameModes::GameModeString*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GorillaGameModes::GameModeString* GorillaGameModes::GameModeString::FromString(::StringW  gameModeString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeString*>(),
                        {"FromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeString*>(nullptr, ___internal_method, gameModeString);
}
inline bool GorillaGameModes::GameModeString::DoesPropertyStringContainGameMode(::StringW  propertyString, ::StringW  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeString*>(),
                        {"DoesPropertyStringContainGameMode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, propertyString, gameMode);
}
inline ::System::ReadOnlySpan_1<char16_t> GorillaGameModes::GameModeString::GameTypeFromPropertyString(::StringW  propertyString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeString*>(),
                        {"GameTypeFromPropertyString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, propertyString);
}
inline void GorillaGameModes::GameModeString::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameModeString*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaGameModes::GameModeString* GorillaGameModes::GameModeString::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaGameModes::GameModeString*>());
}
// Ctor Parameters []
constexpr ::GorillaGameModes::GameModeString::GameModeString()   {
}

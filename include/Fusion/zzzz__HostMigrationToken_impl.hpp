#pragma once
// IWYU pragma private; include "Fusion/HostMigrationToken.hpp"
#include "Fusion/zzzz__GameMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__HostMigrationToken_def.hpp"
#include "Fusion/Protocol/zzzz__Snapshot_def.hpp"
#include "Fusion/zzzz__CloudCommunicator_def.hpp"
#include "Fusion/zzzz__GameMode_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Fusion::HostMigrationToken.get_GameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::GameMode (::Fusion::HostMigrationToken::*)()>(&::Fusion::HostMigrationToken::get_GameMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd1754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"get_GameMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HostMigrationToken.set_GameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HostMigrationToken::*)(::Fusion::GameMode)>(&::Fusion::HostMigrationToken::set_GameMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd175c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"set_GameMode", {}, {::i2c::type_of<::Fusion::GameMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HostMigrationToken.get_CloudCommunicator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::CloudCommunicator* (::Fusion::HostMigrationToken::*)()>(&::Fusion::HostMigrationToken::get_CloudCommunicator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd1764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"get_CloudCommunicator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HostMigrationToken.set_CloudCommunicator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HostMigrationToken::*)(::Fusion::CloudCommunicator*)>(&::Fusion::HostMigrationToken::set_CloudCommunicator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd176c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"set_CloudCommunicator", {}, {::i2c::type_of<::Fusion::CloudCommunicator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HostMigrationToken.get_ResumeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Fusion::HostMigrationToken::*)()>(&::Fusion::HostMigrationToken::get_ResumeState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fd1774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"get_ResumeState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HostMigrationToken.get_ResumeTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Fusion::Tick> (::Fusion::HostMigrationToken::*)()>(&::Fusion::HostMigrationToken::get_ResumeTick)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5fd178c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"get_ResumeTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HostMigrationToken.get_ResumeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Fusion::NetworkId> (::Fusion::HostMigrationToken::*)()>(&::Fusion::HostMigrationToken::get_ResumeId)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fd1848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"get_ResumeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HostMigrationToken.get_HostSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Protocol::Snapshot* (::Fusion::HostMigrationToken::*)()>(&::Fusion::HostMigrationToken::get_HostSnapshot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd18cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"get_HostSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HostMigrationToken._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HostMigrationToken::*)(::Fusion::Protocol::Snapshot*, ::Fusion::CloudCommunicator*, ::Fusion::GameMode)>(&::Fusion::HostMigrationToken::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fd18d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Protocol::Snapshot*>(), ::i2c::type_of<::Fusion::CloudCommunicator*>(), ::i2c::type_of<::Fusion::GameMode>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::GameMode& Fusion::HostMigrationToken::__cordl_internal_get__GameMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GameMode_k__BackingField;
}
constexpr ::Fusion::GameMode const& Fusion::HostMigrationToken::__cordl_internal_get__GameMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GameMode_k__BackingField;
}
constexpr void Fusion::HostMigrationToken::__cordl_internal_set__GameMode_k__BackingField(::Fusion::GameMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GameMode_k__BackingField = value;
}
constexpr ::Fusion::CloudCommunicator*& Fusion::HostMigrationToken::__cordl_internal_get__CloudCommunicator_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloudCommunicator_k__BackingField;
}
constexpr ::Fusion::CloudCommunicator* const& Fusion::HostMigrationToken::__cordl_internal_get__CloudCommunicator_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloudCommunicator_k__BackingField;
}
constexpr void Fusion::HostMigrationToken::__cordl_internal_set__CloudCommunicator_k__BackingField(::Fusion::CloudCommunicator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CloudCommunicator_k__BackingField = value;
}
constexpr ::Fusion::Protocol::Snapshot*& Fusion::HostMigrationToken::__cordl_internal_get__HostSnapshot_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HostSnapshot_k__BackingField;
}
constexpr ::Fusion::Protocol::Snapshot* const& Fusion::HostMigrationToken::__cordl_internal_get__HostSnapshot_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HostSnapshot_k__BackingField;
}
constexpr void Fusion::HostMigrationToken::__cordl_internal_set__HostSnapshot_k__BackingField(::Fusion::Protocol::Snapshot*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HostSnapshot_k__BackingField = value;
}
inline ::Fusion::GameMode Fusion::HostMigrationToken::get_GameMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"get_GameMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::GameMode>(this, ___internal_method);
}
inline void Fusion::HostMigrationToken::set_GameMode(::Fusion::GameMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"set_GameMode", {}, {::i2c::type_of<::Fusion::GameMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::CloudCommunicator* Fusion::HostMigrationToken::get_CloudCommunicator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"get_CloudCommunicator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::CloudCommunicator*>(this, ___internal_method);
}
inline void Fusion::HostMigrationToken::set_CloudCommunicator(::Fusion::CloudCommunicator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"set_CloudCommunicator", {}, {::i2c::type_of<::Fusion::CloudCommunicator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Fusion::HostMigrationToken::get_ResumeState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"get_ResumeState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::Nullable_1<::Fusion::Tick> Fusion::HostMigrationToken::get_ResumeTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"get_ResumeTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Fusion::Tick>>(this, ___internal_method);
}
inline ::System::Nullable_1<::Fusion::NetworkId> Fusion::HostMigrationToken::get_ResumeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"get_ResumeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Fusion::NetworkId>>(this, ___internal_method);
}
inline ::Fusion::Protocol::Snapshot* Fusion::HostMigrationToken::get_HostSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {"get_HostSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Protocol::Snapshot*>(this, ___internal_method);
}
inline void Fusion::HostMigrationToken::_ctor(::Fusion::Protocol::Snapshot*  hostSnapshot, ::Fusion::CloudCommunicator*  cloudCommunicator, ::Fusion::GameMode  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationToken*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Protocol::Snapshot*>(), ::i2c::type_of<::Fusion::CloudCommunicator*>(), ::i2c::type_of<::Fusion::GameMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hostSnapshot, cloudCommunicator, gameMode);
}
inline ::Fusion::HostMigrationToken* Fusion::HostMigrationToken::New_ctor(::Fusion::Protocol::Snapshot*  hostSnapshot, ::Fusion::CloudCommunicator*  cloudCommunicator, ::Fusion::GameMode  gameMode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::HostMigrationToken*>(hostSnapshot, cloudCommunicator, gameMode));
}
// Ctor Parameters []
constexpr ::Fusion::HostMigrationToken::HostMigrationToken()   {
}

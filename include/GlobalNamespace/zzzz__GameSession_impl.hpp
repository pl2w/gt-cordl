#pragma once
// IWYU pragma private; include "GlobalNamespace/GameSession.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameSession_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t_def.hpp"
#include "GlobalNamespace/zzzz__StringKeyValueMap_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameSession._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(::System::IntPtr, bool)>(&::GlobalNamespace::GameSession::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x53fe858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::GameSession*)>(&::GlobalNamespace::GameSession::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x53fe8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::GameSession*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::GameSession*)>(&::GlobalNamespace::GameSession::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x53fe8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::GameSession*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x53fe9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                    {::i2c::class_of<::GlobalNamespace::GameSession*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x53fe990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(bool)>(&::GlobalNamespace::GameSession::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x53fea8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                    {::i2c::class_of<::GlobalNamespace::GameSession*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.set_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(::StringW)>(&::GlobalNamespace::GameSession::set_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53febd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::get_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53fecb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.set_game_session_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(::StringW)>(&::GlobalNamespace::GameSession::set_game_session_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53fed84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_game_session_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.get_game_session_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::get_game_session_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53fee5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_game_session_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.set_provider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(::StringW)>(&::GlobalNamespace::GameSession::set_provider)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53fef30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_provider", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.get_provider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::get_provider)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ff008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_provider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.set_game_session_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(::StringW)>(&::GlobalNamespace::GameSession::set_game_session_name)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53ff0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_game_session_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.get_game_session_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::get_game_session_name)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ff1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_game_session_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.set_ip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(::StringW)>(&::GlobalNamespace::GameSession::set_ip)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53ff288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_ip", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.get_ip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::get_ip)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ff360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_ip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.set_port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(int32_t)>(&::GlobalNamespace::GameSession::set_port)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53ff434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_port", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.get_port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::get_port)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ff50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_port", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.set_required_tags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(::StringW)>(&::GlobalNamespace::GameSession::set_required_tags)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53ff5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_required_tags", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.get_required_tags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::get_required_tags)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ff6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_required_tags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.set_current_player_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(int32_t)>(&::GlobalNamespace::GameSession::set_current_player_count)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53ff78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_current_player_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.get_current_player_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::get_current_player_count)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ff864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_current_player_count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.set_max_player_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(int32_t)>(&::GlobalNamespace::GameSession::set_max_player_count)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53ff938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_max_player_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.get_max_player_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::get_max_player_count)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ffa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_max_player_count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.set_region
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(::StringW)>(&::GlobalNamespace::GameSession::set_region)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53ffae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_region", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.get_region
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::get_region)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ffbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_region", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.set_partition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(::StringW)>(&::GlobalNamespace::GameSession::set_partition)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53ffc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_partition", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.get_partition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::get_partition)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ffd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_partition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.set_created_at
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(::StringW)>(&::GlobalNamespace::GameSession::set_created_at)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53ffe3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_created_at", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.get_created_at
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::get_created_at)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53fff14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_created_at", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.set_updated_at
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(::StringW)>(&::GlobalNamespace::GameSession::set_updated_at)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53fffe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_updated_at", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.get_updated_at
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::get_updated_at)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x54000c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_updated_at", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.set_extra_properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)(::GlobalNamespace::StringKeyValueMap*)>(&::GlobalNamespace::GameSession::set_extra_properties)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5400194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_extra_properties", {}, {::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.get_extra_properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StringKeyValueMap* (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::get_extra_properties)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5400284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_extra_properties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession.ParseFromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSession::*)(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*)>(&::GlobalNamespace::GameSession::ParseFromJson)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5400390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"ParseFromJson", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSession._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSession::*)()>(&::GlobalNamespace::GameSession::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x540048c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::GameSession::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::GameSession::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::GameSession::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::GameSession::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::GameSession::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::GameSession::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::GameSession::setStaticF_id_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "id_name", ::GlobalNamespace::GameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GameSession::getStaticF_id_name()  {
return ::cordl_internals::getStaticField<::StringW, "id_name", ::GlobalNamespace::GameSession*>();
}
inline void GlobalNamespace::GameSession::setStaticF_game_session_id_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "game_session_id_name", ::GlobalNamespace::GameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GameSession::getStaticF_game_session_id_name()  {
return ::cordl_internals::getStaticField<::StringW, "game_session_id_name", ::GlobalNamespace::GameSession*>();
}
inline void GlobalNamespace::GameSession::setStaticF_provider_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "provider_name", ::GlobalNamespace::GameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GameSession::getStaticF_provider_name()  {
return ::cordl_internals::getStaticField<::StringW, "provider_name", ::GlobalNamespace::GameSession*>();
}
inline void GlobalNamespace::GameSession::setStaticF_game_session_name_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "game_session_name_name", ::GlobalNamespace::GameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GameSession::getStaticF_game_session_name_name()  {
return ::cordl_internals::getStaticField<::StringW, "game_session_name_name", ::GlobalNamespace::GameSession*>();
}
inline void GlobalNamespace::GameSession::setStaticF_ip_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ip_name", ::GlobalNamespace::GameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GameSession::getStaticF_ip_name()  {
return ::cordl_internals::getStaticField<::StringW, "ip_name", ::GlobalNamespace::GameSession*>();
}
inline void GlobalNamespace::GameSession::setStaticF_port_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "port_name", ::GlobalNamespace::GameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GameSession::getStaticF_port_name()  {
return ::cordl_internals::getStaticField<::StringW, "port_name", ::GlobalNamespace::GameSession*>();
}
inline void GlobalNamespace::GameSession::setStaticF_required_tags_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "required_tags_name", ::GlobalNamespace::GameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GameSession::getStaticF_required_tags_name()  {
return ::cordl_internals::getStaticField<::StringW, "required_tags_name", ::GlobalNamespace::GameSession*>();
}
inline void GlobalNamespace::GameSession::setStaticF_current_player_count_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "current_player_count_name", ::GlobalNamespace::GameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GameSession::getStaticF_current_player_count_name()  {
return ::cordl_internals::getStaticField<::StringW, "current_player_count_name", ::GlobalNamespace::GameSession*>();
}
inline void GlobalNamespace::GameSession::setStaticF_max_player_count_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "max_player_count_name", ::GlobalNamespace::GameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GameSession::getStaticF_max_player_count_name()  {
return ::cordl_internals::getStaticField<::StringW, "max_player_count_name", ::GlobalNamespace::GameSession*>();
}
inline void GlobalNamespace::GameSession::setStaticF_region_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "region_name", ::GlobalNamespace::GameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GameSession::getStaticF_region_name()  {
return ::cordl_internals::getStaticField<::StringW, "region_name", ::GlobalNamespace::GameSession*>();
}
inline void GlobalNamespace::GameSession::setStaticF_partition_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "partition_name", ::GlobalNamespace::GameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GameSession::getStaticF_partition_name()  {
return ::cordl_internals::getStaticField<::StringW, "partition_name", ::GlobalNamespace::GameSession*>();
}
inline void GlobalNamespace::GameSession::setStaticF_created_at_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "created_at_name", ::GlobalNamespace::GameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GameSession::getStaticF_created_at_name()  {
return ::cordl_internals::getStaticField<::StringW, "created_at_name", ::GlobalNamespace::GameSession*>();
}
inline void GlobalNamespace::GameSession::setStaticF_updated_at_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "updated_at_name", ::GlobalNamespace::GameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GameSession::getStaticF_updated_at_name()  {
return ::cordl_internals::getStaticField<::StringW, "updated_at_name", ::GlobalNamespace::GameSession*>();
}
inline void GlobalNamespace::GameSession::setStaticF_extra_properties_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "extra_properties_name", ::GlobalNamespace::GameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GameSession::getStaticF_extra_properties_name()  {
return ::cordl_internals::getStaticField<::StringW, "extra_properties_name", ::GlobalNamespace::GameSession*>();
}
inline void GlobalNamespace::GameSession::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::GameSession::getCPtr(::GlobalNamespace::GameSession*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::GameSession*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::GameSession::swigRelease(::GlobalNamespace::GameSession*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::GameSession*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::GameSession::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameSession*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameSession::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameSession::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameSession*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::GameSession::set_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GameSession::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameSession::set_game_session_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_game_session_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GameSession::get_game_session_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_game_session_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameSession::set_provider(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_provider", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GameSession::get_provider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_provider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameSession::set_game_session_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_game_session_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GameSession::get_game_session_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_game_session_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameSession::set_ip(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_ip", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GameSession::get_ip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_ip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameSession::set_port(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_port", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GameSession::get_port()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_port", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameSession::set_required_tags(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_required_tags", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GameSession::get_required_tags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_required_tags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameSession::set_current_player_count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_current_player_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GameSession::get_current_player_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_current_player_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameSession::set_max_player_count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_max_player_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GameSession::get_max_player_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_max_player_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameSession::set_region(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_region", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GameSession::get_region()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_region", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameSession::set_partition(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_partition", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GameSession::get_partition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_partition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameSession::set_created_at(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_created_at", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GameSession::get_created_at()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_created_at", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameSession::set_updated_at(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_updated_at", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GameSession::get_updated_at()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_updated_at", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameSession::set_extra_properties(::GlobalNamespace::StringKeyValueMap*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"set_extra_properties", {}, {::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::StringKeyValueMap* GlobalNamespace::GameSession::get_extra_properties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"get_extra_properties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StringKeyValueMap*>(this, ___internal_method);
}
inline bool GlobalNamespace::GameSession::ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {"ParseFromJson", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, object_);
}
inline void GlobalNamespace::GameSession::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSession*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameSession* GlobalNamespace::GameSession::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameSession*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::GameSession* GlobalNamespace::GameSession::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameSession*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GameSession::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GameSession::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameSession::GameSession()   {
}

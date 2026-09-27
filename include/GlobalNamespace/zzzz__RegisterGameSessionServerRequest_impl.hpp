#pragma once
// IWYU pragma private; include "GlobalNamespace/RegisterGameSessionServerRequest.hpp"
#include "GlobalNamespace/zzzz__MothershipRequest_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__RegisterGameSessionServerRequest_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t_def.hpp"
#include "GlobalNamespace/zzzz__StringKeyValueMap_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionServerRequest::*)(::System::IntPtr, bool)>(&::GlobalNamespace::RegisterGameSessionServerRequest::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5311ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::RegisterGameSessionServerRequest*)>(&::GlobalNamespace::RegisterGameSessionServerRequest::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5311b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::RegisterGameSessionServerRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::RegisterGameSessionServerRequest*)>(&::GlobalNamespace::RegisterGameSessionServerRequest::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5311bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::RegisterGameSessionServerRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionServerRequest::*)(bool)>(&::GlobalNamespace::RegisterGameSessionServerRequest::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5311c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.set_game_session_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionServerRequest::*)(::StringW)>(&::GlobalNamespace::RegisterGameSessionServerRequest::set_game_session_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5311dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_game_session_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.get_game_session_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RegisterGameSessionServerRequest::*)()>(&::GlobalNamespace::RegisterGameSessionServerRequest::get_game_session_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5311ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_game_session_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.set_provider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionServerRequest::*)(::StringW)>(&::GlobalNamespace::RegisterGameSessionServerRequest::set_provider)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5311f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_provider", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.get_provider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RegisterGameSessionServerRequest::*)()>(&::GlobalNamespace::RegisterGameSessionServerRequest::get_provider)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5312050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_provider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.set_game_session_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionServerRequest::*)(::StringW)>(&::GlobalNamespace::RegisterGameSessionServerRequest::set_game_session_name)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5312124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_game_session_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.get_game_session_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RegisterGameSessionServerRequest::*)()>(&::GlobalNamespace::RegisterGameSessionServerRequest::get_game_session_name)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53121fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_game_session_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.set_ip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionServerRequest::*)(::StringW)>(&::GlobalNamespace::RegisterGameSessionServerRequest::set_ip)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53122d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_ip", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.get_ip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RegisterGameSessionServerRequest::*)()>(&::GlobalNamespace::RegisterGameSessionServerRequest::get_ip)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53123a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_ip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.set_port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionServerRequest::*)(int32_t)>(&::GlobalNamespace::RegisterGameSessionServerRequest::set_port)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x531247c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_port", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.get_port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RegisterGameSessionServerRequest::*)()>(&::GlobalNamespace::RegisterGameSessionServerRequest::get_port)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5312554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_port", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.set_required_tags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionServerRequest::*)(::StringW)>(&::GlobalNamespace::RegisterGameSessionServerRequest::set_required_tags)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5312628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_required_tags", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.get_required_tags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RegisterGameSessionServerRequest::*)()>(&::GlobalNamespace::RegisterGameSessionServerRequest::get_required_tags)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5312700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_required_tags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.set_max_player_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionServerRequest::*)(int32_t)>(&::GlobalNamespace::RegisterGameSessionServerRequest::set_max_player_count)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53127d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_max_player_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.get_max_player_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RegisterGameSessionServerRequest::*)()>(&::GlobalNamespace::RegisterGameSessionServerRequest::get_max_player_count)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53128ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_max_player_count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.set_region
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionServerRequest::*)(::StringW)>(&::GlobalNamespace::RegisterGameSessionServerRequest::set_region)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5312980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_region", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.get_region
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RegisterGameSessionServerRequest::*)()>(&::GlobalNamespace::RegisterGameSessionServerRequest::get_region)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5312a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_region", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.set_partition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionServerRequest::*)(::StringW)>(&::GlobalNamespace::RegisterGameSessionServerRequest::set_partition)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5312b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_partition", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.get_partition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RegisterGameSessionServerRequest::*)()>(&::GlobalNamespace::RegisterGameSessionServerRequest::get_partition)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5312c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_partition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.set_extra_properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionServerRequest::*)(::GlobalNamespace::StringKeyValueMap*)>(&::GlobalNamespace::RegisterGameSessionServerRequest::set_extra_properties)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5312cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_extra_properties", {}, {::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.get_extra_properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StringKeyValueMap* (::GlobalNamespace::RegisterGameSessionServerRequest::*)()>(&::GlobalNamespace::RegisterGameSessionServerRequest::get_extra_properties)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5312dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_extra_properties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest.ToHttpRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* (::GlobalNamespace::RegisterGameSessionServerRequest::*)()>(&::GlobalNamespace::RegisterGameSessionServerRequest::ToHttpRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5312ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionServerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionServerRequest::*)()>(&::GlobalNamespace::RegisterGameSessionServerRequest::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5312fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::RegisterGameSessionServerRequest::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::RegisterGameSessionServerRequest::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::RegisterGameSessionServerRequest::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::RegisterGameSessionServerRequest::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::RegisterGameSessionServerRequest::getCPtr(::GlobalNamespace::RegisterGameSessionServerRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::RegisterGameSessionServerRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::RegisterGameSessionServerRequest::swigRelease(::GlobalNamespace::RegisterGameSessionServerRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::RegisterGameSessionServerRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::RegisterGameSessionServerRequest::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::RegisterGameSessionServerRequest::set_game_session_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_game_session_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::RegisterGameSessionServerRequest::get_game_session_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_game_session_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::RegisterGameSessionServerRequest::set_provider(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_provider", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::RegisterGameSessionServerRequest::get_provider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_provider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::RegisterGameSessionServerRequest::set_game_session_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_game_session_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::RegisterGameSessionServerRequest::get_game_session_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_game_session_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::RegisterGameSessionServerRequest::set_ip(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_ip", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::RegisterGameSessionServerRequest::get_ip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_ip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::RegisterGameSessionServerRequest::set_port(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_port", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::RegisterGameSessionServerRequest::get_port()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_port", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::RegisterGameSessionServerRequest::set_required_tags(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_required_tags", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::RegisterGameSessionServerRequest::get_required_tags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_required_tags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::RegisterGameSessionServerRequest::set_max_player_count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_max_player_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::RegisterGameSessionServerRequest::get_max_player_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_max_player_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::RegisterGameSessionServerRequest::set_region(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_region", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::RegisterGameSessionServerRequest::get_region()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_region", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::RegisterGameSessionServerRequest::set_partition(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_partition", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::RegisterGameSessionServerRequest::get_partition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_partition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::RegisterGameSessionServerRequest::set_extra_properties(::GlobalNamespace::StringKeyValueMap*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"set_extra_properties", {}, {::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::StringKeyValueMap* GlobalNamespace::RegisterGameSessionServerRequest::get_extra_properties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {"get_extra_properties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StringKeyValueMap*>(this, ___internal_method);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* GlobalNamespace::RegisterGameSessionServerRequest::ToHttpRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*>(this, ___internal_method);
}
inline void GlobalNamespace::RegisterGameSessionServerRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionServerRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RegisterGameSessionServerRequest* GlobalNamespace::RegisterGameSessionServerRequest::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RegisterGameSessionServerRequest*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::RegisterGameSessionServerRequest* GlobalNamespace::RegisterGameSessionServerRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RegisterGameSessionServerRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RegisterGameSessionServerRequest::RegisterGameSessionServerRequest()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMarkerPayload.hpp"
#include "GlobalNamespace/zzzz__OVRMarkerPayload_def.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRMarkerPayloadType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.IOVRAnchorComponent_OVRMarkerPayload__get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRMarkerPayload::*)()>(&::GlobalNamespace::OVRMarkerPayload::IOVRAnchorComponent_OVRMarkerPayload__get_Type)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa57ca00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"IOVRAnchorComponent<OVRMarkerPayload>.get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.IOVRAnchorComponent_OVRMarkerPayload__get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRMarkerPayload::*)()>(&::GlobalNamespace::OVRMarkerPayload::IOVRAnchorComponent_OVRMarkerPayload__get_Handle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa57ca60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"IOVRAnchorComponent<OVRMarkerPayload>.get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.IOVRAnchorComponent_OVRMarkerPayload__FromAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRMarkerPayload (::GlobalNamespace::OVRMarkerPayload::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRMarkerPayload::IOVRAnchorComponent_OVRMarkerPayload__FromAnchor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa57cab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"IOVRAnchorComponent<OVRMarkerPayload>.FromAnchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.get_IsNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRMarkerPayload::*)()>(&::GlobalNamespace::OVRMarkerPayload::get_IsNull)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa57cb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"get_IsNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.get_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRMarkerPayload::*)()>(&::GlobalNamespace::OVRMarkerPayload::get_IsEnabled)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa57cba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"get_IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.IOVRAnchorComponent_OVRMarkerPayload__SetEnabledAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRMarkerPayload::*)(bool, double_t)>(&::GlobalNamespace::OVRMarkerPayload::IOVRAnchorComponent_OVRMarkerPayload__SetEnabledAsync)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa57cc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"IOVRAnchorComponent<OVRMarkerPayload>.SetEnabledAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRMarkerPayload::*)(::GlobalNamespace::OVRMarkerPayload)>(&::GlobalNamespace::OVRMarkerPayload::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa57ccd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::OVRMarkerPayload>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRMarkerPayload, ::GlobalNamespace::OVRMarkerPayload)>(&::GlobalNamespace::OVRMarkerPayload::op_Equality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa57cd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::OVRMarkerPayload>(), ::i2c::type_of<::GlobalNamespace::OVRMarkerPayload>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRMarkerPayload, ::GlobalNamespace::OVRMarkerPayload)>(&::GlobalNamespace::OVRMarkerPayload::op_Inequality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa57cda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::OVRMarkerPayload>(), ::i2c::type_of<::GlobalNamespace::OVRMarkerPayload>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRMarkerPayload::*)(::System::Object*)>(&::GlobalNamespace::OVRMarkerPayload::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa57ce18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                    {::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRMarkerPayload::*)()>(&::GlobalNamespace::OVRMarkerPayload::GetHashCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa57cea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                    {::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRMarkerPayload::*)()>(&::GlobalNamespace::OVRMarkerPayload::ToString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa57cf44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                    {::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRMarkerPayload::*)()>(&::GlobalNamespace::OVRMarkerPayload::get_Type)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa57ca54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRMarkerPayload::*)()>(&::GlobalNamespace::OVRMarkerPayload::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa57cfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMarkerPayload::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRMarkerPayload::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa57cae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.get_PayloadType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRMarkerPayloadType (::GlobalNamespace::OVRMarkerPayload::*)()>(&::GlobalNamespace::OVRMarkerPayload::get_PayloadType)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa57cfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"get_PayloadType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.AsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRMarkerPayload::*)()>(&::GlobalNamespace::OVRMarkerPayload::AsString)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xa57d098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"AsString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.get_Bytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::GlobalNamespace::OVRMarkerPayload::*)()>(&::GlobalNamespace::OVRMarkerPayload::get_Bytes)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa57d590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"get_Bytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.get_ByteCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRMarkerPayload::*)()>(&::GlobalNamespace::OVRMarkerPayload::get_ByteCount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa57d300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"get_ByteCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMarkerPayload.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRMarkerPayload::*)(::System::Span_1<uint8_t>)>(&::GlobalNamespace::OVRMarkerPayload::GetBytes)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa57d3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"GetBytes", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRMarkerPayload::setStaticF_Null(::GlobalNamespace::OVRMarkerPayload  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRMarkerPayload, "Null", ::GlobalNamespace::OVRMarkerPayload>(std::forward<::GlobalNamespace::OVRMarkerPayload>(value));
}
inline ::GlobalNamespace::OVRMarkerPayload GlobalNamespace::OVRMarkerPayload::getStaticF_Null()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRMarkerPayload, "Null", ::GlobalNamespace::OVRMarkerPayload>();
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRMarkerPayload::IOVRAnchorComponent_OVRMarkerPayload__get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"IOVRAnchorComponent<OVRMarkerPayload>.get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRMarkerPayload::IOVRAnchorComponent_OVRMarkerPayload__get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"IOVRAnchorComponent<OVRMarkerPayload>.get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRMarkerPayload GlobalNamespace::OVRMarkerPayload::IOVRAnchorComponent_OVRMarkerPayload__FromAnchor(::GlobalNamespace::OVRAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"IOVRAnchorComponent<OVRMarkerPayload>.FromAnchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMarkerPayload>(*this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRMarkerPayload::get_IsNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"get_IsNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRMarkerPayload::get_IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"get_IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRMarkerPayload::IOVRAnchorComponent_OVRMarkerPayload__SetEnabledAsync(bool  enabled, double_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"IOVRAnchorComponent<OVRMarkerPayload>.SetEnabledAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, enabled, timeout);
}
inline bool GlobalNamespace::OVRMarkerPayload::Equals(::GlobalNamespace::OVRMarkerPayload  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::OVRMarkerPayload>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRMarkerPayload::op_Equality(::GlobalNamespace::OVRMarkerPayload  lhs, ::GlobalNamespace::OVRMarkerPayload  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::OVRMarkerPayload>(), ::i2c::type_of<::GlobalNamespace::OVRMarkerPayload>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRMarkerPayload::op_Inequality(::GlobalNamespace::OVRMarkerPayload  lhs, ::GlobalNamespace::OVRMarkerPayload  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::OVRMarkerPayload>(), ::i2c::type_of<::GlobalNamespace::OVRMarkerPayload>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRMarkerPayload::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRMarkerPayload::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRMarkerPayload::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRMarkerPayload::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRMarkerPayload::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRMarkerPayload::_ctor(::GlobalNamespace::OVRAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, anchor);
}
inline ::GlobalNamespace::OVRMarkerPayloadType GlobalNamespace::OVRMarkerPayload::get_PayloadType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"get_PayloadType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMarkerPayloadType>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRMarkerPayload::AsString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"AsString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::ArraySegment_1<uint8_t> GlobalNamespace::OVRMarkerPayload::get_Bytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"get_Bytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRMarkerPayload::get_ByteCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"get_ByteCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRMarkerPayload::GetBytes(::System::Span_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMarkerPayload>(),
                        {"GetBytes", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, buffer);
}
/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRMarkerPayload>"
constexpr  GlobalNamespace::OVRMarkerPayload::operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRMarkerPayload>*()  {
return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRMarkerPayload>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRMarkerPayload>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRMarkerPayload>* GlobalNamespace::OVRMarkerPayload::i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRMarkerPayload_()  {
return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRMarkerPayload>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRMarkerPayload>"
constexpr  GlobalNamespace::OVRMarkerPayload::operator ::System::IEquatable_1<::GlobalNamespace::OVRMarkerPayload>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRMarkerPayload>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRMarkerPayload>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRMarkerPayload>* GlobalNamespace::OVRMarkerPayload::i___System__IEquatable_1___GlobalNamespace__OVRMarkerPayload_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRMarkerPayload>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRMarkerPayload::OVRMarkerPayload(uint64_t  _Handle_k__BackingField) noexcept  {
this->_Handle_k__BackingField = _Handle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMarkerPayload::OVRMarkerPayload()   {
}

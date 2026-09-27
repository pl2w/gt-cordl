#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipTitleData.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipTitleData_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipTitleData::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MothershipTitleData::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x52c545c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipTitleData*)>(&::GlobalNamespace::MothershipTitleData::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x52c5510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipTitleData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipTitleData*)>(&::GlobalNamespace::MothershipTitleData::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x52c5550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipTitleData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipTitleData::*)(bool)>(&::GlobalNamespace::MothershipTitleData::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x52c55ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.set_env_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipTitleData::*)(::StringW)>(&::GlobalNamespace::MothershipTitleData::set_env_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52c5758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"set_env_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.get_env_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MothershipTitleData::*)()>(&::GlobalNamespace::MothershipTitleData::get_env_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52c5830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"get_env_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.set_deployment_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipTitleData::*)(::StringW)>(&::GlobalNamespace::MothershipTitleData::set_deployment_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52c5904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"set_deployment_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.get_deployment_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MothershipTitleData::*)()>(&::GlobalNamespace::MothershipTitleData::get_deployment_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52c59dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"get_deployment_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.set_title_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipTitleData::*)(::StringW)>(&::GlobalNamespace::MothershipTitleData::set_title_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52c5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"set_title_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.get_title_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MothershipTitleData::*)()>(&::GlobalNamespace::MothershipTitleData::get_title_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52c5b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"get_title_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.set_updated_at
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipTitleData::*)(::StringW)>(&::GlobalNamespace::MothershipTitleData::set_updated_at)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52c5c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"set_updated_at", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.get_updated_at
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MothershipTitleData::*)()>(&::GlobalNamespace::MothershipTitleData::get_updated_at)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52c5d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"get_updated_at", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.set_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipTitleData::*)(::StringW)>(&::GlobalNamespace::MothershipTitleData::set_key)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52c5e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"set_key", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.get_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MothershipTitleData::*)()>(&::GlobalNamespace::MothershipTitleData::get_key)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52c5ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"get_key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.set_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipTitleData::*)(::StringW)>(&::GlobalNamespace::MothershipTitleData::set_data)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52c5fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"set_data", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.get_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MothershipTitleData::*)()>(&::GlobalNamespace::MothershipTitleData::get_data)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52c608c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"get_data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.set_server_only
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipTitleData::*)(bool)>(&::GlobalNamespace::MothershipTitleData::set_server_only)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52c6160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"set_server_only", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.get_server_only
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipTitleData::*)()>(&::GlobalNamespace::MothershipTitleData::get_server_only)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52c6238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"get_server_only", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData.ParseFromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipTitleData::*)(::StringW)>(&::GlobalNamespace::MothershipTitleData::ParseFromString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x52c630c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"ParseFromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipTitleData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipTitleData::*)()>(&::GlobalNamespace::MothershipTitleData::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x52c63f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::MothershipTitleData::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::MothershipTitleData::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::MothershipTitleData::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::MothershipTitleData::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipTitleData::getCPtr(::GlobalNamespace::MothershipTitleData*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipTitleData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipTitleData::swigRelease(::GlobalNamespace::MothershipTitleData*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipTitleData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::MothershipTitleData::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::MothershipTitleData::set_env_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"set_env_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MothershipTitleData::get_env_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"get_env_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipTitleData::set_deployment_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"set_deployment_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MothershipTitleData::get_deployment_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"get_deployment_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipTitleData::set_title_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"set_title_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MothershipTitleData::get_title_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"get_title_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipTitleData::set_updated_at(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"set_updated_at", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MothershipTitleData::get_updated_at()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"get_updated_at", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipTitleData::set_key(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"set_key", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MothershipTitleData::get_key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"get_key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipTitleData::set_data(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"set_data", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MothershipTitleData::get_data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"get_data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipTitleData::set_server_only(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"set_server_only", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MothershipTitleData::get_server_only()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"get_server_only", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MothershipTitleData::ParseFromString(::StringW  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {"ParseFromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline void GlobalNamespace::MothershipTitleData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipTitleData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MothershipTitleData* GlobalNamespace::MothershipTitleData::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipTitleData*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::MothershipTitleData* GlobalNamespace::MothershipTitleData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipTitleData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipTitleData::MothershipTitleData()   {
}

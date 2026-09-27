#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/ValveOpenXRSupportFeature.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "Valve/OpenXR/Utils/zzzz__ValveOpenXRSupportFeature_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
#include "Valve/OpenXR/Utils/zzzz__InstanceCreated_def.hpp"
#include "Valve/OpenXR/Utils/zzzz__InstanceDestroyed_def.hpp"
#include "Valve/OpenXR/Utils/zzzz__SessionCreated_def.hpp"
#include "Valve/OpenXR/Utils/zzzz__SessionDestroyed_def.hpp"
#include "Valve/OpenXR/Utils/zzzz__ValveOpenXRSupportFeature_def.hpp"
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.get_XrInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::*)()>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::get_XrInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9417ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"get_XrInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.get_XrSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::*)()>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::get_XrSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9417b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"get_XrSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature> (*)()>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::get_Instance)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb9417bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.HasOpenXRInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::HasOpenXRInstance)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb941890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"HasOpenXRInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.GetOpenXRInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)()>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::GetOpenXRInstance)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb9418b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"GetOpenXRInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.add_OnInstanceCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Valve::OpenXR::Utils::InstanceCreated*)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::add_OnInstanceCreated)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb9418d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"add_OnInstanceCreated", {}, {::i2c::type_of<::Valve::OpenXR::Utils::InstanceCreated*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.remove_OnInstanceCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Valve::OpenXR::Utils::InstanceCreated*)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::remove_OnInstanceCreated)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb941988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"remove_OnInstanceCreated", {}, {::i2c::type_of<::Valve::OpenXR::Utils::InstanceCreated*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.add_OnInstanceDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Valve::OpenXR::Utils::InstanceDestroyed*)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::add_OnInstanceDestroyed)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb941a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"add_OnInstanceDestroyed", {}, {::i2c::type_of<::Valve::OpenXR::Utils::InstanceDestroyed*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.remove_OnInstanceDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Valve::OpenXR::Utils::InstanceDestroyed*)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::remove_OnInstanceDestroyed)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb941afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"remove_OnInstanceDestroyed", {}, {::i2c::type_of<::Valve::OpenXR::Utils::InstanceDestroyed*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.HasSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::HasSession)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb941bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"HasSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.GetSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)()>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::GetSession)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb941bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"GetSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.add_OnSessionCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Valve::OpenXR::Utils::SessionCreated*)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::add_OnSessionCreated)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb941bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"add_OnSessionCreated", {}, {::i2c::type_of<::Valve::OpenXR::Utils::SessionCreated*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.remove_OnSessionCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Valve::OpenXR::Utils::SessionCreated*)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::remove_OnSessionCreated)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb941cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"remove_OnSessionCreated", {}, {::i2c::type_of<::Valve::OpenXR::Utils::SessionCreated*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.add_OnSessionDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Valve::OpenXR::Utils::SessionDestroyed*)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::add_OnSessionDestroyed)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb941d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"add_OnSessionDestroyed", {}, {::i2c::type_of<::Valve::OpenXR::Utils::SessionDestroyed*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.remove_OnSessionDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Valve::OpenXR::Utils::SessionDestroyed*)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::remove_OnSessionDestroyed)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb941e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"remove_OnSessionDestroyed", {}, {::i2c::type_of<::Valve::OpenXR::Utils::SessionDestroyed*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.GetOpenXrInstanceProc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::GetOpenXrInstanceProc)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb941ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"GetOpenXrInstanceProc", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.OnInstanceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::*)(uint64_t)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb9420a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.OnInstanceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::*)(uint64_t)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::OnInstanceDestroy)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb942120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.OnSessionCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::*)(uint64_t)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::OnSessionCreate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb942194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.OnSessionDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::*)(uint64_t)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::OnSessionDestroy)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb942214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature.GetOpenXrInstanceProcInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::*)(::StringW)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::GetOpenXrInstanceProcInternal)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb941f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"GetOpenXrInstanceProcInternal", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::*)()>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb94227c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_get_optimizeBufferDiscards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optimizeBufferDiscards;
}
constexpr bool const& Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_get_optimizeBufferDiscards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optimizeBufferDiscards;
}
constexpr void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_set_optimizeBufferDiscards(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___optimizeBufferDiscards = value;
}
constexpr bool& Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_get_lateLatchingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lateLatchingMode;
}
constexpr bool const& Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_get_lateLatchingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lateLatchingMode;
}
constexpr void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_set_lateLatchingMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lateLatchingMode = value;
}
constexpr bool& Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_get_lateLatchingDebug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lateLatchingDebug;
}
constexpr bool const& Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_get_lateLatchingDebug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lateLatchingDebug;
}
constexpr void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_set_lateLatchingDebug(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lateLatchingDebug = value;
}
constexpr uint64_t& Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_get__xrInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrInstance;
}
constexpr uint64_t const& Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_get__xrInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrInstance;
}
constexpr void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_set__xrInstance(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____xrInstance = value;
}
constexpr uint64_t& Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_get__xrSession()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrSession;
}
constexpr uint64_t const& Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_get__xrSession() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrSession;
}
constexpr void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_set__xrSession(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____xrSession = value;
}
constexpr ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*& Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_get__getInstanceProcAddr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getInstanceProcAddr;
}
constexpr ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate* const& Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_get__getInstanceProcAddr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getInstanceProcAddr;
}
constexpr void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_set__getInstanceProcAddr(::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getInstanceProcAddr = value;
}
constexpr ::ArrayW<::System::Type*>& Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_get_incompatibleFeatureTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incompatibleFeatureTypes;
}
constexpr ::ArrayW<::System::Type*> const& Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_get_incompatibleFeatureTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incompatibleFeatureTypes;
}
constexpr void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::__cordl_internal_set_incompatibleFeatureTypes(::ArrayW<::System::Type*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incompatibleFeatureTypes = value;
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::setStaticF_OnInstanceCreated(::Valve::OpenXR::Utils::InstanceCreated*  value)  {
::cordl_internals::setStaticField<::Valve::OpenXR::Utils::InstanceCreated*, "OnInstanceCreated", ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(std::forward<::Valve::OpenXR::Utils::InstanceCreated*>(value));
}
inline ::Valve::OpenXR::Utils::InstanceCreated* Valve::OpenXR::Utils::ValveOpenXRSupportFeature::getStaticF_OnInstanceCreated()  {
return ::cordl_internals::getStaticField<::Valve::OpenXR::Utils::InstanceCreated*, "OnInstanceCreated", ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>();
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::setStaticF_OnInstanceDestroyed(::Valve::OpenXR::Utils::InstanceDestroyed*  value)  {
::cordl_internals::setStaticField<::Valve::OpenXR::Utils::InstanceDestroyed*, "OnInstanceDestroyed", ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(std::forward<::Valve::OpenXR::Utils::InstanceDestroyed*>(value));
}
inline ::Valve::OpenXR::Utils::InstanceDestroyed* Valve::OpenXR::Utils::ValveOpenXRSupportFeature::getStaticF_OnInstanceDestroyed()  {
return ::cordl_internals::getStaticField<::Valve::OpenXR::Utils::InstanceDestroyed*, "OnInstanceDestroyed", ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>();
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::setStaticF_OnSessionCreated(::Valve::OpenXR::Utils::SessionCreated*  value)  {
::cordl_internals::setStaticField<::Valve::OpenXR::Utils::SessionCreated*, "OnSessionCreated", ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(std::forward<::Valve::OpenXR::Utils::SessionCreated*>(value));
}
inline ::Valve::OpenXR::Utils::SessionCreated* Valve::OpenXR::Utils::ValveOpenXRSupportFeature::getStaticF_OnSessionCreated()  {
return ::cordl_internals::getStaticField<::Valve::OpenXR::Utils::SessionCreated*, "OnSessionCreated", ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>();
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::setStaticF_OnSessionDestroyed(::Valve::OpenXR::Utils::SessionDestroyed*  value)  {
::cordl_internals::setStaticField<::Valve::OpenXR::Utils::SessionDestroyed*, "OnSessionDestroyed", ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(std::forward<::Valve::OpenXR::Utils::SessionDestroyed*>(value));
}
inline ::Valve::OpenXR::Utils::SessionDestroyed* Valve::OpenXR::Utils::ValveOpenXRSupportFeature::getStaticF_OnSessionDestroyed()  {
return ::cordl_internals::getStaticField<::Valve::OpenXR::Utils::SessionDestroyed*, "OnSessionDestroyed", ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>();
}
inline uint64_t Valve::OpenXR::Utils::ValveOpenXRSupportFeature::get_XrInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"get_XrInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline uint64_t Valve::OpenXR::Utils::ValveOpenXRSupportFeature::get_XrSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"get_XrSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline ::UnityW<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature> Valve::OpenXR::Utils::ValveOpenXRSupportFeature::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature>>(nullptr, ___internal_method);
}
inline bool Valve::OpenXR::Utils::ValveOpenXRSupportFeature::HasOpenXRInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"HasOpenXRInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline uint64_t Valve::OpenXR::Utils::ValveOpenXRSupportFeature::GetOpenXRInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"GetOpenXRInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method);
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::add_OnInstanceCreated(::Valve::OpenXR::Utils::InstanceCreated*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"add_OnInstanceCreated", {}, {::i2c::type_of<::Valve::OpenXR::Utils::InstanceCreated*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::remove_OnInstanceCreated(::Valve::OpenXR::Utils::InstanceCreated*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"remove_OnInstanceCreated", {}, {::i2c::type_of<::Valve::OpenXR::Utils::InstanceCreated*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::add_OnInstanceDestroyed(::Valve::OpenXR::Utils::InstanceDestroyed*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"add_OnInstanceDestroyed", {}, {::i2c::type_of<::Valve::OpenXR::Utils::InstanceDestroyed*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::remove_OnInstanceDestroyed(::Valve::OpenXR::Utils::InstanceDestroyed*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"remove_OnInstanceDestroyed", {}, {::i2c::type_of<::Valve::OpenXR::Utils::InstanceDestroyed*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Valve::OpenXR::Utils::ValveOpenXRSupportFeature::HasSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"HasSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline uint64_t Valve::OpenXR::Utils::ValveOpenXRSupportFeature::GetSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"GetSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method);
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::add_OnSessionCreated(::Valve::OpenXR::Utils::SessionCreated*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"add_OnSessionCreated", {}, {::i2c::type_of<::Valve::OpenXR::Utils::SessionCreated*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::remove_OnSessionCreated(::Valve::OpenXR::Utils::SessionCreated*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"remove_OnSessionCreated", {}, {::i2c::type_of<::Valve::OpenXR::Utils::SessionCreated*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::add_OnSessionDestroyed(::Valve::OpenXR::Utils::SessionDestroyed*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"add_OnSessionDestroyed", {}, {::i2c::type_of<::Valve::OpenXR::Utils::SessionDestroyed*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::remove_OnSessionDestroyed(::Valve::OpenXR::Utils::SessionDestroyed*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"remove_OnSessionDestroyed", {}, {::i2c::type_of<::Valve::OpenXR::Utils::SessionDestroyed*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template<typename T>
inline T Valve::OpenXR::Utils::ValveOpenXRSupportFeature::GetOpenXrInstanceProc(::StringW  procName)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                    {"GetOpenXrInstanceProc", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, procName);
}
inline ::System::IntPtr Valve::OpenXR::Utils::ValveOpenXRSupportFeature::GetOpenXrInstanceProc(::StringW  procName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"GetOpenXrInstanceProc", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, procName);
}
inline bool Valve::OpenXR::Utils::ValveOpenXRSupportFeature::OnInstanceCreate(uint64_t  xrInstance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xrInstance);
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::OnInstanceDestroy(uint64_t  xrInstance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrInstance);
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::OnSessionCreate(uint64_t  xrSession)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::OnSessionDestroy(uint64_t  xrSession)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline ::System::IntPtr Valve::OpenXR::Utils::ValveOpenXRSupportFeature::GetOpenXrInstanceProcInternal(::StringW  procName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {"GetOpenXrInstanceProcInternal", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, procName);
}
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature* Valve::OpenXR::Utils::ValveOpenXRSupportFeature::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*>());
}
// Ctor Parameters []
constexpr ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature::ValveOpenXRSupportFeature()   {
}
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb942378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate::*)(uint64_t, ::StringW, ::by_ref<::System::IntPtr>)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb942418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate::*)(uint64_t, ::StringW, ::by_ref<::System::IntPtr>, ::System::AsyncCallback*, ::System::Object*)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb94242c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate::*)(::by_ref<::System::IntPtr>, ::System::IAsyncResult*)>(&::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb9424b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate::Invoke(uint64_t  instance, ::StringW  name, ::by_ref<::System::IntPtr>  procAddr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(this, ___internal_method, instance, name, procAddr);
}
inline ::System::IAsyncResult* Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate::BeginInvoke(uint64_t  instance, ::StringW  name, ::by_ref<::System::IntPtr>  procAddr, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, instance, name, procAddr, callback, object);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate::EndInvoke(::by_ref<::System::IntPtr>  procAddr, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(this, ___internal_method, procAddr, result);
}
inline ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate* Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate()   {
}

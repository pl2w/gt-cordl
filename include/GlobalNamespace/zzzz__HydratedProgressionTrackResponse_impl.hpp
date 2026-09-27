#pragma once
// IWYU pragma private; include "GlobalNamespace/HydratedProgressionTrackResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__HydratedProgressionTrackResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionTrack_def.hpp"
#include "GlobalNamespace/zzzz__TrackLevelVector_def.hpp"
#include "GlobalNamespace/zzzz__TrackTriggerVector_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTrackResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydratedProgressionTrackResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::HydratedProgressionTrackResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x543842c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTrackResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::HydratedProgressionTrackResponse*)>(&::GlobalNamespace::HydratedProgressionTrackResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x54384e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::HydratedProgressionTrackResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTrackResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::HydratedProgressionTrackResponse*)>(&::GlobalNamespace::HydratedProgressionTrackResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5438520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::HydratedProgressionTrackResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTrackResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydratedProgressionTrackResponse::*)(bool)>(&::GlobalNamespace::HydratedProgressionTrackResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x54385bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTrackResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HydratedProgressionTrackResponse::*)(::StringW)>(&::GlobalNamespace::HydratedProgressionTrackResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5438728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTrackResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HydratedProgressionTrackResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::HydratedProgressionTrackResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x543880c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTrackResponse.set_Track
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydratedProgressionTrackResponse::*)(::GlobalNamespace::ProgressionTrack*)>(&::GlobalNamespace::HydratedProgressionTrackResponse::set_Track)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5438924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"set_Track", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTrack*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTrackResponse.get_Track
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProgressionTrack* (::GlobalNamespace::HydratedProgressionTrackResponse::*)()>(&::GlobalNamespace::HydratedProgressionTrackResponse::get_Track)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5438a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"get_Track", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTrackResponse.set_Triggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydratedProgressionTrackResponse::*)(::GlobalNamespace::TrackTriggerVector*)>(&::GlobalNamespace::HydratedProgressionTrackResponse::set_Triggers)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5438b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"set_Triggers", {}, {::i2c::type_of<::GlobalNamespace::TrackTriggerVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTrackResponse.get_Triggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TrackTriggerVector* (::GlobalNamespace::HydratedProgressionTrackResponse::*)()>(&::GlobalNamespace::HydratedProgressionTrackResponse::get_Triggers)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5438c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"get_Triggers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTrackResponse.set_Levels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydratedProgressionTrackResponse::*)(::GlobalNamespace::TrackLevelVector*)>(&::GlobalNamespace::HydratedProgressionTrackResponse::set_Levels)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5438d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"set_Levels", {}, {::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTrackResponse.get_Levels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TrackLevelVector* (::GlobalNamespace::HydratedProgressionTrackResponse::*)()>(&::GlobalNamespace::HydratedProgressionTrackResponse::get_Levels)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5438e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"get_Levels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydratedProgressionTrackResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydratedProgressionTrackResponse::*)()>(&::GlobalNamespace::HydratedProgressionTrackResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5438f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::HydratedProgressionTrackResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::HydratedProgressionTrackResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::HydratedProgressionTrackResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::HydratedProgressionTrackResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::HydratedProgressionTrackResponse::getCPtr(::GlobalNamespace::HydratedProgressionTrackResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::HydratedProgressionTrackResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::HydratedProgressionTrackResponse::swigRelease(::GlobalNamespace::HydratedProgressionTrackResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::HydratedProgressionTrackResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::HydratedProgressionTrackResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::HydratedProgressionTrackResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::HydratedProgressionTrackResponse* GlobalNamespace::HydratedProgressionTrackResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HydratedProgressionTrackResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::HydratedProgressionTrackResponse::set_Track(::GlobalNamespace::ProgressionTrack*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"set_Track", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTrack*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ProgressionTrack* GlobalNamespace::HydratedProgressionTrackResponse::get_Track()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"get_Track", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProgressionTrack*>(this, ___internal_method);
}
inline void GlobalNamespace::HydratedProgressionTrackResponse::set_Triggers(::GlobalNamespace::TrackTriggerVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"set_Triggers", {}, {::i2c::type_of<::GlobalNamespace::TrackTriggerVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TrackTriggerVector* GlobalNamespace::HydratedProgressionTrackResponse::get_Triggers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"get_Triggers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TrackTriggerVector*>(this, ___internal_method);
}
inline void GlobalNamespace::HydratedProgressionTrackResponse::set_Levels(::GlobalNamespace::TrackLevelVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"set_Levels", {}, {::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TrackLevelVector* GlobalNamespace::HydratedProgressionTrackResponse::get_Levels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {"get_Levels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TrackLevelVector*>(this, ___internal_method);
}
inline void GlobalNamespace::HydratedProgressionTrackResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HydratedProgressionTrackResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HydratedProgressionTrackResponse* GlobalNamespace::HydratedProgressionTrackResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HydratedProgressionTrackResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::HydratedProgressionTrackResponse* GlobalNamespace::HydratedProgressionTrackResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HydratedProgressionTrackResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HydratedProgressionTrackResponse::HydratedProgressionTrackResponse()   {
}

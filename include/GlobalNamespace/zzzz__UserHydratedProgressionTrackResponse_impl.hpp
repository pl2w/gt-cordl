#pragma once
// IWYU pragma private; include "GlobalNamespace/UserHydratedProgressionTrackResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__UserHydratedProgressionTrackResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionTrack_def.hpp"
#include "GlobalNamespace/zzzz__TrackLevelVector_def.hpp"
#include "GlobalNamespace/zzzz__TrackTriggerVector_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x53a68a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UserHydratedProgressionTrackResponse*)>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x53a6958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UserHydratedProgressionTrackResponse*)>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x53a6998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)(bool)>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x53a6a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.set_Track
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)(::GlobalNamespace::ProgressionTrack*)>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::set_Track)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x53a6ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_Track", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTrack*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.get_Track
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProgressionTrack* (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::get_Track)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x53a6c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_Track", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.set_Triggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)(::GlobalNamespace::TrackTriggerVector*)>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::set_Triggers)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x53a6d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_Triggers", {}, {::i2c::type_of<::GlobalNamespace::TrackTriggerVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.get_Triggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TrackTriggerVector* (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::get_Triggers)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x53a6e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_Triggers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.set_Levels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)(::GlobalNamespace::TrackLevelVector*)>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::set_Levels)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x53a6f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_Levels", {}, {::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.get_Levels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TrackLevelVector* (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::get_Levels)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x53a7088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_Levels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.set_Progress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)(int32_t)>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::set_Progress)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53a7194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_Progress", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.get_Progress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::get_Progress)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53a726c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_Progress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.set_CurrentLevelName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)(::StringW)>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::set_CurrentLevelName)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53a7340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_CurrentLevelName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.get_CurrentLevelName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::get_CurrentLevelName)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53a7418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_CurrentLevelName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.set_CurrentLevelId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)(::StringW)>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::set_CurrentLevelId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53a74ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_CurrentLevelId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.get_CurrentLevelId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::get_CurrentLevelId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53a75c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_CurrentLevelId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.set_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)(::StringW)>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::set_PlayerId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53a7698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_PlayerId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.get_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::get_PlayerId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53a7770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_PlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.set_LastUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)(::StringW)>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::set_LastUpdated)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53a7844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_LastUpdated", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.get_LastUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::get_LastUpdated)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53a791c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_LastUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.set_InventoryRefreshRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)(bool)>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::set_InventoryRefreshRequired)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53a79f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_InventoryRefreshRequired", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.get_InventoryRefreshRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::get_InventoryRefreshRequired)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53a7ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_InventoryRefreshRequired", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UserHydratedProgressionTrackResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x53a7b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)(::StringW)>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x53a7cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserHydratedProgressionTrackResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserHydratedProgressionTrackResponse::*)()>(&::GlobalNamespace::UserHydratedProgressionTrackResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x53a7d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::UserHydratedProgressionTrackResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::UserHydratedProgressionTrackResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::UserHydratedProgressionTrackResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::UserHydratedProgressionTrackResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UserHydratedProgressionTrackResponse::getCPtr(::GlobalNamespace::UserHydratedProgressionTrackResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UserHydratedProgressionTrackResponse::swigRelease(::GlobalNamespace::UserHydratedProgressionTrackResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::UserHydratedProgressionTrackResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::UserHydratedProgressionTrackResponse::set_Track(::GlobalNamespace::ProgressionTrack*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_Track", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTrack*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ProgressionTrack* GlobalNamespace::UserHydratedProgressionTrackResponse::get_Track()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_Track", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProgressionTrack*>(this, ___internal_method);
}
inline void GlobalNamespace::UserHydratedProgressionTrackResponse::set_Triggers(::GlobalNamespace::TrackTriggerVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_Triggers", {}, {::i2c::type_of<::GlobalNamespace::TrackTriggerVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TrackTriggerVector* GlobalNamespace::UserHydratedProgressionTrackResponse::get_Triggers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_Triggers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TrackTriggerVector*>(this, ___internal_method);
}
inline void GlobalNamespace::UserHydratedProgressionTrackResponse::set_Levels(::GlobalNamespace::TrackLevelVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_Levels", {}, {::i2c::type_of<::GlobalNamespace::TrackLevelVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TrackLevelVector* GlobalNamespace::UserHydratedProgressionTrackResponse::get_Levels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_Levels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TrackLevelVector*>(this, ___internal_method);
}
inline void GlobalNamespace::UserHydratedProgressionTrackResponse::set_Progress(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_Progress", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::UserHydratedProgressionTrackResponse::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_Progress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::UserHydratedProgressionTrackResponse::set_CurrentLevelName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_CurrentLevelName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::UserHydratedProgressionTrackResponse::get_CurrentLevelName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_CurrentLevelName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::UserHydratedProgressionTrackResponse::set_CurrentLevelId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_CurrentLevelId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::UserHydratedProgressionTrackResponse::get_CurrentLevelId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_CurrentLevelId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::UserHydratedProgressionTrackResponse::set_PlayerId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_PlayerId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::UserHydratedProgressionTrackResponse::get_PlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_PlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::UserHydratedProgressionTrackResponse::set_LastUpdated(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_LastUpdated", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::UserHydratedProgressionTrackResponse::get_LastUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_LastUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::UserHydratedProgressionTrackResponse::set_InventoryRefreshRequired(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"set_InventoryRefreshRequired", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::UserHydratedProgressionTrackResponse::get_InventoryRefreshRequired()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"get_InventoryRefreshRequired", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::UserHydratedProgressionTrackResponse* GlobalNamespace::UserHydratedProgressionTrackResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(nullptr, ___internal_method, response);
}
inline bool GlobalNamespace::UserHydratedProgressionTrackResponse::ParseFromResponseString(::StringW  string_)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, string_);
}
inline void GlobalNamespace::UserHydratedProgressionTrackResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UserHydratedProgressionTrackResponse* GlobalNamespace::UserHydratedProgressionTrackResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UserHydratedProgressionTrackResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::UserHydratedProgressionTrackResponse* GlobalNamespace::UserHydratedProgressionTrackResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UserHydratedProgressionTrackResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UserHydratedProgressionTrackResponse::UserHydratedProgressionTrackResponse()   {
}

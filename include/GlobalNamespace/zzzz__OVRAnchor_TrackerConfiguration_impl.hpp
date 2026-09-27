#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_TrackerConfiguration.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackableType_def.hpp"
#include "GlobalNamespace/zzzz__OVRNativeList_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_DynamicObjectClass_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_MarkerType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.get_KeyboardTrackingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::get_KeyboardTrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa56d8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"get_KeyboardTrackingEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.set_KeyboardTrackingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(bool)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::set_KeyboardTrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa56d8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"set_KeyboardTrackingEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.get_KeyboardTrackingSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::get_KeyboardTrackingSupported)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa56d8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"get_KeyboardTrackingSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.get_RequiresDynamicObjectTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::get_RequiresDynamicObjectTracker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa56d97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"get_RequiresDynamicObjectTracker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.ToDynamicObjectClasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRNativeList_1<::GlobalNamespace::OVRPlugin_DynamicObjectClass> (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(::Unity::Collections::Allocator)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::ToDynamicObjectClasses)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa56d984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"ToDynamicObjectClasses", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.ResetDynamicObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::ResetDynamicObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa56da34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"ResetDynamicObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.SetDynamicObjectState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(::by_ref<::GlobalNamespace::OVRAnchor_TrackerConfiguration>)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::SetDynamicObjectState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa56da3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"SetDynamicObjectState", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRAnchor_TrackerConfiguration>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.get_QRCodeTrackingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::get_QRCodeTrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa56da48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"get_QRCodeTrackingEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.set_QRCodeTrackingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(bool)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::set_QRCodeTrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa56da50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"set_QRCodeTrackingEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.get_QRCodeTrackingSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::get_QRCodeTrackingSupported)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa56da58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"get_QRCodeTrackingSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.ToMarkerTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRNativeList_1<::GlobalNamespace::OVRPlugin_MarkerType> (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(::Unity::Collections::Allocator)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::ToMarkerTypes)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa56dacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"ToMarkerTypes", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.get_RequiresMarkerTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::get_RequiresMarkerTracker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa56db78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"get_RequiresMarkerTracker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.ResetMarkers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::ResetMarkers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa56db80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"ResetMarkers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.SetMarkerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(::by_ref<::GlobalNamespace::OVRAnchor_TrackerConfiguration>)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::SetMarkerState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa56db88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"SetMarkerState", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRAnchor_TrackerConfiguration>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.GetTrackableTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_TrackableType>*)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::GetTrackableTypes)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa56db94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"GetTrackableTypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_TrackableType>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::ToString)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0xa56dcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                    {::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa56dfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(::System::Object*)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa56e010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                    {::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::GetHashCode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa56e0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                    {::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration, ::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::op_Equality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa56e134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration, ::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::op_Inequality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa56e168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::get_KeyboardTrackingEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"get_KeyboardTrackingEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_TrackerConfiguration::set_KeyboardTrackingEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"set_KeyboardTrackingEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::get_KeyboardTrackingSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"get_KeyboardTrackingSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::get_RequiresDynamicObjectTracker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"get_RequiresDynamicObjectTracker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRNativeList_1<::GlobalNamespace::OVRPlugin_DynamicObjectClass> GlobalNamespace::OVRAnchor_TrackerConfiguration::ToDynamicObjectClasses(::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"ToDynamicObjectClasses", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNativeList_1<::GlobalNamespace::OVRPlugin_DynamicObjectClass>>(*this, ___internal_method, allocator);
}
inline void GlobalNamespace::OVRAnchor_TrackerConfiguration::ResetDynamicObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"ResetDynamicObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_TrackerConfiguration::SetDynamicObjectState(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRAnchor_TrackerConfiguration>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"SetDynamicObjectState", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRAnchor_TrackerConfiguration>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::get_QRCodeTrackingEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"get_QRCodeTrackingEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_TrackerConfiguration::set_QRCodeTrackingEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"set_QRCodeTrackingEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::get_QRCodeTrackingSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"get_QRCodeTrackingSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRNativeList_1<::GlobalNamespace::OVRPlugin_MarkerType> GlobalNamespace::OVRAnchor_TrackerConfiguration::ToMarkerTypes(::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"ToMarkerTypes", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNativeList_1<::GlobalNamespace::OVRPlugin_MarkerType>>(*this, ___internal_method, allocator);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::get_RequiresMarkerTracker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"get_RequiresMarkerTracker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_TrackerConfiguration::ResetMarkers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"ResetMarkers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_TrackerConfiguration::SetMarkerState(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRAnchor_TrackerConfiguration>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"SetMarkerState", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRAnchor_TrackerConfiguration>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void GlobalNamespace::OVRAnchor_TrackerConfiguration::GetTrackableTypes(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"GetTrackableTypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_TrackableType>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, trackableTypes);
}
inline ::StringW GlobalNamespace::OVRAnchor_TrackerConfiguration::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::Equals(::GlobalNamespace::OVRAnchor_TrackerConfiguration  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRAnchor_TrackerConfiguration::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::op_Equality(::GlobalNamespace::OVRAnchor_TrackerConfiguration  lhs, ::GlobalNamespace::OVRAnchor_TrackerConfiguration  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::op_Inequality(::GlobalNamespace::OVRAnchor_TrackerConfiguration  lhs, ::GlobalNamespace::OVRAnchor_TrackerConfiguration  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>"
constexpr  GlobalNamespace::OVRAnchor_TrackerConfiguration::operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>* GlobalNamespace::OVRAnchor_TrackerConfiguration::i___System__IEquatable_1___GlobalNamespace__OVRAnchor_TrackerConfiguration_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_KeyboardTrackingEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_QRCodeTrackingEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration::OVRAnchor_TrackerConfiguration(bool  _KeyboardTrackingEnabled_k__BackingField, bool  _QRCodeTrackingEnabled_k__BackingField) noexcept  {
this->_KeyboardTrackingEnabled_k__BackingField = _KeyboardTrackingEnabled_k__BackingField;
this->_QRCodeTrackingEnabled_k__BackingField = _QRCodeTrackingEnabled_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration::OVRAnchor_TrackerConfiguration()   {
}

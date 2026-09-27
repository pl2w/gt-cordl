#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetPositionCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__TargetPositionCache_Mode_impl.hpp"
#include "Unity/Cinemachine/zzzz__TargetPositionCache_TimeRange_impl.hpp"
#include "Unity/Cinemachine/zzzz__TargetPositionCache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__TargetPositionCache_CacheCurve_Item_def.hpp"
#include "Unity/Cinemachine/zzzz__TargetPositionCache_CacheEntry_RecordingItem_def.hpp"
#include "Unity/Cinemachine/zzzz__TargetPositionCache_Mode_def.hpp"
#include "Unity/Cinemachine/zzzz__TargetPositionCache_TimeRange_def.hpp"
#include "Unity/Cinemachine/zzzz__TargetPositionCache_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache.get_CacheMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TargetPositionCache_Mode (*)()>(&::Unity::Cinemachine::TargetPositionCache::get_CacheMode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaebea78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"get_CacheMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache.set_CacheMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::TargetPositionCache_Mode)>(&::Unity::Cinemachine::TargetPositionCache::set_CacheMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaebeac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"set_CacheMode", {}, {::i2c::type_of<::GlobalNamespace::TargetPositionCache_Mode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache.get_IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Cinemachine::TargetPositionCache::get_IsRecording)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaebed74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"get_IsRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache.get_CurrentPlaybackTimeValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Cinemachine::TargetPositionCache::get_CurrentPlaybackTimeValid)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaebedd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"get_CurrentPlaybackTimeValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Cinemachine::TargetPositionCache::get_IsEmpty)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaebeea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache.get_CacheTimeRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TargetPositionCache_TimeRange (*)()>(&::Unity::Cinemachine::TargetPositionCache::get_CacheTimeRange)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaebeefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"get_CacheTimeRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache.get_HasCurrentTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Cinemachine::TargetPositionCache::get_HasCurrentTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaebee3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"get_HasCurrentTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache.ClearCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Cinemachine::TargetPositionCache::ClearCache)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xaebeb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"ClearCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache.CreatePlaybackCurves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Cinemachine::TargetPositionCache::CreatePlaybackCurves)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xaebec24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"CreatePlaybackCurves", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache.GetTargetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::TargetPositionCache::GetTargetPosition)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xaebf1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"GetTargetPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache.GetTargetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::TargetPositionCache::GetTargetRotation)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xaebf904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"GetTargetRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::TargetPositionCache::*)()>(&::Unity::Cinemachine::TargetPositionCache::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaebfb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::TargetPositionCache::setStaticF_UseCache(bool  value)  {
::cordl_internals::setStaticField<bool, "UseCache", ::Unity::Cinemachine::TargetPositionCache*>(std::forward<bool>(value));
}
inline bool Unity::Cinemachine::TargetPositionCache::getStaticF_UseCache()  {
return ::cordl_internals::getStaticField<bool, "UseCache", ::Unity::Cinemachine::TargetPositionCache*>();
}
inline void Unity::Cinemachine::TargetPositionCache::setStaticF_m_CacheMode(::GlobalNamespace::TargetPositionCache_Mode  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::TargetPositionCache_Mode, "m_CacheMode", ::Unity::Cinemachine::TargetPositionCache*>(std::forward<::GlobalNamespace::TargetPositionCache_Mode>(value));
}
inline ::GlobalNamespace::TargetPositionCache_Mode Unity::Cinemachine::TargetPositionCache::getStaticF_m_CacheMode()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::TargetPositionCache_Mode, "m_CacheMode", ::Unity::Cinemachine::TargetPositionCache*>();
}
inline void Unity::Cinemachine::TargetPositionCache::setStaticF_CurrentTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "CurrentTime", ::Unity::Cinemachine::TargetPositionCache*>(std::forward<float_t>(value));
}
inline float_t Unity::Cinemachine::TargetPositionCache::getStaticF_CurrentTime()  {
return ::cordl_internals::getStaticField<float_t, "CurrentTime", ::Unity::Cinemachine::TargetPositionCache*>();
}
inline void Unity::Cinemachine::TargetPositionCache::setStaticF_CurrentFrame(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "CurrentFrame", ::Unity::Cinemachine::TargetPositionCache*>(std::forward<int32_t>(value));
}
inline int32_t Unity::Cinemachine::TargetPositionCache::getStaticF_CurrentFrame()  {
return ::cordl_internals::getStaticField<int32_t, "CurrentFrame", ::Unity::Cinemachine::TargetPositionCache*>();
}
inline void Unity::Cinemachine::TargetPositionCache::setStaticF_IsCameraCut(bool  value)  {
::cordl_internals::setStaticField<bool, "IsCameraCut", ::Unity::Cinemachine::TargetPositionCache*>(std::forward<bool>(value));
}
inline bool Unity::Cinemachine::TargetPositionCache::getStaticF_IsCameraCut()  {
return ::cordl_internals::getStaticField<bool, "IsCameraCut", ::Unity::Cinemachine::TargetPositionCache*>();
}
inline void Unity::Cinemachine::TargetPositionCache::setStaticF_m_Cache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::TargetPositionCache_CacheEntry*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::TargetPositionCache_CacheEntry*>*, "m_Cache", ::Unity::Cinemachine::TargetPositionCache*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::TargetPositionCache_CacheEntry*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::TargetPositionCache_CacheEntry*>* Unity::Cinemachine::TargetPositionCache::getStaticF_m_Cache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::TargetPositionCache_CacheEntry*>*, "m_Cache", ::Unity::Cinemachine::TargetPositionCache*>();
}
inline void Unity::Cinemachine::TargetPositionCache::setStaticF_m_CacheTimeRange(::GlobalNamespace::TargetPositionCache_TimeRange  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::TargetPositionCache_TimeRange, "m_CacheTimeRange", ::Unity::Cinemachine::TargetPositionCache*>(std::forward<::GlobalNamespace::TargetPositionCache_TimeRange>(value));
}
inline ::GlobalNamespace::TargetPositionCache_TimeRange Unity::Cinemachine::TargetPositionCache::getStaticF_m_CacheTimeRange()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::TargetPositionCache_TimeRange, "m_CacheTimeRange", ::Unity::Cinemachine::TargetPositionCache*>();
}
inline ::GlobalNamespace::TargetPositionCache_Mode Unity::Cinemachine::TargetPositionCache::get_CacheMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"get_CacheMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TargetPositionCache_Mode>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::TargetPositionCache::set_CacheMode(::GlobalNamespace::TargetPositionCache_Mode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"set_CacheMode", {}, {::i2c::type_of<::GlobalNamespace::TargetPositionCache_Mode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Unity::Cinemachine::TargetPositionCache::get_IsRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"get_IsRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Unity::Cinemachine::TargetPositionCache::get_CurrentPlaybackTimeValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"get_CurrentPlaybackTimeValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Unity::Cinemachine::TargetPositionCache::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::TargetPositionCache_TimeRange Unity::Cinemachine::TargetPositionCache::get_CacheTimeRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"get_CacheTimeRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TargetPositionCache_TimeRange>(nullptr, ___internal_method);
}
inline bool Unity::Cinemachine::TargetPositionCache::get_HasCurrentTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"get_HasCurrentTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::TargetPositionCache::ClearCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"ClearCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::TargetPositionCache::CreatePlaybackCurves()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"CreatePlaybackCurves", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::TargetPositionCache::GetTargetPosition(::UnityEngine::Transform*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"GetTargetPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, target);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::TargetPositionCache::GetTargetRotation(::UnityEngine::Transform*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {"GetTargetRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, target);
}
inline void Unity::Cinemachine::TargetPositionCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::TargetPositionCache* Unity::Cinemachine::TargetPositionCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::TargetPositionCache*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::TargetPositionCache::TargetPositionCache()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache_CacheEntry.AddRawItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::TargetPositionCache_CacheEntry::*)(float_t, bool, ::UnityEngine::Transform*)>(&::Unity::Cinemachine::TargetPositionCache_CacheEntry::AddRawItem)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0xaebf4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheEntry*>(),
                        {"AddRawItem", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache_CacheEntry.CreateCurves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::TargetPositionCache_CacheEntry::*)()>(&::Unity::Cinemachine::TargetPositionCache_CacheEntry::CreateCurves)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xaebef7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheEntry*>(),
                        {"CreateCurves", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache_CacheEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::TargetPositionCache_CacheEntry::*)()>(&::Unity::Cinemachine::TargetPositionCache_CacheEntry::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaebf424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::TargetPositionCache_CacheCurve*& Unity::Cinemachine::TargetPositionCache_CacheEntry::__cordl_internal_get_Curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Curve;
}
constexpr ::Unity::Cinemachine::TargetPositionCache_CacheCurve* const& Unity::Cinemachine::TargetPositionCache_CacheEntry::__cordl_internal_get_Curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Curve;
}
constexpr void Unity::Cinemachine::TargetPositionCache_CacheEntry::__cordl_internal_set_Curve(::Unity::Cinemachine::TargetPositionCache_CacheCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Curve = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CacheEntry_TargetPositionCache_RecordingItem>*& Unity::Cinemachine::TargetPositionCache_CacheEntry::__cordl_internal_get_RawItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RawItems;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CacheEntry_TargetPositionCache_RecordingItem>* const& Unity::Cinemachine::TargetPositionCache_CacheEntry::__cordl_internal_get_RawItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RawItems;
}
constexpr void Unity::Cinemachine::TargetPositionCache_CacheEntry::__cordl_internal_set_RawItems(::System::Collections::Generic::List_1<::GlobalNamespace::CacheEntry_TargetPositionCache_RecordingItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RawItems = value;
}
inline void Unity::Cinemachine::TargetPositionCache_CacheEntry::AddRawItem(float_t  time, bool  isCut, ::UnityEngine::Transform*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheEntry*>(),
                        {"AddRawItem", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, isCut, target);
}
inline void Unity::Cinemachine::TargetPositionCache_CacheEntry::CreateCurves()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheEntry*>(),
                        {"CreateCurves", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::TargetPositionCache_CacheEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::TargetPositionCache_CacheEntry* Unity::Cinemachine::TargetPositionCache_CacheEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::TargetPositionCache_CacheEntry*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::TargetPositionCache_CacheEntry::TargetPositionCache_CacheEntry()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache_CacheCurve.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::TargetPositionCache_CacheCurve::*)()>(&::Unity::Cinemachine::TargetPositionCache_CacheCurve::get_Count)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaebfb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheCurve*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache_CacheCurve._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::TargetPositionCache_CacheCurve::*)(float_t, float_t, float_t)>(&::Unity::Cinemachine::TargetPositionCache_CacheCurve::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaebfbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheCurve*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache_CacheCurve.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::TargetPositionCache_CacheCurve::*)(::GlobalNamespace::CacheCurve_TargetPositionCache_Item)>(&::Unity::Cinemachine::TargetPositionCache_CacheCurve::Add)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xaebfcc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheCurve*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache_CacheCurve.AddUntil
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::TargetPositionCache_CacheCurve::*)(::GlobalNamespace::CacheCurve_TargetPositionCache_Item, float_t, bool)>(&::Unity::Cinemachine::TargetPositionCache_CacheCurve::AddUntil)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xaebfda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheCurve*>(),
                        {"AddUntil", {}, {::i2c::type_of<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetPositionCache_CacheCurve.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CacheCurve_TargetPositionCache_Item (::Unity::Cinemachine::TargetPositionCache_CacheCurve::*)(float_t)>(&::Unity::Cinemachine::TargetPositionCache_CacheCurve::Evaluate)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xaebf73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheCurve*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::TargetPositionCache_CacheCurve::__cordl_internal_get_StartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartTime;
}
constexpr float_t const& Unity::Cinemachine::TargetPositionCache_CacheCurve::__cordl_internal_get_StartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartTime;
}
constexpr void Unity::Cinemachine::TargetPositionCache_CacheCurve::__cordl_internal_set_StartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartTime = value;
}
constexpr float_t& Unity::Cinemachine::TargetPositionCache_CacheCurve::__cordl_internal_get_StepSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StepSize;
}
constexpr float_t const& Unity::Cinemachine::TargetPositionCache_CacheCurve::__cordl_internal_get_StepSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StepSize;
}
constexpr void Unity::Cinemachine::TargetPositionCache_CacheCurve::__cordl_internal_set_StepSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StepSize = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>*& Unity::Cinemachine::TargetPositionCache_CacheCurve::__cordl_internal_get_m_Cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cache;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>* const& Unity::Cinemachine::TargetPositionCache_CacheCurve::__cordl_internal_get_m_Cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cache;
}
constexpr void Unity::Cinemachine::TargetPositionCache_CacheCurve::__cordl_internal_set_m_Cache(::System::Collections::Generic::List_1<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Cache = value;
}
inline int32_t Unity::Cinemachine::TargetPositionCache_CacheCurve::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheCurve*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::TargetPositionCache_CacheCurve::_ctor(float_t  startTime, float_t  endTime, float_t  stepSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheCurve*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startTime, endTime, stepSize);
}
inline void Unity::Cinemachine::TargetPositionCache_CacheCurve::Add(::GlobalNamespace::CacheCurve_TargetPositionCache_Item  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheCurve*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Unity::Cinemachine::TargetPositionCache_CacheCurve::AddUntil(::GlobalNamespace::CacheCurve_TargetPositionCache_Item  item, float_t  time, bool  isCut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheCurve*>(),
                        {"AddUntil", {}, {::i2c::type_of<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, time, isCut);
}
inline ::GlobalNamespace::CacheCurve_TargetPositionCache_Item Unity::Cinemachine::TargetPositionCache_CacheCurve::Evaluate(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetPositionCache_CacheCurve*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>(this, ___internal_method, time);
}
inline ::Unity::Cinemachine::TargetPositionCache_CacheCurve* Unity::Cinemachine::TargetPositionCache_CacheCurve::New_ctor(float_t  startTime, float_t  endTime, float_t  stepSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::TargetPositionCache_CacheCurve*>(startTime, endTime, stepSize));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::TargetPositionCache_CacheCurve::TargetPositionCache_CacheCurve()   {
}

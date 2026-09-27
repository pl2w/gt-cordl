#pragma once
// IWYU pragma private; include "Pathfinding/AstarProfiler.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__AstarProfiler_def.hpp"
#include "Pathfinding/zzzz__AstarProfiler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::Pathfinding::AstarProfiler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarProfiler::*)()>(&::Pathfinding::AstarProfiler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb3274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarProfiler.InitializeFastProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::StringW>)>(&::Pathfinding::AstarProfiler::InitializeFastProfile)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5eb327c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"InitializeFastProfile", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarProfiler.StartFastProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Pathfinding::AstarProfiler::StartFastProfile)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5eb3548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"StartFastProfile", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarProfiler.EndFastProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Pathfinding::AstarProfiler::EndFastProfile)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5eb35d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"EndFastProfile", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarProfiler.EndProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Pathfinding::AstarProfiler::EndProfile)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5eb366c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"EndProfile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarProfiler.StartProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Pathfinding::AstarProfiler::StartProfile)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5eb3670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"StartProfile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarProfiler.EndProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Pathfinding::AstarProfiler::EndProfile)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5eb37cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"EndProfile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarProfiler.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Pathfinding::AstarProfiler::Reset)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5eb3978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarProfiler.PrintFastResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Pathfinding::AstarProfiler::PrintFastResults)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x5eb3b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"PrintFastResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarProfiler.PrintResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Pathfinding::AstarProfiler::PrintResults)> {
  constexpr static std::size_t size = 0x82c;
  constexpr static std::size_t addrs = 0x5eb40b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"PrintResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::AstarProfiler::setStaticF_profiles(::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::AstarProfiler_ProfilePoint*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::AstarProfiler_ProfilePoint*>*, "profiles", ::Pathfinding::AstarProfiler*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::AstarProfiler_ProfilePoint*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::AstarProfiler_ProfilePoint*>* Pathfinding::AstarProfiler::getStaticF_profiles()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::AstarProfiler_ProfilePoint*>*, "profiles", ::Pathfinding::AstarProfiler*>();
}
inline void Pathfinding::AstarProfiler::setStaticF_startTime(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "startTime", ::Pathfinding::AstarProfiler*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime Pathfinding::AstarProfiler::getStaticF_startTime()  {
return ::cordl_internals::getStaticField<::System::DateTime, "startTime", ::Pathfinding::AstarProfiler*>();
}
inline void Pathfinding::AstarProfiler::setStaticF_fastProfiles(::ArrayW<::Pathfinding::AstarProfiler_ProfilePoint*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Pathfinding::AstarProfiler_ProfilePoint*>, "fastProfiles", ::Pathfinding::AstarProfiler*>(std::forward<::ArrayW<::Pathfinding::AstarProfiler_ProfilePoint*>>(value));
}
inline ::ArrayW<::Pathfinding::AstarProfiler_ProfilePoint*> Pathfinding::AstarProfiler::getStaticF_fastProfiles()  {
return ::cordl_internals::getStaticField<::ArrayW<::Pathfinding::AstarProfiler_ProfilePoint*>, "fastProfiles", ::Pathfinding::AstarProfiler*>();
}
inline void Pathfinding::AstarProfiler::setStaticF_fastProfileNames(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "fastProfileNames", ::Pathfinding::AstarProfiler*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Pathfinding::AstarProfiler::getStaticF_fastProfileNames()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "fastProfileNames", ::Pathfinding::AstarProfiler*>();
}
inline void Pathfinding::AstarProfiler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AstarProfiler::InitializeFastProfile(::ArrayW<::StringW>  profileNames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"InitializeFastProfile", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, profileNames);
}
inline void Pathfinding::AstarProfiler::StartFastProfile(int32_t  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"StartFastProfile", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tag);
}
inline void Pathfinding::AstarProfiler::EndFastProfile(int32_t  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"EndFastProfile", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tag);
}
inline void Pathfinding::AstarProfiler::EndProfile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"EndProfile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Pathfinding::AstarProfiler::StartProfile(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"StartProfile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tag);
}
inline void Pathfinding::AstarProfiler::EndProfile(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"EndProfile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tag);
}
inline void Pathfinding::AstarProfiler::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Pathfinding::AstarProfiler::PrintFastResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"PrintFastResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Pathfinding::AstarProfiler::PrintResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler*>(),
                        {"PrintResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Pathfinding::AstarProfiler* Pathfinding::AstarProfiler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AstarProfiler*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AstarProfiler::AstarProfiler()   {
}
//  Writing Method size for method: ::Pathfinding::AstarProfiler_ProfilePoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarProfiler_ProfilePoint::*)()>(&::Pathfinding::AstarProfiler_ProfilePoint::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5eb34dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler_ProfilePoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Diagnostics::Stopwatch*& Pathfinding::AstarProfiler_ProfilePoint::__cordl_internal_get_watch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watch;
}
constexpr ::System::Diagnostics::Stopwatch* const& Pathfinding::AstarProfiler_ProfilePoint::__cordl_internal_get_watch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watch;
}
constexpr void Pathfinding::AstarProfiler_ProfilePoint::__cordl_internal_set_watch(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watch = value;
}
constexpr int32_t& Pathfinding::AstarProfiler_ProfilePoint::__cordl_internal_get_totalCalls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalCalls;
}
constexpr int32_t const& Pathfinding::AstarProfiler_ProfilePoint::__cordl_internal_get_totalCalls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalCalls;
}
constexpr void Pathfinding::AstarProfiler_ProfilePoint::__cordl_internal_set_totalCalls(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalCalls = value;
}
constexpr int64_t& Pathfinding::AstarProfiler_ProfilePoint::__cordl_internal_get_tmpBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmpBytes;
}
constexpr int64_t const& Pathfinding::AstarProfiler_ProfilePoint::__cordl_internal_get_tmpBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmpBytes;
}
constexpr void Pathfinding::AstarProfiler_ProfilePoint::__cordl_internal_set_tmpBytes(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tmpBytes = value;
}
constexpr int64_t& Pathfinding::AstarProfiler_ProfilePoint::__cordl_internal_get_totalBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalBytes;
}
constexpr int64_t const& Pathfinding::AstarProfiler_ProfilePoint::__cordl_internal_get_totalBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalBytes;
}
constexpr void Pathfinding::AstarProfiler_ProfilePoint::__cordl_internal_set_totalBytes(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalBytes = value;
}
inline void Pathfinding::AstarProfiler_ProfilePoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarProfiler_ProfilePoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::AstarProfiler_ProfilePoint* Pathfinding::AstarProfiler_ProfilePoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AstarProfiler_ProfilePoint*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AstarProfiler_ProfilePoint::AstarProfiler_ProfilePoint()   {
}

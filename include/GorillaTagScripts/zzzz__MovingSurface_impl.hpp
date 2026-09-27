#pragma once
// IWYU pragma private; include "GorillaTagScripts/MovingSurface.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__MovingSurface_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MovingSurfaceSettings_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::MovingSurface.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::MovingSurface::*)()>(&::GorillaTagScripts::MovingSurface::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b816f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurface*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MovingSurface.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::MovingSurface::*)()>(&::GorillaTagScripts::MovingSurface::OnDestroy)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b817f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurface*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MovingSurface.GetID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::MovingSurface::*)()>(&::GorillaTagScripts::MovingSurface::GetID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b81908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurface*>(),
                        {"GetID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MovingSurface.CopySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::MovingSurface::*)(::GT_CustomMapSupportRuntime::MovingSurfaceSettings*)>(&::GorillaTagScripts::MovingSurface::CopySettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b81910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurface*>(),
                        {"CopySettings", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::MovingSurfaceSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MovingSurface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::MovingSurface::*)()>(&::GorillaTagScripts::MovingSurface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b81928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::MovingSurface::__cordl_internal_get_uniqueId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniqueId;
}
constexpr int32_t const& GorillaTagScripts::MovingSurface::__cordl_internal_get_uniqueId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniqueId;
}
constexpr void GorillaTagScripts::MovingSurface::__cordl_internal_set_uniqueId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uniqueId = value;
}
inline void GorillaTagScripts::MovingSurface::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurface*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::MovingSurface::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurface*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::MovingSurface::GetID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurface*>(),
                        {"GetID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTagScripts::MovingSurface::CopySettings(::GT_CustomMapSupportRuntime::MovingSurfaceSettings*  movingSurfaceSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurface*>(),
                        {"CopySettings", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::MovingSurfaceSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, movingSurfaceSettings);
}
inline void GorillaTagScripts::MovingSurface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::MovingSurface* GorillaTagScripts::MovingSurface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::MovingSurface*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::MovingSurface::MovingSurface()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/LightmapData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LightmapData_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::LightmapData.get_lightmapColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::LightmapData::*)()>(&::UnityEngine::LightmapData::get_lightmapColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb580a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapData*>(),
                        {"get_lightmapColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapData.set_lightmapColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightmapData::*)(::UnityEngine::Texture2D*)>(&::UnityEngine::LightmapData::set_lightmapColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb580a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapData*>(),
                        {"set_lightmapColor", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapData.get_lightmapDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::LightmapData::*)()>(&::UnityEngine::LightmapData::get_lightmapDir)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb580a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapData*>(),
                        {"get_lightmapDir", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapData.set_lightmapDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightmapData::*)(::UnityEngine::Texture2D*)>(&::UnityEngine::LightmapData::set_lightmapDir)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb580a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapData*>(),
                        {"set_lightmapDir", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapData.get_shadowMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::LightmapData::*)()>(&::UnityEngine::LightmapData::get_shadowMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb580a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapData*>(),
                        {"get_shadowMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapData.set_shadowMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightmapData::*)(::UnityEngine::Texture2D*)>(&::UnityEngine::LightmapData::set_shadowMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb580a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapData*>(),
                        {"set_shadowMask", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightmapData::*)()>(&::UnityEngine::LightmapData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb580a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::LightmapData::__cordl_internal_get_m_Light()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Light;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::LightmapData::__cordl_internal_get_m_Light() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Light;
}
constexpr void UnityEngine::LightmapData::__cordl_internal_set_m_Light(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Light = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::LightmapData::__cordl_internal_get_m_Dir()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Dir;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::LightmapData::__cordl_internal_get_m_Dir() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Dir;
}
constexpr void UnityEngine::LightmapData::__cordl_internal_set_m_Dir(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Dir = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::LightmapData::__cordl_internal_get_m_ShadowMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShadowMask;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::LightmapData::__cordl_internal_get_m_ShadowMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShadowMask;
}
constexpr void UnityEngine::LightmapData::__cordl_internal_set_m_ShadowMask(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ShadowMask = value;
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::LightmapData::get_lightmapColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapData*>(),
                        {"get_lightmapColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void UnityEngine::LightmapData::set_lightmapColor(::UnityEngine::Texture2D*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapData*>(),
                        {"set_lightmapColor", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::LightmapData::get_lightmapDir()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapData*>(),
                        {"get_lightmapDir", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void UnityEngine::LightmapData::set_lightmapDir(::UnityEngine::Texture2D*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapData*>(),
                        {"set_lightmapDir", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::LightmapData::get_shadowMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapData*>(),
                        {"get_shadowMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void UnityEngine::LightmapData::set_shadowMask(::UnityEngine::Texture2D*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapData*>(),
                        {"set_shadowMask", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::LightmapData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::LightmapData* UnityEngine::LightmapData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LightmapData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::LightmapData::LightmapData()   {
}

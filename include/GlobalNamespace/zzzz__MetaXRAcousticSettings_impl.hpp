#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticSettings.hpp"
#include "Meta/XR/Acoustics/zzzz__AcousticModel_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticSettings_def.hpp"
#include "Meta/XR/Acoustics/zzzz__AcousticModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticSettings.OnBeforeSceneLoadRuntimeMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::MetaXRAcousticSettings::OnBeforeSceneLoadRuntimeMethod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ebaaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"OnBeforeSceneLoadRuntimeMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticSettings.get_AcousticModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::Acoustics::AcousticModel (::GlobalNamespace::MetaXRAcousticSettings::*)()>(&::GlobalNamespace::MetaXRAcousticSettings::get_AcousticModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebae94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"get_AcousticModel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticSettings.set_AcousticModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticSettings::*)(::Meta::XR::Acoustics::AcousticModel)>(&::GlobalNamespace::MetaXRAcousticSettings::set_AcousticModel)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9ebae9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"set_AcousticModel", {}, {::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticSettings.get_DiffractionEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticSettings::*)()>(&::GlobalNamespace::MetaXRAcousticSettings::get_DiffractionEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebaf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"get_DiffractionEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticSettings.set_DiffractionEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticSettings::*)(bool)>(&::GlobalNamespace::MetaXRAcousticSettings::set_DiffractionEnabled)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9ebaf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"set_DiffractionEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticSettings.get_ExcludeTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::MetaXRAcousticSettings::*)()>(&::GlobalNamespace::MetaXRAcousticSettings::get_ExcludeTags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebb054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"get_ExcludeTags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticSettings.set_ExcludeTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticSettings::*)(::ArrayW<::StringW>)>(&::GlobalNamespace::MetaXRAcousticSettings::set_ExcludeTags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebb05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"set_ExcludeTags", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticSettings.get_MapBakeWriteGeo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticSettings::*)()>(&::GlobalNamespace::MetaXRAcousticSettings::get_MapBakeWriteGeo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebb064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"get_MapBakeWriteGeo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticSettings.set_MapBakeWriteGeo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticSettings::*)(bool)>(&::GlobalNamespace::MetaXRAcousticSettings::set_MapBakeWriteGeo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebb06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"set_MapBakeWriteGeo", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticSettings.ApplyAllSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticSettings::*)()>(&::GlobalNamespace::MetaXRAcousticSettings::ApplyAllSettings)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x9ebac50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"ApplyAllSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticSettings.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MetaXRAcousticSettings> (*)()>(&::GlobalNamespace::MetaXRAcousticSettings::get_Instance)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9ebab0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticSettings::*)()>(&::GlobalNamespace::MetaXRAcousticSettings::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9ebb074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::Acoustics::AcousticModel& GlobalNamespace::MetaXRAcousticSettings::__cordl_internal_get_acousticModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acousticModel;
}
constexpr ::Meta::XR::Acoustics::AcousticModel const& GlobalNamespace::MetaXRAcousticSettings::__cordl_internal_get_acousticModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acousticModel;
}
constexpr void GlobalNamespace::MetaXRAcousticSettings::__cordl_internal_set_acousticModel(::Meta::XR::Acoustics::AcousticModel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acousticModel = value;
}
constexpr bool& GlobalNamespace::MetaXRAcousticSettings::__cordl_internal_get_diffractionEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffractionEnabled;
}
constexpr bool const& GlobalNamespace::MetaXRAcousticSettings::__cordl_internal_get_diffractionEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffractionEnabled;
}
constexpr void GlobalNamespace::MetaXRAcousticSettings::__cordl_internal_set_diffractionEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diffractionEnabled = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::MetaXRAcousticSettings::__cordl_internal_get_excludeTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludeTags;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::MetaXRAcousticSettings::__cordl_internal_get_excludeTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludeTags;
}
constexpr void GlobalNamespace::MetaXRAcousticSettings::__cordl_internal_set_excludeTags(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___excludeTags = value;
}
constexpr bool& GlobalNamespace::MetaXRAcousticSettings::__cordl_internal_get_mapBakeWriteGeo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapBakeWriteGeo;
}
constexpr bool const& GlobalNamespace::MetaXRAcousticSettings::__cordl_internal_get_mapBakeWriteGeo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapBakeWriteGeo;
}
constexpr void GlobalNamespace::MetaXRAcousticSettings::__cordl_internal_set_mapBakeWriteGeo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapBakeWriteGeo = value;
}
inline void GlobalNamespace::MetaXRAcousticSettings::setStaticF_instance(::UnityW<::GlobalNamespace::MetaXRAcousticSettings>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::MetaXRAcousticSettings>, "instance", ::GlobalNamespace::MetaXRAcousticSettings*>(std::forward<::UnityW<::GlobalNamespace::MetaXRAcousticSettings>>(value));
}
inline ::UnityW<::GlobalNamespace::MetaXRAcousticSettings> GlobalNamespace::MetaXRAcousticSettings::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::MetaXRAcousticSettings>, "instance", ::GlobalNamespace::MetaXRAcousticSettings*>();
}
inline void GlobalNamespace::MetaXRAcousticSettings::OnBeforeSceneLoadRuntimeMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"OnBeforeSceneLoadRuntimeMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Meta::XR::Acoustics::AcousticModel GlobalNamespace::MetaXRAcousticSettings::get_AcousticModel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"get_AcousticModel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::Acoustics::AcousticModel>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticSettings::set_AcousticModel(::Meta::XR::Acoustics::AcousticModel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"set_AcousticModel", {}, {::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MetaXRAcousticSettings::get_DiffractionEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"get_DiffractionEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticSettings::set_DiffractionEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"set_DiffractionEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> GlobalNamespace::MetaXRAcousticSettings::get_ExcludeTags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"get_ExcludeTags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticSettings::set_ExcludeTags(::ArrayW<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"set_ExcludeTags", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MetaXRAcousticSettings::get_MapBakeWriteGeo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"get_MapBakeWriteGeo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticSettings::set_MapBakeWriteGeo(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"set_MapBakeWriteGeo", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MetaXRAcousticSettings::ApplyAllSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"ApplyAllSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MetaXRAcousticSettings> GlobalNamespace::MetaXRAcousticSettings::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MetaXRAcousticSettings>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticSettings* GlobalNamespace::MetaXRAcousticSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticSettings::MetaXRAcousticSettings()   {
}

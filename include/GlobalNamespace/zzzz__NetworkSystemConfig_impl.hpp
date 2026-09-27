#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemConfig.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemConfig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemConfig.get_AppVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::NetworkSystemConfig::get_AppVersion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x56e8e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemConfig>(),
                        {"get_AppVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemConfig.get_AppVersionStripped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::NetworkSystemConfig::get_AppVersionStripped)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x56e8e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemConfig>(),
                        {"get_AppVersionStripped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemConfig.get_BundleVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::NetworkSystemConfig::get_BundleVersion)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x56e9044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemConfig>(),
                        {"get_BundleVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemConfig.get_GameVersionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::NetworkSystemConfig::get_GameVersionType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56e91bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemConfig>(),
                        {"get_GameVersionType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemConfig.get_GameMajorVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::NetworkSystemConfig::get_GameMajorVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56e9214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemConfig>(),
                        {"get_GameMajorVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemConfig.get_GameMinorVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::NetworkSystemConfig::get_GameMinorVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56e926c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemConfig>(),
                        {"get_GameMinorVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemConfig.get_GameMinorVersion2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::NetworkSystemConfig::get_GameMinorVersion2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56e92c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemConfig>(),
                        {"get_GameMinorVersion2", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSystemConfig::setStaticF_gameVersionType(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "gameVersionType", ::GlobalNamespace::NetworkSystemConfig>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::NetworkSystemConfig::getStaticF_gameVersionType()  {
return ::cordl_internals::getStaticField<::StringW, "gameVersionType", ::GlobalNamespace::NetworkSystemConfig>();
}
inline void GlobalNamespace::NetworkSystemConfig::setStaticF_prependCode(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "prependCode", ::GlobalNamespace::NetworkSystemConfig>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::NetworkSystemConfig::getStaticF_prependCode()  {
return ::cordl_internals::getStaticField<::StringW, "prependCode", ::GlobalNamespace::NetworkSystemConfig>();
}
inline void GlobalNamespace::NetworkSystemConfig::setStaticF_majorVersion(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "majorVersion", ::GlobalNamespace::NetworkSystemConfig>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::NetworkSystemConfig::getStaticF_majorVersion()  {
return ::cordl_internals::getStaticField<int32_t, "majorVersion", ::GlobalNamespace::NetworkSystemConfig>();
}
inline void GlobalNamespace::NetworkSystemConfig::setStaticF_minorVersion(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "minorVersion", ::GlobalNamespace::NetworkSystemConfig>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::NetworkSystemConfig::getStaticF_minorVersion()  {
return ::cordl_internals::getStaticField<int32_t, "minorVersion", ::GlobalNamespace::NetworkSystemConfig>();
}
inline void GlobalNamespace::NetworkSystemConfig::setStaticF_minorVersion2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "minorVersion2", ::GlobalNamespace::NetworkSystemConfig>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::NetworkSystemConfig::getStaticF_minorVersion2()  {
return ::cordl_internals::getStaticField<int32_t, "minorVersion2", ::GlobalNamespace::NetworkSystemConfig>();
}
inline ::StringW GlobalNamespace::NetworkSystemConfig::get_AppVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemConfig>(),
                        {"get_AppVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemConfig::get_AppVersionStripped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemConfig>(),
                        {"get_AppVersionStripped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemConfig::get_BundleVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemConfig>(),
                        {"get_BundleVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemConfig::get_GameVersionType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemConfig>(),
                        {"get_GameVersionType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystemConfig::get_GameMajorVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemConfig>(),
                        {"get_GameMajorVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystemConfig::get_GameMinorVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemConfig>(),
                        {"get_GameMinorVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystemConfig::get_GameMinorVersion2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemConfig>(),
                        {"get_GameMinorVersion2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "MaxPlayerCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkSystemConfig::NetworkSystemConfig(int32_t  MaxPlayerCount) noexcept  {
this->MaxPlayerCount = MaxPlayerCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemConfig::NetworkSystemConfig()   {
}

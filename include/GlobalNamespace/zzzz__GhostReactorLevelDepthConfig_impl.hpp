#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelDepthConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelDepthConfig_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelDepthConfig_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelGenConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelDepthConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelDepthConfig::*)()>(&::GlobalNamespace::GhostReactorLevelDepthConfig::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5847d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelDepthConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GhostReactorLevelDepthConfig::__cordl_internal_get_displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr ::StringW const& GlobalNamespace::GhostReactorLevelDepthConfig::__cordl_internal_get_displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr void GlobalNamespace::GhostReactorLevelDepthConfig::__cordl_internal_set_displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayName = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig>>*& GlobalNamespace::GhostReactorLevelDepthConfig::__cordl_internal_get_configGenOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configGenOptions;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig>>* const& GlobalNamespace::GhostReactorLevelDepthConfig::__cordl_internal_get_configGenOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configGenOptions;
}
constexpr void GlobalNamespace::GhostReactorLevelDepthConfig::__cordl_internal_set_configGenOptions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___configGenOptions = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*>*& GlobalNamespace::GhostReactorLevelDepthConfig::__cordl_internal_get_options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*>* const& GlobalNamespace::GhostReactorLevelDepthConfig::__cordl_internal_get_options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr void GlobalNamespace::GhostReactorLevelDepthConfig::__cordl_internal_set_options(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___options = value;
}
inline void GlobalNamespace::GhostReactorLevelDepthConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelDepthConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorLevelDepthConfig* GlobalNamespace::GhostReactorLevelDepthConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorLevelDepthConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorLevelDepthConfig::GhostReactorLevelDepthConfig()   {
}
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption::*)()>(&::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5847e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption::__cordl_internal_get_weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption::__cordl_internal_get_weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight;
}
constexpr void GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption::__cordl_internal_set_weight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weight = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig>& GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption::__cordl_internal_get_levelConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelConfig;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig> const& GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption::__cordl_internal_get_levelConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelConfig;
}
constexpr void GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption::__cordl_internal_set_levelConfig(::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelConfig = value;
}
inline void GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption* GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption::GhostReactorLevelDepthConfig_LevelOption()   {
}

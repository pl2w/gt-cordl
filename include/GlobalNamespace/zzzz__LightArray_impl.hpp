#pragma once
// IWYU pragma private; include "GlobalNamespace/LightArray.hpp"
#include "GlobalNamespace/zzzz__GameLight_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightArray_def.hpp"
#include "GlobalNamespace/zzzz__LightArrayPresets_def.hpp"
#include "GlobalNamespace/zzzz__LightArray__SetColorAndIntensity_d__10_def.hpp"
#include "GlobalNamespace/zzzz__LightArray__SetColor_d__12_def.hpp"
#include "GlobalNamespace/zzzz__LightArray__SetIntensity_d__13_def.hpp"
#include "GlobalNamespace/zzzz__LightArray__SetLightColorAndIntensity_d__14_def.hpp"
#include "GlobalNamespace/zzzz__LightArray__SetLightColor_d__15_def.hpp"
#include "GlobalNamespace/zzzz__LightArray__SetLightIntensity_d__16_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightArray.ToggleDynamicLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightArray::*)()>(&::GlobalNamespace::LightArray::ToggleDynamicLighting)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56cf2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"ToggleDynamicLighting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArray.SetCascadeTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightArray::*)(int32_t)>(&::GlobalNamespace::LightArray::SetCascadeTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56cf324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetCascadeTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArray.SetSubArraysCascadeTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightArray::*)(int32_t)>(&::GlobalNamespace::LightArray::SetSubArraysCascadeTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56cf32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetSubArraysCascadeTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArray.SetPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightArray::*)(int32_t)>(&::GlobalNamespace::LightArray::SetPreset)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56cf380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetPreset", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArray.SetPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightArray::*)(::StringW)>(&::GlobalNamespace::LightArray::SetPreset)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56cf53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetPreset", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArray.SetColorAndIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightArray::*)(::StringW)>(&::GlobalNamespace::LightArray::SetColorAndIntensity)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x56cf650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetColorAndIntensity", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArray.SetColorAndIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightArray::*)(::UnityEngine::Color, float_t)>(&::GlobalNamespace::LightArray::SetColorAndIntensity)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x56cf45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetColorAndIntensity", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArray.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightArray::*)(::StringW)>(&::GlobalNamespace::LightArray::SetColor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56cf784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetColor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArray.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightArray::*)(::UnityEngine::Color)>(&::GlobalNamespace::LightArray::SetColor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x56cf79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArray.SetIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightArray::*)(float_t)>(&::GlobalNamespace::LightArray::SetIntensity)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56cf86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArray.SetLightColorAndIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LightArray::*)(::UnityEngine::Color, float_t, int32_t)>(&::GlobalNamespace::LightArray::SetLightColorAndIntensity)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x56cf920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetLightColorAndIntensity", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArray.SetLightColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LightArray::*)(::UnityEngine::Color, int32_t)>(&::GlobalNamespace::LightArray::SetLightColor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x56cfa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetLightColor", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArray.SetLightIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LightArray::*)(float_t, int32_t)>(&::GlobalNamespace::LightArray::SetLightIntensity)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x56cfb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetLightIntensity", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArray.GetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::LightArray::*)(::StringW)>(&::GlobalNamespace::LightArray::GetColor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56cf6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"GetColor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArray.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightArray::*)()>(&::GlobalNamespace::LightArray::LateUpdate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56cfc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightArray::*)()>(&::GlobalNamespace::LightArray::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56cfd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LightArrayPresets>& GlobalNamespace::LightArray::__cordl_internal_get_presets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presets;
}
constexpr ::UnityW<::GlobalNamespace::LightArrayPresets> const& GlobalNamespace::LightArray::__cordl_internal_get_presets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presets;
}
constexpr void GlobalNamespace::LightArray::__cordl_internal_set_presets(::UnityW<::GlobalNamespace::LightArrayPresets>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___presets = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameLight>>& GlobalNamespace::LightArray::__cordl_internal_get_lights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameLight>> const& GlobalNamespace::LightArray::__cordl_internal_get_lights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lights;
}
constexpr void GlobalNamespace::LightArray::__cordl_internal_set_lights(::ArrayW<::UnityW<::GlobalNamespace::GameLight>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lights = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightArray>>& GlobalNamespace::LightArray::__cordl_internal_get_subArrays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subArrays;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightArray>> const& GlobalNamespace::LightArray::__cordl_internal_get_subArrays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subArrays;
}
constexpr void GlobalNamespace::LightArray::__cordl_internal_set_subArrays(::ArrayW<::UnityW<::GlobalNamespace::LightArray>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subArrays = value;
}
constexpr int32_t& GlobalNamespace::LightArray::__cordl_internal_get_cascadeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cascadeTime;
}
constexpr int32_t const& GlobalNamespace::LightArray::__cordl_internal_get_cascadeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cascadeTime;
}
constexpr void GlobalNamespace::LightArray::__cordl_internal_set_cascadeTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cascadeTime = value;
}
constexpr float_t& GlobalNamespace::LightArray::__cordl_internal_get_setLightHue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setLightHue;
}
constexpr float_t const& GlobalNamespace::LightArray::__cordl_internal_get_setLightHue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setLightHue;
}
constexpr void GlobalNamespace::LightArray::__cordl_internal_set_setLightHue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setLightHue = value;
}
constexpr float_t& GlobalNamespace::LightArray::__cordl_internal_get_preLightHue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preLightHue;
}
constexpr float_t const& GlobalNamespace::LightArray::__cordl_internal_get_preLightHue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preLightHue;
}
constexpr void GlobalNamespace::LightArray::__cordl_internal_set_preLightHue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preLightHue = value;
}
constexpr float_t& GlobalNamespace::LightArray::__cordl_internal_get_setLightSat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setLightSat;
}
constexpr float_t const& GlobalNamespace::LightArray::__cordl_internal_get_setLightSat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setLightSat;
}
constexpr void GlobalNamespace::LightArray::__cordl_internal_set_setLightSat(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setLightSat = value;
}
constexpr float_t& GlobalNamespace::LightArray::__cordl_internal_get_preLightSat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preLightSat;
}
constexpr float_t const& GlobalNamespace::LightArray::__cordl_internal_get_preLightSat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preLightSat;
}
constexpr void GlobalNamespace::LightArray::__cordl_internal_set_preLightSat(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preLightSat = value;
}
constexpr float_t& GlobalNamespace::LightArray::__cordl_internal_get_setLightVal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setLightVal;
}
constexpr float_t const& GlobalNamespace::LightArray::__cordl_internal_get_setLightVal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setLightVal;
}
constexpr void GlobalNamespace::LightArray::__cordl_internal_set_setLightVal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setLightVal = value;
}
constexpr float_t& GlobalNamespace::LightArray::__cordl_internal_get_preLightVal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preLightVal;
}
constexpr float_t const& GlobalNamespace::LightArray::__cordl_internal_get_preLightVal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preLightVal;
}
constexpr void GlobalNamespace::LightArray::__cordl_internal_set_preLightVal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preLightVal = value;
}
constexpr float_t& GlobalNamespace::LightArray::__cordl_internal_get_setLightIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setLightIntensity;
}
constexpr float_t const& GlobalNamespace::LightArray::__cordl_internal_get_setLightIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setLightIntensity;
}
constexpr void GlobalNamespace::LightArray::__cordl_internal_set_setLightIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setLightIntensity = value;
}
constexpr float_t& GlobalNamespace::LightArray::__cordl_internal_get_preLightIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preLightIntensity;
}
constexpr float_t const& GlobalNamespace::LightArray::__cordl_internal_get_preLightIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preLightIntensity;
}
constexpr void GlobalNamespace::LightArray::__cordl_internal_set_preLightIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preLightIntensity = value;
}
inline void GlobalNamespace::LightArray::ToggleDynamicLighting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"ToggleDynamicLighting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightArray::SetCascadeTime(int32_t  ct)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetCascadeTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ct);
}
inline void GlobalNamespace::LightArray::SetSubArraysCascadeTime(int32_t  ct)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetSubArraysCascadeTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ct);
}
inline void GlobalNamespace::LightArray::SetPreset(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetPreset", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void GlobalNamespace::LightArray::SetPreset(::StringW  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetPreset", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n);
}
inline void GlobalNamespace::LightArray::SetColorAndIntensity(::StringW  RRGGBBF)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetColorAndIntensity", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, RRGGBBF);
}
inline void GlobalNamespace::LightArray::SetColorAndIntensity(::UnityEngine::Color  c, float_t  intensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetColorAndIntensity", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c, intensity);
}
inline void GlobalNamespace::LightArray::SetColor(::StringW  RRGGBB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetColor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, RRGGBB);
}
inline void GlobalNamespace::LightArray::SetColor(::UnityEngine::Color  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void GlobalNamespace::LightArray::SetIntensity(float_t  intensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, intensity);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LightArray::SetLightColorAndIntensity(::UnityEngine::Color  c, float_t  intensity, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetLightColorAndIntensity", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, c, intensity, i);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LightArray::SetLightColor(::UnityEngine::Color  c, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetLightColor", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, c, i);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LightArray::SetLightIntensity(float_t  intensity, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"SetLightIntensity", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, intensity, i);
}
inline ::UnityEngine::Color GlobalNamespace::LightArray::GetColor(::StringW  RRGGBB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"GetColor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, RRGGBB);
}
inline void GlobalNamespace::LightArray::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightArray::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArray*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightArray* GlobalNamespace::LightArray::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightArray*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightArray::LightArray()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/LightArrayPresets.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__LightArrayPresets_def.hpp"
#include "GlobalNamespace/zzzz__LightArrayPresets_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightArrayPresets.initLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightArrayPresets::*)()>(&::GlobalNamespace::LightArrayPresets::initLookup)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x56d1a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArrayPresets*>(),
                        {"initLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArrayPresets.GetPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightArrayPresets_LightArrayPreset* (::GlobalNamespace::LightArrayPresets::*)(int32_t)>(&::GlobalNamespace::LightArrayPresets::GetPreset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56cf42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArrayPresets*>(),
                        {"GetPreset", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArrayPresets.GetPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightArrayPresets_LightArrayPreset* (::GlobalNamespace::LightArrayPresets::*)(::StringW)>(&::GlobalNamespace::LightArrayPresets::GetPreset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56cf5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArrayPresets*>(),
                        {"GetPreset", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightArrayPresets._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightArrayPresets::*)()>(&::GlobalNamespace::LightArrayPresets::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d1b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArrayPresets*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LightArrayPresets_LightArrayPreset*>*& GlobalNamespace::LightArrayPresets::__cordl_internal_get_lookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LightArrayPresets_LightArrayPreset*>* const& GlobalNamespace::LightArrayPresets::__cordl_internal_get_lookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookup;
}
constexpr void GlobalNamespace::LightArrayPresets::__cordl_internal_set_lookup(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LightArrayPresets_LightArrayPreset*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookup = value;
}
constexpr ::ArrayW<::GlobalNamespace::LightArrayPresets_LightArrayPreset*>& GlobalNamespace::LightArrayPresets::__cordl_internal_get_presets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presets;
}
constexpr ::ArrayW<::GlobalNamespace::LightArrayPresets_LightArrayPreset*> const& GlobalNamespace::LightArrayPresets::__cordl_internal_get_presets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presets;
}
constexpr void GlobalNamespace::LightArrayPresets::__cordl_internal_set_presets(::ArrayW<::GlobalNamespace::LightArrayPresets_LightArrayPreset*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___presets = value;
}
inline void GlobalNamespace::LightArrayPresets::initLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArrayPresets*>(),
                        {"initLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightArrayPresets_LightArrayPreset* GlobalNamespace::LightArrayPresets::GetPreset(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArrayPresets*>(),
                        {"GetPreset", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightArrayPresets_LightArrayPreset*>(this, ___internal_method, i);
}
inline ::GlobalNamespace::LightArrayPresets_LightArrayPreset* GlobalNamespace::LightArrayPresets::GetPreset(::StringW  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArrayPresets*>(),
                        {"GetPreset", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightArrayPresets_LightArrayPreset*>(this, ___internal_method, n);
}
inline void GlobalNamespace::LightArrayPresets::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArrayPresets*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightArrayPresets* GlobalNamespace::LightArrayPresets::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightArrayPresets*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightArrayPresets::LightArrayPresets()   {
}
//  Writing Method size for method: ::GlobalNamespace::LightArrayPresets_LightArrayPreset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightArrayPresets_LightArrayPreset::*)()>(&::GlobalNamespace::LightArrayPresets_LightArrayPreset::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56d1b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArrayPresets_LightArrayPreset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LightArrayPresets_LightArrayPreset::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& GlobalNamespace::LightArrayPresets_LightArrayPreset::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void GlobalNamespace::LightArrayPresets_LightArrayPreset::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightArrayPresets_LightArrayPreset::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightArrayPresets_LightArrayPreset::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GlobalNamespace::LightArrayPresets_LightArrayPreset::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr float_t& GlobalNamespace::LightArrayPresets_LightArrayPreset::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr float_t const& GlobalNamespace::LightArrayPresets_LightArrayPreset::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void GlobalNamespace::LightArrayPresets_LightArrayPreset::__cordl_internal_set_intensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
inline void GlobalNamespace::LightArrayPresets_LightArrayPreset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightArrayPresets_LightArrayPreset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightArrayPresets_LightArrayPreset* GlobalNamespace::LightArrayPresets_LightArrayPreset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightArrayPresets_LightArrayPreset*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightArrayPresets_LightArrayPreset::LightArrayPresets_LightArrayPreset()   {
}

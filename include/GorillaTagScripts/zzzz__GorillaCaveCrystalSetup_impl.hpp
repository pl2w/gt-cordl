#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaCaveCrystalSetup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaTagScripts/zzzz__GorillaCaveCrystalSetup_def.hpp"
#include "GorillaTagScripts/zzzz__CrystalVisualsPreset_def.hpp"
#include "GorillaTagScripts/zzzz__GorillaCaveCrystalSetup_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GorillaCaveCrystalSetup.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup> (*)()>(&::GorillaTagScripts::GorillaCaveCrystalSetup::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5bc5ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaCaveCrystalSetup.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaCaveCrystalSetup::*)()>(&::GorillaTagScripts::GorillaCaveCrystalSetup::OnEnable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5bc5f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaCaveCrystalSetup.GetCrystalDefs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> (::GorillaTagScripts::GorillaCaveCrystalSetup::*)()>(&::GorillaTagScripts::GorillaCaveCrystalSetup::GetCrystalDefs)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5bc5fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup*>(),
                        {"GetCrystalDefs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaCaveCrystalSetup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaCaveCrystalSetup::*)()>(&::GorillaTagScripts::GorillaCaveCrystalSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bc61b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaCaveCrystalSetup._GetCrystalDefs_b__19_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* (::GorillaTagScripts::GorillaCaveCrystalSetup::*)(::System::Reflection::FieldInfo*)>(&::GorillaTagScripts::GorillaCaveCrystalSetup::_GetCrystalDefs_b__19_1)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5bc61b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup*>(),
                        {"<GetCrystalDefs>b__19_1", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_SharedBase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedBase;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_SharedBase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedBase;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_set_SharedBase(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SharedBase = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_CrystalAlbedo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CrystalAlbedo;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_CrystalAlbedo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CrystalAlbedo;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_set_CrystalAlbedo(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CrystalAlbedo = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_CrystalDarkAlbedo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CrystalDarkAlbedo;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_CrystalDarkAlbedo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CrystalDarkAlbedo;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_set_CrystalDarkAlbedo(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CrystalDarkAlbedo = value;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_Red()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Red;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_Red() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Red;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_set_Red(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Red = value;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_Orange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Orange;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_Orange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Orange;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_set_Orange(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Orange = value;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_Yellow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Yellow;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_Yellow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Yellow;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_set_Yellow(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Yellow = value;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_Green()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Green;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_Green() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Green;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_set_Green(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Green = value;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_Teal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Teal;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_Teal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Teal;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_set_Teal(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Teal = value;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_DarkBlue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DarkBlue;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_DarkBlue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DarkBlue;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_set_DarkBlue(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DarkBlue = value;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_Pink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pink;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_Pink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pink;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_set_Pink(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pink = value;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_Dark()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Dark;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_Dark() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Dark;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_set_Dark(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Dark = value;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_DarkLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DarkLight;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_DarkLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DarkLight;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_set_DarkLight(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DarkLight = value;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_DarkLightUnderWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DarkLightUnderWater;
}
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get_DarkLightUnderWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DarkLightUnderWater;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_set_DarkLightUnderWater(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DarkLightUnderWater = value;
}
constexpr ::StringW& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get__notes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notes;
}
constexpr ::StringW const& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get__notes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notes;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_set__notes(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____notes = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup::__cordl_internal_set__target(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
inline void GorillaTagScripts::GorillaCaveCrystalSetup::setStaticF_gInstance(::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup>, "gInstance", ::GorillaTagScripts::GorillaCaveCrystalSetup*>(std::forward<::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup>>(value));
}
inline ::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup> GorillaTagScripts::GorillaCaveCrystalSetup::getStaticF_gInstance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup>, "gInstance", ::GorillaTagScripts::GorillaCaveCrystalSetup*>();
}
inline void GorillaTagScripts::GorillaCaveCrystalSetup::setStaticF_gCrystalDefs(::ArrayW<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>, "gCrystalDefs", ::GorillaTagScripts::GorillaCaveCrystalSetup*>(std::forward<::ArrayW<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>>(value));
}
inline ::ArrayW<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> GorillaTagScripts::GorillaCaveCrystalSetup::getStaticF_gCrystalDefs()  {
return ::cordl_internals::getStaticField<::ArrayW<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>, "gCrystalDefs", ::GorillaTagScripts::GorillaCaveCrystalSetup*>();
}
inline ::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup> GorillaTagScripts::GorillaCaveCrystalSetup::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup>>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::GorillaCaveCrystalSetup::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> GorillaTagScripts::GorillaCaveCrystalSetup::GetCrystalDefs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup*>(),
                        {"GetCrystalDefs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaCaveCrystalSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* GorillaTagScripts::GorillaCaveCrystalSetup::_GetCrystalDefs_b__19_1(::System::Reflection::FieldInfo*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup*>(),
                        {"<GetCrystalDefs>b__19_1", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>(this, ___internal_method, f);
}
inline ::GorillaTagScripts::GorillaCaveCrystalSetup* GorillaTagScripts::GorillaCaveCrystalSetup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GorillaCaveCrystalSetup*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup::GorillaCaveCrystalSetup()   {
}
//  Writing Method size for method: ::GorillaTagScripts::GorillaCaveCrystalSetup___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaCaveCrystalSetup___c::*)()>(&::GorillaTagScripts::GorillaCaveCrystalSetup___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bc62c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaCaveCrystalSetup___c._GetCrystalDefs_b__19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GorillaCaveCrystalSetup___c::*)(::System::Reflection::FieldInfo*)>(&::GorillaTagScripts::GorillaCaveCrystalSetup___c::_GetCrystalDefs_b__19_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5bc62c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup___c*>(),
                        {"<GetCrystalDefs>b__19_0", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::GorillaCaveCrystalSetup___c::setStaticF___9(::GorillaTagScripts::GorillaCaveCrystalSetup___c*  value)  {
::cordl_internals::setStaticField<::GorillaTagScripts::GorillaCaveCrystalSetup___c*, "<>9", ::GorillaTagScripts::GorillaCaveCrystalSetup___c*>(std::forward<::GorillaTagScripts::GorillaCaveCrystalSetup___c*>(value));
}
inline ::GorillaTagScripts::GorillaCaveCrystalSetup___c* GorillaTagScripts::GorillaCaveCrystalSetup___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaTagScripts::GorillaCaveCrystalSetup___c*, "<>9", ::GorillaTagScripts::GorillaCaveCrystalSetup___c*>();
}
inline void GorillaTagScripts::GorillaCaveCrystalSetup___c::setStaticF___9__19_0(::System::Func_2<::System::Reflection::FieldInfo*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*,bool>*, "<>9__19_0", ::GorillaTagScripts::GorillaCaveCrystalSetup___c*>(std::forward<::System::Func_2<::System::Reflection::FieldInfo*,bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*,bool>* GorillaTagScripts::GorillaCaveCrystalSetup___c::getStaticF___9__19_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*,bool>*, "<>9__19_0", ::GorillaTagScripts::GorillaCaveCrystalSetup___c*>();
}
inline void GorillaTagScripts::GorillaCaveCrystalSetup___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::GorillaCaveCrystalSetup___c::_GetCrystalDefs_b__19_0(::System::Reflection::FieldInfo*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup___c*>(),
                        {"<GetCrystalDefs>b__19_0", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline ::GorillaTagScripts::GorillaCaveCrystalSetup___c* GorillaTagScripts::GorillaCaveCrystalSetup___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GorillaCaveCrystalSetup___c*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup___c::GorillaCaveCrystalSetup___c()   {
}
//  Writing Method size for method: ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::*)()>(&::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bc6250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::__cordl_internal_get_keyMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::__cordl_internal_get_keyMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyMaterial;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::__cordl_internal_set_keyMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyMaterial = value;
}
constexpr ::UnityW<::GorillaTagScripts::CrystalVisualsPreset>& GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::__cordl_internal_get_visualPreset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualPreset;
}
constexpr ::UnityW<::GorillaTagScripts::CrystalVisualsPreset> const& GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::__cordl_internal_get_visualPreset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualPreset;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::__cordl_internal_set_visualPreset(::UnityW<::GorillaTagScripts::CrystalVisualsPreset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visualPreset = value;
}
constexpr int32_t& GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::__cordl_internal_get_low()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___low;
}
constexpr int32_t const& GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::__cordl_internal_get_low() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___low;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::__cordl_internal_set_low(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___low = value;
}
constexpr int32_t& GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::__cordl_internal_get_mid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mid;
}
constexpr int32_t const& GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::__cordl_internal_get_mid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mid;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::__cordl_internal_set_mid(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mid = value;
}
constexpr int32_t& GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::__cordl_internal_get_high()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___high;
}
constexpr int32_t const& GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::__cordl_internal_get_high() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___high;
}
constexpr void GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::__cordl_internal_set_high(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___high = value;
}
inline void GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef::GorillaCaveCrystalSetup_CrystalDef()   {
}

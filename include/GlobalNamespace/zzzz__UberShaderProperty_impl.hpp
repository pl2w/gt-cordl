#pragma once
// IWYU pragma private; include "GlobalNamespace/UberShaderProperty.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderPropertyFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderPropertyType_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__UberShaderProperty_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UberShaderProperty.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UberShaderProperty::*)(::UnityEngine::Material*)>(&::GlobalNamespace::UberShaderProperty::Enable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5991c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShaderProperty*>(),
                        {"Enable", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberShaderProperty.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UberShaderProperty::*)(::UnityEngine::Material*)>(&::GlobalNamespace::UberShaderProperty::Disable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5991ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShaderProperty*>(),
                        {"Disable", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberShaderProperty.TryGetKeywordState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UberShaderProperty::*)(::UnityEngine::Material*, ::by_ref<bool>)>(&::GlobalNamespace::UberShaderProperty::TryGetKeywordState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5991d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShaderProperty*>(),
                        {"TryGetKeywordState", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberShaderProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UberShaderProperty::*)()>(&::GlobalNamespace::UberShaderProperty::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59906f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShaderProperty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::UberShaderProperty::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GlobalNamespace::UberShaderProperty::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::UberShaderProperty::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr int32_t& GlobalNamespace::UberShaderProperty::__cordl_internal_get_nameID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameID;
}
constexpr int32_t const& GlobalNamespace::UberShaderProperty::__cordl_internal_get_nameID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameID;
}
constexpr void GlobalNamespace::UberShaderProperty::__cordl_internal_set_nameID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameID = value;
}
constexpr ::StringW& GlobalNamespace::UberShaderProperty::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& GlobalNamespace::UberShaderProperty::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void GlobalNamespace::UberShaderProperty::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::UnityEngine::Rendering::ShaderPropertyType& GlobalNamespace::UberShaderProperty::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::UnityEngine::Rendering::ShaderPropertyType const& GlobalNamespace::UberShaderProperty::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void GlobalNamespace::UberShaderProperty::__cordl_internal_set_type(::UnityEngine::Rendering::ShaderPropertyType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags& GlobalNamespace::UberShaderProperty::__cordl_internal_get_flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags const& GlobalNamespace::UberShaderProperty::__cordl_internal_get_flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr void GlobalNamespace::UberShaderProperty::__cordl_internal_set_flags(::UnityEngine::Rendering::ShaderPropertyFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flags = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::UberShaderProperty::__cordl_internal_get_rangeLimits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangeLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::UberShaderProperty::__cordl_internal_get_rangeLimits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangeLimits;
}
constexpr void GlobalNamespace::UberShaderProperty::__cordl_internal_set_rangeLimits(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rangeLimits = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::UberShaderProperty::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::UberShaderProperty::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::UberShaderProperty::__cordl_internal_set_attributes(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr bool& GlobalNamespace::UberShaderProperty::__cordl_internal_get_isKeywordToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKeywordToggle;
}
constexpr bool const& GlobalNamespace::UberShaderProperty::__cordl_internal_get_isKeywordToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKeywordToggle;
}
constexpr void GlobalNamespace::UberShaderProperty::__cordl_internal_set_isKeywordToggle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isKeywordToggle = value;
}
constexpr ::StringW& GlobalNamespace::UberShaderProperty::__cordl_internal_get_keyword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyword;
}
constexpr ::StringW const& GlobalNamespace::UberShaderProperty::__cordl_internal_get_keyword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyword;
}
constexpr void GlobalNamespace::UberShaderProperty::__cordl_internal_set_keyword(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyword = value;
}
template<typename T>
inline T GlobalNamespace::UberShaderProperty::GetValue(::UnityEngine::Material*  target)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UberShaderProperty*>(),
                    {"GetValue", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Material*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, target);
}
template<typename T>
inline void GlobalNamespace::UberShaderProperty::SetValue(::UnityEngine::Material*  target, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UberShaderProperty*>(),
                    {"SetValue", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, value);
}
inline void GlobalNamespace::UberShaderProperty::Enable(::UnityEngine::Material*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShaderProperty*>(),
                        {"Enable", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GlobalNamespace::UberShaderProperty::Disable(::UnityEngine::Material*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShaderProperty*>(),
                        {"Disable", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline bool GlobalNamespace::UberShaderProperty::TryGetKeywordState(::UnityEngine::Material*  target, ::by_ref<bool>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShaderProperty*>(),
                        {"TryGetKeywordState", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target, enabled);
}
template<typename TIn,typename TOut>
inline TOut GlobalNamespace::UberShaderProperty::ValueAs(TIn  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UberShaderProperty*>(),
                    {"ValueAs", {::i2c::class_of<TIn>(), ::i2c::class_of<TOut>()}, {::i2c::type_of<TIn>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TIn>(), ::i2c::class_of<TOut>()}
                )));
return ::cordl_internals::RunMethodRethrow<TOut>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::UberShaderProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberShaderProperty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UberShaderProperty* GlobalNamespace::UberShaderProperty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UberShaderProperty*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UberShaderProperty::UberShaderProperty()   {
}

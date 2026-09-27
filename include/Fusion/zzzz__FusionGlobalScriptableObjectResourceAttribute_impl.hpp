#pragma once
// IWYU pragma private; include "Fusion/FusionGlobalScriptableObjectResourceAttribute.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObjectSourceAttribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObjectResourceAttribute_def.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObjectLoadResult_def.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObjectResourceAttribute_def.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObject_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectResourceAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObjectResourceAttribute::*)(::System::Type*, ::StringW)>(&::Fusion::FusionGlobalScriptableObjectResourceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60e057c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectResourceAttribute.get_ResourcePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::FusionGlobalScriptableObjectResourceAttribute::*)()>(&::Fusion::FusionGlobalScriptableObjectResourceAttribute::get_ResourcePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e05b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute*>(),
                        {"get_ResourcePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectResourceAttribute.get_InstantiateIfLoadedInEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionGlobalScriptableObjectResourceAttribute::*)()>(&::Fusion::FusionGlobalScriptableObjectResourceAttribute::get_InstantiateIfLoadedInEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e05bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute*>(),
                        {"get_InstantiateIfLoadedInEditor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectResourceAttribute.set_InstantiateIfLoadedInEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObjectResourceAttribute::*)(bool)>(&::Fusion::FusionGlobalScriptableObjectResourceAttribute::set_InstantiateIfLoadedInEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e05c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute*>(),
                        {"set_InstantiateIfLoadedInEditor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectResourceAttribute.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::FusionGlobalScriptableObjectLoadResult (::Fusion::FusionGlobalScriptableObjectResourceAttribute::*)(::System::Type*)>(&::Fusion::FusionGlobalScriptableObjectResourceAttribute::Load)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x60e05cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute*>(),
                    {::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::FusionGlobalScriptableObjectResourceAttribute::__cordl_internal_get__ResourcePath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResourcePath_k__BackingField;
}
constexpr ::StringW const& Fusion::FusionGlobalScriptableObjectResourceAttribute::__cordl_internal_get__ResourcePath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResourcePath_k__BackingField;
}
constexpr void Fusion::FusionGlobalScriptableObjectResourceAttribute::__cordl_internal_set__ResourcePath_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ResourcePath_k__BackingField = value;
}
constexpr bool& Fusion::FusionGlobalScriptableObjectResourceAttribute::__cordl_internal_get__InstantiateIfLoadedInEditor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InstantiateIfLoadedInEditor_k__BackingField;
}
constexpr bool const& Fusion::FusionGlobalScriptableObjectResourceAttribute::__cordl_internal_get__InstantiateIfLoadedInEditor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InstantiateIfLoadedInEditor_k__BackingField;
}
constexpr void Fusion::FusionGlobalScriptableObjectResourceAttribute::__cordl_internal_set__InstantiateIfLoadedInEditor_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InstantiateIfLoadedInEditor_k__BackingField = value;
}
inline void Fusion::FusionGlobalScriptableObjectResourceAttribute::_ctor(::System::Type*  objectType, ::StringW  resourcePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectType, resourcePath);
}
inline ::StringW Fusion::FusionGlobalScriptableObjectResourceAttribute::get_ResourcePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute*>(),
                        {"get_ResourcePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Fusion::FusionGlobalScriptableObjectResourceAttribute::get_InstantiateIfLoadedInEditor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute*>(),
                        {"get_InstantiateIfLoadedInEditor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::FusionGlobalScriptableObjectResourceAttribute::set_InstantiateIfLoadedInEditor(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute*>(),
                        {"set_InstantiateIfLoadedInEditor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::FusionGlobalScriptableObjectLoadResult Fusion::FusionGlobalScriptableObjectResourceAttribute::Load(::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::FusionGlobalScriptableObjectLoadResult>(this, ___internal_method, type);
}
inline ::Fusion::FusionGlobalScriptableObjectResourceAttribute* Fusion::FusionGlobalScriptableObjectResourceAttribute::New_ctor(::System::Type*  objectType, ::StringW  resourcePath)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionGlobalScriptableObjectResourceAttribute*>(objectType, resourcePath));
}
// Ctor Parameters []
constexpr ::Fusion::FusionGlobalScriptableObjectResourceAttribute::FusionGlobalScriptableObjectResourceAttribute()   {
}
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1::*)()>(&::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e0978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1._Load_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1::*)(::Fusion::FusionGlobalScriptableObject*)>(&::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1::_Load_b__1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60e098c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1*>(),
                        {"<Load>b__1", {}, {::i2c::type_of<::Fusion::FusionGlobalScriptableObject*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1::__cordl_internal_get_clone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clone;
}
constexpr ::UnityW<::UnityEngine::Object> const& Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1::__cordl_internal_get_clone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clone;
}
constexpr void Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1::__cordl_internal_set_clone(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clone = value;
}
inline void Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1::_Load_b__1(::Fusion::FusionGlobalScriptableObject*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1*>(),
                        {"<Load>b__1", {}, {::i2c::type_of<::Fusion::FusionGlobalScriptableObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1* Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1*>());
}
// Ctor Parameters []
constexpr ::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_1()   {
}
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0::*)()>(&::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e0970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0._Load_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0::*)(::Fusion::FusionGlobalScriptableObject*)>(&::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0::_Load_b__0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60e0980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0*>(),
                        {"<Load>b__0", {}, {::i2c::type_of<::Fusion::FusionGlobalScriptableObject*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0::__cordl_internal_get_instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instance;
}
constexpr ::UnityW<::UnityEngine::Object> const& Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0::__cordl_internal_get_instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instance;
}
constexpr void Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0::__cordl_internal_set_instance(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instance = value;
}
inline void Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0::_Load_b__0(::Fusion::FusionGlobalScriptableObject*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0*>(),
                        {"<Load>b__0", {}, {::i2c::type_of<::Fusion::FusionGlobalScriptableObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0* Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0::FusionGlobalScriptableObjectResourceAttribute___c__DisplayClass8_0()   {
}

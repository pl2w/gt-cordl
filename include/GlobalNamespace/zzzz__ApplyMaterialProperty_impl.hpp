#pragma once
// IWYU pragma private; include "GlobalNamespace/ApplyMaterialProperty.hpp"
#include "GlobalNamespace/zzzz__ApplyMaterialProperty_ApplyMode_impl.hpp"
#include "GlobalNamespace/zzzz__ApplyMaterialProperty_SuportedTypes_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__ApplyMaterialProperty_def.hpp"
#include "GlobalNamespace/zzzz__ApplyMaterialProperty_ApplyMode_def.hpp"
#include "GlobalNamespace/zzzz__ApplyMaterialProperty_SuportedTypes_def.hpp"
#include "GlobalNamespace/zzzz__ApplyMaterialProperty_def.hpp"
#include "GlobalNamespace/zzzz__MaterialInstance_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ApplyMaterialProperty.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ApplyMaterialProperty::*)()>(&::GlobalNamespace::ApplyMaterialProperty::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5645908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplyMaterialProperty.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ApplyMaterialProperty::*)()>(&::GlobalNamespace::ApplyMaterialProperty::Apply)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5645a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"Apply", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplyMaterialProperty.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ApplyMaterialProperty::*)(::StringW, ::UnityEngine::Color)>(&::GlobalNamespace::ApplyMaterialProperty::SetColor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56461dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"SetColor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplyMaterialProperty.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ApplyMaterialProperty::*)(int32_t, ::UnityEngine::Color)>(&::GlobalNamespace::ApplyMaterialProperty::SetColor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5646230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"SetColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplyMaterialProperty.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ApplyMaterialProperty::*)(::StringW, float_t)>(&::GlobalNamespace::ApplyMaterialProperty::SetFloat)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x56463ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"SetFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplyMaterialProperty.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ApplyMaterialProperty::*)(int32_t, float_t)>(&::GlobalNamespace::ApplyMaterialProperty::SetFloat)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5646420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplyMaterialProperty.GetOrCreateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData* (::GlobalNamespace::ApplyMaterialProperty::*)(int32_t, ::StringW)>(&::GlobalNamespace::ApplyMaterialProperty::GetOrCreateData)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5646278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"GetOrCreateData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplyMaterialProperty.ApplyMaterialInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ApplyMaterialProperty::*)()>(&::GlobalNamespace::ApplyMaterialProperty::ApplyMaterialInstance)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5645af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"ApplyMaterialInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplyMaterialProperty.ApplyMaterialPropertyBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ApplyMaterialProperty::*)()>(&::GlobalNamespace::ApplyMaterialProperty::ApplyMaterialPropertyBlock)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x5645ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"ApplyMaterialPropertyBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplyMaterialProperty.UpdateShaderPropertyIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ApplyMaterialProperty::*)()>(&::GlobalNamespace::ApplyMaterialProperty::UpdateShaderPropertyIds)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5645930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"UpdateShaderPropertyIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplyMaterialProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ApplyMaterialProperty::*)()>(&::GlobalNamespace::ApplyMaterialProperty::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56464b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ApplyMaterialProperty_ApplyMode& GlobalNamespace::ApplyMaterialProperty::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::ApplyMaterialProperty_ApplyMode const& GlobalNamespace::ApplyMaterialProperty::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::ApplyMaterialProperty::__cordl_internal_set_mode(::GlobalNamespace::ApplyMaterialProperty_ApplyMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ApplyMaterialProperty::__cordl_internal_get_targetMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ApplyMaterialProperty::__cordl_internal_get_targetMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetMaterial;
}
constexpr void GlobalNamespace::ApplyMaterialProperty::__cordl_internal_set_targetMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetMaterial = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialInstance>& GlobalNamespace::ApplyMaterialProperty::__cordl_internal_get__instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instance;
}
constexpr ::UnityW<::GlobalNamespace::MaterialInstance> const& GlobalNamespace::ApplyMaterialProperty::__cordl_internal_get__instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instance;
}
constexpr void GlobalNamespace::ApplyMaterialProperty::__cordl_internal_set__instance(::UnityW<::GlobalNamespace::MaterialInstance>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instance = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::ApplyMaterialProperty::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::ApplyMaterialProperty::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void GlobalNamespace::ApplyMaterialProperty::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>*& GlobalNamespace::ApplyMaterialProperty::__cordl_internal_get_customData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>* const& GlobalNamespace::ApplyMaterialProperty::__cordl_internal_get_customData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customData;
}
constexpr void GlobalNamespace::ApplyMaterialProperty::__cordl_internal_set_customData(::System::Collections::Generic::List_1<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customData = value;
}
constexpr bool& GlobalNamespace::ApplyMaterialProperty::__cordl_internal_get_applyOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyOnStart;
}
constexpr bool const& GlobalNamespace::ApplyMaterialProperty::__cordl_internal_get_applyOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyOnStart;
}
constexpr void GlobalNamespace::ApplyMaterialProperty::__cordl_internal_set_applyOnStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyOnStart = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::ApplyMaterialProperty::__cordl_internal_get__block()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____block;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::ApplyMaterialProperty::__cordl_internal_get__block() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____block;
}
constexpr void GlobalNamespace::ApplyMaterialProperty::__cordl_internal_set__block(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____block = value;
}
inline void GlobalNamespace::ApplyMaterialProperty::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ApplyMaterialProperty::Apply()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"Apply", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ApplyMaterialProperty::SetColor(::StringW  propertyName, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"SetColor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, color);
}
inline void GlobalNamespace::ApplyMaterialProperty::SetColor(int32_t  propertyId, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"SetColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyId, color);
}
inline void GlobalNamespace::ApplyMaterialProperty::SetFloat(::StringW  propertyName, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"SetFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, value);
}
inline void GlobalNamespace::ApplyMaterialProperty::SetFloat(int32_t  propertyId, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyId, value);
}
inline ::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData* GlobalNamespace::ApplyMaterialProperty::GetOrCreateData(int32_t  id, ::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"GetOrCreateData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>(this, ___internal_method, id, propertyName);
}
inline void GlobalNamespace::ApplyMaterialProperty::ApplyMaterialInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"ApplyMaterialInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ApplyMaterialProperty::ApplyMaterialPropertyBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"ApplyMaterialPropertyBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ApplyMaterialProperty::UpdateShaderPropertyIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {"UpdateShaderPropertyIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ApplyMaterialProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ApplyMaterialProperty* GlobalNamespace::ApplyMaterialProperty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ApplyMaterialProperty*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ApplyMaterialProperty::ApplyMaterialProperty()   {
}
//  Writing Method size for method: ::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::*)(::StringW)>(&::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x56464c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::*)(int32_t, ::StringW)>(&::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5646454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::*)()>(&::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::GetHashCode)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5646524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>(),
                    {::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>(), 2}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr int32_t& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr ::GlobalNamespace::ApplyMaterialProperty_SuportedTypes& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_dataType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataType;
}
constexpr ::GlobalNamespace::ApplyMaterialProperty_SuportedTypes const& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_dataType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataType;
}
constexpr void GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_set_dataType(::GlobalNamespace::ApplyMaterialProperty_SuportedTypes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dataType = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr float_t& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get__cordl_float()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_float;
}
constexpr float_t const& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get__cordl_float() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_float;
}
constexpr void GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_set__cordl_float(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cordl_float = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_vector2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vector2;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_vector2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vector2;
}
constexpr void GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_set_vector2(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vector2 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_vector3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vector3;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_vector3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vector3;
}
constexpr void GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_set_vector3(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vector3 = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_vector4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vector4;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_vector4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vector4;
}
constexpr void GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_set_vector4(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vector4 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_texture2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture2D;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_get_texture2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture2D;
}
constexpr void GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::__cordl_internal_set_texture2D(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture2D = value;
}
inline void GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::_ctor(::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName);
}
inline void GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::_ctor(int32_t  propertyId, ::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyId, propertyName);
}
inline int32_t GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData* GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::New_ctor(::StringW  propertyName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>(propertyName));
}
inline ::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData* GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::New_ctor(int32_t  propertyId, ::StringW  propertyName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>(propertyId, propertyName));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData::ApplyMaterialProperty_CustomMaterialData()   {
}

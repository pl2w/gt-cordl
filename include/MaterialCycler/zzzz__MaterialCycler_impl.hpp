#pragma once
// IWYU pragma private; include "MaterialCycler/MaterialCycler.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "MaterialCycler/zzzz__MaterialCycler_def.hpp"
#include "GlobalNamespace/zzzz__GrabbingColorPicker_def.hpp"
#include "MaterialCycler/zzzz__MaterialCycler_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.get_index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MaterialCycler::MaterialCycler::*)()>(&::MaterialCycler::MaterialCycler::get_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd0ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"get_index", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.set_index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler::*)(int32_t)>(&::MaterialCycler::MaterialCycler::set_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd0eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"set_index", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.get_ColorPicker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GrabbingColorPicker> (::MaterialCycler::MaterialCycler::*)()>(&::MaterialCycler::MaterialCycler::get_ColorPicker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd0eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"get_ColorPicker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.get_NumMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MaterialCycler::MaterialCycler::*)()>(&::MaterialCycler::MaterialCycler::get_NumMaterials)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cd0ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"get_NumMaterials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.get_KeyHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MaterialCycler::MaterialCycler::*)()>(&::MaterialCycler::MaterialCycler::get_KeyHash)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5cd0ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"get_KeyHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler::*)()>(&::MaterialCycler::MaterialCycler::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd0f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler::*)()>(&::MaterialCycler::MaterialCycler::OnEnable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cd115c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler::*)()>(&::MaterialCycler::MaterialCycler::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cd1584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.MaterialCyclerNetworked_OnSynchronize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler::*)(int32_t, ::UnityEngine::Color)>(&::MaterialCycler::MaterialCycler::MaterialCyclerNetworked_OnSynchronize)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5cd170c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"MaterialCyclerNetworked_OnSynchronize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.SynchronizeLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler::*)(float_t, float_t, float_t)>(&::MaterialCycler::MaterialCycler::SynchronizeLocal)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5cd1900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"SynchronizeLocal", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.SetMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler::*)()>(&::MaterialCycler::MaterialCycler::SetMaterials)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5cd0fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"SetMaterials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.NextMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler::*)()>(&::MaterialCycler::MaterialCycler::NextMaterial)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cd1ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"NextMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.CycleMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler::*)(int32_t)>(&::MaterialCycler::MaterialCycler::CycleMaterial)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cd1b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"CycleMaterial", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler::*)()>(&::MaterialCycler::MaterialCycler::SetDirty)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5cd1b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"SetDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.timeOutDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::MaterialCycler::MaterialCycler::*)()>(&::MaterialCycler::MaterialCycler::timeOutDirty)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd1bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"timeOutDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.synchronize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler::*)()>(&::MaterialCycler::MaterialCycler::synchronize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5cd1c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"synchronize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler::*)(::UnityEngine::Vector3)>(&::MaterialCycler::MaterialCycler::SetColor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5cd1f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler::*)()>(&::MaterialCycler::MaterialCycler::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cd1fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& MaterialCycler::MaterialCycler::__cordl_internal_get__cyclerKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cyclerKey;
}
constexpr ::StringW const& MaterialCycler::MaterialCycler::__cordl_internal_get__cyclerKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cyclerKey;
}
constexpr void MaterialCycler::MaterialCycler::__cordl_internal_set__cyclerKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cyclerKey = value;
}
constexpr ::ArrayW<::MaterialCycler::MaterialCycler_MaterialPack*>& MaterialCycler::MaterialCycler::__cordl_internal_get_materials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materials;
}
constexpr ::ArrayW<::MaterialCycler::MaterialCycler_MaterialPack*> const& MaterialCycler::MaterialCycler::__cordl_internal_get_materials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materials;
}
constexpr void MaterialCycler::MaterialCycler::__cordl_internal_set_materials(::ArrayW<::MaterialCycler::MaterialCycler_MaterialPack*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materials = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& MaterialCycler::MaterialCycler::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& MaterialCycler::MaterialCycler::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void MaterialCycler::MaterialCycler::__cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr int32_t& MaterialCycler::MaterialCycler::__cordl_internal_get__index_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index_k__BackingField;
}
constexpr int32_t const& MaterialCycler::MaterialCycler::__cordl_internal_get__index_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index_k__BackingField;
}
constexpr void MaterialCycler::MaterialCycler::__cordl_internal_set__index_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____index_k__BackingField = value;
}
constexpr ::StringW& MaterialCycler::MaterialCycler::__cordl_internal_get_setColorTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setColorTarget;
}
constexpr ::StringW const& MaterialCycler::MaterialCycler::__cordl_internal_get_setColorTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setColorTarget;
}
constexpr void MaterialCycler::MaterialCycler::__cordl_internal_set_setColorTarget(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setColorTarget = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& MaterialCycler::MaterialCycler::__cordl_internal_get_reset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reset;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& MaterialCycler::MaterialCycler::__cordl_internal_get_reset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reset;
}
constexpr void MaterialCycler::MaterialCycler::__cordl_internal_set_reset(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reset = value;
}
constexpr ::UnityW<::GlobalNamespace::GrabbingColorPicker>& MaterialCycler::MaterialCycler::__cordl_internal_get__colorPicker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorPicker;
}
constexpr ::UnityW<::GlobalNamespace::GrabbingColorPicker> const& MaterialCycler::MaterialCycler::__cordl_internal_get__colorPicker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorPicker;
}
constexpr void MaterialCycler::MaterialCycler::__cordl_internal_set__colorPicker(::UnityW<::GlobalNamespace::GrabbingColorPicker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorPicker = value;
}
constexpr ::UnityEngine::Coroutine*& MaterialCycler::MaterialCycler::__cordl_internal_get_crDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crDirty;
}
constexpr ::UnityEngine::Coroutine* const& MaterialCycler::MaterialCycler::__cordl_internal_get_crDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crDirty;
}
constexpr void MaterialCycler::MaterialCycler::__cordl_internal_set_crDirty(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crDirty = value;
}
constexpr float_t& MaterialCycler::MaterialCycler::__cordl_internal_get_synchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synchTime;
}
constexpr float_t const& MaterialCycler::MaterialCycler::__cordl_internal_get_synchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synchTime;
}
constexpr void MaterialCycler::MaterialCycler::__cordl_internal_set_synchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___synchTime = value;
}
constexpr ::System::Nullable_1<int32_t>& MaterialCycler::MaterialCycler::__cordl_internal_get__keyHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyHash;
}
constexpr ::System::Nullable_1<int32_t> const& MaterialCycler::MaterialCycler::__cordl_internal_get__keyHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyHash;
}
constexpr void MaterialCycler::MaterialCycler::__cordl_internal_set__keyHash(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____keyHash = value;
}
inline int32_t MaterialCycler::MaterialCycler::get_index()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"get_index", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MaterialCycler::MaterialCycler::set_index(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"set_index", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::GrabbingColorPicker> MaterialCycler::MaterialCycler::get_ColorPicker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"get_ColorPicker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GrabbingColorPicker>>(this, ___internal_method);
}
inline int32_t MaterialCycler::MaterialCycler::get_NumMaterials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"get_NumMaterials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t MaterialCycler::MaterialCycler::get_KeyHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"get_KeyHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MaterialCycler::MaterialCycler::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MaterialCycler::MaterialCycler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MaterialCycler::MaterialCycler::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MaterialCycler::MaterialCycler::MaterialCyclerNetworked_OnSynchronize(int32_t  idx, ::UnityEngine::Color  rgb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"MaterialCyclerNetworked_OnSynchronize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, rgb);
}
inline void MaterialCycler::MaterialCycler::SynchronizeLocal(float_t  r, float_t  g, float_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"SynchronizeLocal", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, g, b);
}
inline void MaterialCycler::MaterialCycler::SetMaterials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"SetMaterials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MaterialCycler::MaterialCycler::NextMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"NextMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MaterialCycler::MaterialCycler::CycleMaterial(int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"CycleMaterial", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newIndex);
}
inline void MaterialCycler::MaterialCycler::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"SetDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* MaterialCycler::MaterialCycler::timeOutDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"timeOutDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void MaterialCycler::MaterialCycler::synchronize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"synchronize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MaterialCycler::MaterialCycler::SetColor(::UnityEngine::Vector3  rgb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgb);
}
inline void MaterialCycler::MaterialCycler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MaterialCycler::MaterialCycler* MaterialCycler::MaterialCycler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MaterialCycler::MaterialCycler*>());
}
// Ctor Parameters []
constexpr ::MaterialCycler::MaterialCycler::MaterialCycler()   {
}
//  Writing Method size for method: ::MaterialCycler::MaterialCycler__timeOutDirty_d__28._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler__timeOutDirty_d__28::*)(int32_t)>(&::MaterialCycler::MaterialCycler__timeOutDirty_d__28::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cd1c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler__timeOutDirty_d__28*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler__timeOutDirty_d__28.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler__timeOutDirty_d__28::*)()>(&::MaterialCycler::MaterialCycler__timeOutDirty_d__28::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cd2034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler__timeOutDirty_d__28*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler__timeOutDirty_d__28.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MaterialCycler::MaterialCycler__timeOutDirty_d__28::*)()>(&::MaterialCycler::MaterialCycler__timeOutDirty_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cd2038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler__timeOutDirty_d__28*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler__timeOutDirty_d__28.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::MaterialCycler::MaterialCycler__timeOutDirty_d__28::*)()>(&::MaterialCycler::MaterialCycler__timeOutDirty_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd20c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler__timeOutDirty_d__28*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler__timeOutDirty_d__28.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler__timeOutDirty_d__28::*)()>(&::MaterialCycler::MaterialCycler__timeOutDirty_d__28::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cd20cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler__timeOutDirty_d__28*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler__timeOutDirty_d__28.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::MaterialCycler::MaterialCycler__timeOutDirty_d__28::*)()>(&::MaterialCycler::MaterialCycler__timeOutDirty_d__28::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd2104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler__timeOutDirty_d__28*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& MaterialCycler::MaterialCycler__timeOutDirty_d__28::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& MaterialCycler::MaterialCycler__timeOutDirty_d__28::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void MaterialCycler::MaterialCycler__timeOutDirty_d__28::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& MaterialCycler::MaterialCycler__timeOutDirty_d__28::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& MaterialCycler::MaterialCycler__timeOutDirty_d__28::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void MaterialCycler::MaterialCycler__timeOutDirty_d__28::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::MaterialCycler::MaterialCycler>& MaterialCycler::MaterialCycler__timeOutDirty_d__28::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::MaterialCycler::MaterialCycler> const& MaterialCycler::MaterialCycler__timeOutDirty_d__28::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void MaterialCycler::MaterialCycler__timeOutDirty_d__28::__cordl_internal_set___4__this(::UnityW<::MaterialCycler::MaterialCycler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void MaterialCycler::MaterialCycler__timeOutDirty_d__28::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler__timeOutDirty_d__28*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void MaterialCycler::MaterialCycler__timeOutDirty_d__28::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler__timeOutDirty_d__28*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool MaterialCycler::MaterialCycler__timeOutDirty_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler__timeOutDirty_d__28*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* MaterialCycler::MaterialCycler__timeOutDirty_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler__timeOutDirty_d__28*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void MaterialCycler::MaterialCycler__timeOutDirty_d__28::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler__timeOutDirty_d__28*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* MaterialCycler::MaterialCycler__timeOutDirty_d__28::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler__timeOutDirty_d__28*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::MaterialCycler::MaterialCycler__timeOutDirty_d__28* MaterialCycler::MaterialCycler__timeOutDirty_d__28::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MaterialCycler::MaterialCycler__timeOutDirty_d__28*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  MaterialCycler::MaterialCycler__timeOutDirty_d__28::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* MaterialCycler::MaterialCycler__timeOutDirty_d__28::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  MaterialCycler::MaterialCycler__timeOutDirty_d__28::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* MaterialCycler::MaterialCycler__timeOutDirty_d__28::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MaterialCycler::MaterialCycler__timeOutDirty_d__28::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MaterialCycler::MaterialCycler__timeOutDirty_d__28::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MaterialCycler::MaterialCycler__timeOutDirty_d__28::MaterialCycler__timeOutDirty_d__28()   {
}
//  Writing Method size for method: ::MaterialCycler::MaterialCycler_MaterialPack.get_Materials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>> (::MaterialCycler::MaterialCycler_MaterialPack::*)()>(&::MaterialCycler::MaterialCycler_MaterialPack::get_Materials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd2024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler_MaterialPack*>(),
                        {"get_Materials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCycler_MaterialPack._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCycler_MaterialPack::*)()>(&::MaterialCycler::MaterialCycler_MaterialPack::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd202c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler_MaterialPack*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& MaterialCycler::MaterialCycler_MaterialPack::__cordl_internal_get_materials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& MaterialCycler::MaterialCycler_MaterialPack::__cordl_internal_get_materials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materials;
}
constexpr void MaterialCycler::MaterialCycler_MaterialPack::__cordl_internal_set_materials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materials = value;
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>> MaterialCycler::MaterialCycler_MaterialPack::get_Materials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler_MaterialPack*>(),
                        {"get_Materials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>>>(this, ___internal_method);
}
inline void MaterialCycler::MaterialCycler_MaterialPack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCycler_MaterialPack*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MaterialCycler::MaterialCycler_MaterialPack* MaterialCycler::MaterialCycler_MaterialPack::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MaterialCycler::MaterialCycler_MaterialPack*>());
}
// Ctor Parameters []
constexpr ::MaterialCycler::MaterialCycler_MaterialPack::MaterialCycler_MaterialPack()   {
}

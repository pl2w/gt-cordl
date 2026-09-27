#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckCompositionEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/Rendering/zzzz__LckCompositionEngine_def.hpp"
#include "Liv/Lck/Rendering/zzzz__ILckCompositionLayer_def.hpp"
#include "Liv/Lck/Rendering/zzzz__LckCompositionEngine_def.hpp"
#include "Liv/Lck/Rendering/zzzz__LckCompositionLayer_def.hpp"
#include "Liv/Lck/Rendering/zzzz__LckCompositionProfile_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionEngine.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Liv::Lck::Rendering::LckCompositionEngine> (*)()>(&::Liv::Lck::Rendering::LckCompositionEngine::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d3e8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionEngine.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::Rendering::LckCompositionEngine*)>(&::Liv::Lck::Rendering::LckCompositionEngine::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d3e924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"set_Instance", {}, {::i2c::type_of<::Liv::Lck::Rendering::LckCompositionEngine*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionEngine.get_HasActiveLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Rendering::LckCompositionEngine::*)()>(&::Liv::Lck::Rendering::LckCompositionEngine::get_HasActiveLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3e97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"get_HasActiveLayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionEngine.set_HasActiveLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionEngine::*)(bool)>(&::Liv::Lck::Rendering::LckCompositionEngine::set_HasActiveLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3e984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"set_HasActiveLayers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionEngine.get_ActiveLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>* (::Liv::Lck::Rendering::LckCompositionEngine::*)()>(&::Liv::Lck::Rendering::LckCompositionEngine::get_ActiveLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3e98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"get_ActiveLayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionEngine.set_ActiveLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionEngine::*)(::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>*)>(&::Liv::Lck::Rendering::LckCompositionEngine::set_ActiveLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3e994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"set_ActiveLayers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionEngine.get_IsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Rendering::LckCompositionEngine::*)()>(&::Liv::Lck::Rendering::LckCompositionEngine::get_IsDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3e99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"get_IsDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionEngine.set_IsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionEngine::*)(bool)>(&::Liv::Lck::Rendering::LckCompositionEngine::set_IsDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3e9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"set_IsDirty", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionEngine.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionEngine::*)()>(&::Liv::Lck::Rendering::LckCompositionEngine::OnEnable)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9d3e9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionEngine.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionEngine::*)()>(&::Liv::Lck::Rendering::LckCompositionEngine::OnDisable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9d3ec80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionEngine.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionEngine::*)()>(&::Liv::Lck::Rendering::LckCompositionEngine::SetDirty)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9d3eb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"SetDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionEngine.UpdateActiveLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionEngine::*)()>(&::Liv::Lck::Rendering::LckCompositionEngine::UpdateActiveLayers)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x9d3ed5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"UpdateActiveLayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionEngine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionEngine::*)()>(&::Liv::Lck::Rendering::LckCompositionEngine::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d3efe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>& Liv::Lck::Rendering::LckCompositionEngine::__cordl_internal_get__compositionProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compositionProfile;
}
constexpr ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile> const& Liv::Lck::Rendering::LckCompositionEngine::__cordl_internal_get__compositionProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compositionProfile;
}
constexpr void Liv::Lck::Rendering::LckCompositionEngine::__cordl_internal_set__compositionProfile(::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____compositionProfile = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Liv::Lck::Rendering::LckCompositionEngine::__cordl_internal_get_DefaultBlendMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultBlendMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Liv::Lck::Rendering::LckCompositionEngine::__cordl_internal_get_DefaultBlendMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultBlendMaterial;
}
constexpr void Liv::Lck::Rendering::LckCompositionEngine::__cordl_internal_set_DefaultBlendMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultBlendMaterial = value;
}
constexpr bool& Liv::Lck::Rendering::LckCompositionEngine::__cordl_internal_get__HasActiveLayers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasActiveLayers_k__BackingField;
}
constexpr bool const& Liv::Lck::Rendering::LckCompositionEngine::__cordl_internal_get__HasActiveLayers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasActiveLayers_k__BackingField;
}
constexpr void Liv::Lck::Rendering::LckCompositionEngine::__cordl_internal_set__HasActiveLayers_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasActiveLayers_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>*& Liv::Lck::Rendering::LckCompositionEngine::__cordl_internal_get__ActiveLayers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveLayers_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>* const& Liv::Lck::Rendering::LckCompositionEngine::__cordl_internal_get__ActiveLayers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveLayers_k__BackingField;
}
constexpr void Liv::Lck::Rendering::LckCompositionEngine::__cordl_internal_set__ActiveLayers_k__BackingField(::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActiveLayers_k__BackingField = value;
}
constexpr bool& Liv::Lck::Rendering::LckCompositionEngine::__cordl_internal_get__IsDirty_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDirty_k__BackingField;
}
constexpr bool const& Liv::Lck::Rendering::LckCompositionEngine::__cordl_internal_get__IsDirty_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDirty_k__BackingField;
}
constexpr void Liv::Lck::Rendering::LckCompositionEngine::__cordl_internal_set__IsDirty_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDirty_k__BackingField = value;
}
inline void Liv::Lck::Rendering::LckCompositionEngine::setStaticF__Instance_k__BackingField(::UnityW<::Liv::Lck::Rendering::LckCompositionEngine>  value)  {
::cordl_internals::setStaticField<::UnityW<::Liv::Lck::Rendering::LckCompositionEngine>, "<Instance>k__BackingField", ::Liv::Lck::Rendering::LckCompositionEngine*>(std::forward<::UnityW<::Liv::Lck::Rendering::LckCompositionEngine>>(value));
}
inline ::UnityW<::Liv::Lck::Rendering::LckCompositionEngine> Liv::Lck::Rendering::LckCompositionEngine::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::Liv::Lck::Rendering::LckCompositionEngine>, "<Instance>k__BackingField", ::Liv::Lck::Rendering::LckCompositionEngine*>();
}
inline ::UnityW<::Liv::Lck::Rendering::LckCompositionEngine> Liv::Lck::Rendering::LckCompositionEngine::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Liv::Lck::Rendering::LckCompositionEngine>>(nullptr, ___internal_method);
}
inline void Liv::Lck::Rendering::LckCompositionEngine::set_Instance(::Liv::Lck::Rendering::LckCompositionEngine*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"set_Instance", {}, {::i2c::type_of<::Liv::Lck::Rendering::LckCompositionEngine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Liv::Lck::Rendering::LckCompositionEngine::get_HasActiveLayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"get_HasActiveLayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Rendering::LckCompositionEngine::set_HasActiveLayers(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"set_HasActiveLayers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>* Liv::Lck::Rendering::LckCompositionEngine::get_ActiveLayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"get_ActiveLayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>*>(this, ___internal_method);
}
inline void Liv::Lck::Rendering::LckCompositionEngine::set_ActiveLayers(::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"set_ActiveLayers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Liv::Lck::Rendering::LckCompositionEngine::get_IsDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"get_IsDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Rendering::LckCompositionEngine::set_IsDirty(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"set_IsDirty", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Rendering::LckCompositionEngine::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Rendering::LckCompositionEngine::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Rendering::LckCompositionEngine::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"SetDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Rendering::LckCompositionEngine::UpdateActiveLayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {"UpdateActiveLayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Rendering::LckCompositionEngine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Rendering::LckCompositionEngine* Liv::Lck::Rendering::LckCompositionEngine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Rendering::LckCompositionEngine*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Rendering::LckCompositionEngine::LckCompositionEngine()   {
}
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionEngine___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionEngine___c::*)()>(&::Liv::Lck::Rendering::LckCompositionEngine___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3f0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionEngine___c._SetDirty_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Rendering::LckCompositionEngine___c::*)(::Liv::Lck::Rendering::LckCompositionLayer*)>(&::Liv::Lck::Rendering::LckCompositionEngine___c::_SetDirty_b__20_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9d3f0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine___c*>(),
                        {"<SetDirty>b__20_0", {}, {::i2c::type_of<::Liv::Lck::Rendering::LckCompositionLayer*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Rendering::LckCompositionEngine___c::setStaticF___9(::Liv::Lck::Rendering::LckCompositionEngine___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::Rendering::LckCompositionEngine___c*, "<>9", ::Liv::Lck::Rendering::LckCompositionEngine___c*>(std::forward<::Liv::Lck::Rendering::LckCompositionEngine___c*>(value));
}
inline ::Liv::Lck::Rendering::LckCompositionEngine___c* Liv::Lck::Rendering::LckCompositionEngine___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::Rendering::LckCompositionEngine___c*, "<>9", ::Liv::Lck::Rendering::LckCompositionEngine___c*>();
}
inline void Liv::Lck::Rendering::LckCompositionEngine___c::setStaticF___9__20_0(::System::Func_2<::Liv::Lck::Rendering::LckCompositionLayer*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Liv::Lck::Rendering::LckCompositionLayer*,bool>*, "<>9__20_0", ::Liv::Lck::Rendering::LckCompositionEngine___c*>(std::forward<::System::Func_2<::Liv::Lck::Rendering::LckCompositionLayer*,bool>*>(value));
}
inline ::System::Func_2<::Liv::Lck::Rendering::LckCompositionLayer*,bool>* Liv::Lck::Rendering::LckCompositionEngine___c::getStaticF___9__20_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Liv::Lck::Rendering::LckCompositionLayer*,bool>*, "<>9__20_0", ::Liv::Lck::Rendering::LckCompositionEngine___c*>();
}
inline void Liv::Lck::Rendering::LckCompositionEngine___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Rendering::LckCompositionEngine___c::_SetDirty_b__20_0(::Liv::Lck::Rendering::LckCompositionLayer*  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionEngine___c*>(),
                        {"<SetDirty>b__20_0", {}, {::i2c::type_of<::Liv::Lck::Rendering::LckCompositionLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layer);
}
inline ::Liv::Lck::Rendering::LckCompositionEngine___c* Liv::Lck::Rendering::LckCompositionEngine___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Rendering::LckCompositionEngine___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Rendering::LckCompositionEngine___c::LckCompositionEngine___c()   {
}

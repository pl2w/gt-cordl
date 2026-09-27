#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerHandDataSource.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource_1_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerHandDataSource_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource`1_UpdateModeFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataSourceConfig_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource.get_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Input::ControllerHandDataSource::*)()>(&::Oculus::Interaction::Input::ControllerHandDataSource::get_Root)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa504ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"get_Root", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource.set_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerHandDataSource::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Input::ControllerHandDataSource::set_Root)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa504ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"set_Root", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource.get_RootIsLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerHandDataSource::*)()>(&::Oculus::Interaction::Input::ControllerHandDataSource::get_RootIsLocal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa504ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"get_RootIsLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource.set_RootIsLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerHandDataSource::*)(bool)>(&::Oculus::Interaction::Input::ControllerHandDataSource::set_RootIsLocal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa504ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"set_RootIsLocal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource.get_Joints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>> (::Oculus::Interaction::Input::ControllerHandDataSource::*)()>(&::Oculus::Interaction::Input::ControllerHandDataSource::get_Joints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa504ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"get_Joints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource.get_DataAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandDataAsset* (::Oculus::Interaction::Input::ControllerHandDataSource::*)()>(&::Oculus::Interaction::Input::ControllerHandDataSource::get_DataAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa504ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource.get_Config
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandDataSourceConfig* (::Oculus::Interaction::Input::ControllerHandDataSource::*)()>(&::Oculus::Interaction::Input::ControllerHandDataSource::get_Config)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa504f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"get_Config", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerHandDataSource::*)()>(&::Oculus::Interaction::Input::ControllerHandDataSource::Awake)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa504f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerHandDataSource::*)()>(&::Oculus::Interaction::Input::ControllerHandDataSource::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa50504c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource.UpdateConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerHandDataSource::*)()>(&::Oculus::Interaction::Input::ControllerHandDataSource::UpdateConfig)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa5050ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"UpdateConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerHandDataSource::*)()>(&::Oculus::Interaction::Input::ControllerHandDataSource::UpdateData)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0xa5051c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource.InjectAllControllerHandDataSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerHandDataSource::*)(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>, ::Oculus::Interaction::Input::IDataSource*, ::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*, ::ArrayW<::UnityEngine::Transform*>)>(&::Oculus::Interaction::Input::ControllerHandDataSource::InjectAllControllerHandDataSource)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa5055ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"InjectAllControllerHandDataSource", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource.InjectControllerSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerHandDataSource::*)(::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*)>(&::Oculus::Interaction::Input::ControllerHandDataSource::InjectControllerSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50567c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"InjectControllerSource", {}, {::i2c::type_of<::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource.InjectBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerHandDataSource::*)(::ArrayW<::UnityEngine::Transform*>)>(&::Oculus::Interaction::Input::ControllerHandDataSource::InjectBones)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa505684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"InjectBones", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource.InjectJointTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerHandDataSource::*)(::ArrayW<::UnityEngine::Transform*>)>(&::Oculus::Interaction::Input::ControllerHandDataSource::InjectJointTransforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50568c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"InjectJointTransforms", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerHandDataSource::*)()>(&::Oculus::Interaction::Input::ControllerHandDataSource::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa505694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerHandDataSource._Start_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerHandDataSource::*)()>(&::Oculus::Interaction::Input::ControllerHandDataSource::_Start_b__21_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa505894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"<Start>b__21_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Input::ControllerDataAsset*>& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__controllerSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerSource;
}
constexpr ::UnityW<::Oculus::Interaction::Input::ControllerDataAsset*> const& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__controllerSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerSource;
}
constexpr void Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_set__controllerSource(::UnityW<::Oculus::Interaction::Input::ControllerDataAsset*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerSource = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr void Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_set__root(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____root = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__openXRRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openXRRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__openXRRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openXRRoot;
}
constexpr void Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_set__openXRRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openXRRoot = value;
}
constexpr bool& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__rootIsLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootIsLocal;
}
constexpr bool const& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__rootIsLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootIsLocal;
}
constexpr void Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_set__rootIsLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootIsLocal = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__jointTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointTransforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__jointTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointTransforms;
}
constexpr void Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_set__jointTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointTransforms = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__openXRJointTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openXRJointTransforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__openXRJointTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openXRJointTransforms;
}
constexpr void Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_set__openXRJointTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openXRJointTransforms = value;
}
constexpr ::Oculus::Interaction::Input::HandDataSourceConfig*& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr ::Oculus::Interaction::Input::HandDataSourceConfig* const& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr void Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_set__config(::Oculus::Interaction::Input::HandDataSourceConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____config = value;
}
constexpr ::Oculus::Interaction::Input::HandDataAsset*& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__handDataAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handDataAsset;
}
constexpr ::Oculus::Interaction::Input::HandDataAsset* const& Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_get__handDataAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handDataAsset;
}
constexpr void Oculus::Interaction::Input::ControllerHandDataSource::__cordl_internal_set__handDataAsset(::Oculus::Interaction::Input::HandDataAsset*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handDataAsset = value;
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Input::ControllerHandDataSource::get_Root()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"get_Root", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerHandDataSource::set_Root(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"set_Root", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Input::ControllerHandDataSource::get_RootIsLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"get_RootIsLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerHandDataSource::set_RootIsLocal(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"set_RootIsLocal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> Oculus::Interaction::Input::ControllerHandDataSource::get_Joints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"get_Joints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>>>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandDataAsset* Oculus::Interaction::Input::ControllerHandDataSource::get_DataAsset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandDataAsset*>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandDataSourceConfig* Oculus::Interaction::Input::ControllerHandDataSource::get_Config()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"get_Config", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandDataSourceConfig*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerHandDataSource::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerHandDataSource::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerHandDataSource::UpdateConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"UpdateConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerHandDataSource::UpdateData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerHandDataSource::InjectAllControllerHandDataSource(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*  controllerSource, ::ArrayW<::UnityEngine::Transform*>  jointTransforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"InjectAllControllerHandDataSource", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMode, updateAfter, controllerSource, jointTransforms);
}
inline void Oculus::Interaction::Input::ControllerHandDataSource::InjectControllerSource(::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*  controllerSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"InjectControllerSource", {}, {::i2c::type_of<::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerSource);
}
inline void Oculus::Interaction::Input::ControllerHandDataSource::InjectBones(::ArrayW<::UnityEngine::Transform*>  joints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"InjectBones", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joints);
}
inline void Oculus::Interaction::Input::ControllerHandDataSource::InjectJointTransforms(::ArrayW<::UnityEngine::Transform*>  jointTransforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"InjectJointTransforms", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointTransforms);
}
inline void Oculus::Interaction::Input::ControllerHandDataSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerHandDataSource::_Start_b__21_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerHandDataSource*>(),
                        {"<Start>b__21_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::ControllerHandDataSource* Oculus::Interaction::Input::ControllerHandDataSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::ControllerHandDataSource*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::ControllerHandDataSource::ControllerHandDataSource()   {
}

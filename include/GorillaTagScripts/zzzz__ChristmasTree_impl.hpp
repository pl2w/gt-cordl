#pragma once
// IWYU pragma private; include "GorillaTagScripts/ChristmasTree.hpp"
#include "Fusion/zzzz__NetworkBool_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
#include "GorillaTagScripts/zzzz__ChristmasTree_def.hpp"
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include "GorillaTagScripts/zzzz__AttachPoint_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::ChristmasTree.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ChristmasTree::*)()>(&::GorillaTagScripts::ChristmasTree::Awake)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5bb58e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                    {::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ChristmasTree.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ChristmasTree::*)()>(&::GorillaTagScripts::ChristmasTree::Update)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5bb5b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ChristmasTree.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ChristmasTree::*)()>(&::GorillaTagScripts::ChristmasTree::OnDestroy)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5bb5bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ChristmasTree.UpdateHangers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ChristmasTree::*)()>(&::GorillaTagScripts::ChristmasTree::UpdateHangers)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5bb5ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                        {"UpdateHangers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ChristmasTree.updateLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ChristmasTree::*)(bool)>(&::GorillaTagScripts::ChristmasTree::updateLight)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5bb6064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                        {"updateLight", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ChristmasTree.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBool (::GorillaTagScripts::ChristmasTree::*)()>(&::GorillaTagScripts::ChristmasTree::get_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bb610c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ChristmasTree.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ChristmasTree::*)(::Fusion::NetworkBool)>(&::GorillaTagScripts::ChristmasTree::set_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bb6168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                        {"set_Data", {}, {::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ChristmasTree.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ChristmasTree::*)()>(&::GorillaTagScripts::ChristmasTree::WriteDataFusion)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bb61c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                    {::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ChristmasTree.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ChristmasTree::*)()>(&::GorillaTagScripts::ChristmasTree::ReadDataFusion)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5bb61ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                    {::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ChristmasTree.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ChristmasTree::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::ChristmasTree::WriteDataPUN)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bb6234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                    {::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ChristmasTree.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ChristmasTree::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::ChristmasTree::ReadDataPUN)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5bb629c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                    {::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ChristmasTree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ChristmasTree::*)()>(&::GorillaTagScripts::ChristmasTree::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5bb6344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ChristmasTree.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ChristmasTree::*)(bool)>(&::GorillaTagScripts::ChristmasTree::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bb63d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                    {::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ChristmasTree.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ChristmasTree::*)()>(&::GorillaTagScripts::ChristmasTree::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bb63f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                    {::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::ChristmasTree::__cordl_internal_get_hangers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hangers;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::ChristmasTree::__cordl_internal_get_hangers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hangers;
}
constexpr void GorillaTagScripts::ChristmasTree::__cordl_internal_set_hangers(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hangers = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::ChristmasTree::__cordl_internal_get_lights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lights;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::ChristmasTree::__cordl_internal_get_lights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lights;
}
constexpr void GorillaTagScripts::ChristmasTree::__cordl_internal_set_lights(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lights = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::ChristmasTree::__cordl_internal_get_topOrnament()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topOrnament;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::ChristmasTree::__cordl_internal_get_topOrnament() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topOrnament;
}
constexpr void GorillaTagScripts::ChristmasTree::__cordl_internal_set_topOrnament(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topOrnament = value;
}
constexpr float_t& GorillaTagScripts::ChristmasTree::__cordl_internal_get_spinSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeed;
}
constexpr float_t const& GorillaTagScripts::ChristmasTree::__cordl_internal_get_spinSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinSpeed;
}
constexpr void GorillaTagScripts::ChristmasTree::__cordl_internal_set_spinSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinSpeed = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*& GorillaTagScripts::ChristmasTree::__cordl_internal_get_attachPointsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachPointsList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>* const& GorillaTagScripts::ChristmasTree::__cordl_internal_get_attachPointsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachPointsList;
}
constexpr void GorillaTagScripts::ChristmasTree::__cordl_internal_set_attachPointsList(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachPointsList = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GorillaTagScripts::ChristmasTree::__cordl_internal_get_lightRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GorillaTagScripts::ChristmasTree::__cordl_internal_get_lightRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightRenderers;
}
constexpr void GorillaTagScripts::ChristmasTree::__cordl_internal_set_lightRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightRenderers = value;
}
constexpr bool& GorillaTagScripts::ChristmasTree::__cordl_internal_get_wasActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasActive;
}
constexpr bool const& GorillaTagScripts::ChristmasTree::__cordl_internal_get_wasActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasActive;
}
constexpr void GorillaTagScripts::ChristmasTree::__cordl_internal_set_wasActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasActive = value;
}
constexpr bool& GorillaTagScripts::ChristmasTree::__cordl_internal_get_isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr bool const& GorillaTagScripts::ChristmasTree::__cordl_internal_get_isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr void GorillaTagScripts::ChristmasTree::__cordl_internal_set_isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActive = value;
}
constexpr bool& GorillaTagScripts::ChristmasTree::__cordl_internal_get_spinTheTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinTheTop;
}
constexpr bool const& GorillaTagScripts::ChristmasTree::__cordl_internal_get_spinTheTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinTheTop;
}
constexpr void GorillaTagScripts::ChristmasTree::__cordl_internal_set_spinTheTop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinTheTop = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GorillaTagScripts::ChristmasTree::__cordl_internal_get_lightsOffMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightsOffMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaTagScripts::ChristmasTree::__cordl_internal_get_lightsOffMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightsOffMaterial;
}
constexpr void GorillaTagScripts::ChristmasTree::__cordl_internal_set_lightsOffMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightsOffMaterial = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GorillaTagScripts::ChristmasTree::__cordl_internal_get_lightsOnMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightsOnMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GorillaTagScripts::ChristmasTree::__cordl_internal_get_lightsOnMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightsOnMaterials;
}
constexpr void GorillaTagScripts::ChristmasTree::__cordl_internal_set_lightsOnMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightsOnMaterials = value;
}
constexpr ::Fusion::NetworkBool& GorillaTagScripts::ChristmasTree::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::Fusion::NetworkBool const& GorillaTagScripts::ChristmasTree::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GorillaTagScripts::ChristmasTree::__cordl_internal_set__Data(::Fusion::NetworkBool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GorillaTagScripts::ChristmasTree::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::ChristmasTree::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::ChristmasTree::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::ChristmasTree::UpdateHangers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                        {"UpdateHangers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::ChristmasTree::updateLight(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                        {"updateLight", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline ::Fusion::NetworkBool GorillaTagScripts::ChristmasTree::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBool>(this, ___internal_method);
}
inline void GorillaTagScripts::ChristmasTree::set_Data(::Fusion::NetworkBool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                        {"set_Data", {}, {::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::ChristmasTree::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::ChristmasTree::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::ChristmasTree::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTagScripts::ChristmasTree::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTagScripts::ChristmasTree::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::ChristmasTree::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GorillaTagScripts::ChristmasTree::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ChristmasTree*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::ChristmasTree* GorillaTagScripts::ChristmasTree::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::ChristmasTree*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::ChristmasTree::ChristmasTree()   {
}

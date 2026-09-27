#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneInfo.hpp"
#include "Fusion/zzzz__NetworkLoadSceneParameters_impl.hpp"
#include "Fusion/zzzz__NetworkSceneInfoDefaultFlags_impl.hpp"
#include "Fusion/zzzz__SceneRef_impl.hpp"
#include "Fusion/zzzz__NetworkSceneInfo_def.hpp"
#include "Fusion/zzzz__FixedArray_1_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkLoadSceneParametersFlags_def.hpp"
#include "Fusion/zzzz__NetworkLoadSceneParameters_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.get_Scenes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::FixedArray_1<::Fusion::SceneRef> (::Fusion::NetworkSceneInfo::*)()>(&::Fusion::NetworkSceneInfo::get_Scenes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5fde718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"get_Scenes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.get_SceneParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::FixedArray_1<::Fusion::NetworkLoadSceneParameters> (::Fusion::NetworkSceneInfo::*)()>(&::Fusion::NetworkSceneInfo::get_SceneParams)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5fde774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"get_SceneParams", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkSceneInfo::*)(::Fusion::SceneRef, ::Fusion::NetworkLoadSceneParameters)>(&::Fusion::NetworkSceneInfo::IndexOf)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5fde7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"IndexOf", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::Fusion::NetworkLoadSceneParameters>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkSceneInfo::*)(::System::ValueTuple_2<::Fusion::SceneRef,::Fusion::NetworkLoadSceneParameters>)>(&::Fusion::NetworkSceneInfo::IndexOf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fde8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::ValueTuple_2<::Fusion::SceneRef,::Fusion::NetworkLoadSceneParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.get_SceneCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkSceneInfo::*)()>(&::Fusion::NetworkSceneInfo::get_SceneCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fde768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"get_SceneCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.set_SceneCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneInfo::*)(int32_t)>(&::Fusion::NetworkSceneInfo::set_SceneCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fde8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"set_SceneCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkSceneInfo::*)()>(&::Fusion::NetworkSceneInfo::get_Version)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fde8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.set_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneInfo::*)(int32_t)>(&::Fusion::NetworkSceneInfo::set_Version)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fde8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"set_Version", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.AddSceneRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkSceneInfo::*)(::Fusion::SceneRef, ::UnityEngine::SceneManagement::LoadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode, bool)>(&::Fusion::NetworkSceneInfo::AddSceneRef)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fde900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"AddSceneRef", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::UnityEngine::SceneManagement::LocalPhysicsMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.AddSceneRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkSceneInfo::*)(::Fusion::SceneRef, ::Fusion::NetworkLoadSceneParametersFlags)>(&::Fusion::NetworkSceneInfo::AddSceneRef)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5fde924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"AddSceneRef", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::Fusion::NetworkLoadSceneParametersFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.RemoveSceneRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneInfo::*)(::Fusion::SceneRef)>(&::Fusion::NetworkSceneInfo::RemoveSceneRef)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5fdea9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"RemoveSceneRef", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkSceneInfo::*)()>(&::Fusion::NetworkSceneInfo::ToString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5fdec90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                    {::i2c::class_of<::Fusion::NetworkSceneInfo>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneInfo::*)(::Fusion::NetworkSceneInfo)>(&::Fusion::NetworkSceneInfo::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fded80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkSceneInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneInfo::*)(::System::Object*)>(&::Fusion::NetworkSceneInfo::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5fdeda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                    {::i2c::class_of<::Fusion::NetworkSceneInfo>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkSceneInfo::*)()>(&::Fusion::NetworkSceneInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5fdee6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                    {::i2c::class_of<::Fusion::NetworkSceneInfo>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneInfo.op_Implicit___Fusion__NetworkSceneInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneInfo (*)(::Fusion::SceneRef)>(&::Fusion::NetworkSceneInfo::op_Implicit___Fusion__NetworkSceneInfo)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fdeeb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkSceneInfoDefaultFlags& Fusion::NetworkSceneInfo::__cordl_internal_get__flags()  {
return this->____flags;
}
constexpr ::Fusion::NetworkSceneInfoDefaultFlags const& Fusion::NetworkSceneInfo::__cordl_internal_get__flags() const {
return this->____flags;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__flags(::Fusion::NetworkSceneInfoDefaultFlags  value)  {
this->____flags = value;
}
constexpr ::Fusion::SceneRef& Fusion::NetworkSceneInfo::__cordl_internal_get__scene0()  {
return this->____scene0;
}
constexpr ::Fusion::SceneRef const& Fusion::NetworkSceneInfo::__cordl_internal_get__scene0() const {
return this->____scene0;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__scene0(::Fusion::SceneRef  value)  {
this->____scene0 = value;
}
constexpr ::Fusion::SceneRef& Fusion::NetworkSceneInfo::__cordl_internal_get__scene1()  {
return this->____scene1;
}
constexpr ::Fusion::SceneRef const& Fusion::NetworkSceneInfo::__cordl_internal_get__scene1() const {
return this->____scene1;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__scene1(::Fusion::SceneRef  value)  {
this->____scene1 = value;
}
constexpr ::Fusion::SceneRef& Fusion::NetworkSceneInfo::__cordl_internal_get__scene2()  {
return this->____scene2;
}
constexpr ::Fusion::SceneRef const& Fusion::NetworkSceneInfo::__cordl_internal_get__scene2() const {
return this->____scene2;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__scene2(::Fusion::SceneRef  value)  {
this->____scene2 = value;
}
constexpr ::Fusion::SceneRef& Fusion::NetworkSceneInfo::__cordl_internal_get__scene3()  {
return this->____scene3;
}
constexpr ::Fusion::SceneRef const& Fusion::NetworkSceneInfo::__cordl_internal_get__scene3() const {
return this->____scene3;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__scene3(::Fusion::SceneRef  value)  {
this->____scene3 = value;
}
constexpr ::Fusion::SceneRef& Fusion::NetworkSceneInfo::__cordl_internal_get__scene4()  {
return this->____scene4;
}
constexpr ::Fusion::SceneRef const& Fusion::NetworkSceneInfo::__cordl_internal_get__scene4() const {
return this->____scene4;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__scene4(::Fusion::SceneRef  value)  {
this->____scene4 = value;
}
constexpr ::Fusion::SceneRef& Fusion::NetworkSceneInfo::__cordl_internal_get__scene5()  {
return this->____scene5;
}
constexpr ::Fusion::SceneRef const& Fusion::NetworkSceneInfo::__cordl_internal_get__scene5() const {
return this->____scene5;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__scene5(::Fusion::SceneRef  value)  {
this->____scene5 = value;
}
constexpr ::Fusion::SceneRef& Fusion::NetworkSceneInfo::__cordl_internal_get__scene6()  {
return this->____scene6;
}
constexpr ::Fusion::SceneRef const& Fusion::NetworkSceneInfo::__cordl_internal_get__scene6() const {
return this->____scene6;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__scene6(::Fusion::SceneRef  value)  {
this->____scene6 = value;
}
constexpr ::Fusion::SceneRef& Fusion::NetworkSceneInfo::__cordl_internal_get__scene7()  {
return this->____scene7;
}
constexpr ::Fusion::SceneRef const& Fusion::NetworkSceneInfo::__cordl_internal_get__scene7() const {
return this->____scene7;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__scene7(::Fusion::SceneRef  value)  {
this->____scene7 = value;
}
constexpr ::Fusion::NetworkLoadSceneParameters& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta0()  {
return this->____sceneMeta0;
}
constexpr ::Fusion::NetworkLoadSceneParameters const& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta0() const {
return this->____sceneMeta0;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__sceneMeta0(::Fusion::NetworkLoadSceneParameters  value)  {
this->____sceneMeta0 = value;
}
constexpr ::Fusion::NetworkLoadSceneParameters& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta1()  {
return this->____sceneMeta1;
}
constexpr ::Fusion::NetworkLoadSceneParameters const& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta1() const {
return this->____sceneMeta1;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__sceneMeta1(::Fusion::NetworkLoadSceneParameters  value)  {
this->____sceneMeta1 = value;
}
constexpr ::Fusion::NetworkLoadSceneParameters& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta2()  {
return this->____sceneMeta2;
}
constexpr ::Fusion::NetworkLoadSceneParameters const& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta2() const {
return this->____sceneMeta2;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__sceneMeta2(::Fusion::NetworkLoadSceneParameters  value)  {
this->____sceneMeta2 = value;
}
constexpr ::Fusion::NetworkLoadSceneParameters& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta3()  {
return this->____sceneMeta3;
}
constexpr ::Fusion::NetworkLoadSceneParameters const& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta3() const {
return this->____sceneMeta3;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__sceneMeta3(::Fusion::NetworkLoadSceneParameters  value)  {
this->____sceneMeta3 = value;
}
constexpr ::Fusion::NetworkLoadSceneParameters& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta4()  {
return this->____sceneMeta4;
}
constexpr ::Fusion::NetworkLoadSceneParameters const& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta4() const {
return this->____sceneMeta4;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__sceneMeta4(::Fusion::NetworkLoadSceneParameters  value)  {
this->____sceneMeta4 = value;
}
constexpr ::Fusion::NetworkLoadSceneParameters& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta5()  {
return this->____sceneMeta5;
}
constexpr ::Fusion::NetworkLoadSceneParameters const& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta5() const {
return this->____sceneMeta5;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__sceneMeta5(::Fusion::NetworkLoadSceneParameters  value)  {
this->____sceneMeta5 = value;
}
constexpr ::Fusion::NetworkLoadSceneParameters& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta6()  {
return this->____sceneMeta6;
}
constexpr ::Fusion::NetworkLoadSceneParameters const& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta6() const {
return this->____sceneMeta6;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__sceneMeta6(::Fusion::NetworkLoadSceneParameters  value)  {
this->____sceneMeta6 = value;
}
constexpr ::Fusion::NetworkLoadSceneParameters& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta7()  {
return this->____sceneMeta7;
}
constexpr ::Fusion::NetworkLoadSceneParameters const& Fusion::NetworkSceneInfo::__cordl_internal_get__sceneMeta7() const {
return this->____sceneMeta7;
}
constexpr void Fusion::NetworkSceneInfo::__cordl_internal_set__sceneMeta7(::Fusion::NetworkLoadSceneParameters  value)  {
this->____sceneMeta7 = value;
}
inline ::Fusion::FixedArray_1<::Fusion::SceneRef> Fusion::NetworkSceneInfo::get_Scenes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"get_Scenes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::FixedArray_1<::Fusion::SceneRef>>(*this, ___internal_method);
}
inline ::Fusion::FixedArray_1<::Fusion::NetworkLoadSceneParameters> Fusion::NetworkSceneInfo::get_SceneParams()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"get_SceneParams", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::FixedArray_1<::Fusion::NetworkLoadSceneParameters>>(*this, ___internal_method);
}
inline int32_t Fusion::NetworkSceneInfo::IndexOf(::Fusion::SceneRef  sceneRef, ::Fusion::NetworkLoadSceneParameters  sceneParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"IndexOf", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::Fusion::NetworkLoadSceneParameters>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, sceneRef, sceneParams);
}
inline int32_t Fusion::NetworkSceneInfo::IndexOf(/* [TupleElementNames(new[] { "SceneRef", "SceneParams" })] */ ::System::ValueTuple_2<::Fusion::SceneRef,::Fusion::NetworkLoadSceneParameters>  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::ValueTuple_2<::Fusion::SceneRef,::Fusion::NetworkLoadSceneParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, scene);
}
inline int32_t Fusion::NetworkSceneInfo::get_SceneCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"get_SceneCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Fusion::NetworkSceneInfo::set_SceneCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"set_SceneCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Fusion::NetworkSceneInfo::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Fusion::NetworkSceneInfo::set_Version(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"set_Version", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Fusion::NetworkSceneInfo::AddSceneRef(::Fusion::SceneRef  sceneRef, ::UnityEngine::SceneManagement::LoadSceneMode  loadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode  localPhysicsMode, bool  activeOnLoad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"AddSceneRef", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::UnityEngine::SceneManagement::LocalPhysicsMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, sceneRef, loadSceneMode, localPhysicsMode, activeOnLoad);
}
inline int32_t Fusion::NetworkSceneInfo::AddSceneRef(::Fusion::SceneRef  sceneRef, ::Fusion::NetworkLoadSceneParametersFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"AddSceneRef", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::Fusion::NetworkLoadSceneParametersFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, sceneRef, flags);
}
inline bool Fusion::NetworkSceneInfo::RemoveSceneRef(::Fusion::SceneRef  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"RemoveSceneRef", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, sceneRef);
}
inline ::StringW Fusion::NetworkSceneInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneInfo>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Fusion::NetworkSceneInfo::Equals(::Fusion::NetworkSceneInfo  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkSceneInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::NetworkSceneInfo::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneInfo>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::NetworkSceneInfo::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneInfo>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Fusion::NetworkSceneInfo Fusion::NetworkSceneInfo::op_Implicit___Fusion__NetworkSceneInfo(::Fusion::SceneRef  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneInfo>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneInfo>(nullptr, ___internal_method, sceneRef);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::NetworkSceneInfo::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::NetworkSceneInfo::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkSceneInfo>"
constexpr  Fusion::NetworkSceneInfo::operator ::System::IEquatable_1<::Fusion::NetworkSceneInfo>*()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkSceneInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkSceneInfo>"
constexpr ::System::IEquatable_1<::Fusion::NetworkSceneInfo>* Fusion::NetworkSceneInfo::i___System__IEquatable_1___Fusion__NetworkSceneInfo_()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkSceneInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_flags", ty: "::Fusion::NetworkSceneInfoDefaultFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_scene0", ty: "::Fusion::SceneRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_scene1", ty: "::Fusion::SceneRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_scene2", ty: "::Fusion::SceneRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_scene3", ty: "::Fusion::SceneRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_scene4", ty: "::Fusion::SceneRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_scene5", ty: "::Fusion::SceneRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_scene6", ty: "::Fusion::SceneRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_scene7", ty: "::Fusion::SceneRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sceneMeta0", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sceneMeta1", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sceneMeta2", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sceneMeta3", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sceneMeta4", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sceneMeta5", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sceneMeta6", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sceneMeta7", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkSceneInfo::NetworkSceneInfo(::Fusion::NetworkSceneInfoDefaultFlags  _flags, ::Fusion::SceneRef  _scene0, ::Fusion::SceneRef  _scene1, ::Fusion::SceneRef  _scene2, ::Fusion::SceneRef  _scene3, ::Fusion::SceneRef  _scene4, ::Fusion::SceneRef  _scene5, ::Fusion::SceneRef  _scene6, ::Fusion::SceneRef  _scene7, ::Fusion::NetworkLoadSceneParameters  _sceneMeta0, ::Fusion::NetworkLoadSceneParameters  _sceneMeta1, ::Fusion::NetworkLoadSceneParameters  _sceneMeta2, ::Fusion::NetworkLoadSceneParameters  _sceneMeta3, ::Fusion::NetworkLoadSceneParameters  _sceneMeta4, ::Fusion::NetworkLoadSceneParameters  _sceneMeta5, ::Fusion::NetworkLoadSceneParameters  _sceneMeta6, ::Fusion::NetworkLoadSceneParameters  _sceneMeta7) noexcept  {
this->_flags = _flags;
this->_scene0 = _scene0;
this->_scene1 = _scene1;
this->_scene2 = _scene2;
this->_scene3 = _scene3;
this->_scene4 = _scene4;
this->_scene5 = _scene5;
this->_scene6 = _scene6;
this->_scene7 = _scene7;
this->_sceneMeta0 = _sceneMeta0;
this->_sceneMeta1 = _sceneMeta1;
this->_sceneMeta2 = _sceneMeta2;
this->_sceneMeta3 = _sceneMeta3;
this->_sceneMeta4 = _sceneMeta4;
this->_sceneMeta5 = _sceneMeta5;
this->_sceneMeta6 = _sceneMeta6;
this->_sceneMeta7 = _sceneMeta7;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneInfo::NetworkSceneInfo()   {
}

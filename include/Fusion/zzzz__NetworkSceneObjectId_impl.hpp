#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneObjectId.hpp"
#include "Fusion/zzzz__NetworkSceneLoadId_impl.hpp"
#include "Fusion/zzzz__SceneRef_impl.hpp"
#include "Fusion/zzzz__NetworkSceneObjectId_def.hpp"
#include "Fusion/zzzz__NetworkSceneLoadId_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkSceneObjectId.get_SceneLoadId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkSceneObjectId::*)()>(&::Fusion::NetworkSceneObjectId::get_SceneLoadId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdf250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneObjectId>(),
                        {"get_SceneLoadId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneObjectId._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneObjectId::*)(::Fusion::SceneRef, int32_t, ::Fusion::NetworkSceneLoadId)>(&::Fusion::NetworkSceneObjectId::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fdf258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneObjectId>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkSceneLoadId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneObjectId.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneObjectId::*)()>(&::Fusion::NetworkSceneObjectId::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdf264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneObjectId>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneObjectId.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkSceneObjectId::*)()>(&::Fusion::NetworkSceneObjectId::ToString)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fdf26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneObjectId>(),
                    {::i2c::class_of<::Fusion::NetworkSceneObjectId>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneObjectId.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneObjectId::*)(::Fusion::NetworkSceneObjectId)>(&::Fusion::NetworkSceneObjectId::Equals)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fdf324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneObjectId>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkSceneObjectId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneObjectId.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneObjectId::*)(::System::Object*)>(&::Fusion::NetworkSceneObjectId::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5fdf378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneObjectId>(),
                    {::i2c::class_of<::Fusion::NetworkSceneObjectId>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneObjectId.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkSceneObjectId::*)()>(&::Fusion::NetworkSceneObjectId::GetHashCode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fdf418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneObjectId>(),
                    {::i2c::class_of<::Fusion::NetworkSceneObjectId>(), 2}
                ));
    return ___internal_method;
  }
};
inline int32_t Fusion::NetworkSceneObjectId::get_SceneLoadId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneObjectId>(),
                        {"get_SceneLoadId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Fusion::NetworkSceneObjectId::_ctor(::Fusion::SceneRef  scene, int32_t  objectId, ::Fusion::NetworkSceneLoadId  loadId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneObjectId>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkSceneLoadId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, scene, objectId, loadId);
}
inline bool Fusion::NetworkSceneObjectId::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneObjectId>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW Fusion::NetworkSceneObjectId::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneObjectId>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Fusion::NetworkSceneObjectId::Equals(::Fusion::NetworkSceneObjectId  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneObjectId>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkSceneObjectId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::NetworkSceneObjectId::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneObjectId>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::NetworkSceneObjectId::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneObjectId>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkSceneObjectId>"
constexpr  Fusion::NetworkSceneObjectId::operator ::System::IEquatable_1<::Fusion::NetworkSceneObjectId>*()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkSceneObjectId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkSceneObjectId>"
constexpr ::System::IEquatable_1<::Fusion::NetworkSceneObjectId>* Fusion::NetworkSceneObjectId::i___System__IEquatable_1___Fusion__NetworkSceneObjectId_()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkSceneObjectId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Scene", ty: "::Fusion::SceneRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LoadId", ty: "::Fusion::NetworkSceneLoadId", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkSceneObjectId::NetworkSceneObjectId(::Fusion::SceneRef  Scene, int32_t  ObjectId, ::Fusion::NetworkSceneLoadId  LoadId) noexcept  {
this->Scene = Scene;
this->ObjectId = ObjectId;
this->LoadId = LoadId;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneObjectId::NetworkSceneObjectId()   {
}

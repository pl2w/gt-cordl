#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshLinkInstance.hpp"
#include "UnityEngine/AI/zzzz__NavMeshLinkInstance_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLinkInstance.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AI::NavMeshLinkInstance::*)()>(&::UnityEngine::AI::NavMeshLinkInstance::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb520364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkInstance>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLinkInstance.set_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLinkInstance::*)(int32_t)>(&::UnityEngine::AI::NavMeshLinkInstance::set_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb52036c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkInstance>(),
                        {"set_id", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLinkInstance.get_valid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshLinkInstance::*)()>(&::UnityEngine::AI::NavMeshLinkInstance::get_valid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb520374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkInstance>(),
                        {"get_valid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLinkInstance.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLinkInstance::*)()>(&::UnityEngine::AI::NavMeshLinkInstance::Remove)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5203ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkInstance>(),
                        {"Remove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLinkInstance.set_owner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLinkInstance::*)(::UnityEngine::Object*)>(&::UnityEngine::AI::NavMeshLinkInstance::set_owner)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb520464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkInstance>(),
                        {"set_owner", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::AI::NavMeshLinkInstance::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkInstance>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLinkInstance::set_id(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkInstance>(),
                        {"set_id", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::AI::NavMeshLinkInstance::get_valid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkInstance>(),
                        {"get_valid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLinkInstance::Remove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkInstance>(),
                        {"Remove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshLinkInstance::set_owner(::UnityEngine::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkInstance>(),
                        {"set_owner", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::AI::NavMeshLinkInstance::NavMeshLinkInstance(int32_t  _id_k__BackingField) noexcept  {
this->_id_k__BackingField = _id_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshLinkInstance::NavMeshLinkInstance()   {
}

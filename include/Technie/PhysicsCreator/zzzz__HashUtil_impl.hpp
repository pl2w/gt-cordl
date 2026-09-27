#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/HashUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__HashUtil_def.hpp"
#include "Technie/PhysicsCreator/zzzz__Hash160_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::HashUtil.CalcHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Hash160* (*)(::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::HashUtil::CalcHash)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xadc8d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::HashUtil*>(),
                        {"CalcHash", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::HashUtil.CalcHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Hash160* (*)(::StringW)>(&::Technie::PhysicsCreator::HashUtil::CalcHash)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xadc9134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::HashUtil*>(),
                        {"CalcHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::HashUtil.ToBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Vector3)>(&::Technie::PhysicsCreator::HashUtil::ToBytes)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xadc9054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::HashUtil*>(),
                        {"ToBytes", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::HashUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::HashUtil::*)()>(&::Technie::PhysicsCreator::HashUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadc9204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::HashUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Technie::PhysicsCreator::Hash160* Technie::PhysicsCreator::HashUtil::CalcHash(::UnityEngine::Mesh*  srcMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::HashUtil*>(),
                        {"CalcHash", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Hash160*>(nullptr, ___internal_method, srcMesh);
}
inline ::Technie::PhysicsCreator::Hash160* Technie::PhysicsCreator::HashUtil::CalcHash(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::HashUtil*>(),
                        {"CalcHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Hash160*>(nullptr, ___internal_method, input);
}
inline ::ArrayW<uint8_t> Technie::PhysicsCreator::HashUtil::ToBytes(::UnityEngine::Vector3  vec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::HashUtil*>(),
                        {"ToBytes", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, vec);
}
inline void Technie::PhysicsCreator::HashUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::HashUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::HashUtil* Technie::PhysicsCreator::HashUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::HashUtil*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::HashUtil::HashUtil()   {
}

#pragma once
// IWYU pragma private; include "BuildSafe/ObjectFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BuildSafe/zzzz__ObjectFactory_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
//  Writing Method size for method: ::BuildSafe::ObjectFactory.add_componentWasAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Component>>*)>(&::BuildSafe::ObjectFactory::add_componentWasAdded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4ec98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::ObjectFactory*>(),
                        {"add_componentWasAdded", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Component>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::ObjectFactory.remove_componentWasAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Component>>*)>(&::BuildSafe::ObjectFactory::remove_componentWasAdded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4ec9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::ObjectFactory*>(),
                        {"remove_componentWasAdded", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Component>>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void BuildSafe::ObjectFactory::add_componentWasAdded(::System::Action_1<::UnityW<::UnityEngine::Component>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::ObjectFactory*>(),
                        {"add_componentWasAdded", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Component>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void BuildSafe::ObjectFactory::remove_componentWasAdded(::System::Action_1<::UnityW<::UnityEngine::Component>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::ObjectFactory*>(),
                        {"remove_componentWasAdded", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Component>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::BuildSafe::ObjectFactory::ObjectFactory()   {
}

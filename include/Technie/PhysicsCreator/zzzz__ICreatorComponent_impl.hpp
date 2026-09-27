#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/ICreatorComponent.hpp"
#include "Technie/PhysicsCreator/zzzz__ICreatorComponent_def.hpp"
#include "Technie/PhysicsCreator/zzzz__IEditorData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::ICreatorComponent.GetGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Technie::PhysicsCreator::ICreatorComponent::*)()>(&::Technie::PhysicsCreator::ICreatorComponent::GetGameObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Technie::PhysicsCreator::ICreatorComponent*>(),
                    {::i2c::class_of<::Technie::PhysicsCreator::ICreatorComponent*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::ICreatorComponent.HasEditorData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::ICreatorComponent::*)()>(&::Technie::PhysicsCreator::ICreatorComponent::HasEditorData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Technie::PhysicsCreator::ICreatorComponent*>(),
                    {::i2c::class_of<::Technie::PhysicsCreator::ICreatorComponent*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::ICreatorComponent.GetEditorData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::IEditorData* (::Technie::PhysicsCreator::ICreatorComponent::*)()>(&::Technie::PhysicsCreator::ICreatorComponent::GetEditorData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Technie::PhysicsCreator::ICreatorComponent*>(),
                    {::i2c::class_of<::Technie::PhysicsCreator::ICreatorComponent*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::GameObject> Technie::PhysicsCreator::ICreatorComponent::GetGameObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Technie::PhysicsCreator::ICreatorComponent*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::ICreatorComponent::HasEditorData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Technie::PhysicsCreator::ICreatorComponent*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::IEditorData* Technie::PhysicsCreator::ICreatorComponent::GetEditorData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Technie::PhysicsCreator::ICreatorComponent*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::IEditorData*>(this, ___internal_method);
}

#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/RigidColliderCreatorChild.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__RigidColliderCreatorChild_def.hpp"
#include "Technie/PhysicsCreator/zzzz__RigidColliderCreator_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreatorChild._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreatorChild::*)()>(&::Technie::PhysicsCreator::RigidColliderCreatorChild::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd35a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreatorChild*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Technie::PhysicsCreator::RigidColliderCreator>& Technie::PhysicsCreator::RigidColliderCreatorChild::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityW<::Technie::PhysicsCreator::RigidColliderCreator> const& Technie::PhysicsCreator::RigidColliderCreatorChild::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void Technie::PhysicsCreator::RigidColliderCreatorChild::__cordl_internal_set_parent(::UnityW<::Technie::PhysicsCreator::RigidColliderCreator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
constexpr bool& Technie::PhysicsCreator::RigidColliderCreatorChild::__cordl_internal_get_isAutoHull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAutoHull;
}
constexpr bool const& Technie::PhysicsCreator::RigidColliderCreatorChild::__cordl_internal_get_isAutoHull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAutoHull;
}
constexpr void Technie::PhysicsCreator::RigidColliderCreatorChild::__cordl_internal_set_isAutoHull(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAutoHull = value;
}
inline void Technie::PhysicsCreator::RigidColliderCreatorChild::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreatorChild*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::RigidColliderCreatorChild* Technie::PhysicsCreator::RigidColliderCreatorChild::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::RigidColliderCreatorChild*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::RigidColliderCreatorChild::RigidColliderCreatorChild()   {
}

#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Pose.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::Pose._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Pose::*)()>(&::Technie::PhysicsCreator::Pose::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadc4680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Pose*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::Pose::__cordl_internal_get_forward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forward;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::Pose::__cordl_internal_get_forward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forward;
}
constexpr void Technie::PhysicsCreator::Pose::__cordl_internal_set_forward(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forward = value;
}
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::Pose::__cordl_internal_get_up()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___up;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::Pose::__cordl_internal_get_up() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___up;
}
constexpr void Technie::PhysicsCreator::Pose::__cordl_internal_set_up(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___up = value;
}
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::Pose::__cordl_internal_get_right()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___right;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::Pose::__cordl_internal_get_right() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___right;
}
constexpr void Technie::PhysicsCreator::Pose::__cordl_internal_set_right(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___right = value;
}
inline void Technie::PhysicsCreator::Pose::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Pose*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::Pose* Technie::PhysicsCreator::Pose::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::Pose*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::Pose::Pose()   {
}

#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/BoneData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__BoneJointType_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__BoneData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::BoneData::*)(::UnityEngine::Transform*)>(&::Technie::PhysicsCreator::Skinned::BoneData::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xadd8d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneData.GetThirdAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Technie::PhysicsCreator::Skinned::BoneData::*)()>(&::Technie::PhysicsCreator::Skinned::BoneData::GetThirdAxis)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xadd8e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneData*>(),
                        {"GetThirdAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_targetBoneName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetBoneName;
}
constexpr ::StringW const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_targetBoneName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetBoneName;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_targetBoneName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetBoneName = value;
}
constexpr bool& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_addRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addRigidbody;
}
constexpr bool const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_addRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addRigidbody;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_addRigidbody(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addRigidbody = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_mass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mass;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_mass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mass;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_mass(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mass = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_linearDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearDrag;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_linearDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearDrag;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_linearDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linearDrag = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_angularDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularDrag;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_angularDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularDrag;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_angularDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularDrag = value;
}
constexpr bool& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_isKinematic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKinematic;
}
constexpr bool const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_isKinematic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKinematic;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_isKinematic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isKinematic = value;
}
constexpr bool& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_addJoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addJoint;
}
constexpr bool const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_addJoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addJoint;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_addJoint(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addJoint = value;
}
constexpr ::Technie::PhysicsCreator::Skinned::BoneJointType& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_jointType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jointType;
}
constexpr ::Technie::PhysicsCreator::Skinned::BoneJointType const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_jointType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jointType;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_jointType(::Technie::PhysicsCreator::Skinned::BoneJointType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jointType = value;
}
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_primaryAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryAxis;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_primaryAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryAxis;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_primaryAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryAxis = value;
}
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_secondaryAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryAxis;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_secondaryAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryAxis;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_secondaryAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondaryAxis = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_primaryLowerAngularLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryLowerAngularLimit;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_primaryLowerAngularLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryLowerAngularLimit;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_primaryLowerAngularLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryLowerAngularLimit = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_primaryUpperAngularLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryUpperAngularLimit;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_primaryUpperAngularLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryUpperAngularLimit;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_primaryUpperAngularLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryUpperAngularLimit = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_secondaryAngularLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryAngularLimit;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_secondaryAngularLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryAngularLimit;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_secondaryAngularLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondaryAngularLimit = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_tertiaryAngularLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tertiaryAngularLimit;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_tertiaryAngularLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tertiaryAngularLimit;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_tertiaryAngularLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tertiaryAngularLimit = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_translationLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___translationLimit;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_translationLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___translationLimit;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_translationLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___translationLimit = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_linearDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearDamping;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_linearDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearDamping;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_linearDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linearDamping = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_angularDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularDamping;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_get_angularDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularDamping;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneData::__cordl_internal_set_angularDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularDamping = value;
}
inline void Technie::PhysicsCreator::Skinned::BoneData::_ctor(::UnityEngine::Transform*  src)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
inline ::UnityEngine::Vector3 Technie::PhysicsCreator::Skinned::BoneData::GetThirdAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneData*>(),
                        {"GetThirdAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::Skinned::BoneData* Technie::PhysicsCreator::Skinned::BoneData::New_ctor(::UnityEngine::Transform*  src)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::Skinned::BoneData*>(src));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::Skinned::BoneData::BoneData()   {
}

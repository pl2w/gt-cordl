#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/AIAgent.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AttackType_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MapEntity_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__NavAgentType_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AIAgent_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AgentBehaviours_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::AIAgent.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::AIAgent::*)()>(&::GT_CustomMapSupportRuntime::AIAgent::OnValidate)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x9cb0698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AIAgent*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::AIAgent.GetPackedCreateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GT_CustomMapSupportRuntime::AIAgent::*)()>(&::GT_CustomMapSupportRuntime::AIAgent::GetPackedCreateData)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9cb0cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GT_CustomMapSupportRuntime::AIAgent*>(),
                    {::i2c::class_of<::GT_CustomMapSupportRuntime::AIAgent*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::AIAgent.UnpackCreateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::by_ref<uint8_t>, ::by_ref<int16_t>)>(&::GT_CustomMapSupportRuntime::AIAgent::UnpackCreateData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cb0d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AIAgent*>(),
                        {"UnpackCreateData", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::AIAgent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::AIAgent::*)()>(&::GT_CustomMapSupportRuntime::AIAgent::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9cb0d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AIAgent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_enemyTypeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyTypeId;
}
constexpr uint8_t const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_enemyTypeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyTypeId;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_enemyTypeId(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enemyTypeId = value;
}
constexpr ::GT_CustomMapSupportRuntime::NavAgentType& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_navAgentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgentType;
}
constexpr ::GT_CustomMapSupportRuntime::NavAgentType const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_navAgentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgentType;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_navAgentType(::GT_CustomMapSupportRuntime::NavAgentType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navAgentType = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_movementSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementSpeed;
}
constexpr float_t const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_movementSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementSpeed;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_movementSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementSpeed = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_acceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceleration;
}
constexpr float_t const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_acceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceleration;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_acceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acceleration = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_turnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr float_t const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_turnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_turnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnSpeed = value;
}
constexpr bool& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_allowTargetingTaggedPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowTargetingTaggedPlayers;
}
constexpr bool const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_allowTargetingTaggedPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowTargetingTaggedPlayers;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_allowTargetingTaggedPlayers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowTargetingTaggedPlayers = value;
}
constexpr ::UnityEngine::Vector3& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_sightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightOffset;
}
constexpr ::UnityEngine::Vector3 const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_sightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightOffset;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_sightOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightOffset = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_sightFOV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightFOV;
}
constexpr float_t const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_sightFOV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightFOV;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_sightFOV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightFOV = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_sightDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightDist;
}
constexpr float_t const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_sightDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightDist;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_sightDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightDist = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_loseSightDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loseSightDist;
}
constexpr float_t const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_loseSightDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loseSightDist;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_loseSightDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loseSightDist = value;
}
constexpr bool& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_rememberLoseSightPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rememberLoseSightPosition;
}
constexpr bool const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_rememberLoseSightPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rememberLoseSightPosition;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_rememberLoseSightPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rememberLoseSightPosition = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_stopDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopDist;
}
constexpr float_t const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_stopDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopDist;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_stopDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopDist = value;
}
constexpr ::GT_CustomMapSupportRuntime::AttackType& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_attackType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackType;
}
constexpr ::GT_CustomMapSupportRuntime::AttackType const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_attackType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackType;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_attackType(::GT_CustomMapSupportRuntime::AttackType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackType = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_attackDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDist;
}
constexpr float_t const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_attackDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDist;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_attackDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackDist = value;
}
constexpr bool& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_useColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useColliders;
}
constexpr bool const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_useColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useColliders;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_useColliders(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useColliders = value;
}
constexpr bool& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_stopMovingToAttack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopMovingToAttack;
}
constexpr bool const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_stopMovingToAttack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopMovingToAttack;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_stopMovingToAttack(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopMovingToAttack = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_damageAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageAmount;
}
constexpr float_t const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_damageAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageAmount;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_damageAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damageAmount = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_timeBetweenAttacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeBetweenAttacks;
}
constexpr float_t const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_timeBetweenAttacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeBetweenAttacks;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_timeBetweenAttacks(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeBetweenAttacks = value;
}
constexpr ::StringW& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_attackAnimName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackAnimName;
}
constexpr ::StringW const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_attackAnimName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackAnimName;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_attackAnimName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackAnimName = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_animBlendTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animBlendTime;
}
constexpr float_t const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_animBlendTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animBlendTime;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_animBlendTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animBlendTime = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_damageDelayAfterPlayingAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageDelayAfterPlayingAnim;
}
constexpr float_t const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_damageDelayAfterPlayingAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageDelayAfterPlayingAnim;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_damageDelayAfterPlayingAnim(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damageDelayAfterPlayingAnim = value;
}
constexpr ::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_agentBehaviours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agentBehaviours;
}
constexpr ::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>* const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_agentBehaviours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agentBehaviours;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_agentBehaviours(::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agentBehaviours = value;
}
constexpr int16_t& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_lua_AgentID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lua_AgentID;
}
constexpr int16_t const& GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_get_lua_AgentID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lua_AgentID;
}
constexpr void GT_CustomMapSupportRuntime::AIAgent::__cordl_internal_set_lua_AgentID(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lua_AgentID = value;
}
inline void GT_CustomMapSupportRuntime::AIAgent::setStaticF_validateBehaviors(::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*, "validateBehaviors", ::GT_CustomMapSupportRuntime::AIAgent*>(std::forward<::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*>(value));
}
inline ::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>* GT_CustomMapSupportRuntime::AIAgent::getStaticF_validateBehaviors()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*, "validateBehaviors", ::GT_CustomMapSupportRuntime::AIAgent*>();
}
inline void GT_CustomMapSupportRuntime::AIAgent::setStaticF_invalidEntries(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "invalidEntries", ::GT_CustomMapSupportRuntime::AIAgent*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GT_CustomMapSupportRuntime::AIAgent::getStaticF_invalidEntries()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "invalidEntries", ::GT_CustomMapSupportRuntime::AIAgent*>();
}
inline void GT_CustomMapSupportRuntime::AIAgent::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AIAgent*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t GT_CustomMapSupportRuntime::AIAgent::GetPackedCreateData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GT_CustomMapSupportRuntime::AIAgent*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::AIAgent::UnpackCreateData(int64_t  data, ::by_ref<uint8_t>  entityTypeID, ::by_ref<int16_t>  luaAgentID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AIAgent*>(),
                        {"UnpackCreateData", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, entityTypeID, luaAgentID);
}
inline void GT_CustomMapSupportRuntime::AIAgent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AIAgent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::AIAgent* GT_CustomMapSupportRuntime::AIAgent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::AIAgent*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::AIAgent::AIAgent()   {
}

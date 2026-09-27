#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/FingersMetadata.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__FingersMetadata_def.hpp"
#include "Oculus/Interaction/Input/zzzz__FingersMetadata_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__JointFreedom_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::FingersMetadata.DefaultFingersFreedom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Oculus::Interaction::Input::JointFreedom> (*)()>(&::Oculus::Interaction::Input::FingersMetadata::DefaultFingersFreedom)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa50c2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"DefaultFingersFreedom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FingersMetadata.HandJointIdToIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::FingersMetadata::HandJointIdToIndex)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa509afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"HandJointIdToIndex", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FingersMetadata.InitializeHandJointIdToIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)()>(&::Oculus::Interaction::Input::FingersMetadata::InitializeHandJointIdToIndex)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa50c368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"InitializeHandJointIdToIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FingersMetadata.InitializeFingerToJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> (*)()>(&::Oculus::Interaction::Input::FingersMetadata::InitializeFingerToJoint)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa50c4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"InitializeFingerToJoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FingersMetadata.InitializeFingerToJointIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<int32_t>> (*)()>(&::Oculus::Interaction::Input::FingersMetadata::InitializeFingerToJointIndex)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa50c694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"InitializeFingerToJointIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FingersMetadata.InitializeJointToFingerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)()>(&::Oculus::Interaction::Input::FingersMetadata::InitializeJointToFingerIndex)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa50c828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"InitializeJointToFingerIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FingersMetadata.InitializeCanSpread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (*)()>(&::Oculus::Interaction::Input::FingersMetadata::InitializeCanSpread)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa50c94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"InitializeCanSpread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FingersMetadata.InitializeCanMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (*)()>(&::Oculus::Interaction::Input::FingersMetadata::InitializeCanMove)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa50ca90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"InitializeCanMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FingersMetadata._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FingersMetadata::*)()>(&::Oculus::Interaction::Input::FingersMetadata::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50cbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::FingersMetadata::setStaticF_HAND_JOINT_IDS(::ArrayW<::Oculus::Interaction::Input::HandJointId>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Oculus::Interaction::Input::HandJointId>, "HAND_JOINT_IDS", ::Oculus::Interaction::Input::FingersMetadata*>(std::forward<::ArrayW<::Oculus::Interaction::Input::HandJointId>>(value));
}
inline ::ArrayW<::Oculus::Interaction::Input::HandJointId> Oculus::Interaction::Input::FingersMetadata::getStaticF_HAND_JOINT_IDS()  {
return ::cordl_internals::getStaticField<::ArrayW<::Oculus::Interaction::Input::HandJointId>, "HAND_JOINT_IDS", ::Oculus::Interaction::Input::FingersMetadata*>();
}
inline void Oculus::Interaction::Input::FingersMetadata::setStaticF_FINGER_TO_JOINTS(::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>, "FINGER_TO_JOINTS", ::Oculus::Interaction::Input::FingersMetadata*>(std::forward<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>>(value));
}
inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> Oculus::Interaction::Input::FingersMetadata::getStaticF_FINGER_TO_JOINTS()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>, "FINGER_TO_JOINTS", ::Oculus::Interaction::Input::FingersMetadata*>();
}
inline void Oculus::Interaction::Input::FingersMetadata::setStaticF_FINGER_TO_JOINT_INDEX(::ArrayW<::ArrayW<int32_t>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<int32_t>>, "FINGER_TO_JOINT_INDEX", ::Oculus::Interaction::Input::FingersMetadata*>(std::forward<::ArrayW<::ArrayW<int32_t>>>(value));
}
inline ::ArrayW<::ArrayW<int32_t>> Oculus::Interaction::Input::FingersMetadata::getStaticF_FINGER_TO_JOINT_INDEX()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<int32_t>>, "FINGER_TO_JOINT_INDEX", ::Oculus::Interaction::Input::FingersMetadata*>();
}
inline void Oculus::Interaction::Input::FingersMetadata::setStaticF_HAND_JOINT_CAN_SPREAD(::ArrayW<bool>  value)  {
::cordl_internals::setStaticField<::ArrayW<bool>, "HAND_JOINT_CAN_SPREAD", ::Oculus::Interaction::Input::FingersMetadata*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> Oculus::Interaction::Input::FingersMetadata::getStaticF_HAND_JOINT_CAN_SPREAD()  {
return ::cordl_internals::getStaticField<::ArrayW<bool>, "HAND_JOINT_CAN_SPREAD", ::Oculus::Interaction::Input::FingersMetadata*>();
}
inline void Oculus::Interaction::Input::FingersMetadata::setStaticF_HAND_JOINT_CAN_MOVE(::ArrayW<bool>  value)  {
::cordl_internals::setStaticField<::ArrayW<bool>, "HAND_JOINT_CAN_MOVE", ::Oculus::Interaction::Input::FingersMetadata*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> Oculus::Interaction::Input::FingersMetadata::getStaticF_HAND_JOINT_CAN_MOVE()  {
return ::cordl_internals::getStaticField<::ArrayW<bool>, "HAND_JOINT_CAN_MOVE", ::Oculus::Interaction::Input::FingersMetadata*>();
}
inline void Oculus::Interaction::Input::FingersMetadata::setStaticF_JOINT_TO_FINGER_INDEX(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "JOINT_TO_FINGER_INDEX", ::Oculus::Interaction::Input::FingersMetadata*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Oculus::Interaction::Input::FingersMetadata::getStaticF_JOINT_TO_FINGER_INDEX()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "JOINT_TO_FINGER_INDEX", ::Oculus::Interaction::Input::FingersMetadata*>();
}
inline void Oculus::Interaction::Input::FingersMetadata::setStaticF_JOINT_TO_FINGER(::ArrayW<::Oculus::Interaction::Input::HandFinger>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Oculus::Interaction::Input::HandFinger>, "JOINT_TO_FINGER", ::Oculus::Interaction::Input::FingersMetadata*>(std::forward<::ArrayW<::Oculus::Interaction::Input::HandFinger>>(value));
}
inline ::ArrayW<::Oculus::Interaction::Input::HandFinger> Oculus::Interaction::Input::FingersMetadata::getStaticF_JOINT_TO_FINGER()  {
return ::cordl_internals::getStaticField<::ArrayW<::Oculus::Interaction::Input::HandFinger>, "JOINT_TO_FINGER", ::Oculus::Interaction::Input::FingersMetadata*>();
}
inline void Oculus::Interaction::Input::FingersMetadata::setStaticF_JOINT_TO_INDEX(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "JOINT_TO_INDEX", ::Oculus::Interaction::Input::FingersMetadata*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Oculus::Interaction::Input::FingersMetadata::getStaticF_JOINT_TO_INDEX()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "JOINT_TO_INDEX", ::Oculus::Interaction::Input::FingersMetadata*>();
}
inline ::ArrayW<::Oculus::Interaction::Input::JointFreedom> Oculus::Interaction::Input::FingersMetadata::DefaultFingersFreedom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"DefaultFingersFreedom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Oculus::Interaction::Input::JointFreedom>>(nullptr, ___internal_method);
}
inline int32_t Oculus::Interaction::Input::FingersMetadata::HandJointIdToIndex(::Oculus::Interaction::Input::HandJointId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"HandJointIdToIndex", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, id);
}
inline ::ArrayW<int32_t> Oculus::Interaction::Input::FingersMetadata::InitializeHandJointIdToIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"InitializeHandJointIdToIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method);
}
inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> Oculus::Interaction::Input::FingersMetadata::InitializeFingerToJoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"InitializeFingerToJoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>>(nullptr, ___internal_method);
}
inline ::ArrayW<::ArrayW<int32_t>> Oculus::Interaction::Input::FingersMetadata::InitializeFingerToJointIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"InitializeFingerToJointIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<int32_t>>>(nullptr, ___internal_method);
}
inline ::ArrayW<int32_t> Oculus::Interaction::Input::FingersMetadata::InitializeJointToFingerIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"InitializeJointToFingerIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method);
}
inline ::ArrayW<bool> Oculus::Interaction::Input::FingersMetadata::InitializeCanSpread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"InitializeCanSpread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(nullptr, ___internal_method);
}
inline ::ArrayW<bool> Oculus::Interaction::Input::FingersMetadata::InitializeCanMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {"InitializeCanMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(nullptr, ___internal_method);
}
inline void Oculus::Interaction::Input::FingersMetadata::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::FingersMetadata* Oculus::Interaction::Input::FingersMetadata::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::FingersMetadata*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::FingersMetadata::FingersMetadata()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0::*)()>(&::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50c4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0._InitializeHandJointIdToIndex_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0::_InitializeHandJointIdToIndex_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa50cd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0*>(),
                        {"<InitializeHandJointIdToIndex>b__0", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::HandJointId& Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0::__cordl_internal_get_jointId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jointId;
}
constexpr ::Oculus::Interaction::Input::HandJointId const& Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0::__cordl_internal_get_jointId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jointId;
}
constexpr void Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0::__cordl_internal_set_jointId(::Oculus::Interaction::Input::HandJointId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jointId = value;
}
inline void Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0::_InitializeHandJointIdToIndex_b__0(::Oculus::Interaction::Input::HandJointId  joint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0*>(),
                        {"<InitializeHandJointIdToIndex>b__0", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joint);
}
inline ::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0* Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0::FingersMetadata___c__DisplayClass10_0()   {
}

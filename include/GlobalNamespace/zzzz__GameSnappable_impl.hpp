#pragma once
// IWYU pragma private; include "GlobalNamespace/GameSnappable.hpp"
#include "GlobalNamespace/zzzz__SnapJointType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameSnappable_def.hpp"
#include "GlobalNamespace/zzzz__AbilityHaptic_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameSnappable_SnapJointOffset_def.hpp"
#include "GlobalNamespace/zzzz__SnapJointType_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionSnapPoint_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameSnappable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSnappable::*)()>(&::GlobalNamespace::GameSnappable::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5841698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSnappable.GetSnapOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSnappable::*)(::GlobalNamespace::SnapJointType, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::GlobalNamespace::GameSnappable::GetSnapOffset)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x584169c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"GetSnapOffset", {}, {::i2c::type_of<::GlobalNamespace::SnapJointType>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSnappable.BestSnapPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> (::GlobalNamespace::GameSnappable::*)()>(&::GlobalNamespace::GameSnappable::BestSnapPoint)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x583f55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"BestSnapPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSnappable.BestSnapPointDock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GameSnappable::*)()>(&::GlobalNamespace::GameSnappable::BestSnapPointDock)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5841900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"BestSnapPointDock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSnappable.CanGrabWithHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSnappable::*)(bool)>(&::GlobalNamespace::GameSnappable::CanGrabWithHand)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5841c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"CanGrabWithHand", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSnappable.OnSnap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSnappable::*)()>(&::GlobalNamespace::GameSnappable::OnSnap)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5841d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"OnSnap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSnappable.IsSnappedToLeftArm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSnappable::*)()>(&::GlobalNamespace::GameSnappable::IsSnappedToLeftArm)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5841d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"IsSnappedToLeftArm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSnappable.IsSnappedToRightArm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSnappable::*)()>(&::GlobalNamespace::GameSnappable::IsSnappedToRightArm)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5841de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"IsSnappedToRightArm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSnappable.OnUnsnap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSnappable::*)()>(&::GlobalNamespace::GameSnappable::OnUnsnap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5841e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"OnUnsnap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSnappable.TryGetJointToSnapIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SnapJointType, ::by_ref<int32_t>)>(&::GlobalNamespace::GameSnappable::TryGetJointToSnapIndex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5841e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"TryGetJointToSnapIndex", {}, {::i2c::type_of<::GlobalNamespace::SnapJointType>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSnappable.GetJointToSnapIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::SnapJointType)>(&::GlobalNamespace::GameSnappable::GetJointToSnapIndex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5841eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"GetJointToSnapIndex", {}, {::i2c::type_of<::GlobalNamespace::SnapJointType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSnappable.GetSnapIndexToJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SnapJointType (*)(int32_t)>(&::GlobalNamespace::GameSnappable::GetSnapIndexToJoint)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5841ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"GetSnapIndexToJoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSnappable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSnappable::*)()>(&::GlobalNamespace::GameSnappable::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5841eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GameSnappable::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GameSnappable::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GameSnappable::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr float_t& GlobalNamespace::GameSnappable::__cordl_internal_get_snapRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapRadius;
}
constexpr float_t const& GlobalNamespace::GameSnappable::__cordl_internal_get_snapRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapRadius;
}
constexpr void GlobalNamespace::GameSnappable::__cordl_internal_set_snapRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapRadius = value;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>& GlobalNamespace::GameSnappable::__cordl_internal_get_snappedToJoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snappedToJoint;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> const& GlobalNamespace::GameSnappable::__cordl_internal_get_snappedToJoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snappedToJoint;
}
constexpr void GlobalNamespace::GameSnappable::__cordl_internal_set_snappedToJoint(::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snappedToJoint = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GameSnappable::__cordl_internal_get_snapSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GameSnappable::__cordl_internal_get_snapSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapSound;
}
constexpr void GlobalNamespace::GameSnappable::__cordl_internal_set_snapSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapSound = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GameSnappable::__cordl_internal_get_unsnapSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsnapSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GameSnappable::__cordl_internal_get_unsnapSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsnapSound;
}
constexpr void GlobalNamespace::GameSnappable::__cordl_internal_set_unsnapSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unsnapSound = value;
}
constexpr ::GlobalNamespace::AbilityHaptic*& GlobalNamespace::GameSnappable::__cordl_internal_get_snapHaptic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapHaptic;
}
constexpr ::GlobalNamespace::AbilityHaptic* const& GlobalNamespace::GameSnappable::__cordl_internal_get_snapHaptic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapHaptic;
}
constexpr void GlobalNamespace::GameSnappable::__cordl_internal_set_snapHaptic(::GlobalNamespace::AbilityHaptic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapHaptic = value;
}
constexpr ::GlobalNamespace::SnapJointType& GlobalNamespace::GameSnappable::__cordl_internal_get_snapLocationTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapLocationTypes;
}
constexpr ::GlobalNamespace::SnapJointType const& GlobalNamespace::GameSnappable::__cordl_internal_get_snapLocationTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapLocationTypes;
}
constexpr void GlobalNamespace::GameSnappable::__cordl_internal_set_snapLocationTypes(::GlobalNamespace::SnapJointType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapLocationTypes = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameSnappable_SnapJointOffset>*& GlobalNamespace::GameSnappable::__cordl_internal_get_snapOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapOffsets;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameSnappable_SnapJointOffset>* const& GlobalNamespace::GameSnappable::__cordl_internal_get_snapOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapOffsets;
}
constexpr void GlobalNamespace::GameSnappable::__cordl_internal_set_snapOffsets(::System::Collections::Generic::List_1<::GlobalNamespace::GameSnappable_SnapJointOffset>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapOffsets = value;
}
inline void GlobalNamespace::GameSnappable::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameSnappable::GetSnapOffset(::GlobalNamespace::SnapJointType  jointType, ::by_ref<::UnityEngine::Vector3>  positionOffset, ::by_ref<::UnityEngine::Quaternion>  rotationOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"GetSnapOffset", {}, {::i2c::type_of<::GlobalNamespace::SnapJointType>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointType, positionOffset, rotationOffset);
}
inline ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> GlobalNamespace::GameSnappable::BestSnapPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"BestSnapPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GameSnappable::BestSnapPointDock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"BestSnapPointDock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method);
}
inline bool GlobalNamespace::GameSnappable::CanGrabWithHand(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"CanGrabWithHand", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, leftHand);
}
inline void GlobalNamespace::GameSnappable::OnSnap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"OnSnap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameSnappable::IsSnappedToLeftArm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"IsSnappedToLeftArm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameSnappable::IsSnappedToRightArm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"IsSnappedToRightArm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GameSnappable::OnUnsnap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"OnUnsnap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameSnappable::TryGetJointToSnapIndex(::GlobalNamespace::SnapJointType  jointType, ::by_ref<int32_t>  out_slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"TryGetJointToSnapIndex", {}, {::i2c::type_of<::GlobalNamespace::SnapJointType>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, jointType, out_slot);
}
inline int32_t GlobalNamespace::GameSnappable::GetJointToSnapIndex(::GlobalNamespace::SnapJointType  jointType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"GetJointToSnapIndex", {}, {::i2c::type_of<::GlobalNamespace::SnapJointType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, jointType);
}
inline ::GlobalNamespace::SnapJointType GlobalNamespace::GameSnappable::GetSnapIndexToJoint(int32_t  snapIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {"GetSnapIndexToJoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SnapJointType>(nullptr, ___internal_method, snapIndex);
}
inline void GlobalNamespace::GameSnappable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameSnappable* GlobalNamespace::GameSnappable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameSnappable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameSnappable::GameSnappable()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/OneStringGuitar.hpp"
#include "GlobalNamespace/zzzz__OneStringGuitar_GuitarStates_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OneStringGuitar_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerColliderHandIndicator_def.hpp"
#include "GlobalNamespace/zzzz__OneStringGuitar_GuitarStates_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.GetDefaultTransformationMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::GetDefaultTransformationMatrix)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x575e674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                    {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::OneStringGuitar::OnSpawn)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x575e6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                    {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar._GetChestColliderByPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::GlobalNamespace::OneStringGuitar::*)(::GlobalNamespace::VRRig*, ::StringW)>(&::GlobalNamespace::OneStringGuitar::_GetChestColliderByPath)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x575eb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"_GetChestColliderByPath", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::OnEnable)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x575ed3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                    {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x575eed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                    {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OneStringGuitar::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OneStringGuitar::OnRelease)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x575eefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                    {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.LateUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::LateUpdateShared)> {
  constexpr static std::size_t size = 0xc84;
  constexpr static std::size_t addrs = 0x575ef50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                    {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.PlayNote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)(int32_t, float_t)>(&::GlobalNamespace::OneStringGuitar::PlayNote)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5760354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                    {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.Unsnap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::Unsnap)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x575fe84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"Unsnap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.CheckFretFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OneStringGuitar::CheckFretFinger)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x575ff58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"CheckFretFinger", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.UpdateNonPlayingPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::OneStringGuitar::UpdateNonPlayingPosition)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x575fbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"UpdateNonPlayingPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.CanDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::CanDeactivate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x57603fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                    {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.CanActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::CanActivate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5760440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                    {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.OnActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::OnActivate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5760454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                    {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.GenerateVectorOffsetLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::GenerateVectorOffsetLeft)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5760480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"GenerateVectorOffsetLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.GenerateVectorOffsetRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::GenerateVectorOffsetRight)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x576055c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"GenerateVectorOffsetRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.GenerateReverseGripOffsetLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::GenerateReverseGripOffsetLeft)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5760638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"GenerateReverseGripOffsetLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.GenerateClubOffsetLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::GenerateClubOffsetLeft)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5760694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"GenerateClubOffsetLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.GenerateReverseGripOffsetRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::GenerateReverseGripOffsetRight)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57606f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"GenerateReverseGripOffsetRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.GenerateClubOffsetRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::GenerateClubOffsetRight)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x576074c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"GenerateClubOffsetRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.TestClubPositionRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::TestClubPositionRight)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57607a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"TestClubPositionRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.TestReverseGripPositionRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::TestReverseGripPositionRight)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5760800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"TestReverseGripPositionRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar.TestPlayingPositionRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::TestPlayingPositionRight)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5760858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"TestPlayingPositionRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneStringGuitar._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OneStringGuitar::*)()>(&::GlobalNamespace::OneStringGuitar::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x57609f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::OneStringGuitar::__cordl_internal_get_chestOffsetLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestOffsetLeft;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_chestOffsetLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestOffsetLeft;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_chestOffsetLeft(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chestOffsetLeft = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OneStringGuitar::__cordl_internal_get_chestOffsetRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestOffsetRight;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_chestOffsetRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestOffsetRight;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_chestOffsetRight(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chestOffsetRight = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::OneStringGuitar::__cordl_internal_get_holdingOffsetRotationLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdingOffsetRotationLeft;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_holdingOffsetRotationLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdingOffsetRotationLeft;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_holdingOffsetRotationLeft(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdingOffsetRotationLeft = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::OneStringGuitar::__cordl_internal_get_holdingOffsetRotationRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdingOffsetRotationRight;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_holdingOffsetRotationRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdingOffsetRotationRight;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_holdingOffsetRotationRight(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdingOffsetRotationRight = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::OneStringGuitar::__cordl_internal_get_chestRotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestRotationOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_chestRotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestRotationOffset;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_chestRotationOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chestRotationOffset = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_currentChestCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChestCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_currentChestCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChestCollider;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_currentChestCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentChestCollider = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_chestColliderLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestColliderLeft;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_chestColliderLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestColliderLeft;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_chestColliderLeft(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chestColliderLeft = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_chestColliderRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestColliderRight;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_chestColliderRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestColliderRight;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_chestColliderRight(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chestColliderRight = value;
}
constexpr float_t& GlobalNamespace::OneStringGuitar::__cordl_internal_get_lerpValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpValue;
}
constexpr float_t const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_lerpValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpValue;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_lerpValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpValue = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_parentHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_parentHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHand;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_parentHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_parentHandLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHandLeft;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_parentHandLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHandLeft;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_parentHandLeft(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentHandLeft = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_parentHandRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHandRight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_parentHandRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHandRight;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_parentHandRight(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentHandRight = value;
}
constexpr float_t& GlobalNamespace::OneStringGuitar::__cordl_internal_get_unsnapDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsnapDistance;
}
constexpr float_t const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_unsnapDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsnapDistance;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_unsnapDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unsnapDistance = value;
}
constexpr float_t& GlobalNamespace::OneStringGuitar::__cordl_internal_get_snapDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapDistance;
}
constexpr float_t const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_snapDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapDistance;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_snapDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapDistance = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OneStringGuitar::__cordl_internal_get_startPositionLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPositionLeft;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_startPositionLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPositionLeft;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_startPositionLeft(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPositionLeft = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::OneStringGuitar::__cordl_internal_get_startQuatLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startQuatLeft;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_startQuatLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startQuatLeft;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_startQuatLeft(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startQuatLeft = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OneStringGuitar::__cordl_internal_get_reverseGripPositionLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseGripPositionLeft;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_reverseGripPositionLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseGripPositionLeft;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_reverseGripPositionLeft(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseGripPositionLeft = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::OneStringGuitar::__cordl_internal_get_reverseGripQuatLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseGripQuatLeft;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_reverseGripQuatLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseGripQuatLeft;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_reverseGripQuatLeft(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseGripQuatLeft = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OneStringGuitar::__cordl_internal_get_startPositionRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPositionRight;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_startPositionRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPositionRight;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_startPositionRight(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPositionRight = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::OneStringGuitar::__cordl_internal_get_startQuatRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startQuatRight;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_startQuatRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startQuatRight;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_startQuatRight(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startQuatRight = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OneStringGuitar::__cordl_internal_get_reverseGripPositionRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseGripPositionRight;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_reverseGripPositionRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseGripPositionRight;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_reverseGripPositionRight(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseGripPositionRight = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::OneStringGuitar::__cordl_internal_get_reverseGripQuatRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseGripQuatRight;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_reverseGripQuatRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseGripQuatRight;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_reverseGripQuatRight(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseGripQuatRight = value;
}
constexpr float_t& GlobalNamespace::OneStringGuitar::__cordl_internal_get_angleLerpSnap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleLerpSnap;
}
constexpr float_t const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_angleLerpSnap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleLerpSnap;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_angleLerpSnap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleLerpSnap = value;
}
constexpr float_t& GlobalNamespace::OneStringGuitar::__cordl_internal_get_vectorLerpSnap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorLerpSnap;
}
constexpr float_t const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_vectorLerpSnap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorLerpSnap;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_vectorLerpSnap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vectorLerpSnap = value;
}
constexpr bool& GlobalNamespace::OneStringGuitar::__cordl_internal_get_angleSnapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleSnapped;
}
constexpr bool const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_angleSnapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleSnapped;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_angleSnapped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleSnapped = value;
}
constexpr bool& GlobalNamespace::OneStringGuitar::__cordl_internal_get_positionSnapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionSnapped;
}
constexpr bool const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_positionSnapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionSnapped;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_positionSnapped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionSnapped = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_chestTouch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestTouch;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_chestTouch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestTouch;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_chestTouch(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chestTouch = value;
}
constexpr int32_t& GlobalNamespace::OneStringGuitar::__cordl_internal_get_collidersHitCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersHitCount;
}
constexpr int32_t const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_collidersHitCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersHitCount;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_collidersHitCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidersHitCount = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_collidersHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersHit;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_collidersHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersHit;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_collidersHit(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidersHit = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_raycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_raycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastHits;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_raycastHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastHits = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*& GlobalNamespace::OneStringGuitar::__cordl_internal_get_raycastHitList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastHitList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_raycastHitList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastHitList;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_raycastHitList(::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastHitList = value;
}
constexpr ::UnityEngine::RaycastHit& GlobalNamespace::OneStringGuitar::__cordl_internal_get_nullHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullHit;
}
constexpr ::UnityEngine::RaycastHit const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_nullHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullHit;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_nullHit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nullHit = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_collidersToBeIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersToBeIn;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_collidersToBeIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersToBeIn;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_collidersToBeIn(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidersToBeIn = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::OneStringGuitar::__cordl_internal_get_interactableMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_interactableMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableMask;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_interactableMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactableMask = value;
}
constexpr int32_t& GlobalNamespace::OneStringGuitar::__cordl_internal_get_currentFretIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFretIndex;
}
constexpr int32_t const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_currentFretIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFretIndex;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_currentFretIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentFretIndex = value;
}
constexpr int32_t& GlobalNamespace::OneStringGuitar::__cordl_internal_get_lastFretIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFretIndex;
}
constexpr int32_t const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_lastFretIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFretIndex;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_lastFretIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFretIndex = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_frets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frets;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_frets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frets;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_frets(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frets = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::OneStringGuitar::__cordl_internal_get_fretsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fretsList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_fretsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fretsList;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_fretsList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fretsList = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_audioClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_audioClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClips;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_audioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioClips = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_leftHandIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandIndicator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_leftHandIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandIndicator;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_leftHandIndicator(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandIndicator = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_rightHandIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandIndicator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_rightHandIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandIndicator;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_rightHandIndicator(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandIndicator = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_fretHandIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fretHandIndicator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_fretHandIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fretHandIndicator;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_fretHandIndicator(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fretHandIndicator = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_strumHandIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strumHandIndicator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_strumHandIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strumHandIndicator;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_strumHandIndicator(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strumHandIndicator = value;
}
constexpr float_t& GlobalNamespace::OneStringGuitar::__cordl_internal_get_sphereRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sphereRadius;
}
constexpr float_t const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_sphereRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sphereRadius;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_sphereRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sphereRadius = value;
}
constexpr bool& GlobalNamespace::OneStringGuitar::__cordl_internal_get_anyHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyHit;
}
constexpr bool const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_anyHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyHit;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_anyHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anyHit = value;
}
constexpr bool& GlobalNamespace::OneStringGuitar::__cordl_internal_get_handIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handIn;
}
constexpr bool const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_handIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handIn;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_handIn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handIn = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OneStringGuitar::__cordl_internal_get_spherecastSweep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spherecastSweep;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_spherecastSweep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spherecastSweep;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_spherecastSweep(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spherecastSweep = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::OneStringGuitar::__cordl_internal_get_strumCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strumCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_strumCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strumCollider;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_strumCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strumCollider = value;
}
constexpr float_t& GlobalNamespace::OneStringGuitar::__cordl_internal_get_maxVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVolume;
}
constexpr float_t const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_maxVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVolume;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_maxVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVolume = value;
}
constexpr float_t& GlobalNamespace::OneStringGuitar::__cordl_internal_get_minVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVolume;
}
constexpr float_t const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_minVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVolume;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_minVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minVolume = value;
}
constexpr float_t& GlobalNamespace::OneStringGuitar::__cordl_internal_get_maxVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVelocity;
}
constexpr float_t const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_maxVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVelocity;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_maxVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVelocity = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::OneStringGuitar::__cordl_internal_get_strumList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strumList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_strumList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strumList;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_strumList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strumList = value;
}
constexpr int32_t& GlobalNamespace::OneStringGuitar::__cordl_internal_get_selfInstrumentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selfInstrumentIndex;
}
constexpr int32_t const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_selfInstrumentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selfInstrumentIndex;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_selfInstrumentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selfInstrumentIndex = value;
}
constexpr ::GlobalNamespace::OneStringGuitar_GuitarStates& GlobalNamespace::OneStringGuitar::__cordl_internal_get_lastState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr ::GlobalNamespace::OneStringGuitar_GuitarStates const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_lastState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_lastState(::GlobalNamespace::OneStringGuitar_GuitarStates  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastState = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OneStringGuitar::__cordl_internal_get_startingLeftChestOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingLeftChestOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_startingLeftChestOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingLeftChestOffset;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_startingLeftChestOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingLeftChestOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OneStringGuitar::__cordl_internal_get_startingRightChestOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingRightChestOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_startingRightChestOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingRightChestOffset;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_startingRightChestOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingRightChestOffset = value;
}
constexpr float_t& GlobalNamespace::OneStringGuitar::__cordl_internal_get_startingUnsnapDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingUnsnapDistance;
}
constexpr float_t const& GlobalNamespace::OneStringGuitar::__cordl_internal_get_startingUnsnapDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingUnsnapDistance;
}
constexpr void GlobalNamespace::OneStringGuitar::__cordl_internal_set_startingUnsnapDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingUnsnapDistance = value;
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::OneStringGuitar::GetDefaultTransformationMatrix()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void GlobalNamespace::OneStringGuitar::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline ::UnityW<::UnityEngine::Collider> GlobalNamespace::OneStringGuitar::_GetChestColliderByPath(::GlobalNamespace::VRRig*  vrRig, ::StringW  chestColliderLeftPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"_GetChestColliderByPath", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method, vrRig, chestColliderLeftPath);
}
inline void GlobalNamespace::OneStringGuitar::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OneStringGuitar::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OneStringGuitar::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::OneStringGuitar::LateUpdateShared()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OneStringGuitar::PlayNote(int32_t  note, float_t  volume)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, note, volume);
}
inline bool GlobalNamespace::OneStringGuitar::Unsnap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"Unsnap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OneStringGuitar::CheckFretFinger(::UnityEngine::Transform*  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"CheckFretFinger", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finger);
}
inline void GlobalNamespace::OneStringGuitar::UpdateNonPlayingPosition(::UnityEngine::Vector3  positionTarget, ::UnityEngine::Quaternion  rotationTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"UpdateNonPlayingPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positionTarget, rotationTarget);
}
inline bool GlobalNamespace::OneStringGuitar::CanDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OneStringGuitar::CanActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OneStringGuitar::OnActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OneStringGuitar::GenerateVectorOffsetLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"GenerateVectorOffsetLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OneStringGuitar::GenerateVectorOffsetRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"GenerateVectorOffsetRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OneStringGuitar::GenerateReverseGripOffsetLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"GenerateReverseGripOffsetLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OneStringGuitar::GenerateClubOffsetLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"GenerateClubOffsetLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OneStringGuitar::GenerateReverseGripOffsetRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"GenerateReverseGripOffsetRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OneStringGuitar::GenerateClubOffsetRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"GenerateClubOffsetRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OneStringGuitar::TestClubPositionRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"TestClubPositionRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OneStringGuitar::TestReverseGripPositionRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"TestReverseGripPositionRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OneStringGuitar::TestPlayingPositionRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {"TestPlayingPositionRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OneStringGuitar::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OneStringGuitar*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OneStringGuitar* GlobalNamespace::OneStringGuitar::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OneStringGuitar*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OneStringGuitar::OneStringGuitar()   {
}

#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderItem.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderItem_BuilderItemState_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderItem_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderAttachEdge_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderAttachGridPlane_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderItemReliableState_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderItem_BuilderItemState_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.ShouldBeKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderItem::*)()>(&::GorillaTagScripts::BuilderItem::ShouldBeKinematic)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b865c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)()>(&::GorillaTagScripts::BuilderItem::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b865ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)()>(&::GorillaTagScripts::BuilderItem::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b866b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)()>(&::GorillaTagScripts::BuilderItem::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b866bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)()>(&::GorillaTagScripts::BuilderItem::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b866c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.AttachPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderItem::AttachPiece)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5b866ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"AttachPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.DetachPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::BuilderItem::DetachPiece)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5b869d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"DetachPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)()>(&::GorillaTagScripts::BuilderItem::OnStateChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b86cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"OnStateChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.GetDefaultTransformationMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GorillaTagScripts::BuilderItem::*)()>(&::GorillaTagScripts::BuilderItem::GetDefaultTransformationMatrix)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b86d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.LateUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)()>(&::GorillaTagScripts::BuilderItem::LateUpdateShared)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b86e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.IsOverlapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderItem::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*)>(&::GorillaTagScripts::BuilderItem::IsOverlapping)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b86f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"IsOverlapping", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.LateUpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)()>(&::GorillaTagScripts::BuilderItem::LateUpdateLocal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b87034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GorillaTagScripts::BuilderItem::OnGrab)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b8703c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderItem::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GorillaTagScripts::BuilderItem::OnRelease)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b87118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.OnHoverOverTableStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)(::GorillaTagScripts::BuilderTable*)>(&::GorillaTagScripts::BuilderItem::OnHoverOverTableStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b87244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"OnHoverOverTableStart", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.OnHoverOverTableEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)(::GorillaTagScripts::BuilderTable*)>(&::GorillaTagScripts::BuilderItem::OnHoverOverTableEnd)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b87254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"OnHoverOverTableEnd", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)()>(&::GorillaTagScripts::BuilderItem::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b87268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)()>(&::GorillaTagScripts::BuilderItem::OnLeftRoom)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5b87270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.PlayVFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)(::UnityEngine::GameObject*)>(&::GorillaTagScripts::BuilderItem::PlayVFX)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b87398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"PlayVFX", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.Reparent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderItem::*)(::UnityEngine::Transform*)>(&::GorillaTagScripts::BuilderItem::Reparent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b87194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"Reparent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.ShouldPlayFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderItem::*)()>(&::GorillaTagScripts::BuilderItem::ShouldPlayFX)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b87430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"ShouldPlayFX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.BuildEnvItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GorillaTagScripts::BuilderItem::BuildEnvItem)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5b87444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"BuildEnvItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.OnHandMatrixUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool)>(&::GorillaTagScripts::BuilderItem::OnHandMatrixUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b87530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem.GetPhotonViewId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::BuilderItem::*)()>(&::GorillaTagScripts::BuilderItem::GetPhotonViewId)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b875a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"GetPhotonViewId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItem::*)()>(&::GorillaTagScripts::BuilderItem::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b87628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTagScripts::BuilderItemReliableState>& GorillaTagScripts::BuilderItem::__cordl_internal_get_reliableState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableState;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderItemReliableState> const& GorillaTagScripts::BuilderItem::__cordl_internal_get_reliableState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableState;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_reliableState(::UnityW<::GorillaTagScripts::BuilderItemReliableState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableState = value;
}
constexpr ::StringW& GorillaTagScripts::BuilderItem::__cordl_internal_get_builtItemPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builtItemPath;
}
constexpr ::StringW const& GorillaTagScripts::BuilderItem::__cordl_internal_get_builtItemPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builtItemPath;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_builtItemPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builtItemPath = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::BuilderItem::__cordl_internal_get_itemRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::BuilderItem::__cordl_internal_get_itemRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemRoot;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_itemRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemRoot = value;
}
constexpr bool& GorillaTagScripts::BuilderItem::__cordl_internal_get_enableCollidersWhenReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableCollidersWhenReady;
}
constexpr bool const& GorillaTagScripts::BuilderItem::__cordl_internal_get_enableCollidersWhenReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableCollidersWhenReady;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_enableCollidersWhenReady(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableCollidersWhenReady = value;
}
constexpr float_t& GorillaTagScripts::BuilderItem::__cordl_internal_get_handsFreeOfCollidersTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handsFreeOfCollidersTime;
}
constexpr float_t const& GorillaTagScripts::BuilderItem::__cordl_internal_get_handsFreeOfCollidersTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handsFreeOfCollidersTime;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_handsFreeOfCollidersTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handsFreeOfCollidersTime = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::BuilderItem::__cordl_internal_get_attachedPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachedPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::BuilderItem::__cordl_internal_get_attachedPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachedPiece;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_attachedPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachedPiece = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*& GorillaTagScripts::BuilderItem::__cordl_internal_get_onlyWhenPlacedBehaviours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyWhenPlacedBehaviours;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>* const& GorillaTagScripts::BuilderItem::__cordl_internal_get_onlyWhenPlacedBehaviours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyWhenPlacedBehaviours;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_onlyWhenPlacedBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyWhenPlacedBehaviours = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderItem>& GorillaTagScripts::BuilderItem::__cordl_internal_get_parentItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentItem;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderItem> const& GorillaTagScripts::BuilderItem::__cordl_internal_get_parentItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentItem;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_parentItem(::UnityW<::GorillaTagScripts::BuilderItem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentItem = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*& GorillaTagScripts::BuilderItem::__cordl_internal_get_gridPlanes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridPlanes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>* const& GorillaTagScripts::BuilderItem::__cordl_internal_get_gridPlanes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridPlanes;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_gridPlanes(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridPlanes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachEdge>>*& GorillaTagScripts::BuilderItem::__cordl_internal_get_edges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___edges;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachEdge>>* const& GorillaTagScripts::BuilderItem::__cordl_internal_get_edges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___edges;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_edges(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachEdge>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___edges = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GorillaTagScripts::BuilderItem::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GorillaTagScripts::BuilderItem::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::BuilderItem::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::BuilderItem::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_parent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::BuilderItem::__cordl_internal_get_initialPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::BuilderItem::__cordl_internal_get_initialPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPosition;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_initialPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialPosition = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTagScripts::BuilderItem::__cordl_internal_get_initialRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTagScripts::BuilderItem::__cordl_internal_get_initialRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialRotation;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_initialRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialRotation = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::BuilderItem::__cordl_internal_get_initialGrabInteractorScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialGrabInteractorScale;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::BuilderItem::__cordl_internal_get_initialGrabInteractorScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialGrabInteractorScale;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_initialGrabInteractorScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialGrabInteractorScale = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& GorillaTagScripts::BuilderItem::__cordl_internal_get_currTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currTable;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& GorillaTagScripts::BuilderItem::__cordl_internal_get_currTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currTable;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_currTable(::UnityW<::GorillaTagScripts::BuilderTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currTable = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTagScripts::BuilderItem::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTagScripts::BuilderItem::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::BuilderItem::__cordl_internal_get_snapAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::BuilderItem::__cordl_internal_get_snapAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapAudio;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_snapAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::BuilderItem::__cordl_internal_get_placeAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::BuilderItem::__cordl_internal_get_placeAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeAudio;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_placeAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placeAudio = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::BuilderItem::__cordl_internal_get_placeVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeVFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::BuilderItem::__cordl_internal_get_placeVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeVFX;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_placeVFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placeVFX = value;
}
constexpr ::GlobalNamespace::BuilderItem_BuilderItemState& GorillaTagScripts::BuilderItem::__cordl_internal_get_previousItemState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousItemState;
}
constexpr ::GlobalNamespace::BuilderItem_BuilderItemState const& GorillaTagScripts::BuilderItem::__cordl_internal_get_previousItemState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousItemState;
}
constexpr void GorillaTagScripts::BuilderItem::__cordl_internal_set_previousItemState(::GlobalNamespace::BuilderItem_BuilderItemState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousItemState = value;
}
inline bool GorillaTagScripts::BuilderItem::ShouldBeKinematic()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderItem::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderItem::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderItem::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderItem::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderItem::AttachPiece(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"AttachPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::BuilderItem::DetachPiece(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"DetachPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::BuilderItem::OnStateChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"OnStateChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 GorillaTagScripts::BuilderItem::GetDefaultTransformationMatrix()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderItem::LateUpdateShared()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::BuilderItem::IsOverlapping(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  interactionPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"IsOverlapping", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactionPoints);
}
inline void GorillaTagScripts::BuilderItem::LateUpdateLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderItem::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline bool GorillaTagScripts::BuilderItem::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GorillaTagScripts::BuilderItem::OnHoverOverTableStart(::GorillaTagScripts::BuilderTable*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"OnHoverOverTableStart", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void GorillaTagScripts::BuilderItem::OnHoverOverTableEnd(::GorillaTagScripts::BuilderTable*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"OnHoverOverTableEnd", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void GorillaTagScripts::BuilderItem::OnJoinedRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderItem::OnLeftRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderItem::PlayVFX(::UnityEngine::GameObject*  vfx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"PlayVFX", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vfx);
}
inline bool GorillaTagScripts::BuilderItem::Reparent(::UnityEngine::Transform*  _transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"Reparent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _transform);
}
inline bool GorillaTagScripts::BuilderItem::ShouldPlayFX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"ShouldPlayFX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GorillaTagScripts::BuilderItem::BuildEnvItem(int32_t  prefabHash, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"BuildEnvItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, prefabHash, position, rotation);
}
inline void GorillaTagScripts::BuilderItem::OnHandMatrixUpdate(::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, bool  leftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderItem*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localPosition, localRotation, leftHand);
}
inline int32_t GorillaTagScripts::BuilderItem::GetPhotonViewId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {"GetPhotonViewId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderItem* GorillaTagScripts::BuilderItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderItem*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderItem::BuilderItem()   {
}

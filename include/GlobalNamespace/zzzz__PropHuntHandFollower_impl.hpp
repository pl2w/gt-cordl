#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntHandFollower.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PropHuntHandFollower_def.hpp"
#include "GlobalNamespace/zzzz__ICallBack_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__PropHuntGrabbableProp_def.hpp"
#include "GlobalNamespace/zzzz__PropHuntTaggableProp_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.get_hasProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PropHuntHandFollower::*)()>(&::GlobalNamespace::PropHuntHandFollower::get_hasProp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5638228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"get_hasProp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.set_hasProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntHandFollower::*)(bool)>(&::GlobalNamespace::PropHuntHandFollower::set_hasProp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5638230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"set_hasProp", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.get_IsInstantiatingAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PropHuntHandFollower::*)()>(&::GlobalNamespace::PropHuntHandFollower::get_IsInstantiatingAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5638238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"get_IsInstantiatingAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.set_IsInstantiatingAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntHandFollower::*)(bool)>(&::GlobalNamespace::PropHuntHandFollower::set_IsInstantiatingAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5638240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"set_IsInstantiatingAsync", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.get_attachedToRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::PropHuntHandFollower::*)()>(&::GlobalNamespace::PropHuntHandFollower::get_attachedToRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5638248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"get_attachedToRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.set_attachedToRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntHandFollower::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::PropHuntHandFollower::set_attachedToRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5638250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"set_attachedToRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.get_IsLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PropHuntHandFollower::*)()>(&::GlobalNamespace::PropHuntHandFollower::get_IsLeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5638258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"get_IsLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntHandFollower::*)()>(&::GlobalNamespace::PropHuntHandFollower::Awake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5638260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntHandFollower::*)()>(&::GlobalNamespace::PropHuntHandFollower::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5638318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntHandFollower::*)()>(&::GlobalNamespace::PropHuntHandFollower::OnEnable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5638334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntHandFollower::*)()>(&::GlobalNamespace::PropHuntHandFollower::OnDisable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5638388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.DestroyProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntHandFollower::*)()>(&::GlobalNamespace::PropHuntHandFollower::DestroyProp)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5633cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"DestroyProp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.DestroyProp_NoPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*, ::by_ref<bool>, ::by_ref<::UnityEngine::GameObject*>)>(&::GlobalNamespace::PropHuntHandFollower::DestroyProp_NoPool)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5638428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"DestroyProp_NoPool", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.OnRoundStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntHandFollower::*)()>(&::GlobalNamespace::PropHuntHandFollower::OnRoundStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5635884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"OnRoundStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.CreateProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntHandFollower::*)()>(&::GlobalNamespace::PropHuntHandFollower::CreateProp)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x563395c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"CreateProp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.OnPropLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntHandFollower::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>)>(&::GlobalNamespace::PropHuntHandFollower::OnPropLoaded)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5638650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"OnPropLoaded", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.TryPrepPropTemplate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*, bool, ::GorillaTag::CosmeticSystem::CosmeticSO*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*, ::by_ref<::GlobalNamespace::PropHuntGrabbableProp*>, ::by_ref<::GlobalNamespace::PropHuntTaggableProp*>)>(&::GlobalNamespace::PropHuntHandFollower::TryPrepPropTemplate)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x56387fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"TryPrepPropTemplate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PropHuntGrabbableProp*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PropHuntTaggableProp*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.ICallBack_CallBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntHandFollower::*)()>(&::GlobalNamespace::PropHuntHandFollower::ICallBack_CallBack)> {
  constexpr static std::size_t size = 0x6fc;
  constexpr static std::size_t addrs = 0x5638ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"ICallBack.CallBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.GeoCollisionPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::PropHuntHandFollower::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::PropHuntHandFollower::GeoCollisionPoint)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x56395c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"GeoCollisionPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.SwitchHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntHandFollower::*)(bool)>(&::GlobalNamespace::PropHuntHandFollower::SwitchHand)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5637fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"SwitchHand", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.SetProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntHandFollower::*)(bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::PropHuntHandFollower::SetProp)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5639858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"SetProp", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower.GetRelativePosRotLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::PropHuntHandFollower::*)()>(&::GlobalNamespace::PropHuntHandFollower::GetRelativePosRotLong)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5639870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"GetRelativePosRotLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntHandFollower._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntHandFollower::*)()>(&::GlobalNamespace::PropHuntHandFollower::_ctor)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x56399c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__hasProp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasProp;
}
constexpr bool const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__hasProp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasProp;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set__hasProp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasProp = value;
}
constexpr bool& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__IsInstantiatingAsync_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInstantiatingAsync_k__BackingField;
}
constexpr bool const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__IsInstantiatingAsync_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInstantiatingAsync_k__BackingField;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set__IsInstantiatingAsync_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsInstantiatingAsync_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__attachedToRig_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedToRig_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__attachedToRig_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedToRig_k__BackingField;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set__attachedToRig_k__BackingField(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attachedToRig_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__isLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLocal;
}
constexpr bool const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__isLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLocal;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set__isLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isLocal = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__prop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prop;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__prop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prop;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set__prop(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prop = value;
}
constexpr bool& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__isLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLeftHand;
}
constexpr bool const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__isLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLeftHand;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set__isLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isLeftHand = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__propOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__propOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propOffset;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set__propOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propOffset = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>* const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set__colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colliders = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__interactionPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactionPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>* const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__interactionPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactionPoints;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set__interactionPoints(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactionPoints = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__lastRelativePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRelativePos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__lastRelativePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRelativePos;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set__lastRelativePos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastRelativePos = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__lastRelativeAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRelativeAngle;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__lastRelativeAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRelativeAngle;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set__lastRelativeAngle(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastRelativeAngle = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__networkLastRelativePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkLastRelativePos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__networkLastRelativePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkLastRelativePos;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set__networkLastRelativePos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____networkLastRelativePos = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__networkLastRelativeAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkLastRelativeAngle;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__networkLastRelativeAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkLastRelativeAngle;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set__networkLastRelativeAngle(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____networkLastRelativeAngle = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get_collisionLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get_collisionLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionLayers;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set_collisionLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionLayers = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get_targetPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get_targetPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPoint;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set_targetPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPoint = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get_raycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get_raycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastHits;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set_raycastHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastHits = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHuntGrabbableProp>& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__grabbableProp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbableProp;
}
constexpr ::UnityW<::GlobalNamespace::PropHuntGrabbableProp> const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__grabbableProp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbableProp;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set__grabbableProp(::UnityW<::GlobalNamespace::PropHuntGrabbableProp>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbableProp = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHuntTaggableProp>& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__taggableProp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____taggableProp;
}
constexpr ::UnityW<::GlobalNamespace::PropHuntTaggableProp> const& GlobalNamespace::PropHuntHandFollower::__cordl_internal_get__taggableProp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____taggableProp;
}
constexpr void GlobalNamespace::PropHuntHandFollower::__cordl_internal_set__taggableProp(::UnityW<::GlobalNamespace::PropHuntTaggableProp>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____taggableProp = value;
}
inline bool GlobalNamespace::PropHuntHandFollower::get_hasProp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"get_hasProp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntHandFollower::set_hasProp(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"set_hasProp", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PropHuntHandFollower::get_IsInstantiatingAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"get_IsInstantiatingAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntHandFollower::set_IsInstantiatingAsync(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"set_IsInstantiatingAsync", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::PropHuntHandFollower::get_attachedToRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"get_attachedToRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntHandFollower::set_attachedToRig(::GlobalNamespace::VRRig*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"set_attachedToRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PropHuntHandFollower::get_IsLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"get_IsLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntHandFollower::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntHandFollower::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntHandFollower::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntHandFollower::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntHandFollower::DestroyProp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"DestroyProp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntHandFollower::DestroyProp_NoPool(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  _colliders, ::by_ref<bool>  hasProp, ::by_ref<::UnityEngine::GameObject*>  _prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"DestroyProp_NoPool", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _colliders, hasProp, _prop);
}
inline void GlobalNamespace::PropHuntHandFollower::OnRoundStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"OnRoundStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntHandFollower::CreateProp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"CreateProp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntHandFollower::OnPropLoaded(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"OnPropLoaded", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline bool GlobalNamespace::PropHuntHandFollower::TryPrepPropTemplate(::UnityEngine::GameObject*  _prop, bool  _isLocal, ::GorillaTag::CosmeticSystem::CosmeticSO*  debugCosmeticSO, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  _colliders, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  ref_interactionPoints, ::by_ref<::GlobalNamespace::PropHuntGrabbableProp*>  grabbableProp, ::by_ref<::GlobalNamespace::PropHuntTaggableProp*>  taggableProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"TryPrepPropTemplate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PropHuntGrabbableProp*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PropHuntTaggableProp*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _prop, _isLocal, debugCosmeticSO, _colliders, ref_interactionPoints, grabbableProp, taggableProp);
}
inline void GlobalNamespace::PropHuntHandFollower::ICallBack_CallBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"ICallBack.CallBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::PropHuntHandFollower::GeoCollisionPoint(::UnityEngine::Vector3  sourcePos, ::UnityEngine::Vector3  targetPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"GeoCollisionPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, sourcePos, targetPos);
}
inline void GlobalNamespace::PropHuntHandFollower::SwitchHand(bool  newIsLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"SwitchHand", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newIsLeftHand);
}
inline void GlobalNamespace::PropHuntHandFollower::SetProp(bool  isLeftHand, ::UnityEngine::Vector3  propPos, ::UnityEngine::Quaternion  propRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"SetProp", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand, propPos, propRot);
}
inline int64_t GlobalNamespace::PropHuntHandFollower::GetRelativePosRotLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {"GetRelativePosRotLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntHandFollower::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntHandFollower*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropHuntHandFollower* GlobalNamespace::PropHuntHandFollower::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropHuntHandFollower*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr  GlobalNamespace::PropHuntHandFollower::operator ::GlobalNamespace::ICallBack*() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* GlobalNamespace::PropHuntHandFollower::i___GlobalNamespace__ICallBack() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHuntHandFollower::PropHuntHandFollower()   {
}

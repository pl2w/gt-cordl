#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticAnchors.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticSlots_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticAnchors_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_def.hpp"
#include "GlobalNamespace/zzzz__VRRigAnchorOverrides_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__GTLogErrorLimiter_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.GorillaTag_ISpawnable_get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticAnchors::*)()>(&::GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5756114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.GorillaTag_ISpawnable_set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchors::*)(bool)>(&::GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x575611c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.GorillaTag_ISpawnable_get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::CosmeticAnchors::*)()>(&::GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5756124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.GorillaTag_ISpawnable_set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchors::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x575612c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.GorillaTag_ISpawnable_OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchors::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_OnSpawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5756134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.GorillaTag_ISpawnable_OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchors::*)()>(&::GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5756138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.AssignAnchorToPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchors::*)(::by_ref<::UnityEngine::GameObject*>, ::StringW)>(&::GlobalNamespace::CosmeticAnchors::AssignAnchorToPath)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x575613c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"AssignAnchorToPath", {}, {::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchors::*)()>(&::GlobalNamespace::CosmeticAnchors::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5756340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchors::*)()>(&::GlobalNamespace::CosmeticAnchors::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5756344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.TryUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchors::*)()>(&::GlobalNamespace::CosmeticAnchors::TryUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x575606c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"TryUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.EnableAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchors::*)(bool)>(&::GlobalNamespace::CosmeticAnchors::EnableAnchor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5756348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"EnableAnchor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.SetHuntComputerAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchors::*)(bool)>(&::GlobalNamespace::CosmeticAnchors::SetHuntComputerAnchor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x575634c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"SetHuntComputerAnchor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.SetBuilderWatchAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchors::*)(bool)>(&::GlobalNamespace::CosmeticAnchors::SetBuilderWatchAnchor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x57564fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"SetBuilderWatchAnchor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.SetCustomAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchors::*)(::UnityEngine::Transform*, bool, ::UnityEngine::GameObject*, ::UnityEngine::Transform*)>(&::GlobalNamespace::CosmeticAnchors::SetCustomAnchor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x57566ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"SetCustomAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.GetPositionAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::CosmeticAnchors::*)(::GlobalNamespace::TransferrableObject_PositionState)>(&::GlobalNamespace::CosmeticAnchors::GetPositionAnchor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x57568bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GetPositionAnchor", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.GetNameAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::CosmeticAnchors::*)()>(&::GlobalNamespace::CosmeticAnchors::GetNameAnchor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57569c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GetNameAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.AffectedByHunt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticAnchors::*)()>(&::GlobalNamespace::CosmeticAnchors::AffectedByHunt)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5755db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"AffectedByHunt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors.AffectedByBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticAnchors::*)()>(&::GlobalNamespace::CosmeticAnchors::AffectedByBuilder)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5755e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"AffectedByBuilder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchors._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchors::*)()>(&::GlobalNamespace::CosmeticAnchors::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5756a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_deprecatedWarning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deprecatedWarning;
}
constexpr bool const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_deprecatedWarning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deprecatedWarning;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_deprecatedWarning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deprecatedWarning = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_nameAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameAnchor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_nameAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameAnchor;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_nameAnchor(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameAnchor = value;
}
constexpr ::StringW& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_nameAnchor_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameAnchor_path;
}
constexpr ::StringW const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_nameAnchor_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameAnchor_path;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_nameAnchor_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameAnchor_path = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_leftArmAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmAnchor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_leftArmAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmAnchor;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_leftArmAnchor(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArmAnchor = value;
}
constexpr ::StringW& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_leftArmAnchor_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmAnchor_path;
}
constexpr ::StringW const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_leftArmAnchor_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmAnchor_path;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_leftArmAnchor_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArmAnchor_path = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_rightArmAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmAnchor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_rightArmAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmAnchor;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_rightArmAnchor(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArmAnchor = value;
}
constexpr ::StringW& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_rightArmAnchor_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmAnchor_path;
}
constexpr ::StringW const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_rightArmAnchor_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmAnchor_path;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_rightArmAnchor_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArmAnchor_path = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_chestAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestAnchor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_chestAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestAnchor;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_chestAnchor(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chestAnchor = value;
}
constexpr ::StringW& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_chestAnchor_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestAnchor_path;
}
constexpr ::StringW const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_chestAnchor_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestAnchor_path;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_chestAnchor_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chestAnchor_path = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_huntComputerAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huntComputerAnchor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_huntComputerAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huntComputerAnchor;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_huntComputerAnchor(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___huntComputerAnchor = value;
}
constexpr ::StringW& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_huntComputerAnchor_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huntComputerAnchor_path;
}
constexpr ::StringW const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_huntComputerAnchor_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huntComputerAnchor_path;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_huntComputerAnchor_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___huntComputerAnchor_path = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_builderWatchAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderWatchAnchor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_builderWatchAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderWatchAnchor;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_builderWatchAnchor(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builderWatchAnchor = value;
}
constexpr ::StringW& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_builderWatchAnchor_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderWatchAnchor_path;
}
constexpr ::StringW const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_builderWatchAnchor_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderWatchAnchor_path;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_builderWatchAnchor_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builderWatchAnchor_path = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_friendshipBraceletLeftOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendshipBraceletLeftOverride;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_friendshipBraceletLeftOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendshipBraceletLeftOverride;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_friendshipBraceletLeftOverride(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendshipBraceletLeftOverride = value;
}
constexpr ::StringW& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_friendshipBraceletLeftOverride_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendshipBraceletLeftOverride_path;
}
constexpr ::StringW const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_friendshipBraceletLeftOverride_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendshipBraceletLeftOverride_path;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_friendshipBraceletLeftOverride_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendshipBraceletLeftOverride_path = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_friendshipBraceletRightOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendshipBraceletRightOverride;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_friendshipBraceletRightOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendshipBraceletRightOverride;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_friendshipBraceletRightOverride(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendshipBraceletRightOverride = value;
}
constexpr ::StringW& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_friendshipBraceletRightOverride_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendshipBraceletRightOverride_path;
}
constexpr ::StringW const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_friendshipBraceletRightOverride_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendshipBraceletRightOverride_path;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_friendshipBraceletRightOverride_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendshipBraceletRightOverride_path = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_badgeAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeAnchor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_badgeAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeAnchor;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_badgeAnchor(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badgeAnchor = value;
}
constexpr ::StringW& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_badgeAnchor_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeAnchor_path;
}
constexpr ::StringW const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_badgeAnchor_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeAnchor_path;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_badgeAnchor_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badgeAnchor_path = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_slot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slot;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_slot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slot;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_slot(::GlobalNamespace::CosmeticsController_CosmeticSlots  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slot = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_vrRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_vrRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrRig;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_vrRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vrRig = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_anchorOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorOverrides;
}
constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides> const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_anchorOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorOverrides;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_anchorOverrides(::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchorOverrides = value;
}
constexpr bool& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_anchorEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorEnabled;
}
constexpr bool const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get_anchorEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorEnabled;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set_anchorEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchorEnabled = value;
}
constexpr bool& GlobalNamespace::CosmeticAnchors::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::CosmeticAnchors::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::CosmeticAnchors::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::CosmeticAnchors::__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField = value;
}
inline void GlobalNamespace::CosmeticAnchors::setStaticF_k_debugLogError_anchorOverridesNull(::GorillaTag::GTLogErrorLimiter*  value)  {
::cordl_internals::setStaticField<::GorillaTag::GTLogErrorLimiter*, "k_debugLogError_anchorOverridesNull", ::GlobalNamespace::CosmeticAnchors*>(std::forward<::GorillaTag::GTLogErrorLimiter*>(value));
}
inline ::GorillaTag::GTLogErrorLimiter* GlobalNamespace::CosmeticAnchors::getStaticF_k_debugLogError_anchorOverridesNull()  {
return ::cordl_internals::getStaticField<::GorillaTag::GTLogErrorLimiter*, "k_debugLogError_anchorOverridesNull", ::GlobalNamespace::CosmeticAnchors*>();
}
inline bool GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::CosmeticAnchors::GorillaTag_ISpawnable_OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticAnchors::AssignAnchorToPath(::by_ref<::UnityEngine::GameObject*>  anchorGObjRef, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"AssignAnchorToPath", {}, {::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchorGObjRef, path);
}
inline void GlobalNamespace::CosmeticAnchors::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticAnchors::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticAnchors::TryUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"TryUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticAnchors::EnableAnchor(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"EnableAnchor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GlobalNamespace::CosmeticAnchors::SetHuntComputerAnchor(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"SetHuntComputerAnchor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GlobalNamespace::CosmeticAnchors::SetBuilderWatchAnchor(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"SetBuilderWatchAnchor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GlobalNamespace::CosmeticAnchors::SetCustomAnchor(::UnityEngine::Transform*  target, bool  enable, ::UnityEngine::GameObject*  overrideAnchor, ::UnityEngine::Transform*  defaultAnchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"SetCustomAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, enable, overrideAnchor, defaultAnchor);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::CosmeticAnchors::GetPositionAnchor(::GlobalNamespace::TransferrableObject_PositionState  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GetPositionAnchor", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, pos);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::CosmeticAnchors::GetNameAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"GetNameAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticAnchors::AffectedByHunt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"AffectedByHunt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticAnchors::AffectedByBuilder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {"AffectedByBuilder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticAnchors::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchors*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticAnchors* GlobalNamespace::CosmeticAnchors::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticAnchors*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::CosmeticAnchors::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::CosmeticAnchors::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticAnchors::CosmeticAnchors()   {
}

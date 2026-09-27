#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolFlash.hpp"
#include "GlobalNamespace/zzzz__GRToolFlash_State_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolFlash_UpgradeTypes_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolFlash_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRToolFlash_State_def.hpp"
#include "GlobalNamespace/zzzz__GRToolFlash_UpgradeTypes_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameHitter_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityDebugComponent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)()>(&::GlobalNamespace::GRToolFlash::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58bd1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)()>(&::GlobalNamespace::GRToolFlash::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58bd224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)()>(&::GlobalNamespace::GRToolFlash::OnEntityInit)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x58bd2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)()>(&::GlobalNamespace::GRToolFlash::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bd48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)(int64_t, int64_t)>(&::GlobalNamespace::GRToolFlash::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bd490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.OnToolUpgraded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)(::GlobalNamespace::GRTool*)>(&::GlobalNamespace::GRToolFlash::OnToolUpgraded)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58bd3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.IsHeldLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolFlash::*)()>(&::GlobalNamespace::GRToolFlash::IsHeldLocal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58bd494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"IsHeldLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)(float_t)>(&::GlobalNamespace::GRToolFlash::OnUpdate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58bd50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)()>(&::GlobalNamespace::GRToolFlash::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58bd6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)(float_t)>(&::GlobalNamespace::GRToolFlash::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x58bd548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)(float_t)>(&::GlobalNamespace::GRToolFlash::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58bd65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.SetStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)(::GlobalNamespace::GRToolFlash_State)>(&::GlobalNamespace::GRToolFlash::SetStateAuthority)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58bd81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRToolFlash_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)(::GlobalNamespace::GRToolFlash_State)>(&::GlobalNamespace::GRToolFlash::SetState)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58bd25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRToolFlash_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.StartCharge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)()>(&::GlobalNamespace::GRToolFlash::StartCharge)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58bd89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"StartCharge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.StartFlash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)()>(&::GlobalNamespace::GRToolFlash::StartFlash)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x58bd98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"StartFlash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.StopFlash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)()>(&::GlobalNamespace::GRToolFlash::StopFlash)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58bd240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"StopFlash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.IsButtonHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolFlash::*)()>(&::GlobalNamespace::GRToolFlash::IsButtonHeld)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x58bd748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"IsButtonHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.PlayVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)(float_t, float_t)>(&::GlobalNamespace::GRToolFlash::PlayVibration)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x58bddc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"PlayVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.CanChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolFlash::*)(int64_t)>(&::GlobalNamespace::GRToolFlash::CanChangeState)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58bd854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"CanChangeState", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash.GetDebugTextLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)(::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(&::GlobalNamespace::GRToolFlash::GetDebugTextLines)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x58bdee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolFlash._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolFlash::*)()>(&::GlobalNamespace::GRToolFlash::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58be028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRToolFlash::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::UnityW<::GlobalNamespace::GRTool>& GlobalNamespace::GRToolFlash::__cordl_internal_get_tool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr ::UnityW<::GlobalNamespace::GRTool> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_tool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tool = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GRToolFlash::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRToolFlash::__cordl_internal_get_flash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flash;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_flash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flash;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_flash(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flash = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolFlash::__cordl_internal_get_shootFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootFrom;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_shootFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootFrom;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_shootFrom(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootFrom = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::GRToolFlash::__cordl_internal_get_enemyLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::GRToolFlash::__cordl_internal_get_enemyLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyLayerMask;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_enemyLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enemyLayerMask = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRToolFlash::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolFlash::__cordl_internal_get_chargeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_chargeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeSound;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_chargeSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeSound = value;
}
constexpr float_t& GlobalNamespace::GRToolFlash::__cordl_internal_get_chargeSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeSoundVolume;
}
constexpr float_t const& GlobalNamespace::GRToolFlash::__cordl_internal_get_chargeSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeSoundVolume;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_chargeSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolFlash::__cordl_internal_get_flashSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_flashSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashSound;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_flashSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolFlash::__cordl_internal_get_upgrade1FlashSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1FlashSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_upgrade1FlashSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1FlashSound;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_upgrade1FlashSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade1FlashSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolFlash::__cordl_internal_get_upgrade2FlashSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2FlashSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_upgrade2FlashSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2FlashSound;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_upgrade2FlashSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade2FlashSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolFlash::__cordl_internal_get_upgrade3FlashSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3FlashSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_upgrade3FlashSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3FlashSound;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_upgrade3FlashSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade3FlashSound = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRToolFlash::__cordl_internal_get_upgrade1FlashCone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1FlashCone;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_upgrade1FlashCone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1FlashCone;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_upgrade1FlashCone(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade1FlashCone = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRToolFlash::__cordl_internal_get_upgrade2FlashCone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2FlashCone;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_upgrade2FlashCone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2FlashCone;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_upgrade2FlashCone(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade2FlashCone = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRToolFlash::__cordl_internal_get_upgrade3FlashCone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3FlashCone;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_upgrade3FlashCone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3FlashCone;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_upgrade3FlashCone(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade3FlashCone = value;
}
constexpr float_t& GlobalNamespace::GRToolFlash::__cordl_internal_get_flashSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashSoundVolume;
}
constexpr float_t const& GlobalNamespace::GRToolFlash::__cordl_internal_get_flashSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashSoundVolume;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_flashSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashSoundVolume = value;
}
constexpr float_t& GlobalNamespace::GRToolFlash::__cordl_internal_get_stunDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stunDuration;
}
constexpr float_t const& GlobalNamespace::GRToolFlash::__cordl_internal_get_stunDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stunDuration;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_stunDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stunDuration = value;
}
constexpr ::GlobalNamespace::GRToolFlash_UpgradeTypes& GlobalNamespace::GRToolFlash::__cordl_internal_get_upgradesApplied()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradesApplied;
}
constexpr ::GlobalNamespace::GRToolFlash_UpgradeTypes const& GlobalNamespace::GRToolFlash::__cordl_internal_get_upgradesApplied() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradesApplied;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_upgradesApplied(::GlobalNamespace::GRToolFlash_UpgradeTypes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradesApplied = value;
}
constexpr float_t& GlobalNamespace::GRToolFlash::__cordl_internal_get_chargeDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDuration;
}
constexpr float_t const& GlobalNamespace::GRToolFlash::__cordl_internal_get_chargeDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDuration;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_chargeDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeDuration = value;
}
constexpr float_t& GlobalNamespace::GRToolFlash::__cordl_internal_get_flashDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashDuration;
}
constexpr float_t const& GlobalNamespace::GRToolFlash::__cordl_internal_get_flashDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashDuration;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_flashDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashDuration = value;
}
constexpr float_t& GlobalNamespace::GRToolFlash::__cordl_internal_get_cooldownDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownDuration;
}
constexpr float_t const& GlobalNamespace::GRToolFlash::__cordl_internal_get_cooldownDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownDuration;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_cooldownDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownDuration = value;
}
constexpr float_t& GlobalNamespace::GRToolFlash::__cordl_internal_get_timeLastFlashed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastFlashed;
}
constexpr float_t const& GlobalNamespace::GRToolFlash::__cordl_internal_get_timeLastFlashed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastFlashed;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_timeLastFlashed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeLastFlashed = value;
}
constexpr float_t& GlobalNamespace::GRToolFlash::__cordl_internal_get_cooldownMinimum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownMinimum;
}
constexpr float_t const& GlobalNamespace::GRToolFlash::__cordl_internal_get_cooldownMinimum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownMinimum;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_cooldownMinimum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownMinimum = value;
}
constexpr bool& GlobalNamespace::GRToolFlash::__cordl_internal_get_activatedLocally()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedLocally;
}
constexpr bool const& GlobalNamespace::GRToolFlash::__cordl_internal_get_activatedLocally() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedLocally;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_activatedLocally(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activatedLocally = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRToolFlash::__cordl_internal_get_item()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_item() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_item(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___item = value;
}
constexpr ::UnityW<::GlobalNamespace::GameHitter>& GlobalNamespace::GRToolFlash::__cordl_internal_get_gameHitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameHitter;
}
constexpr ::UnityW<::GlobalNamespace::GameHitter> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_gameHitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameHitter;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_gameHitter(::UnityW<::GlobalNamespace::GameHitter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameHitter = value;
}
constexpr ::GlobalNamespace::GRToolFlash_State& GlobalNamespace::GRToolFlash::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRToolFlash_State const& GlobalNamespace::GRToolFlash::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_state(::GlobalNamespace::GRToolFlash_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr float_t& GlobalNamespace::GRToolFlash::__cordl_internal_get_stateTimeRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateTimeRemaining;
}
constexpr float_t const& GlobalNamespace::GRToolFlash::__cordl_internal_get_stateTimeRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateTimeRemaining;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_stateTimeRemaining(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateTimeRemaining = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::GRToolFlash::__cordl_internal_get_tempHitResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempHitResults;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::GRToolFlash::__cordl_internal_get_tempHitResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempHitResults;
}
constexpr void GlobalNamespace::GRToolFlash::__cordl_internal_set_tempHitResults(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempHitResults = value;
}
inline void GlobalNamespace::GRToolFlash::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolFlash::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolFlash::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolFlash::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolFlash::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GRToolFlash::OnToolUpgraded(::GlobalNamespace::GRTool*  tool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool);
}
inline bool GlobalNamespace::GRToolFlash::IsHeldLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"IsHeldLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolFlash::OnUpdate(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolFlash::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolFlash::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolFlash::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolFlash::SetStateAuthority(::GlobalNamespace::GRToolFlash_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRToolFlash_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GRToolFlash::SetState(::GlobalNamespace::GRToolFlash_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRToolFlash_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GRToolFlash::StartCharge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"StartCharge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolFlash::StartFlash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"StartFlash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolFlash::StopFlash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"StopFlash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRToolFlash::IsButtonHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"IsButtonHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolFlash::PlayVibration(float_t  strength, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"PlayVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strength, duration);
}
inline bool GlobalNamespace::GRToolFlash::CanChangeState(int64_t  newStateIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"CanChangeState", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newStateIndex);
}
inline void GlobalNamespace::GRToolFlash::GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strings);
}
inline void GlobalNamespace::GRToolFlash::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolFlash*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolFlash* GlobalNamespace::GRToolFlash::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolFlash*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr  GlobalNamespace::GRToolFlash::operator ::GlobalNamespace::IGameEntityDebugComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* GlobalNamespace::GRToolFlash::i___GlobalNamespace__IGameEntityDebugComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GRToolFlash::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GRToolFlash::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolFlash::GRToolFlash()   {
}

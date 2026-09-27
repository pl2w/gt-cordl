#pragma once
// IWYU pragma private; include "GlobalNamespace/EyeScannerMono.hpp"
#include "Cysharp/Text/zzzz__Utf16ValueStringBuilder_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__EyeScannerMono_def.hpp"
#include "GlobalNamespace/zzzz__IEyeScannable_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__TextTyperAnimatorMono_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.get_KeyTextColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (::GlobalNamespace::EyeScannerMono::*)()>(&::GlobalNamespace::EyeScannerMono::get_KeyTextColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57ee6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"get_KeyTextColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.set_KeyTextColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannerMono::*)(::UnityEngine::Color32)>(&::GlobalNamespace::EyeScannerMono::set_KeyTextColor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x57ee6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"set_KeyTextColor", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.get_registeredScannables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IEyeScannable*>* (::GlobalNamespace::EyeScannerMono::*)()>(&::GlobalNamespace::EyeScannerMono::get_registeredScannables)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57ee810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"get_registeredScannables", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IEyeScannable*)>(&::GlobalNamespace::EyeScannerMono::Register)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x57ee1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::IEyeScannable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IEyeScannable*)>(&::GlobalNamespace::EyeScannerMono::Unregister)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x57ee3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::IEyeScannable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannerMono::*)()>(&::GlobalNamespace::EyeScannerMono::Awake)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x57ee868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.GorillaTag_ISpawnable_get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EyeScannerMono::*)()>(&::GlobalNamespace::EyeScannerMono::GorillaTag_ISpawnable_get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57eea78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.GorillaTag_ISpawnable_set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannerMono::*)(bool)>(&::GlobalNamespace::EyeScannerMono::GorillaTag_ISpawnable_set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57eea80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.GorillaTag_ISpawnable_get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::EyeScannerMono::*)()>(&::GlobalNamespace::EyeScannerMono::GorillaTag_ISpawnable_get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57eea88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.GorillaTag_ISpawnable_set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannerMono::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::EyeScannerMono::GorillaTag_ISpawnable_set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57eea90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.get_DebugData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::EyeScannerMono::*)()>(&::GlobalNamespace::EyeScannerMono::get_DebugData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57eea98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"get_DebugData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.set_DebugData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannerMono::*)(::StringW)>(&::GlobalNamespace::EyeScannerMono::set_DebugData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57eeaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"set_DebugData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannerMono::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::EyeScannerMono::OnSpawn)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x57eeaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannerMono::*)()>(&::GlobalNamespace::EyeScannerMono::OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57eec34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannerMono::*)()>(&::GlobalNamespace::EyeScannerMono::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57eec38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannerMono::*)()>(&::GlobalNamespace::EyeScannerMono::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57eec44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.IGorillaSliceableSimple_SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannerMono::*)()>(&::GlobalNamespace::EyeScannerMono::IGorillaSliceableSimple_SliceUpdate)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x57eec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"IGorillaSliceableSimple.SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.Scannable_OnDataChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannerMono::*)()>(&::GlobalNamespace::EyeScannerMono::Scannable_OnDataChange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57efac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"Scannable_OnDataChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannerMono::*)()>(&::GlobalNamespace::EyeScannerMono::LateUpdate)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x57efad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono._OnScannableChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannerMono::*)(::GlobalNamespace::IEyeScannable*, bool)>(&::GlobalNamespace::EyeScannerMono::_OnScannableChanged)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x57ef2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"_OnScannableChanged", {}, {::i2c::type_of<::GlobalNamespace::IEyeScannable*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EyeScannerMono._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EyeScannerMono::*)()>(&::GlobalNamespace::EyeScannerMono::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57efed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_scanDistanceMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_scanDistanceMax;
}
constexpr float_t const& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_scanDistanceMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_scanDistanceMax;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set_m_scanDistanceMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_scanDistanceMax = value;
}
constexpr float_t& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_scanDistanceMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_scanDistanceMin;
}
constexpr float_t const& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_scanDistanceMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_scanDistanceMin;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set_m_scanDistanceMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_scanDistanceMin = value;
}
constexpr ::UnityW<::GlobalNamespace::TextTyperAnimatorMono>& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_textTyper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_textTyper;
}
constexpr ::UnityW<::GlobalNamespace::TextTyperAnimatorMono> const& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_textTyper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_textTyper;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set_m_textTyper(::UnityW<::GlobalNamespace::TextTyperAnimatorMono>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_textTyper = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_reticle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_reticle;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_reticle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_reticle;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set_m_reticle(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_reticle = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_overlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_overlay;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_overlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_overlay;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set_m_overlay(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_overlay = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_overlayBg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_overlayBg;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_overlayBg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_overlayBg;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set_m_overlayBg(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_overlayBg = value;
}
constexpr float_t& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_reticleScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_reticleScale;
}
constexpr float_t const& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_reticleScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_reticleScale;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set_m_reticleScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_reticleScale = value;
}
constexpr float_t& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_textScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_textScale;
}
constexpr float_t const& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_textScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_textScale;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set_m_textScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_textScale = value;
}
constexpr float_t& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_overlayScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_overlayScale;
}
constexpr float_t const& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_overlayScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_overlayScale;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set_m_overlayScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_overlayScale = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_pointerOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pointerOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_pointerOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pointerOffset;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set_m_pointerOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_pointerOffset = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_position;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_position;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set_m_position(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_position = value;
}
constexpr ::UnityEngine::Color32& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_keyTextColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_keyTextColor;
}
constexpr ::UnityEngine::Color32 const& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_keyTextColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_keyTextColor;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set_m_keyTextColor(::UnityEngine::Color32  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_keyTextColor = value;
}
constexpr ::StringW& GlobalNamespace::EyeScannerMono::__cordl_internal_get__keyRichTextColorTagString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyRichTextColorTagString;
}
constexpr ::StringW const& GlobalNamespace::EyeScannerMono::__cordl_internal_get__keyRichTextColorTagString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyRichTextColorTagString;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set__keyRichTextColorTagString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____keyRichTextColorTagString = value;
}
constexpr ::GlobalNamespace::IEyeScannable*& GlobalNamespace::EyeScannerMono::__cordl_internal_get__oldClosestScannable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oldClosestScannable;
}
constexpr ::GlobalNamespace::IEyeScannable* const& GlobalNamespace::EyeScannerMono::__cordl_internal_get__oldClosestScannable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oldClosestScannable;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set__oldClosestScannable(::GlobalNamespace::IEyeScannable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oldClosestScannable = value;
}
constexpr ::Cysharp::Text::Utf16ValueStringBuilder& GlobalNamespace::EyeScannerMono::__cordl_internal_get__sb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sb;
}
constexpr ::Cysharp::Text::Utf16ValueStringBuilder const& GlobalNamespace::EyeScannerMono::__cordl_internal_get__sb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sb;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set__sb(::Cysharp::Text::Utf16ValueStringBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sb = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::EyeScannerMono::__cordl_internal_get__entryIndexes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryIndexes;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::EyeScannerMono::__cordl_internal_get__entryIndexes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryIndexes;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set__entryIndexes(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entryIndexes = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::EyeScannerMono::__cordl_internal_get__layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::EyeScannerMono::__cordl_internal_get__layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerMask;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set__layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerMask = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::EyeScannerMono::__cordl_internal_get__firstPersonCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::EyeScannerMono::__cordl_internal_get__firstPersonCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonCamera;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set__firstPersonCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstPersonCamera = value;
}
constexpr bool& GlobalNamespace::EyeScannerMono::__cordl_internal_get__has_firstPersonCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____has_firstPersonCamera;
}
constexpr bool const& GlobalNamespace::EyeScannerMono::__cordl_internal_get__has_firstPersonCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____has_firstPersonCamera;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set__has_firstPersonCamera(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____has_firstPersonCamera = value;
}
constexpr bool& GlobalNamespace::EyeScannerMono::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::EyeScannerMono::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::EyeScannerMono::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::EyeScannerMono::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::EyeScannerMono::__cordl_internal_get__DebugData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DebugData_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::EyeScannerMono::__cordl_internal_get__DebugData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DebugData_k__BackingField;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set__DebugData_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DebugData_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_LookPrecision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookPrecision;
}
constexpr float_t const& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_LookPrecision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookPrecision;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set_m_LookPrecision(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LookPrecision = value;
}
constexpr bool& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_xrayVision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_xrayVision;
}
constexpr bool const& GlobalNamespace::EyeScannerMono::__cordl_internal_get_m_xrayVision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_xrayVision;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set_m_xrayVision(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_xrayVision = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::EyeScannerMono::__cordl_internal_get__line()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____line;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::EyeScannerMono::__cordl_internal_get__line() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____line;
}
constexpr void GlobalNamespace::EyeScannerMono::__cordl_internal_set__line(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____line = value;
}
inline void GlobalNamespace::EyeScannerMono::setStaticF__registeredScannables(::System::Collections::Generic::List_1<::GlobalNamespace::IEyeScannable*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::IEyeScannable*>*, "_registeredScannables", ::GlobalNamespace::EyeScannerMono*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::IEyeScannable*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IEyeScannable*>* GlobalNamespace::EyeScannerMono::getStaticF__registeredScannables()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::IEyeScannable*>*, "_registeredScannables", ::GlobalNamespace::EyeScannerMono*>();
}
inline void GlobalNamespace::EyeScannerMono::setStaticF__registeredScannableIds(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "_registeredScannableIds", ::GlobalNamespace::EyeScannerMono*>(std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* GlobalNamespace::EyeScannerMono::getStaticF__registeredScannableIds()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "_registeredScannableIds", ::GlobalNamespace::EyeScannerMono*>();
}
inline ::UnityEngine::Color32 GlobalNamespace::EyeScannerMono::get_KeyTextColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"get_KeyTextColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannerMono::set_KeyTextColor(::UnityEngine::Color32  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"set_KeyTextColor", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IEyeScannable*>* GlobalNamespace::EyeScannerMono::get_registeredScannables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"get_registeredScannables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::IEyeScannable*>*>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannerMono::Register(::GlobalNamespace::IEyeScannable*  scannable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::IEyeScannable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scannable);
}
inline void GlobalNamespace::EyeScannerMono::Unregister(::GlobalNamespace::IEyeScannable*  scannable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::IEyeScannable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scannable);
}
inline void GlobalNamespace::EyeScannerMono::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::EyeScannerMono::GorillaTag_ISpawnable_get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannerMono::GorillaTag_ISpawnable_set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::EyeScannerMono::GorillaTag_ISpawnable_get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannerMono::GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::EyeScannerMono::get_DebugData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"get_DebugData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannerMono::set_DebugData(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"set_DebugData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EyeScannerMono::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::EyeScannerMono::OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannerMono::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannerMono::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannerMono::IGorillaSliceableSimple_SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"IGorillaSliceableSimple.SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannerMono::Scannable_OnDataChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"Scannable_OnDataChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannerMono::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EyeScannerMono::_OnScannableChanged(::GlobalNamespace::IEyeScannable*  scannable, bool  typeingShow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {"_OnScannableChanged", {}, {::i2c::type_of<::GlobalNamespace::IEyeScannable*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scannable, typeingShow);
}
inline void GlobalNamespace::EyeScannerMono::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EyeScannerMono*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EyeScannerMono* GlobalNamespace::EyeScannerMono::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EyeScannerMono*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::EyeScannerMono::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::EyeScannerMono::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::EyeScannerMono::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::EyeScannerMono::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EyeScannerMono::EyeScannerMono()   {
}

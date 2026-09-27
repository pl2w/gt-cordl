#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/UI/CustomMapLoadProgressBar.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapLoadProgressBar_BarState_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapLoadProgressBar_FillAxis_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__MapLoadStatus_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapLoadProgressBar_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapLoadProgressBar_BarState_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapLoadProgressBar_FillAxis_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__MapLoadStatus_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CustomMapLoadProgressBar_BarState (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bef9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)(::GlobalNamespace::CustomMapLoadProgressBar_BarState)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bef9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"set_State", {}, {::i2c::type_of<::GlobalNamespace::CustomMapLoadProgressBar_BarState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.get_Phase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::get_Phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bef9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"get_Phase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.set_Phase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::set_Phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bef9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"set_Phase", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.get_PercentComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::get_PercentComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bef9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"get_PercentComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.set_PercentComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)(int32_t)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::set_PercentComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bef9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"set_PercentComplete", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.get_HasMeasurablePercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::get_HasMeasurablePercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bef9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"get_HasMeasurablePercent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.set_HasMeasurablePercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)(bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::set_HasMeasurablePercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bef9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"set_HasMeasurablePercent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.get_NormalizedProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::get_NormalizedProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bef9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"get_NormalizedProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.get_DisplayedProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::get_DisplayedProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bef9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"get_DisplayedProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.get_DetailMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::get_DetailMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5befa04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"get_DetailMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::OnEnable)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5befa0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::OnDisable)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5befdf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::Update)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5beffa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.SyncToCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::SyncToCurrentState)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5befbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"SyncToCurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.OnMapLoadStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus, int32_t, ::StringW)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::OnMapLoadStatusChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bf07a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"OnMapLoadStatusChanged", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.OnMapLoadComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)(bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::OnMapLoadComplete)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5bf07ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"OnMapLoadComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.OnMapUnloadComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::OnMapUnloadComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bf0884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"OnMapUnloadComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.ApplyStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus, int32_t, ::StringW)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::ApplyStatus)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5bf0458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"ApplyStatus", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.SetWorking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)(::StringW, ::StringW, int32_t, bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::SetWorking)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5bf0888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"SetWorking", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.ShowFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)(::StringW, ::StringW, ::UnityEngine::Color, float_t, bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::ShowFinished)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5bf0504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"ShowFinished", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.ShowIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::ShowIdle)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5bf0310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"ShowIdle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.SetContentActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)(bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::SetContentActive)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5bf0aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"SetContentActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.SetDetail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)(::StringW, bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::SetDetail)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5bf0c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"SetDetail", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.UpdateEllipsis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::UpdateEllipsis)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5bf01c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"UpdateEllipsis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.SetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TMPro::TMP_Text*, ::StringW)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::SetText)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5bf0b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"SetText", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.ApplyFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)(float_t)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::ApplyFill)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5bf00f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"ApplyFill", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar.SetFillColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)(::UnityEngine::Color)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::SetFillColor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5bf0d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"SetFillColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::_ctor)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5bf0ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CustomMapLoadProgressBar_BarState& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr ::GlobalNamespace::CustomMapLoadProgressBar_BarState const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set__State_k__BackingField(::GlobalNamespace::CustomMapLoadProgressBar_BarState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State_k__BackingField = value;
}
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get__Phase_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Phase_k__BackingField;
}
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get__Phase_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Phase_k__BackingField;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set__Phase_k__BackingField(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Phase_k__BackingField = value;
}
constexpr int32_t& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get__PercentComplete_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PercentComplete_k__BackingField;
}
constexpr int32_t const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get__PercentComplete_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PercentComplete_k__BackingField;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set__PercentComplete_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PercentComplete_k__BackingField = value;
}
constexpr bool& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get__HasMeasurablePercent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasMeasurablePercent_k__BackingField;
}
constexpr bool const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get__HasMeasurablePercent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasMeasurablePercent_k__BackingField;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set__HasMeasurablePercent_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasMeasurablePercent_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_fillTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_fillTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillTransform;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_fillTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fillTransform = value;
}
constexpr ::GlobalNamespace::CustomMapLoadProgressBar_FillAxis& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_fillAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillAxis;
}
constexpr ::GlobalNamespace::CustomMapLoadProgressBar_FillAxis const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_fillAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillAxis;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_fillAxis(::GlobalNamespace::CustomMapLoadProgressBar_FillAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fillAxis = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_fillRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_fillRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillRenderer;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_fillRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fillRenderer = value;
}
constexpr bool& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_tintFillByStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintFillByStatus;
}
constexpr bool const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_tintFillByStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintFillByStatus;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_tintFillByStatus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tintFillByStatus = value;
}
constexpr ::StringW& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_fillColorPropertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillColorPropertyName;
}
constexpr ::StringW const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_fillColorPropertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillColorPropertyName;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_fillColorPropertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fillColorPropertyName = value;
}
constexpr ::UnityEngine::Color& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_workingColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workingColor;
}
constexpr ::UnityEngine::Color const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_workingColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workingColor;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_workingColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workingColor = value;
}
constexpr ::UnityEngine::Color& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_readyColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyColor;
}
constexpr ::UnityEngine::Color const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_readyColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyColor;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_readyColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readyColor = value;
}
constexpr ::UnityEngine::Color& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_failedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failedColor;
}
constexpr ::UnityEngine::Color const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_failedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failedColor;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_failedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failedColor = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_statusLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusLabel;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_statusLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusLabel;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_statusLabel(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statusLabel = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_percentLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___percentLabel;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_percentLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___percentLabel;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_percentLabel(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___percentLabel = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_detailLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailLabel;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_detailLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailLabel;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_detailLabel(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailLabel = value;
}
constexpr bool& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_tintStatusLabelByStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintStatusLabelByStatus;
}
constexpr bool const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_tintStatusLabelByStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintStatusLabelByStatus;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_tintStatusLabelByStatus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tintStatusLabelByStatus = value;
}
constexpr ::StringW& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_preparingString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preparingString;
}
constexpr ::StringW const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_preparingString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preparingString;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_preparingString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preparingString = value;
}
constexpr ::StringW& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_downloadingString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadingString;
}
constexpr ::StringW const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_downloadingString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadingString;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_downloadingString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downloadingString = value;
}
constexpr ::StringW& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_installingString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installingString;
}
constexpr ::StringW const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_installingString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installingString;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_installingString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___installingString = value;
}
constexpr ::StringW& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_loadingString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingString;
}
constexpr ::StringW const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_loadingString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingString;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_loadingString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingString = value;
}
constexpr ::StringW& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_unloadingString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unloadingString;
}
constexpr ::StringW const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_unloadingString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unloadingString;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_unloadingString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unloadingString = value;
}
constexpr ::StringW& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_readyString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyString;
}
constexpr ::StringW const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_readyString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyString;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_readyString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readyString = value;
}
constexpr ::StringW& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_failedString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failedString;
}
constexpr ::StringW const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_failedString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failedString;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_failedString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failedString = value;
}
constexpr ::StringW& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_readyDetailString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyDetailString;
}
constexpr ::StringW const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_readyDetailString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyDetailString;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_readyDetailString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readyDetailString = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_contentRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_contentRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentRoot;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_contentRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contentRoot = value;
}
constexpr float_t& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_hideDelayAfterFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideDelayAfterFinished;
}
constexpr float_t const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_hideDelayAfterFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideDelayAfterFinished;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_hideDelayAfterFinished(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideDelayAfterFinished = value;
}
constexpr float_t& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_fillLerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillLerpSpeed;
}
constexpr float_t const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_fillLerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillLerpSpeed;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_fillLerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fillLerpSpeed = value;
}
constexpr float_t& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_ellipsisSecondsPerDot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ellipsisSecondsPerDot;
}
constexpr float_t const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_ellipsisSecondsPerDot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ellipsisSecondsPerDot;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_ellipsisSecondsPerDot(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ellipsisSecondsPerDot = value;
}
constexpr int32_t& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_fillColorPropertyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillColorPropertyId;
}
constexpr int32_t const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_fillColorPropertyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillColorPropertyId;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_fillColorPropertyId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fillColorPropertyId = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_fillPropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_fillPropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillPropertyBlock;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_fillPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fillPropertyBlock = value;
}
constexpr float_t& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_targetFill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetFill;
}
constexpr float_t const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_targetFill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetFill;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_targetFill(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetFill = value;
}
constexpr float_t& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_displayedFill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayedFill;
}
constexpr float_t const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_displayedFill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayedFill;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_displayedFill(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayedFill = value;
}
constexpr bool& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_showEllipsis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEllipsis;
}
constexpr bool const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_showEllipsis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEllipsis;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_showEllipsis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showEllipsis = value;
}
constexpr int32_t& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_ellipsisDotCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ellipsisDotCount;
}
constexpr int32_t const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_ellipsisDotCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ellipsisDotCount;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_ellipsisDotCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ellipsisDotCount = value;
}
constexpr ::StringW& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_detailTextWithoutEllipsis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailTextWithoutEllipsis;
}
constexpr ::StringW const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_detailTextWithoutEllipsis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailTextWithoutEllipsis;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_detailTextWithoutEllipsis(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailTextWithoutEllipsis = value;
}
constexpr bool& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_finished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finished;
}
constexpr bool const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_finished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finished;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_finished(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finished = value;
}
constexpr float_t& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_finishedAtTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedAtTime;
}
constexpr float_t const& GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_get_finishedAtTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedAtTime;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::__cordl_internal_set_finishedAtTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finishedAtTime = value;
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::setStaticF_SharedStringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "SharedStringBuilder", ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::getStaticF_SharedStringBuilder()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "SharedStringBuilder", ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>();
}
inline ::GlobalNamespace::CustomMapLoadProgressBar_BarState GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CustomMapLoadProgressBar_BarState>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::set_State(::GlobalNamespace::CustomMapLoadProgressBar_BarState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"set_State", {}, {::i2c::type_of<::GlobalNamespace::CustomMapLoadProgressBar_BarState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::get_Phase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"get_Phase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::set_Phase(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"set_Phase", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::get_PercentComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"get_PercentComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::set_PercentComplete(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"set_PercentComplete", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::get_HasMeasurablePercent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"get_HasMeasurablePercent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::set_HasMeasurablePercent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"set_HasMeasurablePercent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::get_NormalizedProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"get_NormalizedProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::get_DisplayedProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"get_DisplayedProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::StringW GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::get_DetailMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"get_DetailMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::SyncToCurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"SyncToCurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::OnMapLoadStatusChanged(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  status, int32_t  progress, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"OnMapLoadStatusChanged", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, progress, message);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::OnMapLoadComplete(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"OnMapLoadComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::OnMapUnloadComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"OnMapUnloadComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::ApplyStatus(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  status, int32_t  progress, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"ApplyStatus", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, progress, message);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::SetWorking(::StringW  status, ::StringW  detail, int32_t  percent, bool  hasMeasurableProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"SetWorking", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, detail, percent, hasMeasurableProgress);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::ShowFinished(::StringW  status, ::StringW  detail, ::UnityEngine::Color  color, float_t  fill, bool  succeeded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"ShowFinished", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, detail, color, fill, succeeded);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::ShowIdle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"ShowIdle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::SetContentActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"SetContentActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::SetDetail(::StringW  detail, bool  animateEllipsis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"SetDetail", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, detail, animateEllipsis);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::UpdateEllipsis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"UpdateEllipsis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::SetText(::TMPro::TMP_Text*  label, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"SetText", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, label, text);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::ApplyFill(float_t  fill)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"ApplyFill", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fill);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::SetFillColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {"SetFillColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar* GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar::CustomMapLoadProgressBar()   {
}

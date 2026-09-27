#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioExampleSettingsPanel.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "Modio/zzzz__IModioServiceSettings_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioExampleSettingsPanel_def.hpp"
#include "Modio/Authentication/zzzz__IModioAuthService_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioDebugMenu_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioExampleSettingsPanel_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_GainedFocusCause_def.hpp"
#include "Modio/zzzz__IModioServiceSettings_def.hpp"
#include "Modio/zzzz__ModioDebugMenuAttribute_def.hpp"
#include "Modio/zzzz__ModioSettings_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::OnEnable)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x9fa854c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel.OnGainedFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(::GlobalNamespace::ModioPanelBase_GainedFocusCause)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::OnGainedFocus)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fa8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel.SetupButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::SetupButtons)> {
  constexpr static std::size_t size = 0x10e8;
  constexpr static std::size_t addrs = 0x9fa8744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"SetupButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel.StagingUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::StagingUrl)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9fa9834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"StagingUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel.ProductionUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(int64_t)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::ProductionUrl)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9fa9874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"ProductionUrl", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel.TestUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(int64_t)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::TestUrl)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9fa98e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"TestUrl", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9fa995c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fa99c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(int64_t)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_1)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9fa99e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_1", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fa9ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(::StringW)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fa9b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_3", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_4)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9fa9b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(bool)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_5)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fa9bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_5", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_6)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fa9c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(bool)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_7)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9fa9c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_7", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_8)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fa9d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(bool)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_9)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fa9d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_9", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_10)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fa9dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_10", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_11
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(::StringW)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_11)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fa9de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_11", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_12
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_12)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fa9dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_12", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_13
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(bool)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_13)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fa9e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_13", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_14
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_14)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fa9ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_14", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_15
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(bool)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_15)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fa9f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_15", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fa9f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_16", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_17
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(bool)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_17)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fa9fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_17", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_18
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_18)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9faa03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_18", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_19
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(bool)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_19)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9faa094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_19", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_20
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_20)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9faa0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_20", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_21
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(int32_t)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_21)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9faa154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_21", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_22
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_22)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9faa1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_22", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_23
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(bool)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_23)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9faa210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_23", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_24
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_24)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9faa278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_24", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_25
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(::StringW)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_25)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9faa2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_25", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_26
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_26)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9faa338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_26", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_27
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(bool)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_27)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9faa390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_27", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_28
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_28)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9faa3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_28", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_29
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(::StringW)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_29)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9faa450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_29", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_30
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_30)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9faa4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_30", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_31
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)(bool)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_31)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9faa518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_31", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_32)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9faa680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel._SetupButtons_b__5_33
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_33)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9faa70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_33", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Modio::Unity::UI::Panels::ModioExampleSettingsPanel::__cordl_internal_get__hasDoneSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasDoneSetup;
}
constexpr bool const& Modio::Unity::UI::Panels::ModioExampleSettingsPanel::__cordl_internal_get__hasDoneSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasDoneSetup;
}
constexpr void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::__cordl_internal_set__hasDoneSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasDoneSetup = value;
}
constexpr ::Modio::ModioSettings*& Modio::Unity::UI::Panels::ModioExampleSettingsPanel::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::Modio::ModioSettings* const& Modio::Unity::UI::Panels::ModioExampleSettingsPanel::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::__cordl_internal_set__settings(::Modio::ModioSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioDebugMenu>& Modio::Unity::UI::Panels::ModioExampleSettingsPanel::__cordl_internal_get__debugMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugMenu;
}
constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioDebugMenu> const& Modio::Unity::UI::Panels::ModioExampleSettingsPanel::__cordl_internal_get__debugMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugMenu;
}
constexpr void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::__cordl_internal_set__debugMenu(::UnityW<::Modio::Unity::UI::Panels::ModioDebugMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugMenu = value;
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::OnGainedFocus(::GlobalNamespace::ModioPanelBase_GainedFocusCause  selectionBehaviour)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectionBehaviour);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::SetupButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"SetupButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Modio::Unity::UI::Panels::ModioExampleSettingsPanel::StagingUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"StagingUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Modio::Unity::UI::Panels::ModioExampleSettingsPanel::ProductionUrl(int64_t  gameId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"ProductionUrl", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, gameId);
}
inline ::StringW Modio::Unity::UI::Panels::ModioExampleSettingsPanel::TestUrl(int64_t  gameId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"TestUrl", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, gameId);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_1(int64_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_1", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::StringW Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_3(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_3", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline bool Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_5(bool  production)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_5", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, production);
}
inline bool Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_7(bool  staging)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_7", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, staging);
}
inline bool Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_9(bool  test)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_9", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, test);
}
inline ::StringW Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_10()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_10", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_11(::StringW  isoCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_11", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isoCode);
}
inline bool Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_12()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_12", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_13(bool  on)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_13", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline bool Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_14()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_14", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_15(bool  on)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_15", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline bool Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_16()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_16", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_17(bool  on)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_17", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline bool Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_18()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_18", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_19(bool  on)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_19", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline int32_t Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_20()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_20", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_21(int32_t  on)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_21", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline bool Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_22()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_22", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_23(bool  on)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_23", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline ::StringW Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_24()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_24", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_25(::StringW  regex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_25", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regex);
}
inline bool Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_26()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_26", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_27(bool  on)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_27", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline ::StringW Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_28()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_28", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_29(::StringW  regex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_29", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regex);
}
inline bool Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_30()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_30", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_31(bool  on)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_31", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_b__5_33()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                        {"<SetupButtons>b__5_33", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Modio::IModioServiceSettings*> && ::cordl_internals::default_constructor_constraint<T>)
inline T Modio::Unity::UI::Panels::ModioExampleSettingsPanel::_SetupButtons_g__Get_5_35()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>(),
                    {"<SetupButtons>g__Get|5_35", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel* Modio::Unity::UI::Panels::ModioExampleSettingsPanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel::ModioExampleSettingsPanel()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa982c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0._SetupButtons_b__37
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::_SetupButtons_b__37)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9faa8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0*>(),
                        {"<SetupButtons>b__37", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0._SetupButtons_b__38
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::*)(bool)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::_SetupButtons_b__38)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9faa924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0*>(),
                        {"<SetupButtons>b__38", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::Authentication::IModioAuthService*& Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::__cordl_internal_get_modioAuthPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modioAuthPlatform;
}
constexpr ::Modio::Authentication::IModioAuthService* const& Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::__cordl_internal_get_modioAuthPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modioAuthPlatform;
}
constexpr void Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::__cordl_internal_set_modioAuthPlatform(::Modio::Authentication::IModioAuthService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modioAuthPlatform = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel>& Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel> const& Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::__cordl_internal_set___4__this(::UnityW<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::_SetupButtons_b__37()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0*>(),
                        {"<SetupButtons>b__37", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::_SetupButtons_b__38(bool  on)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0*>(),
                        {"<SetupButtons>b__38", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0* Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0::ModioExampleSettingsPanel___c__DisplayClass5_0()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::*)()>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9faa838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c._SetupButtons_b__5_36
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::*)(::Modio::IModioServiceSettings*)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::_SetupButtons_b__5_36)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9faa840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*>(),
                        {"<SetupButtons>b__5_36", {}, {::i2c::type_of<::Modio::IModioServiceSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c._SetupButtons_b__5_34
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::*)(::Modio::ModioDebugMenuAttribute*)>(&::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::_SetupButtons_b__5_34)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9faa8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*>(),
                        {"<SetupButtons>b__5_34", {}, {::i2c::type_of<::Modio::ModioDebugMenuAttribute*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::setStaticF___9(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*  value)  {
::cordl_internals::setStaticField<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*, "<>9", ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*>(std::forward<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*>(value));
}
inline ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c* Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*, "<>9", ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*>();
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::setStaticF___9__5_36(::System::Func_2<::Modio::IModioServiceSettings*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::IModioServiceSettings*,bool>*, "<>9__5_36", ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*>(std::forward<::System::Func_2<::Modio::IModioServiceSettings*,bool>*>(value));
}
inline ::System::Func_2<::Modio::IModioServiceSettings*,bool>* Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::getStaticF___9__5_36()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::IModioServiceSettings*,bool>*, "<>9__5_36", ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*>();
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::setStaticF___9__5_34(::System::Func_2<::Modio::ModioDebugMenuAttribute*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::ModioDebugMenuAttribute*,bool>*, "<>9__5_34", ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*>(std::forward<::System::Func_2<::Modio::ModioDebugMenuAttribute*,bool>*>(value));
}
inline ::System::Func_2<::Modio::ModioDebugMenuAttribute*,bool>* Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::getStaticF___9__5_34()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::ModioDebugMenuAttribute*,bool>*, "<>9__5_34", ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*>();
}
inline void Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::_SetupButtons_b__5_36(::Modio::IModioServiceSettings*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*>(),
                        {"<SetupButtons>b__5_36", {}, {::i2c::type_of<::Modio::IModioServiceSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline bool Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::_SetupButtons_b__5_34(::Modio::ModioDebugMenuAttribute*  attribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*>(),
                        {"<SetupButtons>b__5_34", {}, {::i2c::type_of<::Modio::ModioDebugMenuAttribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attribute);
}
inline ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c* Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c::ModioExampleSettingsPanel___c()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/GRResearchStation.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "TMPro/zzzz__TMP_Text_impl.hpp"
#include "UnityEngine/UI/zzzz__Image_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRResearchStation_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionTree_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_GRToolType_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__IDCardScanner_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)(::GlobalNamespace::GRToolProgressionManager*, ::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRResearchStation::Init)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x58a887c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager*>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.SelectTool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)(int32_t)>(&::GlobalNamespace::GRResearchStation::SelectTool)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58a8a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"SelectTool", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.ResearchTreeUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::ResearchTreeUpdated)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58a8c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"ResearchTreeUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.UpdateUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::UpdateUI)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58a8a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.SelectUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)(int32_t)>(&::GlobalNamespace::GRResearchStation::SelectUpgrade)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x58a8b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"SelectUpgrade", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.SetUpgradeTextColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)(int32_t)>(&::GlobalNamespace::GRResearchStation::SetUpgradeTextColors)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58a94cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"SetUpgradeTextColors", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.UpdateUpgradeTitles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::UpdateUpgradeTitles)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x58a8d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateUpgradeTitles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.UpdateLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::UpdateLocked)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x58a8ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateLocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.UpdateRequiredLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::UpdateRequiredLevel)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x58a9120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateRequiredLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.UpdateDescriptionText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)(::StringW)>(&::GlobalNamespace::GRResearchStation::UpdateDescriptionText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58a9570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateDescriptionText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.UpdateCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::UpdateCost)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x58a9314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateCost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.UpdateToolName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::UpdateToolName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58a8cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateToolName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.UpdateResearchPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)(int32_t)>(&::GlobalNamespace::GRResearchStation::UpdateResearchPoints)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58a9468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateResearchPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.MFDButton0Pressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::MFDButton0Pressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a9590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"MFDButton0Pressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.MFDButton1Pressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::MFDButton1Pressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a9598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"MFDButton1Pressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.MFDButton2Pressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::MFDButton2Pressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a95a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"MFDButton2Pressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.MFDButton3Pressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::MFDButton3Pressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a95a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"MFDButton3Pressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.MFDButton4Pressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::MFDButton4Pressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a95b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"MFDButton4Pressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.MFDButton5Pressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::MFDButton5Pressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a95b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"MFDButton5Pressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.NextToolButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::NextToolButtonPressed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58a95c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"NextToolButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.PreviousToolButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::PreviousToolButtonPressed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58a95d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"PreviousToolButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.UpgradeButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::UpgradeButtonPressed)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58a9604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpgradeButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation.ResearchCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)(bool, ::StringW)>(&::GlobalNamespace::GRResearchStation::ResearchCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a969c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"ResearchCompleted", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRResearchStation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRResearchStation::*)()>(&::GlobalNamespace::GRResearchStation::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x58a96a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::GRResearchStation::__cordl_internal_get_selectedUpgradeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedUpgradeColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRResearchStation::__cordl_internal_get_selectedUpgradeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedUpgradeColor;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_selectedUpgradeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedUpgradeColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRResearchStation::__cordl_internal_get_unselectedUpgradeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unselectedUpgradeColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRResearchStation::__cordl_internal_get_unselectedUpgradeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unselectedUpgradeColor;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_unselectedUpgradeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unselectedUpgradeColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRResearchStation::__cordl_internal_get_lockedToolColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedToolColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRResearchStation::__cordl_internal_get_lockedToolColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedToolColor;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_lockedToolColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockedToolColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRResearchStation::__cordl_internal_get_unlockedToolColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedToolColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRResearchStation::__cordl_internal_get_unlockedToolColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedToolColor;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_unlockedToolColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedToolColor = value;
}
constexpr int32_t& GlobalNamespace::GRResearchStation::__cordl_internal_get_selectedUpgradeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedUpgradeIndex;
}
constexpr int32_t const& GlobalNamespace::GRResearchStation::__cordl_internal_get_selectedUpgradeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedUpgradeIndex;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_selectedUpgradeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedUpgradeIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& GlobalNamespace::GRResearchStation::__cordl_internal_get_scanner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanner;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& GlobalNamespace::GRResearchStation::__cordl_internal_get_scanner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanner;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_scanner(::UnityW<::GlobalNamespace::IDCardScanner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanner = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRResearchStation::__cordl_internal_get_BonusText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BonusText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRResearchStation::__cordl_internal_get_BonusText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BonusText;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_BonusText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BonusText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRResearchStation::__cordl_internal_get_CostText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CostText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRResearchStation::__cordl_internal_get_CostText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CostText;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_CostText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CostText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRResearchStation::__cordl_internal_get_DescriptionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DescriptionText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRResearchStation::__cordl_internal_get_DescriptionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DescriptionText;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_DescriptionText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DescriptionText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRResearchStation::__cordl_internal_get_LevelText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LevelText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRResearchStation::__cordl_internal_get_LevelText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LevelText;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_LevelText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LevelText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRResearchStation::__cordl_internal_get_ResearchPointsTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResearchPointsTex;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRResearchStation::__cordl_internal_get_ResearchPointsTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResearchPointsTex;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_ResearchPointsTex(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ResearchPointsTex = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRResearchStation::__cordl_internal_get_RequiredLevelText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequiredLevelText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRResearchStation::__cordl_internal_get_RequiredLevelText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequiredLevelText;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_RequiredLevelText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequiredLevelText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRResearchStation::__cordl_internal_get_ToolNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToolNameText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRResearchStation::__cordl_internal_get_ToolNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToolNameText;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_ToolNameText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ToolNameText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRResearchStation::__cordl_internal_get_UnlockedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnlockedText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRResearchStation::__cordl_internal_get_UnlockedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnlockedText;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_UnlockedText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnlockedText = value;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& GlobalNamespace::GRResearchStation::__cordl_internal_get_UpgradePointerText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradePointerText;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& GlobalNamespace::GRResearchStation::__cordl_internal_get_UpgradePointerText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradePointerText;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_UpgradePointerText(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpgradePointerText = value;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& GlobalNamespace::GRResearchStation::__cordl_internal_get_UpgradeTitlesText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeTitlesText;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& GlobalNamespace::GRResearchStation::__cordl_internal_get_UpgradeTitlesText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeTitlesText;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_UpgradeTitlesText(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpgradeTitlesText = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>>& GlobalNamespace::GRResearchStation::__cordl_internal_get_LockedImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockedImage;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>> const& GlobalNamespace::GRResearchStation::__cordl_internal_get_LockedImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockedImage;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_LockedImage(::ArrayW<::UnityW<::UnityEngine::UI::Image>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LockedImage = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>& GlobalNamespace::GRResearchStation::__cordl_internal_get_UpgradeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeButton;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>> const& GlobalNamespace::GRResearchStation::__cordl_internal_get_UpgradeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeButton;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_UpgradeButton(::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpgradeButton = value;
}
constexpr ::StringW& GlobalNamespace::GRResearchStation::__cordl_internal_get__costString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____costString;
}
constexpr ::StringW const& GlobalNamespace::GRResearchStation::__cordl_internal_get__costString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____costString;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set__costString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____costString = value;
}
constexpr ::StringW& GlobalNamespace::GRResearchStation::__cordl_internal_get__levelString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelString;
}
constexpr ::StringW const& GlobalNamespace::GRResearchStation::__cordl_internal_get__levelString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelString;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set__levelString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____levelString = value;
}
constexpr ::StringW& GlobalNamespace::GRResearchStation::__cordl_internal_get__researchPointsString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____researchPointsString;
}
constexpr ::StringW const& GlobalNamespace::GRResearchStation::__cordl_internal_get__researchPointsString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____researchPointsString;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set__researchPointsString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____researchPointsString = value;
}
constexpr ::StringW& GlobalNamespace::GRResearchStation::__cordl_internal_get__requiredLevelString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requiredLevelString;
}
constexpr ::StringW const& GlobalNamespace::GRResearchStation::__cordl_internal_get__requiredLevelString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requiredLevelString;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set__requiredLevelString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requiredLevelString = value;
}
constexpr int32_t& GlobalNamespace::GRResearchStation::__cordl_internal_get_selectedToolIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedToolIndex;
}
constexpr int32_t const& GlobalNamespace::GRResearchStation::__cordl_internal_get_selectedToolIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedToolIndex;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_selectedToolIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedToolIndex = value;
}
constexpr int32_t& GlobalNamespace::GRResearchStation::__cordl_internal_get_totalTools()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalTools;
}
constexpr int32_t const& GlobalNamespace::GRResearchStation::__cordl_internal_get_totalTools() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalTools;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_totalTools(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalTools = value;
}
constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager>& GlobalNamespace::GRResearchStation::__cordl_internal_get_toolProgressionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolProgressionManager;
}
constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager> const& GlobalNamespace::GRResearchStation::__cordl_internal_get_toolProgressionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolProgressionManager;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_toolProgressionManager(::UnityW<::GlobalNamespace::GRToolProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolProgressionManager = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>*& GlobalNamespace::GRResearchStation::__cordl_internal_get_supportedTools()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___supportedTools;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>* const& GlobalNamespace::GRResearchStation::__cordl_internal_get_supportedTools() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___supportedTools;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_supportedTools(::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___supportedTools = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*& GlobalNamespace::GRResearchStation::__cordl_internal_get_selectedToolUpgrades()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedToolUpgrades;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* const& GlobalNamespace::GRResearchStation::__cordl_internal_get_selectedToolUpgrades() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedToolUpgrades;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_selectedToolUpgrades(::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedToolUpgrades = value;
}
constexpr ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*& GlobalNamespace::GRResearchStation::__cordl_internal_get_currentlySelectedToolUpgrade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlySelectedToolUpgrade;
}
constexpr ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* const& GlobalNamespace::GRResearchStation::__cordl_internal_get_currentlySelectedToolUpgrade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlySelectedToolUpgrade;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_currentlySelectedToolUpgrade(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentlySelectedToolUpgrade = value;
}
constexpr ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*& GlobalNamespace::GRResearchStation::__cordl_internal_get_currentlySelectedUpgradeMetadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlySelectedUpgradeMetadata;
}
constexpr ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* const& GlobalNamespace::GRResearchStation::__cordl_internal_get_currentlySelectedUpgradeMetadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlySelectedUpgradeMetadata;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_currentlySelectedUpgradeMetadata(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentlySelectedUpgradeMetadata = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRResearchStation::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRResearchStation::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GRResearchStation::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
inline void GlobalNamespace::GRResearchStation::Init(::GlobalNamespace::GRToolProgressionManager*  tree, ::GlobalNamespace::GhostReactor*  ghostReactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager*>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tree, ghostReactor);
}
inline void GlobalNamespace::GRResearchStation::SelectTool(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"SelectTool", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::GRResearchStation::ResearchTreeUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"ResearchTreeUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::UpdateUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::SelectUpgrade(int32_t  UpgradeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"SelectUpgrade", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, UpgradeIndex);
}
inline void GlobalNamespace::GRResearchStation::SetUpgradeTextColors(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"SetUpgradeTextColors", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::GRResearchStation::UpdateUpgradeTitles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateUpgradeTitles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::UpdateLocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateLocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::UpdateRequiredLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateRequiredLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::UpdateDescriptionText(::StringW  description)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateDescriptionText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, description);
}
inline void GlobalNamespace::GRResearchStation::UpdateCost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateCost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::UpdateToolName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateToolName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::UpdateResearchPoints(int32_t  ResearchPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpdateResearchPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ResearchPoints);
}
inline void GlobalNamespace::GRResearchStation::MFDButton0Pressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"MFDButton0Pressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::MFDButton1Pressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"MFDButton1Pressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::MFDButton2Pressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"MFDButton2Pressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::MFDButton3Pressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"MFDButton3Pressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::MFDButton4Pressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"MFDButton4Pressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::MFDButton5Pressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"MFDButton5Pressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::NextToolButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"NextToolButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::PreviousToolButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"PreviousToolButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::UpgradeButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"UpgradeButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRResearchStation::ResearchCompleted(bool  success, ::StringW  researchID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {"ResearchCompleted", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, researchID);
}
inline void GlobalNamespace::GRResearchStation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRResearchStation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRResearchStation* GlobalNamespace::GRResearchStation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRResearchStation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRResearchStation::GRResearchStation()   {
}

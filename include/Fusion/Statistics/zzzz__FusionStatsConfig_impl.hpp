#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatsConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsConfig_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatistics_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig.get_IsWorldAnchored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Statistics::FusionStatsConfig::*)()>(&::Fusion::Statistics::FusionStatsConfig::get_IsWorldAnchored)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60fadb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"get_IsWorldAnchored", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig.add__onWorldAnchorCandidatesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Fusion::Statistics::FusionStatsConfig::add__onWorldAnchorCandidatesUpdate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x60fb6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"add__onWorldAnchorCandidatesUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig.remove__onWorldAnchorCandidatesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Fusion::Statistics::FusionStatsConfig::remove__onWorldAnchorCandidatesUpdate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x60fb794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"remove__onWorldAnchorCandidatesUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig.SetWorldAnchorCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, bool)>(&::Fusion::Statistics::FusionStatsConfig::SetWorldAnchorCandidate)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x60fb870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"SetWorldAnchorCandidate", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig.SetupStatisticReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsConfig::*)(::Fusion::Statistics::FusionStatistics*)>(&::Fusion::Statistics::FusionStatsConfig::SetupStatisticReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60fba10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"SetupStatisticReference", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatistics*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig.ToggleConfigPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsConfig::*)()>(&::Fusion::Statistics::FusionStatsConfig::ToggleConfigPanel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60fba18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"ToggleConfigPanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig.ToggleUseWorldAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsConfig::*)(bool)>(&::Fusion::Statistics::FusionStatsConfig::ToggleUseWorldAnchor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60fba4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"ToggleUseWorldAnchor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig.SetWorldAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsConfig::*)(::UnityEngine::Transform*)>(&::Fusion::Statistics::FusionStatsConfig::SetWorldAnchor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x60fa478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"SetWorldAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig.SetWorldCanvasScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsConfig::*)(float_t)>(&::Fusion::Statistics::FusionStatsConfig::SetWorldCanvasScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60fba58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"SetWorldCanvasScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig.ResetToCanvasAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsConfig::*)()>(&::Fusion::Statistics::FusionStatsConfig::ResetToCanvasAnchor)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x60fa264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"ResetToCanvasAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig.UpdateWorldAnchorButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsConfig::*)()>(&::Fusion::Statistics::FusionStatsConfig::UpdateWorldAnchorButtons)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x60fba60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"UpdateWorldAnchorButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsConfig::*)()>(&::Fusion::Statistics::FusionStatsConfig::OnEnable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60fbde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsConfig::*)()>(&::Fusion::Statistics::FusionStatsConfig::OnDestroy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x60fbeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsConfig::*)()>(&::Fusion::Statistics::FusionStatsConfig::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60fbf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__worldAnchorButtonPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldAnchorButtonPrefab;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__worldAnchorButtonPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldAnchorButtonPrefab;
}
constexpr void Fusion::Statistics::FusionStatsConfig::__cordl_internal_set__worldAnchorButtonPrefab(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldAnchorButtonPrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__worldAnchorListContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldAnchorListContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__worldAnchorListContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldAnchorListContainer;
}
constexpr void Fusion::Statistics::FusionStatsConfig::__cordl_internal_set__worldAnchorListContainer(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldAnchorListContainer = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__configPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configPanel;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__configPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configPanel;
}
constexpr void Fusion::Statistics::FusionStatsConfig::__cordl_internal_set__configPanel(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____configPanel = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__canvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__canvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvas;
}
constexpr void Fusion::Statistics::FusionStatsConfig::__cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canvas = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__renderPanelRectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderPanelRectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__renderPanelRectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderPanelRectTransform;
}
constexpr void Fusion::Statistics::FusionStatsConfig::__cordl_internal_set__renderPanelRectTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderPanelRectTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__worldTransformAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldTransformAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__worldTransformAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldTransformAnchor;
}
constexpr void Fusion::Statistics::FusionStatsConfig::__cordl_internal_set__worldTransformAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldTransformAnchor = value;
}
constexpr float_t& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__worldCanvasScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldCanvasScale;
}
constexpr float_t const& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__worldCanvasScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldCanvasScale;
}
constexpr void Fusion::Statistics::FusionStatsConfig::__cordl_internal_set__worldCanvasScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldCanvasScale = value;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatistics>& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__fusionStatistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fusionStatistics;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatistics> const& Fusion::Statistics::FusionStatsConfig::__cordl_internal_get__fusionStatistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fusionStatistics;
}
constexpr void Fusion::Statistics::FusionStatsConfig::__cordl_internal_set__fusionStatistics(::UnityW<::Fusion::Statistics::FusionStatistics>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fusionStatistics = value;
}
inline void Fusion::Statistics::FusionStatsConfig::setStaticF__worldAnchorCandidates(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, "_worldAnchorCandidates", ::Fusion::Statistics::FusionStatsConfig*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* Fusion::Statistics::FusionStatsConfig::getStaticF__worldAnchorCandidates()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, "_worldAnchorCandidates", ::Fusion::Statistics::FusionStatsConfig*>();
}
inline void Fusion::Statistics::FusionStatsConfig::setStaticF__onWorldAnchorCandidatesUpdate(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "_onWorldAnchorCandidatesUpdate", ::Fusion::Statistics::FusionStatsConfig*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Fusion::Statistics::FusionStatsConfig::getStaticF__onWorldAnchorCandidatesUpdate()  {
return ::cordl_internals::getStaticField<::System::Action*, "_onWorldAnchorCandidatesUpdate", ::Fusion::Statistics::FusionStatsConfig*>();
}
inline bool Fusion::Statistics::FusionStatsConfig::get_IsWorldAnchored()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"get_IsWorldAnchored", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsConfig::add__onWorldAnchorCandidatesUpdate(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"add__onWorldAnchorCandidatesUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::Statistics::FusionStatsConfig::remove__onWorldAnchorCandidatesUpdate(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"remove__onWorldAnchorCandidatesUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::Statistics::FusionStatsConfig::SetWorldAnchorCandidate(::UnityEngine::Transform*  candidate, bool  _cordl_register)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"SetWorldAnchorCandidate", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, candidate, _cordl_register);
}
inline void Fusion::Statistics::FusionStatsConfig::SetupStatisticReference(::Fusion::Statistics::FusionStatistics*  fusionStatistics)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"SetupStatisticReference", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatistics*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fusionStatistics);
}
inline void Fusion::Statistics::FusionStatsConfig::ToggleConfigPanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"ToggleConfigPanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsConfig::ToggleUseWorldAnchor(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"ToggleUseWorldAnchor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Statistics::FusionStatsConfig::SetWorldAnchor(::UnityEngine::Transform*  worldTransformAnchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"SetWorldAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldTransformAnchor);
}
inline void Fusion::Statistics::FusionStatsConfig::SetWorldCanvasScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"SetWorldCanvasScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Statistics::FusionStatsConfig::ResetToCanvasAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"ResetToCanvasAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsConfig::UpdateWorldAnchorButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"UpdateWorldAnchorButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsConfig::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsConfig::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::FusionStatsConfig* Fusion::Statistics::FusionStatsConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::FusionStatsConfig*>());
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::FusionStatsConfig::FusionStatsConfig()   {
}
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0::*)()>(&::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60fbddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0._UpdateWorldAnchorButtons_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0::*)()>(&::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0::_UpdateWorldAnchorButtons_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60fbffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0*>(),
                        {"<UpdateWorldAnchorButtons>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0::__cordl_internal_get_candidate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candidate;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0::__cordl_internal_get_candidate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candidate;
}
constexpr void Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0::__cordl_internal_set_candidate(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___candidate = value;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatsConfig>& Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatsConfig> const& Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0::__cordl_internal_set___4__this(::UnityW<::Fusion::Statistics::FusionStatsConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0::_UpdateWorldAnchorButtons_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0*>(),
                        {"<UpdateWorldAnchorButtons>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0* Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0::FusionStatsConfig___c__DisplayClass21_0()   {
}

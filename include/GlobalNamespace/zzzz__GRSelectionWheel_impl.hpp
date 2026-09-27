#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSelectionWheel.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRSelectionWheel_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRSelectionWheel.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRSelectionWheel::*)()>(&::GlobalNamespace::GRSelectionWheel::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58af358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSelectionWheel.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSelectionWheel::*)(bool)>(&::GlobalNamespace::GRSelectionWheel::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58af360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSelectionWheel.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSelectionWheel::*)()>(&::GlobalNamespace::GRSelectionWheel::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58af368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSelectionWheel.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSelectionWheel::*)()>(&::GlobalNamespace::GRSelectionWheel::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58af370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSelectionWheel.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSelectionWheel::*)()>(&::GlobalNamespace::GRSelectionWheel::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58af3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSelectionWheel.ShowText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSelectionWheel::*)(bool)>(&::GlobalNamespace::GRSelectionWheel::ShowText)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x58af448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"ShowText", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSelectionWheel.InitFromNameList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSelectionWheel::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::GRSelectionWheel::InitFromNameList)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x58af588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"InitFromNameList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSelectionWheel.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSelectionWheel::*)()>(&::GlobalNamespace::GRSelectionWheel::Tick)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x58afa58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSelectionWheel.SetRotationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSelectionWheel::*)(float_t)>(&::GlobalNamespace::GRSelectionWheel::SetRotationSpeed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58afc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"SetRotationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSelectionWheel.SetTargetShelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSelectionWheel::*)(int32_t)>(&::GlobalNamespace::GRSelectionWheel::SetTargetShelf)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58afc34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"SetTargetShelf", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSelectionWheel.SetTargetAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSelectionWheel::*)(float_t)>(&::GlobalNamespace::GRSelectionWheel::SetTargetAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58afc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"SetTargetAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSelectionWheel.UpdateVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSelectionWheel::*)()>(&::GlobalNamespace::GRSelectionWheel::UpdateVisuals)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x58af778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"UpdateVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSelectionWheel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSelectionWheel::*)()>(&::GlobalNamespace::GRSelectionWheel::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58afc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_shelfNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfNames;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_shelfNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfNames;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_shelfNames(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shelfNames = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_templateText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_templateText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateText;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_templateText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___templateText = value;
}
constexpr float_t& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_deltaAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaAngle;
}
constexpr float_t const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_deltaAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaAngle;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_deltaAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaAngle = value;
}
constexpr float_t& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_pointerOffsetAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerOffsetAngle;
}
constexpr float_t const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_pointerOffsetAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerOffsetAngle;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_pointerOffsetAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointerOffsetAngle = value;
}
constexpr float_t& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_wheelTextRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelTextRadius;
}
constexpr float_t const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_wheelTextRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelTextRadius;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_wheelTextRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wheelTextRadius = value;
}
constexpr float_t& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_textHorizOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textHorizOffset;
}
constexpr float_t const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_textHorizOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textHorizOffset;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_textHorizOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textHorizOffset = value;
}
constexpr float_t& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_rotSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotSpeed;
}
constexpr float_t const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_rotSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotSpeed;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_rotSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotSpeed = value;
}
constexpr bool& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_isBeingDrivenRemotely()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBeingDrivenRemotely;
}
constexpr bool const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_isBeingDrivenRemotely() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBeingDrivenRemotely;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_isBeingDrivenRemotely(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBeingDrivenRemotely = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr int32_t& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_lastPlayedAudioTickPage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlayedAudioTickPage;
}
constexpr int32_t const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_lastPlayedAudioTickPage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlayedAudioTickPage;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_lastPlayedAudioTickPage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPlayedAudioTickPage = value;
}
constexpr float_t& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_wheelTextPairOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelTextPairOffset;
}
constexpr float_t const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_wheelTextPairOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelTextPairOffset;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_wheelTextPairOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wheelTextPairOffset = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_rotationWheel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationWheel;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_rotationWheel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationWheel;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_rotationWheel(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationWheel = value;
}
constexpr float_t& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_lastAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle;
}
constexpr float_t const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_lastAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_lastAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngle = value;
}
constexpr bool& GlobalNamespace::GRSelectionWheel::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_targetPage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPage;
}
constexpr int32_t const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_targetPage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPage;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_targetPage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPage = value;
}
constexpr float_t& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_currentAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle;
}
constexpr float_t const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_currentAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_currentAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAngle = value;
}
constexpr float_t& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_rotSpeedMult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotSpeedMult;
}
constexpr float_t const& GlobalNamespace::GRSelectionWheel::__cordl_internal_get_rotSpeedMult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotSpeedMult;
}
constexpr void GlobalNamespace::GRSelectionWheel::__cordl_internal_set_rotSpeedMult(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotSpeedMult = value;
}
inline bool GlobalNamespace::GRSelectionWheel::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRSelectionWheel::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GRSelectionWheel::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSelectionWheel::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSelectionWheel::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSelectionWheel::ShowText(bool  showText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"ShowText", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, showText);
}
inline void GlobalNamespace::GRSelectionWheel::InitFromNameList(::System::Collections::Generic::List_1<::StringW>*  shelves)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"InitFromNameList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shelves);
}
inline void GlobalNamespace::GRSelectionWheel::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSelectionWheel::SetRotationSpeed(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"SetRotationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speed);
}
inline void GlobalNamespace::GRSelectionWheel::SetTargetShelf(int32_t  shelf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"SetTargetShelf", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shelf);
}
inline void GlobalNamespace::GRSelectionWheel::SetTargetAngle(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"SetTargetAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angle);
}
inline void GlobalNamespace::GRSelectionWheel::UpdateVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {"UpdateVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSelectionWheel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSelectionWheel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRSelectionWheel* GlobalNamespace::GRSelectionWheel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRSelectionWheel*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::GRSelectionWheel::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::GRSelectionWheel::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSelectionWheel::GRSelectionWheel()   {
}

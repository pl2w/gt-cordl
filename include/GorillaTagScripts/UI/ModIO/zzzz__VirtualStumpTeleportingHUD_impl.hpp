#pragma once
// IWYU pragma private; include "GorillaTagScripts/UI/ModIO/VirtualStumpTeleportingHUD.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/UI/ModIO/zzzz__VirtualStumpTeleportingHUD_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::*)(bool)>(&::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::Initialize)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5be7b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD*>(),
                        {"Initialize", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::*)()>(&::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::Update)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5bf589c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD.IncrementProgressDots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::*)()>(&::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::IncrementProgressDots)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bf59b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD*>(),
                        {"IncrementProgressDots", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::*)()>(&::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5bf59d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_enteringVirtualStumpString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enteringVirtualStumpString;
}
constexpr ::StringW const& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_enteringVirtualStumpString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enteringVirtualStumpString;
}
constexpr void GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_set_enteringVirtualStumpString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enteringVirtualStumpString = value;
}
constexpr ::StringW& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_leavingVirtualStumpString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leavingVirtualStumpString;
}
constexpr ::StringW const& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_leavingVirtualStumpString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leavingVirtualStumpString;
}
constexpr void GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_set_leavingVirtualStumpString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leavingVirtualStumpString = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_teleportingStatusText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportingStatusText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_teleportingStatusText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportingStatusText;
}
constexpr void GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_set_teleportingStatusText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportingStatusText = value;
}
constexpr int32_t& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_maxNumProgressDots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNumProgressDots;
}
constexpr int32_t const& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_maxNumProgressDots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNumProgressDots;
}
constexpr void GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_set_maxNumProgressDots(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxNumProgressDots = value;
}
constexpr float_t& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_textUpdateInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textUpdateInterval;
}
constexpr float_t const& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_textUpdateInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textUpdateInterval;
}
constexpr void GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_set_textUpdateInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textUpdateInterval = value;
}
constexpr float_t& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_lastTextUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTextUpdateTime;
}
constexpr float_t const& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_lastTextUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTextUpdateTime;
}
constexpr void GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_set_lastTextUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTextUpdateTime = value;
}
constexpr int32_t& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_numProgressDots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numProgressDots;
}
constexpr int32_t const& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_numProgressDots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numProgressDots;
}
constexpr void GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_set_numProgressDots(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numProgressDots = value;
}
constexpr bool& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_isEnteringVirtualStump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEnteringVirtualStump;
}
constexpr bool const& GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_get_isEnteringVirtualStump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEnteringVirtualStump;
}
constexpr void GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::__cordl_internal_set_isEnteringVirtualStump(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isEnteringVirtualStump = value;
}
inline void GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::Initialize(bool  isEntering)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD*>(),
                        {"Initialize", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEntering);
}
inline void GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::IncrementProgressDots()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD*>(),
                        {"IncrementProgressDots", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD* GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD::VirtualStumpTeleportingHUD()   {
}

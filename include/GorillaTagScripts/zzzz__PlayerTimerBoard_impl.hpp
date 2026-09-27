#pragma once
// IWYU pragma private; include "GorillaTagScripts/PlayerTimerBoard.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__PlayerTimerBoard_def.hpp"
#include "GorillaTagScripts/zzzz__PlayerTimerBoardLine_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoard.get_IsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::PlayerTimerBoard::*)()>(&::GorillaTagScripts::PlayerTimerBoard::get_IsDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcfa64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"get_IsDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoard.set_IsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoard::*)(bool)>(&::GorillaTagScripts::PlayerTimerBoard::set_IsDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcfa6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"set_IsDirty", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoard.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoard::*)()>(&::GorillaTagScripts::PlayerTimerBoard::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bcfa74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoard.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoard::*)()>(&::GorillaTagScripts::PlayerTimerBoard::OnEnable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5bcfb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoard.TryInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoard::*)()>(&::GorillaTagScripts::PlayerTimerBoard::TryInit)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5bcfa78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"TryInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoard.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoard::*)()>(&::GorillaTagScripts::PlayerTimerBoard::OnDisable)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5bcfd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoard.SetSleepState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoard::*)(bool)>(&::GorillaTagScripts::PlayerTimerBoard::SetSleepState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5bcfeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"SetSleepState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoard.SortLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoard::*)()>(&::GorillaTagScripts::PlayerTimerBoard::SortLines)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5bcffa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"SortLines", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoard.RedrawPlayerLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoard::*)()>(&::GorillaTagScripts::PlayerTimerBoard::RedrawPlayerLines)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x5bd0044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"RedrawPlayerLines", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::PlayerTimerBoard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::PlayerTimerBoard::*)()>(&::GorillaTagScripts::PlayerTimerBoard::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5bd070c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_linesParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linesParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_linesParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linesParent;
}
constexpr void GorillaTagScripts::PlayerTimerBoard::__cordl_internal_set_linesParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linesParent = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoardLine>>*& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_lines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lines;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoardLine>>* const& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_lines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lines;
}
constexpr void GorillaTagScripts::PlayerTimerBoard::__cordl_internal_set_lines(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoardLine>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lines = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_notInRoomText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notInRoomText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_notInRoomText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notInRoomText;
}
constexpr void GorillaTagScripts::PlayerTimerBoard::__cordl_internal_set_notInRoomText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notInRoomText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_playerColumn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerColumn;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_playerColumn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerColumn;
}
constexpr void GorillaTagScripts::PlayerTimerBoard::__cordl_internal_set_playerColumn(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerColumn = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_timeColumn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeColumn;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_timeColumn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeColumn;
}
constexpr void GorillaTagScripts::PlayerTimerBoard::__cordl_internal_set_timeColumn(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeColumn = value;
}
constexpr int32_t& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_startingYValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingYValue;
}
constexpr int32_t const& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_startingYValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingYValue;
}
constexpr void GorillaTagScripts::PlayerTimerBoard::__cordl_internal_set_startingYValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingYValue = value;
}
constexpr int32_t& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_lineHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineHeight;
}
constexpr int32_t const& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_lineHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineHeight;
}
constexpr void GorillaTagScripts::PlayerTimerBoard::__cordl_internal_set_lineHeight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineHeight = value;
}
constexpr ::System::Text::StringBuilder*& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_stringBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringBuilder;
}
constexpr ::System::Text::StringBuilder* const& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_stringBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringBuilder;
}
constexpr void GorillaTagScripts::PlayerTimerBoard::__cordl_internal_set_stringBuilder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringBuilder = value;
}
constexpr ::System::Text::StringBuilder*& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_stringBuilderTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringBuilderTime;
}
constexpr ::System::Text::StringBuilder* const& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_stringBuilderTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringBuilderTime;
}
constexpr void GorillaTagScripts::PlayerTimerBoard::__cordl_internal_set_stringBuilderTime(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringBuilderTime = value;
}
constexpr bool& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr bool const& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get_isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr void GorillaTagScripts::PlayerTimerBoard::__cordl_internal_set_isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInitialized = value;
}
constexpr bool& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get__IsDirty_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDirty_k__BackingField;
}
constexpr bool const& GorillaTagScripts::PlayerTimerBoard::__cordl_internal_get__IsDirty_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDirty_k__BackingField;
}
constexpr void GorillaTagScripts::PlayerTimerBoard::__cordl_internal_set__IsDirty_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDirty_k__BackingField = value;
}
inline bool GorillaTagScripts::PlayerTimerBoard::get_IsDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"get_IsDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerBoard::set_IsDirty(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"set_IsDirty", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::PlayerTimerBoard::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerBoard::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerBoard::TryInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"TryInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerBoard::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerBoard::SetSleepState(bool  awake)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"SetSleepState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, awake);
}
inline void GorillaTagScripts::PlayerTimerBoard::SortLines()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"SortLines", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerBoard::RedrawPlayerLines()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {"RedrawPlayerLines", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::PlayerTimerBoard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::PlayerTimerBoard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::PlayerTimerBoard* GorillaTagScripts::PlayerTimerBoard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::PlayerTimerBoard*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::PlayerTimerBoard::PlayerTimerBoard()   {
}

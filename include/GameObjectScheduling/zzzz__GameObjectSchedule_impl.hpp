#pragma once
// IWYU pragma private; include "GameObjectScheduling/GameObjectSchedule.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GameObjectScheduling/zzzz__GameObjectSchedule_def.hpp"
#include "GameObjectScheduling/zzzz__GameObjectSchedule_def.hpp"
#include "GameObjectScheduling/zzzz__SchedulingOptions_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedule.get_Nodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*> (::GameObjectScheduling::GameObjectSchedule::*)()>(&::GameObjectScheduling::GameObjectSchedule::get_Nodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddf670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule*>(),
                        {"get_Nodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedule.get_InitialState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GameObjectScheduling::GameObjectSchedule::*)()>(&::GameObjectScheduling::GameObjectSchedule::get_InitialState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddf678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule*>(),
                        {"get_InitialState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedule.GetCurrentNodeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GameObjectScheduling::GameObjectSchedule::*)(::System::DateTime, ::by_ref<::System::DateTime>)>(&::GameObjectScheduling::GameObjectSchedule::GetCurrentNodeIndex)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ddf680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule*>(),
                        {"GetCurrentNodeIndex", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedule.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::GameObjectSchedule::*)()>(&::GameObjectScheduling::GameObjectSchedule::Validate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ddf77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule*>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedule._validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::GameObjectSchedule::*)()>(&::GameObjectScheduling::GameObjectSchedule::_validate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5ddf7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule*>(),
                        {"_validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedule.GenerateDailyShuffle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime, ::System::DateTime, ::ArrayW<::GameObjectScheduling::GameObjectSchedule*>)>(&::GameObjectScheduling::GameObjectSchedule::GenerateDailyShuffle)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x5ddfaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule*>(),
                        {"GenerateDailyShuffle", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::ArrayW<::GameObjectScheduling::GameObjectSchedule*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::GameObjectSchedule::*)()>(&::GameObjectScheduling::GameObjectSchedule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddfff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GameObjectScheduling::GameObjectSchedule::__cordl_internal_get_initialState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialState;
}
constexpr bool const& GameObjectScheduling::GameObjectSchedule::__cordl_internal_get_initialState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialState;
}
constexpr void GameObjectScheduling::GameObjectSchedule::__cordl_internal_set_initialState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialState = value;
}
constexpr ::ArrayW<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>& GameObjectScheduling::GameObjectSchedule::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::ArrayW<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*> const& GameObjectScheduling::GameObjectSchedule::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void GameObjectScheduling::GameObjectSchedule::__cordl_internal_set_nodes(::ArrayW<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr ::UnityW<::GameObjectScheduling::SchedulingOptions>& GameObjectScheduling::GameObjectSchedule::__cordl_internal_get_options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr ::UnityW<::GameObjectScheduling::SchedulingOptions> const& GameObjectScheduling::GameObjectSchedule::__cordl_internal_get_options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr void GameObjectScheduling::GameObjectSchedule::__cordl_internal_set_options(::UnityW<::GameObjectScheduling::SchedulingOptions>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___options = value;
}
constexpr bool& GameObjectScheduling::GameObjectSchedule::__cordl_internal_get_validated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validated;
}
constexpr bool const& GameObjectScheduling::GameObjectSchedule::__cordl_internal_get_validated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validated;
}
constexpr void GameObjectScheduling::GameObjectSchedule::__cordl_internal_set_validated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validated = value;
}
inline ::ArrayW<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*> GameObjectScheduling::GameObjectSchedule::get_Nodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule*>(),
                        {"get_Nodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>>(this, ___internal_method);
}
inline bool GameObjectScheduling::GameObjectSchedule::get_InitialState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule*>(),
                        {"get_InitialState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GameObjectScheduling::GameObjectSchedule::GetCurrentNodeIndex(::System::DateTime  currentDate, ::by_ref<::System::DateTime>  startDate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule*>(),
                        {"GetCurrentNodeIndex", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, currentDate, startDate);
}
inline void GameObjectScheduling::GameObjectSchedule::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule*>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GameObjectScheduling::GameObjectSchedule::_validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule*>(),
                        {"_validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GameObjectScheduling::GameObjectSchedule::GenerateDailyShuffle(::System::DateTime  startDate, ::System::DateTime  endDate, ::ArrayW<::GameObjectScheduling::GameObjectSchedule*>  schedules)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule*>(),
                        {"GenerateDailyShuffle", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::ArrayW<::GameObjectScheduling::GameObjectSchedule*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startDate, endDate, schedules);
}
inline void GameObjectScheduling::GameObjectSchedule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GameObjectScheduling::GameObjectSchedule* GameObjectScheduling::GameObjectSchedule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GameObjectScheduling::GameObjectSchedule*>());
}
// Ctor Parameters []
constexpr ::GameObjectScheduling::GameObjectSchedule::GameObjectSchedule()   {
}
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedule___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::GameObjectSchedule___c::*)()>(&::GameObjectScheduling::GameObjectSchedule___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5de0070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedule___c.__validate_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GameObjectScheduling::GameObjectSchedule___c::*)(::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*, ::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*)>(&::GameObjectScheduling::GameObjectSchedule___c::__validate_b__11_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5de0078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule___c*>(),
                        {"<_validate>b__11_0", {}, {::i2c::type_of<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>(), ::i2c::type_of<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GameObjectScheduling::GameObjectSchedule___c::setStaticF___9(::GameObjectScheduling::GameObjectSchedule___c*  value)  {
::cordl_internals::setStaticField<::GameObjectScheduling::GameObjectSchedule___c*, "<>9", ::GameObjectScheduling::GameObjectSchedule___c*>(std::forward<::GameObjectScheduling::GameObjectSchedule___c*>(value));
}
inline ::GameObjectScheduling::GameObjectSchedule___c* GameObjectScheduling::GameObjectSchedule___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GameObjectScheduling::GameObjectSchedule___c*, "<>9", ::GameObjectScheduling::GameObjectSchedule___c*>();
}
inline void GameObjectScheduling::GameObjectSchedule___c::setStaticF___9__11_0(::System::Comparison_1<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>*, "<>9__11_0", ::GameObjectScheduling::GameObjectSchedule___c*>(std::forward<::System::Comparison_1<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>*>(value));
}
inline ::System::Comparison_1<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>* GameObjectScheduling::GameObjectSchedule___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>*, "<>9__11_0", ::GameObjectScheduling::GameObjectSchedule___c*>();
}
inline void GameObjectScheduling::GameObjectSchedule___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GameObjectScheduling::GameObjectSchedule___c::__validate_b__11_0(::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*  e1, ::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*  e2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule___c*>(),
                        {"<_validate>b__11_0", {}, {::i2c::type_of<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>(), ::i2c::type_of<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, e1, e2);
}
inline ::GameObjectScheduling::GameObjectSchedule___c* GameObjectScheduling::GameObjectSchedule___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GameObjectScheduling::GameObjectSchedule___c*>());
}
// Ctor Parameters []
constexpr ::GameObjectScheduling::GameObjectSchedule___c::GameObjectSchedule___c()   {
}
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode.get_ActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::*)()>(&::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::get_ActiveState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddfff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>(),
                        {"get_ActiveState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode.get_DateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::*)()>(&::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::get_DateTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5de0000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>(),
                        {"get_DateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::*)()>(&::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::Validate)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5ddf964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::*)()>(&::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ddff90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::__cordl_internal_get_activeDateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeDateTime;
}
constexpr ::StringW const& GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::__cordl_internal_get_activeDateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeDateTime;
}
constexpr void GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::__cordl_internal_set_activeDateTime(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeDateTime = value;
}
constexpr bool& GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::__cordl_internal_get_activeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeState;
}
constexpr bool const& GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::__cordl_internal_get_activeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeState;
}
constexpr void GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::__cordl_internal_set_activeState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeState = value;
}
constexpr ::System::DateTime& GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::__cordl_internal_get_dateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateTime;
}
constexpr ::System::DateTime const& GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::__cordl_internal_get_dateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateTime;
}
constexpr void GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::__cordl_internal_set_dateTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dateTime = value;
}
inline bool GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::get_ActiveState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>(),
                        {"get_ActiveState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTime GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::get_DateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>(),
                        {"get_DateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode* GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode*>());
}
// Ctor Parameters []
constexpr ::GameObjectScheduling::GameObjectSchedule_GameObjectScheduleNode::GameObjectSchedule_GameObjectScheduleNode()   {
}

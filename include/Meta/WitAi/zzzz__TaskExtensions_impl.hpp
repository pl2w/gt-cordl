#pragma once
// IWYU pragma private; include "Meta/WitAi/TaskExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__TaskExtensions_def.hpp"
#include "Meta/WitAi/zzzz__TaskExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TaskExtensions.WrapErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::Task*)>(&::Meta::WitAi::TaskExtensions::WrapErrors)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9e38934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions*>(),
                        {"WrapErrors", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TaskExtensions.WhenLessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Collections::Generic::ICollection_1<::System::Threading::Tasks::Task*>*, int32_t)>(&::Meta::WitAi::TaskExtensions::WhenLessThan)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e3d090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions*>(),
                        {"WhenLessThan", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TaskExtensions.WhenLessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Collections::Generic::ICollection_1<::System::Threading::Tasks::Task*>*, int32_t, ::System::Threading::CancellationToken)>(&::Meta::WitAi::TaskExtensions::WhenLessThan)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x9e3d100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions*>(),
                        {"WhenLessThan", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::TaskExtensions::WrapErrors(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions*>(),
                        {"WrapErrors", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, task);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TaskExtensions::WhenLessThan(::System::Collections::Generic::ICollection_1<::System::Threading::Tasks::Task*>*  tasks, int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions*>(),
                        {"WhenLessThan", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, tasks, max);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TaskExtensions::WhenLessThan(::System::Collections::Generic::ICollection_1<::System::Threading::Tasks::Task*>*  tasks, int32_t  max, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions*>(),
                        {"WhenLessThan", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::System::Threading::Tasks::Task*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, tasks, max, cancellationToken);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TaskExtensions::TaskExtensions()   {
}
//  Writing Method size for method: ::Meta::WitAi::TaskExtensions___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TaskExtensions___c__DisplayClass3_0::*)()>(&::Meta::WitAi::TaskExtensions___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3d708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TaskExtensions___c__DisplayClass3_0._WhenLessThan_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TaskExtensions___c__DisplayClass3_0::*)()>(&::Meta::WitAi::TaskExtensions___c__DisplayClass3_0::_WhenLessThan_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9e3d810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions___c__DisplayClass3_0*>(),
                        {"<WhenLessThan>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TaskExtensions___c__DisplayClass3_0._WhenLessThan_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TaskExtensions___c__DisplayClass3_0::*)(::System::Threading::Tasks::Task*)>(&::Meta::WitAi::TaskExtensions___c__DisplayClass3_0::_WhenLessThan_b__1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9e3d860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions___c__DisplayClass3_0*>(),
                        {"<WhenLessThan>b__1", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::WitAi::TaskExtensions___c__DisplayClass3_0::__cordl_internal_get_completion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completion;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::WitAi::TaskExtensions___c__DisplayClass3_0::__cordl_internal_get_completion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completion;
}
constexpr void Meta::WitAi::TaskExtensions___c__DisplayClass3_0::__cordl_internal_set_completion(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completion = value;
}
constexpr int32_t& Meta::WitAi::TaskExtensions___c__DisplayClass3_0::__cordl_internal_get_running()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___running;
}
constexpr int32_t const& Meta::WitAi::TaskExtensions___c__DisplayClass3_0::__cordl_internal_get_running() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___running;
}
constexpr void Meta::WitAi::TaskExtensions___c__DisplayClass3_0::__cordl_internal_set_running(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___running = value;
}
constexpr int32_t& Meta::WitAi::TaskExtensions___c__DisplayClass3_0::__cordl_internal_get_max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr int32_t const& Meta::WitAi::TaskExtensions___c__DisplayClass3_0::__cordl_internal_get_max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr void Meta::WitAi::TaskExtensions___c__DisplayClass3_0::__cordl_internal_set_max(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max = value;
}
constexpr ::System::Action_1<::System::Threading::Tasks::Task*>*& Meta::WitAi::TaskExtensions___c__DisplayClass3_0::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::System::Action_1<::System::Threading::Tasks::Task*>* const& Meta::WitAi::TaskExtensions___c__DisplayClass3_0::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void Meta::WitAi::TaskExtensions___c__DisplayClass3_0::__cordl_internal_set___9__1(::System::Action_1<::System::Threading::Tasks::Task*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__1 = value;
}
inline void Meta::WitAi::TaskExtensions___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TaskExtensions___c__DisplayClass3_0::_WhenLessThan_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions___c__DisplayClass3_0*>(),
                        {"<WhenLessThan>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TaskExtensions___c__DisplayClass3_0::_WhenLessThan_b__1(::System::Threading::Tasks::Task*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions___c__DisplayClass3_0*>(),
                        {"<WhenLessThan>b__1", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::Meta::WitAi::TaskExtensions___c__DisplayClass3_0* Meta::WitAi::TaskExtensions___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TaskExtensions___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TaskExtensions___c__DisplayClass3_0::TaskExtensions___c__DisplayClass3_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TaskExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TaskExtensions___c::*)()>(&::Meta::WitAi::TaskExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3d778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TaskExtensions___c._WrapErrors_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TaskExtensions___c::*)(::System::Threading::Tasks::Task*, ::System::Object*)>(&::Meta::WitAi::TaskExtensions___c::_WrapErrors_b__0_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e3d780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions___c*>(),
                        {"<WrapErrors>b__0_0", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::TaskExtensions___c::setStaticF___9(::Meta::WitAi::TaskExtensions___c*  value)  {
::cordl_internals::setStaticField<::Meta::WitAi::TaskExtensions___c*, "<>9", ::Meta::WitAi::TaskExtensions___c*>(std::forward<::Meta::WitAi::TaskExtensions___c*>(value));
}
inline ::Meta::WitAi::TaskExtensions___c* Meta::WitAi::TaskExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::WitAi::TaskExtensions___c*, "<>9", ::Meta::WitAi::TaskExtensions___c*>();
}
inline void Meta::WitAi::TaskExtensions___c::setStaticF___9__0_0(::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>*, "<>9__0_0", ::Meta::WitAi::TaskExtensions___c*>(std::forward<::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>*>(value));
}
inline ::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>* Meta::WitAi::TaskExtensions___c::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>*, "<>9__0_0", ::Meta::WitAi::TaskExtensions___c*>();
}
inline void Meta::WitAi::TaskExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TaskExtensions___c::_WrapErrors_b__0_0(::System::Threading::Tasks::Task*  t, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskExtensions___c*>(),
                        {"<WrapErrors>b__0_0", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, state);
}
inline ::Meta::WitAi::TaskExtensions___c* Meta::WitAi::TaskExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TaskExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TaskExtensions___c::TaskExtensions___c()   {
}

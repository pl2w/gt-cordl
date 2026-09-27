#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioWaitingPanelBase.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioWaitingPanelBase_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioWaitingPanelBase__OpenAndWaitForAsync_d__1_1_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioWaitingPanelBase__OpenAndWaitFor_d__0_1_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioWaitingPanelBase__OpenAndWaitFor_d__2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioWaitingPanelBase.OpenAndWaitFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::Unity::UI::Panels::ModioWaitingPanelBase::*)(::System::Threading::Tasks::Task*, ::System::Action*)>(&::Modio::Unity::UI::Panels::ModioWaitingPanelBase::OpenAndWaitFor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9fabedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioWaitingPanelBase*>(),
                        {"OpenAndWaitFor", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioWaitingPanelBase.DoDefaultSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioWaitingPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioWaitingPanelBase::DoDefaultSelection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fabfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioWaitingPanelBase*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModioWaitingPanelBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioWaitingPanelBase.CancelPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioWaitingPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioWaitingPanelBase::CancelPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fabff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioWaitingPanelBase*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModioWaitingPanelBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioWaitingPanelBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioWaitingPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioWaitingPanelBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fabff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioWaitingPanelBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline void Modio::Unity::UI::Panels::ModioWaitingPanelBase::OpenAndWaitFor(::System::Threading::Tasks::Task_1<T>*  task, ::System::Action_1<T>*  action)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioWaitingPanelBase*>(),
                    {"OpenAndWaitFor", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Threading::Tasks::Task_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task, action);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Modio::Unity::UI::Panels::ModioWaitingPanelBase::OpenAndWaitForAsync(::System::Threading::Tasks::Task_1<T>*  task)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioWaitingPanelBase*>(),
                    {"OpenAndWaitForAsync", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Threading::Tasks::Task_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method, task);
}
inline ::System::Threading::Tasks::Task* Modio::Unity::UI::Panels::ModioWaitingPanelBase::OpenAndWaitFor(::System::Threading::Tasks::Task*  task, ::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioWaitingPanelBase*>(),
                        {"OpenAndWaitFor", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task, action);
}
inline void Modio::Unity::UI::Panels::ModioWaitingPanelBase::DoDefaultSelection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModioWaitingPanelBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioWaitingPanelBase::CancelPressed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModioWaitingPanelBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioWaitingPanelBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioWaitingPanelBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::ModioWaitingPanelBase* Modio::Unity::UI::Panels::ModioWaitingPanelBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioWaitingPanelBase*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioWaitingPanelBase::ModioWaitingPanelBase()   {
}

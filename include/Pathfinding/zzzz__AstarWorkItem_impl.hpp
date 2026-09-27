#pragma once
// IWYU pragma private; include "Pathfinding/AstarWorkItem.hpp"
#include "Pathfinding/zzzz__AstarWorkItem_def.hpp"
#include "Pathfinding/zzzz__IWorkItemContext_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
//  Writing Method size for method: ::Pathfinding::AstarWorkItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarWorkItem::*)(::System::Func_2<bool,bool>*)>(&::Pathfinding::AstarWorkItem::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e5dfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarWorkItem>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_2<bool,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarWorkItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarWorkItem::*)(::System::Func_3<::Pathfinding::IWorkItemContext*,bool,bool>*)>(&::Pathfinding::AstarWorkItem::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e67078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarWorkItem>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_3<::Pathfinding::IWorkItemContext*,bool,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarWorkItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarWorkItem::*)(::System::Action*, ::System::Func_2<bool,bool>*)>(&::Pathfinding::AstarWorkItem::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e58310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarWorkItem>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Func_2<bool,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarWorkItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarWorkItem::*)(::System::Action_1<::Pathfinding::IWorkItemContext*>*, ::System::Func_3<::Pathfinding::IWorkItemContext*,bool,bool>*)>(&::Pathfinding::AstarWorkItem::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e670cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarWorkItem>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::IWorkItemContext*>*>(), ::i2c::type_of<::System::Func_3<::Pathfinding::IWorkItemContext*,bool,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::AstarWorkItem::_ctor(::System::Func_2<bool,bool>*  update)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarWorkItem>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_2<bool,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, update);
}
inline void Pathfinding::AstarWorkItem::_ctor(::System::Func_3<::Pathfinding::IWorkItemContext*,bool,bool>*  update)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarWorkItem>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_3<::Pathfinding::IWorkItemContext*,bool,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, update);
}
inline void Pathfinding::AstarWorkItem::_ctor(::System::Action*  init, ::System::Func_2<bool,bool>*  update)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarWorkItem>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Func_2<bool,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, init, update);
}
inline void Pathfinding::AstarWorkItem::_ctor(::System::Action_1<::Pathfinding::IWorkItemContext*>*  init, ::System::Func_3<::Pathfinding::IWorkItemContext*,bool,bool>*  update)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarWorkItem>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::IWorkItemContext*>*>(), ::i2c::type_of<::System::Func_3<::Pathfinding::IWorkItemContext*,bool,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, init, update);
}
// Ctor Parameters [CppParam { name: "init", ty: "::System::Action*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "initWithContext", ty: "::System::Action_1<::Pathfinding::IWorkItemContext*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "update", ty: "::System::Func_2<bool,bool>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "updateWithContext", ty: "::System::Func_3<::Pathfinding::IWorkItemContext*,bool,bool>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::AstarWorkItem::AstarWorkItem(::System::Action*  init, ::System::Action_1<::Pathfinding::IWorkItemContext*>*  initWithContext, ::System::Func_2<bool,bool>*  update, ::System::Func_3<::Pathfinding::IWorkItemContext*,bool,bool>*  updateWithContext) noexcept  {
this->init = init;
this->initWithContext = initWithContext;
this->update = update;
this->updateWithContext = updateWithContext;
}
// Ctor Parameters []
constexpr ::Pathfinding::AstarWorkItem::AstarWorkItem()   {
}

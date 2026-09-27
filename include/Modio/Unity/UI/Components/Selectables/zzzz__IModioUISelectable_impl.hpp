#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/IModioUISelectable.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_SelectionState_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::IModioUISelectable.add_StateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::IModioUISelectable::*)(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*)>(&::Modio::Unity::UI::Components::Selectables::IModioUISelectable::add_StateChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::IModioUISelectable.remove_StateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::IModioUISelectable::*)(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*)>(&::Modio::Unity::UI::Components::Selectables::IModioUISelectable::remove_StateChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::IModioUISelectable.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IModioUISelectable_SelectionState (::Modio::Unity::UI::Components::Selectables::IModioUISelectable::*)()>(&::Modio::Unity::UI::Components::Selectables::IModioUISelectable::get_State)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Components::Selectables::IModioUISelectable::add_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Components::Selectables::IModioUISelectable::remove_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IModioUISelectable_SelectionState Modio::Unity::UI::Components::Selectables::IModioUISelectable::get_State()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IModioUISelectable_SelectionState>(this, ___internal_method);
}
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9fc0fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate::*)(::GlobalNamespace::IModioUISelectable_SelectionState, bool)>(&::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fc1078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate::*)(::GlobalNamespace::IModioUISelectable_SelectionState, bool, ::System::AsyncCallback*, ::System::Object*)>(&::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9fc108c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate::*)(::System::IAsyncResult*)>(&::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9fc1134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate::Invoke(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline ::System::IAsyncResult* Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate::BeginInvoke(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, state, instant, callback, object);
}
inline void Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate* Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate::IModioUISelectable_SelectableStateChangeDelegate()   {
}

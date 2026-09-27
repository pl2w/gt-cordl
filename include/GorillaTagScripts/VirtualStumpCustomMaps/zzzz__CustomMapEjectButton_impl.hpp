#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CustomMapEjectButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapEjectButton_EjectType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapEjectButton_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CustomMapEjectButtonSettings_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapEjectButton_EjectType_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapEjectButton_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5bdf7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton*>(),
                    {::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton.ButtonPressed_Local
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::ButtonPressed_Local)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bdf810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton*>(),
                        {"ButtonPressed_Local", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton.HandleTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::HandleTeleport)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bdf87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton*>(),
                        {"HandleTeleport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton.CopySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::*)(::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::CopySettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bdfba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton*>(),
                        {"CopySettings", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bdfbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CustomMapEjectButton_EjectType& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::__cordl_internal_get_ejectType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejectType;
}
constexpr ::GlobalNamespace::CustomMapEjectButton_EjectType const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::__cordl_internal_get_ejectType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejectType;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::__cordl_internal_set_ejectType(::GlobalNamespace::CustomMapEjectButton_EjectType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ejectType = value;
}
constexpr bool& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::__cordl_internal_get_processing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processing;
}
constexpr bool const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::__cordl_internal_get_processing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processing;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::__cordl_internal_set_processing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processing = value;
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::ButtonPressed_Local()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton*>(),
                        {"ButtonPressed_Local", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::HandleTeleport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton*>(),
                        {"HandleTeleport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::CopySettings(::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings*  customMapEjectButtonSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton*>(),
                        {"CopySettings", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customMapEjectButtonSettings);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton::CustomMapEjectButton()   {
}
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::*)(int32_t)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bdf8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bdfbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::MoveNext)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5bdfbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bdfcac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bdfcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bdfcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton>& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton> const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4::CustomMapEjectButton__ButtonPressed_Local_d__4()   {
}

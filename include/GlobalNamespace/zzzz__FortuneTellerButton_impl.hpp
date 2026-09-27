#pragma once
// IWYU pragma private; include "GlobalNamespace/FortuneTellerButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FortuneTellerButton_def.hpp"
#include "GlobalNamespace/zzzz__FortuneTellerButton_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FortuneTellerButton.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTellerButton::*)()>(&::GlobalNamespace::FortuneTellerButton::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x580c038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTellerButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTellerButton::*)()>(&::GlobalNamespace::FortuneTellerButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x580c068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FortuneTellerButton*>(),
                    {::i2c::class_of<::GlobalNamespace::FortuneTellerButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTellerButton.PressButtonUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTellerButton::*)()>(&::GlobalNamespace::FortuneTellerButton::PressButtonUpdate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x580c06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton*>(),
                        {"PressButtonUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTellerButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTellerButton::*)()>(&::GlobalNamespace::FortuneTellerButton::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x580c164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTellerButton._PressButtonUpdate_g__ButtonColorUpdate_Local_6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::FortuneTellerButton::*)()>(&::GlobalNamespace::FortuneTellerButton::_PressButtonUpdate_g__ButtonColorUpdate_Local_6_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x580c0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton*>(),
                        {"<PressButtonUpdate>g__ButtonColorUpdate_Local|6_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::FortuneTellerButton::__cordl_internal_get_durationPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___durationPressed;
}
constexpr float_t const& GlobalNamespace::FortuneTellerButton::__cordl_internal_get_durationPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___durationPressed;
}
constexpr void GlobalNamespace::FortuneTellerButton::__cordl_internal_set_durationPressed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___durationPressed = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FortuneTellerButton::__cordl_internal_get_pressedOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressedOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FortuneTellerButton::__cordl_internal_get_pressedOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressedOffset;
}
constexpr void GlobalNamespace::FortuneTellerButton::__cordl_internal_set_pressedOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressedOffset = value;
}
constexpr float_t& GlobalNamespace::FortuneTellerButton::__cordl_internal_get_pressTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressTime;
}
constexpr float_t const& GlobalNamespace::FortuneTellerButton::__cordl_internal_get_pressTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressTime;
}
constexpr void GlobalNamespace::FortuneTellerButton::__cordl_internal_set_pressTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FortuneTellerButton::__cordl_internal_get_startingPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FortuneTellerButton::__cordl_internal_get_startingPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingPos;
}
constexpr void GlobalNamespace::FortuneTellerButton::__cordl_internal_set_startingPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingPos = value;
}
inline void GlobalNamespace::FortuneTellerButton::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FortuneTellerButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FortuneTellerButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FortuneTellerButton::PressButtonUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton*>(),
                        {"PressButtonUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FortuneTellerButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::FortuneTellerButton::_PressButtonUpdate_g__ButtonColorUpdate_Local_6_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton*>(),
                        {"<PressButtonUpdate>g__ButtonColorUpdate_Local|6_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::FortuneTellerButton* GlobalNamespace::FortuneTellerButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FortuneTellerButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FortuneTellerButton::FortuneTellerButton()   {
}
//  Writing Method size for method: ::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::*)(int32_t)>(&::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x580c178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::*)()>(&::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x580c1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::*)()>(&::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x580c1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::*)()>(&::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580c2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::*)()>(&::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x580c2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::*)()>(&::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580c2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::FortuneTellerButton>& GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::FortuneTellerButton> const& GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FortuneTellerButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d* GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d()   {
}

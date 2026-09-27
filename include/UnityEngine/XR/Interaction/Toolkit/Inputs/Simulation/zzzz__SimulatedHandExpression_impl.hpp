#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/SimulatedHandExpression.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/zzzz__HandExpressionName_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__SimulatedHandExpression_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputButtonReader_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/zzzz__HandExpressionCapture_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/zzzz__HandExpressionName_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::get_name)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4b8ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression.get_toggleInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::get_toggleInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b8f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"get_toggleInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression.set_toggleInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::set_toggleInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b8f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"set_toggleInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression.get_capture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::get_capture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b8f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"get_capture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression.set_capture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::set_capture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b8f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"set_capture", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression.get_isQuickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::get_isQuickAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b8f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"get_isQuickAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression.set_isQuickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::set_isQuickAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b8f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"set_isQuickAction", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression.get_expressionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::get_expressionName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4b8f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"get_expressionName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression.set_expressionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::set_expressionName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4b8f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"set_expressionName", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression.get_icon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::get_icon)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4b8f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"get_icon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb4b8f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb4b8ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b9030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::__cordl_internal_get_m_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::__cordl_internal_get_m_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::__cordl_internal_set_m_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Name = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::__cordl_internal_get_m_ToggleInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::__cordl_internal_get_m_ToggleInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::__cordl_internal_set_m_ToggleInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleInput = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::__cordl_internal_get_m_Capture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Capture;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::__cordl_internal_get_m_Capture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Capture;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::__cordl_internal_set_m_Capture(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Capture = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::__cordl_internal_get_m_IsQuickAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsQuickAction;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::__cordl_internal_get_m_IsQuickAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsQuickAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::__cordl_internal_set_m_IsQuickAction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsQuickAction = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::__cordl_internal_get_m_ExpressionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExpressionName;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::__cordl_internal_get_m_ExpressionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExpressionName;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::__cordl_internal_set_m_ExpressionName(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExpressionName = value;
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::get_toggleInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"get_toggleInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::set_toggleInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"set_toggleInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::get_capture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"get_capture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::set_capture(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"set_capture", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::get_isQuickAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"get_isQuickAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::set_isQuickAction(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"set_isQuickAction", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::get_expressionName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"get_expressionName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::set_expressionName(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"set_expressionName", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::get_icon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"get_icon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression::SimulatedHandExpression()   {
}

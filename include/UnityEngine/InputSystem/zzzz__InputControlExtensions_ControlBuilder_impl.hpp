#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlExtensions_ControlBuilder.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_ControlBuilder_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBlock_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.get_control
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)()>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::get_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf56550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"get_control", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.set_control
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(::UnityEngine::InputSystem::InputControl*)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::set_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf56558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"set_control", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.At
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(::UnityEngine::InputSystem::InputDevice*, int32_t)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::At)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaf56560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"At", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.WithParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(::UnityEngine::InputSystem::InputControl*)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::WithParent)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaf565f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithParent", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.WithName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(::StringW)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::WithName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaf56620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.WithDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(::StringW)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::WithDisplayName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaf56674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.WithShortDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(::StringW)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::WithShortDisplayName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaf566d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithShortDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.WithLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::WithLayout)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaf5672c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.WithUsages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(int32_t, int32_t)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::WithUsages)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaf56758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithUsages", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.WithAliases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(int32_t, int32_t)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::WithAliases)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaf56774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithAliases", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.WithChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(int32_t, int32_t)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::WithChildren)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaf56790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithChildren", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.WithStateBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(::UnityEngine::InputSystem::LowLevel::InputStateBlock)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::WithStateBlock)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaf567ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithStateBlock", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.WithDefaultState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::WithDefaultState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaf567c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithDefaultState", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.WithMinAndMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue, ::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::WithMinAndMax)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaf56824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithMinAndMax", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.IsNoisy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(bool)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::IsNoisy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaf56850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"IsNoisy", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.IsSynthetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(bool)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::IsSynthetic)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaf56878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"IsSynthetic", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.DontReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(bool)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::DontReset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaf568ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"DontReset", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.IsButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)(bool)>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::IsButton)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaf5691c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"IsButton", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_ControlBuilder.Finish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlExtensions_ControlBuilder::*)()>(&::GlobalNamespace::InputControlExtensions_ControlBuilder::Finish)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaf56950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"Finish", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputControl* GlobalNamespace::InputControlExtensions_ControlBuilder::get_control()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"get_control", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlExtensions_ControlBuilder::set_control(::UnityEngine::InputSystem::InputControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"set_control", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::At(::UnityEngine::InputSystem::InputDevice*  device, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"At", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, device, index);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::WithParent(::UnityEngine::InputSystem::InputControl*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithParent", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, parent);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::WithName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, name);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::WithDisplayName(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, displayName);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::WithShortDisplayName(::StringW  shortDisplayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithShortDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, shortDisplayName);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::WithLayout(::UnityEngine::InputSystem::Utilities::InternedString  layout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, layout);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::WithUsages(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithUsages", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, startIndex, count);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::WithAliases(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithAliases", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, startIndex, count);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::WithChildren(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithChildren", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, startIndex, count);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::WithStateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock  stateBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithStateBlock", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, stateBlock);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::WithDefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithDefaultState", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::WithMinAndMax(::UnityEngine::InputSystem::Utilities::PrimitiveValue  min, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"WithMinAndMax", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, min, max);
}
template<typename TProcessor,typename TValue>
requires(::cordl_internals::type_constraint<TProcessor, ::UnityEngine::InputSystem::InputProcessor_1<TValue>*> && ::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::WithProcessor(TProcessor  processor)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                    {"WithProcessor", {::i2c::class_of<TProcessor>(), ::i2c::class_of<TValue>()}, {::i2c::type_of<TProcessor>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TProcessor>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, processor);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::IsNoisy(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"IsNoisy", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::IsSynthetic(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"IsSynthetic", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::DontReset(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"DontReset", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder GlobalNamespace::InputControlExtensions_ControlBuilder::IsButton(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"IsButton", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(*this, ___internal_method, value);
}
inline void GlobalNamespace::InputControlExtensions_ControlBuilder::Finish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_ControlBuilder>(),
                        {"Finish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_control_k__BackingField", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputControlExtensions_ControlBuilder::InputControlExtensions_ControlBuilder(::UnityEngine::InputSystem::InputControl*  _control_k__BackingField) noexcept  {
this->_control_k__BackingField = _control_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputControlExtensions_ControlBuilder::InputControlExtensions_ControlBuilder()   {
}

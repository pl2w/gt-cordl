#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlExtensions_DeviceBuilder.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_DeviceBuilder_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBlock_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_DeviceBuilder.get_device
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::GlobalNamespace::InputControlExtensions_DeviceBuilder::*)()>(&::GlobalNamespace::InputControlExtensions_DeviceBuilder::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf56970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"get_device", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_DeviceBuilder.set_device
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlExtensions_DeviceBuilder::*)(::UnityEngine::InputSystem::InputDevice*)>(&::GlobalNamespace::InputControlExtensions_DeviceBuilder::set_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf56978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"set_device", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_DeviceBuilder.WithName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_DeviceBuilder (::GlobalNamespace::InputControlExtensions_DeviceBuilder::*)(::StringW)>(&::GlobalNamespace::InputControlExtensions_DeviceBuilder::WithName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaf56980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_DeviceBuilder.WithDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_DeviceBuilder (::GlobalNamespace::InputControlExtensions_DeviceBuilder::*)(::StringW)>(&::GlobalNamespace::InputControlExtensions_DeviceBuilder::WithDisplayName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaf569d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_DeviceBuilder.WithShortDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_DeviceBuilder (::GlobalNamespace::InputControlExtensions_DeviceBuilder::*)(::StringW)>(&::GlobalNamespace::InputControlExtensions_DeviceBuilder::WithShortDisplayName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaf56a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithShortDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_DeviceBuilder.WithLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_DeviceBuilder (::GlobalNamespace::InputControlExtensions_DeviceBuilder::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::InputControlExtensions_DeviceBuilder::WithLayout)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaf56a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_DeviceBuilder.WithChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_DeviceBuilder (::GlobalNamespace::InputControlExtensions_DeviceBuilder::*)(int32_t, int32_t)>(&::GlobalNamespace::InputControlExtensions_DeviceBuilder::WithChildren)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaf56ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithChildren", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_DeviceBuilder.WithStateBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_DeviceBuilder (::GlobalNamespace::InputControlExtensions_DeviceBuilder::*)(::UnityEngine::InputSystem::LowLevel::InputStateBlock)>(&::GlobalNamespace::InputControlExtensions_DeviceBuilder::WithStateBlock)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaf56ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithStateBlock", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_DeviceBuilder.IsNoisy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_DeviceBuilder (::GlobalNamespace::InputControlExtensions_DeviceBuilder::*)(bool)>(&::GlobalNamespace::InputControlExtensions_DeviceBuilder::IsNoisy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaf56af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"IsNoisy", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_DeviceBuilder.WithControlUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_DeviceBuilder (::GlobalNamespace::InputControlExtensions_DeviceBuilder::*)(int32_t, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(&::GlobalNamespace::InputControlExtensions_DeviceBuilder::WithControlUsage)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaf56b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithControlUsage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_DeviceBuilder.WithControlAlias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_DeviceBuilder (::GlobalNamespace::InputControlExtensions_DeviceBuilder::*)(int32_t, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::InputControlExtensions_DeviceBuilder::WithControlAlias)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaf56bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithControlAlias", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_DeviceBuilder.WithStateOffsetToControlIndexMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_DeviceBuilder (::GlobalNamespace::InputControlExtensions_DeviceBuilder::*)(::ArrayW<uint32_t>)>(&::GlobalNamespace::InputControlExtensions_DeviceBuilder::WithStateOffsetToControlIndexMap)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaf56c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithStateOffsetToControlIndexMap", {}, {::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_DeviceBuilder.WithControlTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_DeviceBuilder (::GlobalNamespace::InputControlExtensions_DeviceBuilder::*)(::ArrayW<uint8_t>, ::ArrayW<uint16_t>)>(&::GlobalNamespace::InputControlExtensions_DeviceBuilder::WithControlTree)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xaf56c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithControlTree", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_DeviceBuilder.Finish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlExtensions_DeviceBuilder::*)()>(&::GlobalNamespace::InputControlExtensions_DeviceBuilder::Finish)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xaf56d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"Finish", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputDevice* GlobalNamespace::InputControlExtensions_DeviceBuilder::get_device()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"get_device", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlExtensions_DeviceBuilder::set_device(::UnityEngine::InputSystem::InputDevice*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"set_device", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder GlobalNamespace::InputControlExtensions_DeviceBuilder::WithName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, name);
}
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder GlobalNamespace::InputControlExtensions_DeviceBuilder::WithDisplayName(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, displayName);
}
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder GlobalNamespace::InputControlExtensions_DeviceBuilder::WithShortDisplayName(::StringW  shortDisplayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithShortDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, shortDisplayName);
}
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder GlobalNamespace::InputControlExtensions_DeviceBuilder::WithLayout(::UnityEngine::InputSystem::Utilities::InternedString  layout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, layout);
}
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder GlobalNamespace::InputControlExtensions_DeviceBuilder::WithChildren(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithChildren", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, startIndex, count);
}
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder GlobalNamespace::InputControlExtensions_DeviceBuilder::WithStateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock  stateBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithStateBlock", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, stateBlock);
}
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder GlobalNamespace::InputControlExtensions_DeviceBuilder::IsNoisy(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"IsNoisy", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder GlobalNamespace::InputControlExtensions_DeviceBuilder::WithControlUsage(int32_t  controlIndex, ::UnityEngine::InputSystem::Utilities::InternedString  usage, ::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithControlUsage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, controlIndex, usage, control);
}
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder GlobalNamespace::InputControlExtensions_DeviceBuilder::WithControlAlias(int32_t  controlIndex, ::UnityEngine::InputSystem::Utilities::InternedString  alias)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithControlAlias", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, controlIndex, alias);
}
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder GlobalNamespace::InputControlExtensions_DeviceBuilder::WithStateOffsetToControlIndexMap(::ArrayW<uint32_t>  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithStateOffsetToControlIndexMap", {}, {::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, map);
}
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder GlobalNamespace::InputControlExtensions_DeviceBuilder::WithControlTree(::ArrayW<uint8_t>  controlTreeNodes, ::ArrayW<uint16_t>  controlTreeIndicies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"WithControlTree", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, controlTreeNodes, controlTreeIndicies);
}
inline void GlobalNamespace::InputControlExtensions_DeviceBuilder::Finish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(),
                        {"Finish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_device_k__BackingField", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputControlExtensions_DeviceBuilder::InputControlExtensions_DeviceBuilder(::UnityEngine::InputSystem::InputDevice*  _device_k__BackingField) noexcept  {
this->_device_k__BackingField = _device_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputControlExtensions_DeviceBuilder::InputControlExtensions_DeviceBuilder()   {
}

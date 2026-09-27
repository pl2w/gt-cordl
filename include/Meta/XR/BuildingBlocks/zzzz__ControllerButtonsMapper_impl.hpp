#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/ControllerButtonsMapper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__ControllerButtonsMapper_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Button_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__ControllerButtonsMapper_ButtonClickAction_ButtonClickMode_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__ControllerButtonsMapper_ButtonClickAction_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.get_ButtonClickActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>* (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)()>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::get_ButtonClickActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec20b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"get_ButtonClickActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.set_ButtonClickActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>*)>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::set_ButtonClickActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec20c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"set_ButtonClickActions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)()>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::OnEnable)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x9ec20c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)()>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::OnDisable)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x9ec2350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)()>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::Update)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9ec25d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.IsActionTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction)>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsActionTriggered)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9ec2738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"IsActionTriggered", {}, {::i2c::type_of<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.IsLegacyInputActionTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode, ::GlobalNamespace::OVRInput_Button)>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsLegacyInputActionTriggered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec2768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"IsLegacyInputActionTriggered", {}, {::i2c::type_of<::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Button>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.IsNewInputSystemActionTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction)>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsNewInputSystemActionTriggered)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9ec2770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"IsNewInputSystemActionTriggered", {}, {::i2c::type_of<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)()>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec2804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>*& Meta::XR::BuildingBlocks::ControllerButtonsMapper::__cordl_internal_get__buttonClickActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonClickActions;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>* const& Meta::XR::BuildingBlocks::ControllerButtonsMapper::__cordl_internal_get__buttonClickActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonClickActions;
}
constexpr void Meta::XR::BuildingBlocks::ControllerButtonsMapper::__cordl_internal_set__buttonClickActions(::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonClickActions = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>* Meta::XR::BuildingBlocks::ControllerButtonsMapper::get_ButtonClickActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"get_ButtonClickActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>*>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::ControllerButtonsMapper::set_ButtonClickActions(::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"set_ButtonClickActions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::BuildingBlocks::ControllerButtonsMapper::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::ControllerButtonsMapper::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::ControllerButtonsMapper::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsActionTriggered(::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction  buttonClickAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"IsActionTriggered", {}, {::i2c::type_of<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonClickAction);
}
inline bool Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsLegacyInputActionTriggered(::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode  buttonMode, ::GlobalNamespace::OVRInput_Button  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"IsLegacyInputActionTriggered", {}, {::i2c::type_of<::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Button>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonMode, button);
}
inline bool Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsNewInputSystemActionTriggered(::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction  buttonClickAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {"IsNewInputSystemActionTriggered", {}, {::i2c::type_of<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonClickAction);
}
inline void Meta::XR::BuildingBlocks::ControllerButtonsMapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::BuildingBlocks::ControllerButtonsMapper* Meta::XR::BuildingBlocks::ControllerButtonsMapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::ControllerButtonsMapper::ControllerButtonsMapper()   {
}
